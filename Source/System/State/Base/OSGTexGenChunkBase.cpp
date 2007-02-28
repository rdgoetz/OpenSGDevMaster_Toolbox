/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 *   contact: dirk@opensg.org, gerrit.voss@vossg.org, jbehr@zgdv.de          *
 *                                                                           *
\*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*\
 *                                License                                    *
 *                                                                           *
 * This library is free software; you can redistribute it and/or modify it   *
 * under the terms of the GNU Library General Public License as published    *
 * by the Free Software Foundation, version 2.                               *
 *                                                                           *
 * This library is distributed in the hope that it will be useful, but       *
 * WITHOUT ANY WARRANTY; without even the implied warranty of                *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU         *
 * Library General Public License for more details.                          *
 *                                                                           *
 * You should have received a copy of the GNU Library General Public         *
 * License along with this library; if not, write to the Free Software       *
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.                 *
 *                                                                           *
\*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*\
 *                                Changes                                    *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
\*---------------------------------------------------------------------------*/

/*****************************************************************************\
 *****************************************************************************
 **                                                                         **
 **                  This file is automatically generated.                  **
 **                                                                         **
 **          Any changes made to this file WILL be lost when it is          **
 **           regenerated, which can become necessary at any time.          **
 **                                                                         **
 **     Do not change this file, changes should be done in the derived      **
 **     class TexGenChunk!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILETEXGENCHUNKINST

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>


#include <OSGGL.h>                        // GenFuncS default header
#include <OSGGL.h>                        // GenFuncT default header
#include <OSGGL.h>                        // GenFuncR default header
#include <OSGGL.h>                        // GenFuncQ default header

#include <OSGNode.h> // SBeacon Class
#include <OSGNode.h> // TBeacon Class
#include <OSGNode.h> // RBeacon Class
#include <OSGNode.h> // QBeacon Class

#include "OSGTexGenChunkBase.h"
#include "OSGTexGenChunk.h"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::TexGenChunk
    \ingroup GrpSystemState

    See \ref PageSystemTexGenChunk for a description.

    Chunk for texture coordinate generation functions.

    This chunk wraps glTexGen(). All 4 coordinates are wrapped in a single chunk
    by using separate gen funcs for each variable (OSG::TexGenChunk::_sfGenFuncS, 
    OSG::TexGenChunk::_sfGenFuncT, OSG::TexGenChunk::_sfGenFuncR, 
    OSG::TexGenChunk::_sfGenFuncQ). The default for each of these is GL_NONE, or
    off. The optional plane parameters are stored in
    OSG::TexGenChunk::_sfGenFuncSPlane, 
    OSG::TexGenChunk::_sfGenFuncTPlane, OSG::TexGenChunk::_sfGenFuncRPlane and
    OSG::TexGenChunk::_sfGenFuncQPlane.
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var GLenum          TexGenChunkBase::_sfGenFuncS
    
*/

/*! \var GLenum          TexGenChunkBase::_sfGenFuncT
    
*/

/*! \var GLenum          TexGenChunkBase::_sfGenFuncR
    
*/

/*! \var GLenum          TexGenChunkBase::_sfGenFuncQ
    
*/

/*! \var Vec4f           TexGenChunkBase::_sfGenFuncSPlane
    
*/

/*! \var Vec4f           TexGenChunkBase::_sfGenFuncTPlane
    
*/

/*! \var Vec4f           TexGenChunkBase::_sfGenFuncRPlane
    
*/

/*! \var Vec4f           TexGenChunkBase::_sfGenFuncQPlane
    
*/

/*! \var NodePtr         TexGenChunkBase::_sfSBeacon
    
*/

/*! \var NodePtr         TexGenChunkBase::_sfTBeacon
    
*/

/*! \var NodePtr         TexGenChunkBase::_sfRBeacon
    
*/

/*! \var NodePtr         TexGenChunkBase::_sfQBeacon
    
*/


void TexGenChunkBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


