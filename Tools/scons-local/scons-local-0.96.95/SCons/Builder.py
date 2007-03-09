"""SCons.Builder

Builder object subsystem.

A Builder object is a callable that encapsulates information about how
to execute actions to create a target Node (file) from source Nodes
(files), and how to create those dependencies for tracking.

The main entry point here is the Builder() factory method.  This provides
a procedural interface that creates the right underlying Builder object
based on the keyword arguments supplied and the types of the arguments.

The goal is for this external interface to be simple enough that the
vast majority of users can create new Builders as necessary to support
building new types of files in their configurations, without having to
dive any deeper into this subsystem.

The base class here is BuilderBase.  This is a concrete base class which
does, in fact, represent the Builder objects that we (or users) create.

There is also a proxy that looks like a Builder:

    CompositeBuilder

        This proxies for a Builder with an action that is actually a
        dictionary that knows how to map file suffixes to a specific
        action.  This is so that we can invoke different actions
        (compilers, compile options) for different flavors of source
        files.

Builders and their proxies have the following public interface methods
used by other modules:

    __call__()
        THE public interface.  Calling a Builder object (with the
        use of internal helper methods) sets up the target and source
        dependencies, appropriate mapping to a specific action, and the
        environment manipulation necessary for overridden construction
        variable.  This also takes care of warning about possible mistakes
        in keyword arguments.

    targets()
        Returns the list of targets for a specific builder instance.

    add_emitter()
        Adds an emitter for a specific file suffix, used by some Tool
        modules to specify that (for example) a yacc invocation on a .y
        can create a .h *and* a .c file.

    add_action()
        Adds an action for a specific file suffix, heavily used by
        Tool modules to add their specific action(s) for turning
        a source file into an object file to the global static
        and shared object file Builders.

There are the following methods for internal use within this module:

    _execute()
        The internal method that handles the heavily lifting when a
        Builder is called.  This is used so that the __call__() methods
        can set up warning about possible mistakes in keyword-argument
        overrides, and *then* execute all of the steps necessary so that
        the warnings only occur once.

    get_name()
        Returns the Builder's name within a specific Environment,
        primarily used to try to return helpful information in error
        messages.

    adjust_suffix()
    get_prefix()
    get_suffix()
    get_src_suffix()
    set_src_suffix()
        Miscellaneous stuff for handling the prefix and suffix
        manipulation we use in turning source file names into target
        file names.

"""

#
# Copyright (c) 2001, 2002, 2003, 2004, 2005, 2006, 2007 The SCons Foundation
#
# Permission is hereby granted, free of charge, to any person obtaining
# a copy of this software and associated documentation files (the
# "Software"), to deal in the Software without restriction, including
# without limitation the rights to use, copy, modify, merge, publish,
# distribute, sublicense, and/or sell copies of the Software, and to
# permit persons to whom the Software is furnished to do so, subject to
# the following conditions:
#
# The above copyright notice and this permission notice shall be included
# in all copies or substantial portions of the Software.
#
# THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY
# KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE
# WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
# NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE
# LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
# OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
# WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
#

__revision__ = "/home/scons/scons/branch.0/branch.96/baseline/src/engine/SCons/Builder.py 0.96.95.D001 2007/02/12 21:41:50 knight"

import SCons.compat

import UserDict
import UserList

import SCons.Action
from SCons.Debug import logInstanceCreation
from SCons.Errors import InternalError, UserError
import SCons.Executor
import SCons.Memoize
import SCons.Node
import SCons.Node.FS
import SCons.Util
import SCons.Warnings

class _Null:
    pass

_null = _Null