#ifdef OSG_1_COMPAT
    typedef const SFGLenum *(TexGenChunkBase::*GetSFGenFuncSF)(void) const;

    GetSFGenFuncSF GetSFGenFuncS = &TexGenChunkBase::getSFGenFuncS;
#endif

    pDesc = new SFGLenum::Description(
        SFGLenum::getClassType(),
        "genFuncS",
        "",
        GenFuncSFieldId, GenFuncSFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&TexGenChunkBase::editSFGenFuncS),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFGenFuncS));
#else
        reinterpret_cast<FieldGetMethodSig >(&TexGenChunkBase::getSFGenFuncS));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_COMPAT
    typedef const SFGLenum *(TexGenChunkBase::*GetSFGenFuncTF)(void) const;

    GetSFGenFuncTF GetSFGenFuncT = &TexGenChunkBase::getSFGenFuncT;
#endif

    pDesc = new SFGLenum::Description(
        SFGLenum::getClassType(),
        "genFuncT",
        "",
        GenFuncTFieldId, GenFuncTFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&TexGenChunkBase::editSFGenFuncT),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFGenFuncT));
#else
        reinterpret_cast<FieldGetMethodSig >(&TexGenChunkBase::getSFGenFuncT));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_COMPAT
    typedef const SFGLenum *(TexGenChunkBase::*GetSFGenFuncRF)(void) const;

    GetSFGenFuncRF GetSFGenFuncR = &TexGenChunkBase::getSFGenFuncR;
#endif

    pDesc = new SFGLenum::Description(
        SFGLenum::getClassType(),
        "genFuncR",
        "",
        GenFuncRFieldId, GenFuncRFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&TexGenChunkBase::editSFGenFuncR),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFGenFuncR));
#else
        reinterpret_cast<FieldGetMethodSig >(&TexGenChunkBase::getSFGenFuncR));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_COMPAT
    typedef const SFGLenum *(TexGenChunkBase::*GetSFGenFuncQF)(void) const;

    GetSFGenFuncQF GetSFGenFuncQ = &TexGenChunkBase::getSFGenFuncQ;
#endif

    pDesc = new SFGLenum::Description(
        SFGLenum::getClassType(),
        "genFuncQ",
        "",
        GenFuncQFieldId, GenFuncQFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&TexGenChunkBase::editSFGenFuncQ),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFGenFuncQ));
#else
        reinterpret_cast<FieldGetMethodSig >(&TexGenChunkBase::getSFGenFuncQ));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_COMPAT
    typedef const SFVec4f *(TexGenChunkBase::*GetSFGenFuncSPlaneF)(void) const;

    GetSFGenFuncSPlaneF GetSFGenFuncSPlane = &TexGenChunkBase::getSFGenFuncSPlane;
#endif

    pDesc = new SFVec4f::Description(
        SFVec4f::getClassType(),
        "genFuncSPlane",
        "",
        GenFuncSPlaneFieldId, GenFuncSPlaneFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&TexGenChunkBase::editSFGenFuncSPlane),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFGenFuncSPlane));
#else
        reinterpret_cast<FieldGetMethodSig >(&TexGenChunkBase::getSFGenFuncSPlane));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_COMPAT
    typedef const SFVec4f *(TexGenChunkBase::*GetSFGenFuncTPlaneF)(void) const;

    GetSFGenFuncTPlaneF GetSFGenFuncTPlane = &TexGenChunkBase::getSFGenFuncTPlane;
#endif

    pDesc = new SFVec4f::Description(
        SFVec4f::getClassType(),
        "genFuncTPlane",
        "",
        GenFuncTPlaneFieldId, GenFuncTPlaneFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&TexGenChunkBase::editSFGenFuncTPlane),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFGenFuncTPlane));
#else
        reinterpret_cast<FieldGetMethodSig >(&TexGenChunkBase::getSFGenFuncTPlane));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_COMPAT
    typedef const SFVec4f *(TexGenChunkBase::*GetSFGenFuncRPlaneF)(void) const;

    GetSFGenFuncRPlaneF GetSFGenFuncRPlane = &TexGenChunkBase::getSFGenFuncRPlane;