class DictCmdGenerator(SCons.Util.Selector):
    """This is a callable class that can be used as a
    command generator function.  It holds on to a dictionary
    mapping file suffixes to Actions.  It uses that dictionary
    to return the proper action based on the file suffix of
    the source file."""

    def __init__(self, dict=None, source_ext_match=1):
        SCons.Util.Selector.__init__(self, dict)
        self.source_ext_match = source_ext_match

    def src_suffixes(self):
        return self.keys()

    def add_action(self, suffix, action):
        """Add a suffix-action pair to the mapping.
        """
        self[suffix] = action

    def __call__(self, target, source, env, for_signature):
        if not source:
            return []

        if self.source_ext_match:
            ext = None
            for src in map(str, source):
                my_ext = SCons.Util.splitext(src)[1]
                if ext and my_ext != ext:
                    raise UserError("While building `%s' from `%s': Cannot build multiple sources with different extensions: %s, %s" % (repr(map(str, target)), src, ext, my_ext))
                ext = my_ext
        else:
            ext = SCons.Util.splitext(str(source[0]))[1]

        if not ext:
            raise UserError("While building `%s': Cannot deduce file extension from source files: %s" % (repr(map(str, target)), repr(map(str, source))))

        try:
            ret = SCons.Util.Selector.__call__(self, env, source)
        except KeyError, e:
            raise UserError("Ambiguous suffixes after environment substitution: %s == %s == %s" % (e[0], e[1], e[2]))
        if ret is None:
            raise UserError("While building `%s' from `%s': Don't know how to build from a source file with suffix `%s'.  Expected a suffix in this list: %s." % \
                            (repr(map(str, target)), repr(map(str, source)), ext, repr(self.keys())))
        return ret

class CallableSelector(SCons.Util.Selector):
    """A callable dictionary that will, in turn, call the value it
    finds if it can."""
    def __call__(self, env, source):
        value = SCons.Util.Selector.__call__(self, env, source)
        if callable(value):
            value = value(env, source)
        return value

class DictEmitter(SCons.Util.Selector):
    """A callable dictionary that maps file suffixes to emitters.
    When called, it finds the right emitter in its dictionary for the
    suffix of the first source file, and calls that emitter to get the
    right lists of targets and sources to return.  If there's no emitter
    for the suffix in its dictionary, the original target and source are
    returned.
    """
    def __call__(self, target, source, env):
        emitter = SCons.Util.Selector.__call__(self, env, source)
        if emitter:
            target, source = emitter(target, source, env)
        return (target, source)

class ListEmitter(UserList.UserList):
    """A callable list of emitters that calls each in sequence,
    returning the result.
    """
    def __call__(self, target, source, env):
        for e in self.data:
            target, source = e(target, source, env)
        return (target, source)

# These are a common errors when calling a Builder;
# they are similar to the 'target' and 'source' keyword args to builders,
# so we issue warnings when we see them.  The warnings can, of course,
# be disabled.
misleading_keywords = {
    'targets'   : 'target',
    'sources'   : 'source',
}

class OverrideWarner(UserDict.UserDict):
    """A class for warning about keyword arguments that we use as
    overrides in a Builder call.

    This class exists to handle the fact that a single Builder call
    can actually invoke multiple builders.  This class only emits the
    warnings once, no matter how many Builders are invoked.
    """
    def __init__(self, dict):
        UserDict.UserDict.__init__(self, dict)
        if __debug__: logInstanceCreation(self, 'Builder.OverrideWarner')
        self.already_warned = None
    def warn(self):
        if self.already_warned:
            return
        for k in self.keys():
            if misleading_keywords.has_key(k):
                alt = misleading_keywords[k]
                msg = "Did you mean to use `%s' instead of `%s'?" % (alt, k)
                SCons.Warnings.warn(SCons.Warnings.MisleadingKeywordsWarning, msg)
        self.already_warned = 1