#endif

    pDesc = new SFVec4f::Description(
        SFVec4f::getClassType(),
        "genFuncRPlane",
        "",
        GenFuncRPlaneFieldId, GenFuncRPlaneFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&TexGenChunkBase::editSFGenFuncRPlane),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFGenFuncRPlane));
#else
        reinterpret_cast<FieldGetMethodSig >(&TexGenChunkBase::getSFGenFuncRPlane));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_COMPAT
    typedef const SFVec4f *(TexGenChunkBase::*GetSFGenFuncQPlaneF)(void) const;

    GetSFGenFuncQPlaneF GetSFGenFuncQPlane = &TexGenChunkBase::getSFGenFuncQPlane;
#endif

    pDesc = new SFVec4f::Description(
        SFVec4f::getClassType(),
        "genFuncQPlane",
        "",
        GenFuncQPlaneFieldId, GenFuncQPlaneFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&TexGenChunkBase::editSFGenFuncQPlane),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFGenFuncQPlane));
#else
        reinterpret_cast<FieldGetMethodSig >(&TexGenChunkBase::getSFGenFuncQPlane));
#endif

    oType.addInitialDesc(pDesc);

    pDesc = new SFNodePtr::Description(
        SFNodePtr::getClassType(),
        "sBeacon",
        "",
        SBeaconFieldId, SBeaconFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast     <FieldEditMethodSig>(&TexGenChunkBase::invalidEditField),
        reinterpret_cast<FieldGetMethodSig >(&TexGenChunkBase::getSFSBeacon));

    oType.addInitialDesc(pDesc);

    pDesc = new SFNodePtr::Description(
        SFNodePtr::getClassType(),
        "tBeacon",
        "",
        TBeaconFieldId, TBeaconFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast     <FieldEditMethodSig>(&TexGenChunkBase::invalidEditField),
        reinterpret_cast<FieldGetMethodSig >(&TexGenChunkBase::getSFTBeacon));

    oType.addInitialDesc(pDesc);

    pDesc = new SFNodePtr::Description(
        SFNodePtr::getClassType(),
        "rBeacon",
        "",
        RBeaconFieldId, RBeaconFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast     <FieldEditMethodSig>(&TexGenChunkBase::invalidEditField),
        reinterpret_cast<FieldGetMethodSig >(&TexGenChunkBase::getSFRBeacon));

    oType.addInitialDesc(pDesc);

    pDesc = new SFNodePtr::Description(
        SFNodePtr::getClassType(),
        "qBeacon",
        "",
        QBeaconFieldId, QBeaconFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast     <FieldEditMethodSig>(&TexGenChunkBase::invalidEditField),
        reinterpret_cast<FieldGetMethodSig >(&TexGenChunkBase::getSFQBeacon));

    oType.addInitialDesc(pDesc);
}