def Builder(**kw):
    """A factory for builder objects."""
    composite = None
    if kw.has_key('generator'):
        if kw.has_key('action'):
            raise UserError, "You must not specify both an action and a generator."
        kw['action'] = SCons.Action.CommandGeneratorAction(kw['generator'])
        del kw['generator']
    elif kw.has_key('action'):
        source_ext_match = kw.get('source_ext_match', 1)
        if kw.has_key('source_ext_match'):
            del kw['source_ext_match']
        if SCons.Util.is_Dict(kw['action']):
            composite = DictCmdGenerator(kw['action'], source_ext_match)
            kw['action'] = SCons.Action.CommandGeneratorAction(composite)
            kw['src_suffix'] = composite.src_suffixes()
        else:
            kw['action'] = SCons.Action.Action(kw['action'])

    if kw.has_key('emitter'):
        emitter = kw['emitter']
        if SCons.Util.is_String(emitter):
            # This allows users to pass in an Environment
            # variable reference (like "$FOO") as an emitter.
            # We will look in that Environment variable for
            # a callable to use as the actual emitter.
            var = SCons.Util.get_environment_var(emitter)
            if not var:
                raise UserError, "Supplied emitter '%s' does not appear to refer to an Environment variable" % emitter
            kw['emitter'] = EmitterProxy(var)
        elif SCons.Util.is_Dict(emitter):
            kw['emitter'] = DictEmitter(emitter)
        elif SCons.Util.is_List(emitter):
            kw['emitter'] = ListEmitter(emitter)

    result = apply(BuilderBase, (), kw)

    if not composite is None:
        result = CompositeBuilder(result, composite)

    return result

def _node_errors(builder, env, tlist, slist):
    """Validate that the lists of target and source nodes are
    legal for this builder and environment.  Raise errors or
    issue warnings as appropriate.
    """

    # First, figure out if there are any errors in the way the targets
    # were specified.
    for t in tlist:
        if t.side_effect:
            raise UserError, "Multiple ways to build the same target were specified for: %s" % t
        if t.has_explicit_builder():
            if not t.env is None and not t.env is env:
                action = t.builder.action
                t_contents = action.get_contents(tlist, slist, t.env)
                contents = action.get_contents(tlist, slist, env)

                if t_contents == contents:
                    msg = "Two different environments were specified for target %s,\n\tbut they appear to have the same action: %s" % (t, action.genstring(tlist, slist, t.env))
                    SCons.Warnings.warn(SCons.Warnings.DuplicateEnvironmentWarning, msg)
                else:
                    msg = "Two environments with different actions were specified for the same target: %s" % t
                    raise UserError, msg
            if builder.multi:
                if t.builder != builder:
                    msg = "Two different builders (%s and %s) were specified for the same target: %s" % (t.builder.get_name(env), builder.get_name(env), t)
                    raise UserError, msg
                if t.get_executor().targets != tlist:
                    msg = "Two different target lists have a target in common: %s  (from %s and from %s)" % (t, map(str, t.get_executor().targets), map(str, tlist))
                    raise UserError, msg
            elif t.sources != slist:
                msg = "Multiple ways to build the same target were specified for: %s  (from %s and from %s)" % (t, map(str, t.sources), map(str, slist))
                raise UserError, msg

    if builder.single_source:
        if len(slist) > 1:
            raise UserError, "More than one source given for single-source builder: targets=%s sources=%s" % (map(str,tlist), map(str,slist))

class EmitterProxy:
    """This is a callable class that can act as a
    Builder emitter.  It holds on to a string that
    is a key into an Environment dictionary, and will
    look there at actual build time to see if it holds
    a callable.  If so, we will call that as the actual
    emitter."""
    def __init__(self, var):
        self.var = SCons.Util.to_String(var)

    def __call__(self, target, source, env):
        emitter = self.var

        # Recursively substitute the variable.
        # We can't use env.subst() because it deals only
        # in strings.  Maybe we should change that?
        while SCons.Util.is_String(emitter) and env.has_key(emitter):
            emitter = env[emitter]
        if callable(emitter):
            target, source = emitter(target, source, env)
        elif SCons.Util.is_List(emitter):
            for e in emitter:
                target, source = e(target, source, env)

        return (target, source)


    def __cmp__(self, other):
        return cmp(self.var, other.var)

class BuilderBase:
    """Base class for Builders, objects that create output
    nodes (files) from input nodes (files).
    """

    def __init__(self,  action = None,
                        prefix = '',
                        suffix = '',
                        src_suffix = '',
                        target_factory = None,
                        source_factory = None,
                        target_scanner = None,
                        source_scanner = None,
                        emitter = None,
                        multi = 0,
                        env = None,
                        single_source = 0,
                        name = None,
                        chdir = _null,
                        is_explicit = 1,
                        src_builder = [],
                        **overrides):
        if __debug__: logInstanceCreation(self, 'Builder.BuilderBase')
        self.action = action
        self.multi = multi
        if SCons.Util.is_Dict(prefix):
            prefix = CallableSelector(prefix)
        self.prefix = prefix
        if SCons.Util.is_Dict(suffix):
            suffix = CallableSelector(suffix)
        self.env = env
        self.single_source = single_source
        if overrides.has_key('overrides'):
            SCons.Warnings.warn(SCons.Warnings.DeprecatedWarning,
                "The \"overrides\" keyword to Builder() creation has been deprecated;\n" +\
                "\tspecify the items as keyword arguments to the Builder() call instead.")
            overrides.update(overrides['overrides'])
            del overrides['overrides']
        if overrides.has_key('scanner'):
            SCons.Warnings.warn(SCons.Warnings.DeprecatedWarning,
                                "The \"scanner\" keyword to Builder() creation has been deprecated;\n"
                                "\tuse: source_scanner or target_scanner as appropriate.")
            del overrides['scanner']
        self.overrides = overrides

        self.set_suffix(suffix)
        self.set_src_suffix(src_suffix)

        self.target_factory = target_factory
        self.source_factory = source_factory
        self.target_scanner = target_scanner
        self.source_scanner = source_scanner

        self.emitter = emitter

        # Optional Builder name should only be used for Builders
        # that don't get attached to construction environments.
        if name:
            self.name = name
        self.executor_kw = {}
        if not chdir is _null:
            self.executor_kw['chdir'] = chdir
        self.is_explicit = is_explicit

        if not SCons.Util.is_List(src_builder):
            src_builder = [ src_builder ]
        self.src_builder = src_builder

    def __hash__(self):
        return id(self)

    def __nonzero__(self):
        raise InternalError, "Do not test for the Node.builder attribute directly; use Node.has_builder() instead"

    def get_name(self, env):
        """Attempts to get the name of the Builder.

        Look at the BUILDERS variable of env, expecting it to be a
        dictionary containing this Builder, and return the key of the
        dictionary.  If there's no key, then return a directly-configured
        name (if there is one) or the name of the class (by default)."""

        try:
            index = env['BUILDERS'].values().index(self)
            return env['BUILDERS'].keys()[index]
        except (AttributeError, KeyError, TypeError, ValueError):
            try:
                return self.name
            except AttributeError:
                return str(self.__class__)

    def __cmp__(self, other):
        return cmp(self.__dict__, other.__dict__)

    def splitext(self, path, env=None):
        if not env:
            env = self.env
        suffix = SuffixMap(self, env).find_suffix_match(path)
        if suffix:
            l = len(suffix)
            return path[:-l], path[-l:]
        else:
            return SCons.Util.splitext(path)

    def get_single_executor(self, env, tlist, slist, executor_kw):
        if not self.action:
            raise UserError, "Builder %s must have an action to build %s."%(self.get_name(env or self.env), map(str,tlist))
        return self.action.get_executor(env or self.env,
                                        [],  # env already has overrides
                                        tlist,
                                        slist,
                                        executor_kw)

    def get_multi_executor(self, env, tlist, slist, executor_kw):
        try:
            executor = tlist[0].get_executor(create = 0)
        except (AttributeError, IndexError):
            return self.get_single_executor(env, tlist, slist, executor_kw)
        else:
            executor.add_sources(slist)
            return executor

    def _create_nodes(self, env, target = None, source = None):
        """Create and return lists of target and source nodes.
        """
        def _adjustixes(files, pre, suf):
            if not files:
                return []
            result = []
            if not SCons.Util.is_List(files):
                files = [files]

            for f in files:
                if SCons.Util.is_String(f):
                    f = SCons.Util.adjustixes(f, pre, suf)
                result.append(f)
            return result

        src_suf = self.get_src_suffix(env)

        target_factory = env.get_factory(self.target_factory)
        source_factory = env.get_factory(self.source_factory)

        source = _adjustixes(source, None, src_suf)
        slist = env.arg2nodes(source, source_factory)

        pre = self.get_prefix(env, slist)
        suf = self.get_suffix(env, slist)

        if target is None:
            try:
                t_from_s = slist[0].target_from_source
            except AttributeError:
                raise UserError("Do not know how to create a target from source `%s'" % slist[0])
            except IndexError:
                tlist = []
            else:
                splitext = lambda S,self=self,env=env: self.splitext(S,env)
                tlist = [ t_from_s(pre, suf, splitext) ]
        else:
            target = _adjustixes(target, pre, suf)
            tlist = env.arg2nodes(target, target_factory)

        if self.emitter:
            # The emitter is going to do str(node), but because we're
            # being called *from* a builder invocation, the new targets
            # don't yet have a builder set on them and will look like
            # source files.  Fool the emitter's str() calls by setting
            # up a temporary builder on the new targets.
            new_targets = []
            for t in tlist:
                if not t.is_derived():
                    t.builder_set(self)
                    new_targets.append(t)

            target, source = self.emitter(target=tlist, source=slist, env=env)

            # Now delete the temporary builders that we attached to any
            # new targets, so that _node_errors() doesn't do weird stuff
            # to them because it thinks they already have builders.
            for t in new_targets:
                if t.builder is self:
                    # Only delete the temporary builder if the emitter
                    # didn't change it on us.
                    t.builder_set(None)

            # Have to call arg2nodes yet again, since it is legal for
            # emitters to spit out strings as well as Node instances.
            tlist = env.arg2nodes(target, target_factory)
            slist = env.arg2nodes(source, source_factory)

        return tlist, slist

    def _execute(self, env, target, source, overwarn={}, executor_kw={}):
        # We now assume that target and source are lists or None.
        if self.src_builder:
            source = self.src_builder_sources(env, source, overwarn)

        if self.single_source and len(source) > 1 and target is None:
            result = []
            if target is None: target = [None]*len(source)
            for tgt, src in zip(target, source):
                if not tgt is None: tgt = [tgt]
                if not src is None: src = [src]
                result.extend(self._execute(env, tgt, src, overwarn))
            return result

        overwarn.warn()
        
        tlist, slist = self._create_nodes(env, target, source)

        # Check for errors with the specified target/source lists.
        _node_errors(self, env, tlist, slist)

        # The targets are fine, so find or make the appropriate Executor to
        # build this particular list of targets from this particular list of
        # sources.
        if self.multi:
            get_executor = self.get_multi_executor
        else:
            get_executor = self.get_single_executor
        executor = get_executor(env, tlist, slist, executor_kw)

        # Now set up the relevant information in the target Nodes themselves.
        for t in tlist:
            t.cwd = env.fs.getcwd()
            t.builder_set(self)
            t.env_set(env)
            t.add_source(slist)
            t.set_executor(executor)
            t.set_explicit(self.is_explicit)

        return SCons.Node.NodeList(tlist)

    def __call__(self, env, target=None, source=None, chdir=_null, **kw):
        # We now assume that target and source are lists or None.
        # The caller (typically Environment.BuilderWrapper) is
        # responsible for converting any scalar values to lists.
        if chdir is _null:
            ekw = self.executor_kw
        else:
            ekw = self.executor_kw.copy()
            ekw['chdir'] = chdir
        if kw:
            if kw.has_key('srcdir'):
                def prependDirIfRelative(f, srcdir=kw['srcdir']):
                    import os.path
                    if SCons.Util.is_String(f) and not os.path.isabs(f):
                        f = os.path.join(srcdir, f)
                    return f
                if not SCons.Util.is_List(source):
                    source = [source]
                source = map(prependDirIfRelative, source)
                del kw['srcdir']
            if self.overrides:
                env_kw = self.overrides.copy()
                env_kw.update(kw)
            else:
                env_kw = kw
        else:
            env_kw = self.overrides
        env = env.Override(env_kw)
        return self._execute(env, target, source, OverrideWarner(kw), ekw)

    def adjust_suffix(self, suff):
        if suff and not suff[0] in [ '.', '_', '$' ]:
            return '.' + suff
        return suff

    def get_prefix(self, env, sources=[]):
        prefix = self.prefix
        if callable(prefix):
            prefix = prefix(env, sources)
        return env.subst(prefix)

    def set_suffix(self, suffix):
        if not callable(suffix):
            suffix = self.adjust_suffix(suffix)
        self.suffix = suffix

    def get_suffix(self, env, sources=[]):
        suffix = self.suffix
        if callable(suffix):
            suffix = suffix(env, sources)
        return env.subst(suffix)

    def set_src_suffix(self, src_suffix):
        if not src_suffix:
            src_suffix = []
        elif not SCons.Util.is_List(src_suffix):
            src_suffix = [ src_suffix ]
        adjust = lambda suf, s=self: \
                        callable(suf) and suf or s.adjust_suffix(suf)
        self.src_suffix = map(adjust, src_suffix)

    def get_src_suffix(self, env):
        """Get the first src_suffix in the list of src_suffixes."""
        return SuffixMap(self, env).primary_suffix()

    def add_emitter(self, suffix, emitter):
        """Add a suffix-emitter mapping to this Builder.

        This assumes that emitter has been initialized with an
        appropriate dictionary type, and will throw a TypeError if
        not, so the caller is responsible for knowing that this is an
        appropriate method to call for the Builder in question.
        """
        self.emitter[suffix] = emitter

    def add_src_builder(self, builder):
        """
        Add a new Builder to the list of src_builders.

        This requires wiping out cached values so that the computed
        lists of source suffixes get re-calculated.
        """
        SuffixMapCache.invalidate_builder(builder)
        self.src_builder.append(builder)

    def src_builder_sources(self, env, source, overwarn={}):
        source_factory = env.get_factory(self.source_factory)
        slist = env.arg2nodes(source, source_factory)

        smap = SuffixMap(self, env)

        result = []

        for snode in slist:
            bld = smap.find_builder_for_suffix(snode.name)
            # Don't use "if not bld in (None, self)" here because
            # that triggers comparisons using __cmp__; we really
            # want to know if we're one of these two objects.
            if bld is None or bld is self:
                result.append(snode)
            else:
                tlist = bld._execute(env, None, [snode], overwarn)
                # If the subsidiary Builder returned more than one
                # target, then filter out any sources that this
                # Builder isn't capable of building.
                if len(tlist) > 1:
                    def match_src_suffix(node, smap=smap):
                        return smap.find_suffix_match(node.name)
                    tlist = filter(match_src_suffix, tlist)

                result.extend(tlist)

        return result

    def src_suffixes(self, env):
        return SuffixMap(self, env).src_suffixes()