TexGenChunkBase::TypeObject TexGenChunkBase::_type(true,
    TexGenChunkBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    (PrototypeCreateF) &TexGenChunkBase::createEmpty,
    TexGenChunk::initMethod,
    (InitalInsertDescFunc) &TexGenChunkBase::classDescInserter,
    false,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"TexGenChunk\"\n"
    "\tparent=\"StateChunk\"\n"
    "\tlibrary=\"System\"\n"
    "\tpointerfieldtypes=\"both\"\n"
    "\tstructure=\"concrete\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    "\tdecoratable=\"false\"\n"
    "\tuseLocalIncludes=\"false\"\n"
    ">\n"
    "\\ingroup GrpSystemState\n"
    "\n"
    "See \\ref PageSystemTexGenChunk for a description.\n"
    "\n"
    "Chunk for texture coordinate generation functions.\n"
    "\n"
    "This chunk wraps glTexGen(). All 4 coordinates are wrapped in a single chunk\n"
    "by using separate gen funcs for each variable (OSG::TexGenChunk::_sfGenFuncS, \n"
    "OSG::TexGenChunk::_sfGenFuncT, OSG::TexGenChunk::_sfGenFuncR, \n"
    "OSG::TexGenChunk::_sfGenFuncQ). The default for each of these is GL_NONE, or\n"
    "off. The optional plane parameters are stored in\n"
    "OSG::TexGenChunk::_sfGenFuncSPlane, \n"
    "OSG::TexGenChunk::_sfGenFuncTPlane, OSG::TexGenChunk::_sfGenFuncRPlane and\n"
    "OSG::TexGenChunk::_sfGenFuncQPlane.\n"
    "\t<Field\n"
    "\t\tname=\"genFuncS\"\n"
    "\t\ttype=\"GLenum\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"GL_NONE\"\n"
    "\t\tdefaultHeader=\"&lt;OSGGL.h&gt;\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"genFuncT\"\n"
    "\t\ttype=\"GLenum\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"GL_NONE\"\n"
    "\t\tdefaultHeader=\"&lt;OSGGL.h&gt;\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"genFuncR\"\n"
    "\t\ttype=\"GLenum\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"GL_NONE\"\n"
    "\t\tdefaultHeader=\"&lt;OSGGL.h&gt;\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"genFuncQ\"\n"
    "\t\ttype=\"GLenum\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"GL_NONE\"\n"
    "\t\tdefaultHeader=\"&lt;OSGGL.h&gt;\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"genFuncSPlane\"\n"
    "\t\ttype=\"Vec4f\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"1,0,0,0\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"genFuncTPlane\"\n"
    "\t\ttype=\"Vec4f\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"0,1,0,0\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"genFuncRPlane\"\n"
    "\t\ttype=\"Vec4f\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"0,0,1,0\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"genFuncQPlane\"\n"
    "\t\ttype=\"Vec4f\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"0,0,0,1\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"sBeacon\"\n"
    "\t\ttype=\"NodePtr\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"tBeacon\"\n"
    "\t\ttype=\"NodePtr\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"rBeacon\"\n"
    "\t\ttype=\"NodePtr\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"qBeacon\"\n"
    "\t\ttype=\"NodePtr\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    "\\ingroup GrpSystemState\n"
    "\n"
    "See \\ref PageSystemTexGenChunk for a description.\n"
    "\n"
    "Chunk for texture coordinate generation functions.\n"
    "\n"
    "This chunk wraps glTexGen(). All 4 coordinates are wrapped in a single chunk\n"
    "by using separate gen funcs for each variable (OSG::TexGenChunk::_sfGenFuncS, \n"
    "OSG::TexGenChunk::_sfGenFuncT, OSG::TexGenChunk::_sfGenFuncR, \n"
    "OSG::TexGenChunk::_sfGenFuncQ). The default for each of these is GL_NONE, or\n"
    "off. The optional plane parameters are stored in\n"
    "OSG::TexGenChunk::_sfGenFuncSPlane, \n"
    "OSG::TexGenChunk::_sfGenFuncTPlane, OSG::TexGenChunk::_sfGenFuncRPlane and\n"
    "OSG::TexGenChunk::_sfGenFuncQPlane.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &TexGenChunkBase::getType(void)
{
    return _type;
}

const FieldContainerType &TexGenChunkBase::getType(void) const
{
    return _type;
}

UInt32 TexGenChunkBase::getContainerSize(void) const
{
    return sizeof(TexGenChunk);
}

/*------------------------- decorator get ------------------------------*/


SFGLenum *TexGenChunkBase::editSFGenFuncS(void)
{
    editSField(GenFuncSFieldMask);

    return &_sfGenFuncS;
}

const SFGLenum *TexGenChunkBase::getSFGenFuncS(void) const
{
    return &_sfGenFuncS;
}

#ifdef OSG_1_COMPAT
SFGLenum            *TexGenChunkBase::getSFGenFuncS       (void)
{
    return this->editSFGenFuncS       ();
}
#endif

SFGLenum *TexGenChunkBase::editSFGenFuncT(void)
{
    editSField(GenFuncTFieldMask);

    return &_sfGenFuncT;
}

const SFGLenum *TexGenChunkBase::getSFGenFuncT(void) const
{
    return &_sfGenFuncT;
}

#ifdef OSG_1_COMPAT
SFGLenum            *TexGenChunkBase::getSFGenFuncT       (void)
{
    return this->editSFGenFuncT       ();
}
#endif

SFGLenum *TexGenChunkBase::editSFGenFuncR(void)
{
    editSField(GenFuncRFieldMask);

    return &_sfGenFuncR;
}

const SFGLenum *TexGenChunkBase::getSFGenFuncR(void) const
{
    return &_sfGenFuncR;
}

#ifdef OSG_1_COMPAT
SFGLenum            *TexGenChunkBase::getSFGenFuncR       (void)
{
    return this->editSFGenFuncR       ();
}
#endif

SFGLenum *TexGenChunkBase::editSFGenFuncQ(void)
{
    editSField(GenFuncQFieldMask);

    return &_sfGenFuncQ;
}

const SFGLenum *TexGenChunkBase::getSFGenFuncQ(void) const
{
    return &_sfGenFuncQ;
}

#ifdef OSG_1_COMPAT
SFGLenum            *TexGenChunkBase::getSFGenFuncQ       (void)
{
    return this->editSFGenFuncQ       ();
}
#endif

SFVec4f *TexGenChunkBase::editSFGenFuncSPlane(void)
{
    editSField(GenFuncSPlaneFieldMask);

    return &_sfGenFuncSPlane;
}

const SFVec4f *TexGenChunkBase::getSFGenFuncSPlane(void) const
{
    return &_sfGenFuncSPlane;
}

#ifdef OSG_1_COMPAT
SFVec4f             *TexGenChunkBase::getSFGenFuncSPlane  (void)
{
    return this->editSFGenFuncSPlane  ();
}
#endif

SFVec4f *TexGenChunkBase::editSFGenFuncTPlane(void)
{
    editSField(GenFuncTPlaneFieldMask);

    return &_sfGenFuncTPlane;
}

const SFVec4f *TexGenChunkBase::getSFGenFuncTPlane(void) const
{
    return &_sfGenFuncTPlane;
}

#ifdef OSG_1_COMPAT
SFVec4f             *TexGenChunkBase::getSFGenFuncTPlane  (void)
{
    return this->editSFGenFuncTPlane  ();
}
#endif

SFVec4f *TexGenChunkBase::editSFGenFuncRPlane(void)
{
    editSField(GenFuncRPlaneFieldMask);

    return &_sfGenFuncRPlane;
}

const SFVec4f *TexGenChunkBase::getSFGenFuncRPlane(void) const
{
    return &_sfGenFuncRPlane;
}

#ifdef OSG_1_COMPAT
SFVec4f             *TexGenChunkBase::getSFGenFuncRPlane  (void)
{
    return this->editSFGenFuncRPlane  ();
}
#endif

SFVec4f *TexGenChunkBase::editSFGenFuncQPlane(void)
{
    editSField(GenFuncQPlaneFieldMask);

    return &_sfGenFuncQPlane;
}

const SFVec4f *TexGenChunkBase::getSFGenFuncQPlane(void) const
{
    return &_sfGenFuncQPlane;
}

#ifdef OSG_1_COMPAT
SFVec4f             *TexGenChunkBase::getSFGenFuncQPlane  (void)
{
    return this->editSFGenFuncQPlane  ();
}
#endif

//! Get the TexGenChunk::_sfSBeacon field.
const SFNodePtr *TexGenChunkBase::getSFSBeacon(void) const
{
    return &_sfSBeacon;
}

//! Get the TexGenChunk::_sfTBeacon field.
const SFNodePtr *TexGenChunkBase::getSFTBeacon(void) const
{
    return &_sfTBeacon;
}

//! Get the TexGenChunk::_sfRBeacon field.
const SFNodePtr *TexGenChunkBase::getSFRBeacon(void) const
{
    return &_sfRBeacon;
}

//! Get the TexGenChunk::_sfQBeacon field.
const SFNodePtr *TexGenChunkBase::getSFQBeacon(void) const
{
    return &_sfQBeacon;
}


void TexGenChunkBase::pushToField(      FieldContainerPtrConstArg pNewElement,
                                    const UInt32                    uiFieldId  )
{
    Inherited::pushToField(pNewElement, uiFieldId);

    if(uiFieldId == SBeaconFieldId)
    {
        static_cast<TexGenChunk *>(this)->setSBeacon(
            cast_dynamic<NodePtr>(pNewElement));
    }
    if(uiFieldId == TBeaconFieldId)
    {
        static_cast<TexGenChunk *>(this)->setTBeacon(
            cast_dynamic<NodePtr>(pNewElement));
    }
    if(uiFieldId == RBeaconFieldId)
    {
        static_cast<TexGenChunk *>(this)->setRBeacon(
            cast_dynamic<NodePtr>(pNewElement));
    }
    if(uiFieldId == QBeaconFieldId)
    {
        static_cast<TexGenChunk *>(this)->setQBeacon(
            cast_dynamic<NodePtr>(pNewElement));
    }
}

void TexGenChunkBase::insertIntoMField(const UInt32                    uiIndex,
                                               FieldContainerPtrConstArg pNewElement,
                                         const UInt32                    uiFieldId  )
{
    Inherited::insertIntoMField(uiIndex, pNewElement, uiFieldId);

}

void TexGenChunkBase::replaceInMField (const UInt32                    uiIndex,
                                               FieldContainerPtrConstArg pNewElement,
                                         const UInt32                    uiFieldId)
{
    Inherited::replaceInMField(uiIndex, pNewElement, uiFieldId);

}

void TexGenChunkBase::replaceInMField (      FieldContainerPtrConstArg pOldElement,
                                               FieldContainerPtrConstArg pNewElement,
                                         const UInt32                    uiFieldId  )
{
    Inherited::replaceInMField(pOldElement, pNewElement, uiFieldId);

}

void TexGenChunkBase::removeFromMField(const UInt32 uiIndex,
                                         const UInt32 uiFieldId)
{
    Inherited::removeFromMField(uiIndex, uiFieldId);

}

void TexGenChunkBase::removeFromMField(      FieldContainerPtrConstArg pElement,
                                         const UInt32                    uiFieldId)
{
    Inherited::removeFromMField(pElement, uiFieldId);

}

void TexGenChunkBase::clearField(const UInt32 uiFieldId)
{
    Inherited::clearField(uiFieldId);

    if(uiFieldId == SBeaconFieldId)
    {
        static_cast<TexGenChunk *>(this)->setSBeacon(NullFC);
    }
    if(uiFieldId == TBeaconFieldId)
    {
        static_cast<TexGenChunk *>(this)->setTBeacon(NullFC);
    }
    if(uiFieldId == RBeaconFieldId)
    {
        static_cast<TexGenChunk *>(this)->setRBeacon(NullFC);
    }
    if(uiFieldId == QBeaconFieldId)
    {
        static_cast<TexGenChunk *>(this)->setQBeacon(NullFC);
    }
}



/*------------------------------ access -----------------------------------*/

UInt32 TexGenChunkBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (GenFuncSFieldMask & whichField))
    {
        returnValue += _sfGenFuncS.getBinSize();
    }
    if(FieldBits::NoField != (GenFuncTFieldMask & whichField))
    {
        returnValue += _sfGenFuncT.getBinSize();
    }
    if(FieldBits::NoField != (GenFuncRFieldMask & whichField))
    {
        returnValue += _sfGenFuncR.getBinSize();
    }
    if(FieldBits::NoField != (GenFuncQFieldMask & whichField))
    {
        returnValue += _sfGenFuncQ.getBinSize();
    }
    if(FieldBits::NoField != (GenFuncSPlaneFieldMask & whichField))
    {
        returnValue += _sfGenFuncSPlane.getBinSize();
    }
    if(FieldBits::NoField != (GenFuncTPlaneFieldMask & whichField))
    {
        returnValue += _sfGenFuncTPlane.getBinSize();
    }
    if(FieldBits::NoField != (GenFuncRPlaneFieldMask & whichField))
    {
        returnValue += _sfGenFuncRPlane.getBinSize();
    }
    if(FieldBits::NoField != (GenFuncQPlaneFieldMask & whichField))
    {
        returnValue += _sfGenFuncQPlane.getBinSize();
    }
    if(FieldBits::NoField != (SBeaconFieldMask & whichField))
    {
        returnValue += _sfSBeacon.getBinSize();
    }
    if(FieldBits::NoField != (TBeaconFieldMask & whichField))
    {
        returnValue += _sfTBeacon.getBinSize();
    }
    if(FieldBits::NoField != (RBeaconFieldMask & whichField))
    {
        returnValue += _sfRBeacon.getBinSize();
    }
    if(FieldBits::NoField != (QBeaconFieldMask & whichField))
    {
        returnValue += _sfQBeacon.getBinSize();
    }

    return returnValue;
}

void TexGenChunkBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (GenFuncSFieldMask & whichField))
    {
        _sfGenFuncS.copyToBin(pMem);
    }
    if(FieldBits::NoField != (GenFuncTFieldMask & whichField))
    {
        _sfGenFuncT.copyToBin(pMem);
    }
    if(FieldBits::NoField != (GenFuncRFieldMask & whichField))
    {
        _sfGenFuncR.copyToBin(pMem);
    }
    if(FieldBits::NoField != (GenFuncQFieldMask & whichField))
    {
        _sfGenFuncQ.copyToBin(pMem);
    }
    if(FieldBits::NoField != (GenFuncSPlaneFieldMask & whichField))
    {
        _sfGenFuncSPlane.copyToBin(pMem);
    }
    if(FieldBits::NoField != (GenFuncTPlaneFieldMask & whichField))
    {
        _sfGenFuncTPlane.copyToBin(pMem);
    }
    if(FieldBits::NoField != (GenFuncRPlaneFieldMask & whichField))
    {
        _sfGenFuncRPlane.copyToBin(pMem);
    }
    if(FieldBits::NoField != (GenFuncQPlaneFieldMask & whichField))
    {
        _sfGenFuncQPlane.copyToBin(pMem);
    }
    if(FieldBits::NoField != (SBeaconFieldMask & whichField))
    {
        _sfSBeacon.copyToBin(pMem);
    }
    if(FieldBits::NoField != (TBeaconFieldMask & whichField))
    {
        _sfTBeacon.copyToBin(pMem);
    }
    if(FieldBits::NoField != (RBeaconFieldMask & whichField))
    {
        _sfRBeacon.copyToBin(pMem);
    }
    if(FieldBits::NoField != (QBeaconFieldMask & whichField))
    {
        _sfQBeacon.copyToBin(pMem);
    }
}

void TexGenChunkBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (GenFuncSFieldMask & whichField))
    {
        _sfGenFuncS.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (GenFuncTFieldMask & whichField))
    {
        _sfGenFuncT.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (GenFuncRFieldMask & whichField))
    {
        _sfGenFuncR.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (GenFuncQFieldMask & whichField))
    {
        _sfGenFuncQ.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (GenFuncSPlaneFieldMask & whichField))
    {
        _sfGenFuncSPlane.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (GenFuncTPlaneFieldMask & whichField))
    {
        _sfGenFuncTPlane.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (GenFuncRPlaneFieldMask & whichField))
    {
        _sfGenFuncRPlane.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (GenFuncQPlaneFieldMask & whichField))
    {
        _sfGenFuncQPlane.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (SBeaconFieldMask & whichField))
    {
        _sfSBeacon.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (TBeaconFieldMask & whichField))
    {
        _sfTBeacon.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (RBeaconFieldMask & whichField))
    {
        _sfRBeacon.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (QBeaconFieldMask & whichField))
    {
        _sfQBeacon.copyFromBin(pMem);
    }
}

//! create an empty new instance of the class, do not copy the prototype
TexGenChunkPtr TexGenChunkBase::createEmpty(void)
{
    TexGenChunkPtr returnValue;

    newPtr<TexGenChunk>(returnValue);

    return returnValue;
}