class CompositeBuilder(SCons.Util.Proxy):
    """A Builder Proxy whose main purpose is to always have
    a DictCmdGenerator as its action, and to provide access
    to the DictCmdGenerator's add_action() method.
    """

    def __init__(self, builder, cmdgen):
        if __debug__: logInstanceCreation(self, 'Builder.CompositeBuilder')
        SCons.Util.Proxy.__init__(self, builder)

        # cmdgen should always be an instance of DictCmdGenerator.
        self.cmdgen = cmdgen
        self.builder = builder

    def add_action(self, suffix, action):
        self.cmdgen.add_action(suffix, action)
        self.set_src_suffix(self.cmdgen.src_suffixes())



class _SuffixMap(UserDict.UserDict):
    """
    An object for mapping file suffixes to the corresponding builder.

    We obviously don't want to expand strings and walk trees of
    src_builder objects every time we search for a file suffix match.
    This object exists because the mapping of file suffixes to builders
    has multiple axes of delayed evaluation:

       --  The construction environment typically have variables
           that define the suffixes we're interested in ($CSUFFIXES,
           $YACCSUFFIX, etc.).

       --  The Builder objects themselves have src_builder attributes
           that may be set, which may affect the mapping of suffixes
           because we have to be aware of *their* src_suffix values.

       --  The value of any source Builder's src_suffix attribute is
           typically a string that must be looked up in the construction
           environment's BUILDERS dictionary.

    Upon initialization, a map turns a particular builder's src_suffix
    and src_builder attributes (the list of suffixes and builders,
    respectively) into a dictionary that maps the environment-expanded
    suffixes of any of the source builders to the appropriate Builder.
    Additional attributes store just the expanded suffixes (used to
    identify the "primary" suffix of this builder+environment pair),
    all of the builders used (used in clearing the cached values for any
    builder that has a new source builder added to it), and a list of all
    of the lengths of the various source suffixes (used in identifying
    the longest suffix match).
    """
    def __init__(self, builder, env):
        self.builder = builder
        self.env = env

        self.my_suffixes = map(lambda x, s=self, e=env: e.subst(x),
                               builder.src_suffix)

        used = [builder]
        sdict = {}

        for suffix in self.my_suffixes:
            sdict[suffix] = builder

        for bld in builder.src_builder:
            if SCons.Util.is_String(bld):
                try:
                    bld = env['BUILDERS'][bld]
                except KeyError:
                    continue

            bld_smap = SuffixMap(bld, env)

            for suf in bld_smap.keys():
                sdict[suf] = bld

            used.extend(bld_smap.builders_used)

        self.builders_used = list(set(used))

        UserDict.UserDict.__init__(self, sdict)

        self.lengths = list(set(map(len, sdict.keys())))
        self.lengths.sort()
        self.lengths.reverse()

    def primary_suffix(self):
        """
        Returns the expanded primary suffix (first in the list) for
        this map's builder + construction environment.
        """
        if self.my_suffixes:
            return self.my_suffixes[0]
        return ''

    def src_suffixes(self):
        """
        Returns all of the expanded suffixes for all source builders
        (expanded via the attached construction environment).
        """
        return self.keys()

    def find_suffix_match(self, name):
        """
        Returns the longest suffix match from the source suffixes
        in the map, or None if no match exists.
        """
        for l in self.lengths:
            n = name[-l:]
            if self.has_key(n):
                return n
        return None

    def find_builder_for_suffix(self, name):
        """
        Returns the builder for the name's longest-matching suffix.
        """
        suffix = self.find_suffix_match(name)
        return self.get(suffix)