FieldContainerPtr TexGenChunkBase::shallowCopy(void) const
{
    TexGenChunkPtr returnValue;

    newPtr(returnValue, dynamic_cast<const TexGenChunk *>(this));

    return returnValue;
}



/*------------------------- constructors ----------------------------------*/

TexGenChunkBase::TexGenChunkBase(void) :
    Inherited(),
    _sfGenFuncS               (GLenum(GL_NONE)),
    _sfGenFuncT               (GLenum(GL_NONE)),
    _sfGenFuncR               (GLenum(GL_NONE)),
    _sfGenFuncQ               (GLenum(GL_NONE)),
    _sfGenFuncSPlane          (Vec4f(1,0,0,0)),
    _sfGenFuncTPlane          (Vec4f(0,1,0,0)),
    _sfGenFuncRPlane          (Vec4f(0,0,1,0)),
    _sfGenFuncQPlane          (Vec4f(0,0,0,1)),
    _sfSBeacon                (),
    _sfTBeacon                (),
    _sfRBeacon                (),
    _sfQBeacon                ()
{
}

TexGenChunkBase::TexGenChunkBase(const TexGenChunkBase &source) :
    Inherited(source),
    _sfGenFuncS               (source._sfGenFuncS               ),
    _sfGenFuncT               (source._sfGenFuncT               ),
    _sfGenFuncR               (source._sfGenFuncR               ),
    _sfGenFuncQ               (source._sfGenFuncQ               ),
    _sfGenFuncSPlane          (source._sfGenFuncSPlane          ),
    _sfGenFuncTPlane          (source._sfGenFuncTPlane          ),
    _sfGenFuncRPlane          (source._sfGenFuncRPlane          ),
    _sfGenFuncQPlane          (source._sfGenFuncQPlane          ),
    _sfSBeacon                (),
    _sfTBeacon                (),
    _sfRBeacon                (),
    _sfQBeacon                ()
{
}