class _SuffixMapCache:
    """
    A class to handle caching of Builder Suffix maps.

    This class gets instantiated once and then deleted from the namespace,
    so it's used as a Singleton (although we don't enforce that in the
    usual Pythonic ways).  We could have just made the cache a dictionary
    in the module namespace, but putting it in this class allows us to
    use the same Memoizer pattern that we use elsewhere to count cache
    hits and misses.
    """

    if SCons.Memoize.use_memoizer:
        __metaclass__ = SCons.Memoize.Memoized_Metaclass

    memoizer_counters = []

    def __init__(self):
        self._memo = {}

    def _SuffixMap_key(self, builder, env):
        """
        Returns the key for memoization of builder + env suffix maps.
        """
        return (id(builder), id(env))
        
    memoizer_counters.append(SCons.Memoize.CountDict('SuffixMap', _SuffixMap_key))

    def SuffixMap(self, builder, env):
        """
        Returns the cached _SuffixMap object for the specified builder
        and construction environment, creating and caching a new object
        as necessary.
        """
        key = (id(builder), id(env))
        try:
            memo_dict = self._memo['SuffixMap']
        except KeyError:
            memo_dict = {}
            self._memo['SuffixMap'] = memo_dict
        else:
            try:
                return memo_dict[key]
            except KeyError:
                pass

        result = _SuffixMap(builder, env)

        memo_dict[key] = result

        return result

    def invalidate_builder(self, builder):
        """
        Clears all of the cache entries that use the specified Builder.
        """
        for key, smap in self._memo.items():
            if builder in smap.builders_used:
                del self._memo[key]

SuffixMapCache = _SuffixMapCache()

SuffixMap = SuffixMapCache.SuffixMap

del _SuffixMapCache