/*-------------------------- destructors ----------------------------------*/

TexGenChunkBase::~TexGenChunkBase(void)
{
}

void TexGenChunkBase::onCreate(const TexGenChunk *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {

        this->setSBeacon(source->getSBeacon());

        this->setTBeacon(source->getTBeacon());

        this->setRBeacon(source->getRBeacon());

        this->setQBeacon(source->getQBeacon());
    }
}

#ifdef OSG_MT_FIELDCONTAINERPTR
void TexGenChunkBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo,
                                        UInt32             uiCopyOffset)
{
    this->execSync(static_cast<TexGenChunkBase *>(&oFrom),
                   whichField,
                   syncMode,
                   uiSyncInfo,
                   uiCopyOffset);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
void TexGenChunkBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<TexGenChunkBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif

#if 0
void TexGenChunkBase::execBeginEditV(ConstFieldMaskArg whichField,
                                       UInt32            uiAspect,
                                       UInt32            uiContainerSize)
{
    this->execBeginEdit(whichField, uiAspect, uiContainerSize);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
FieldContainerPtr TexGenChunkBase::createAspectCopy(void) const
{
    TexGenChunkPtr returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const TexGenChunk *>(this));

    return returnValue;
}
#endif

void TexGenChunkBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<TexGenChunk *>(this)->setSBeacon(NullFC);

    static_cast<TexGenChunk *>(this)->setTBeacon(NullFC);

    static_cast<TexGenChunk *>(this)->setRBeacon(NullFC);

    static_cast<TexGenChunk *>(this)->setQBeacon(NullFC);
}


OSG_END_NAMESPACE

#include "OSGSFieldAdaptor.ins"
#include "OSGMFieldAdaptor.ins"

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<TexGenChunkPtr>::_type("TexGenChunkPtr", "StateChunkPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(TexGenChunkPtr)

OSG_FIELD_DLLEXPORT_DEF2(SFieldAdaptor, TexGenChunkPtr, SFFieldContainerPtr);
OSG_FIELD_DLLEXPORT_DEF2(MFieldAdaptor, TexGenChunkPtr, MFFieldContainerPtr);

OSG_END_NAMESPACE
