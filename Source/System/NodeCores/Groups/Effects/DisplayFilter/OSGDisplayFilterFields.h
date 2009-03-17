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
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGDISPLAYFILTERFIELDS_H_
#define _OSGDISPLAYFILTERFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGEffectGroupsDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class DisplayFilter;

OSG_GEN_CONTAINERPTR(DisplayFilter);

/*! \ingroup GrpEffectGroupsFieldTraits
    \ingroup GrpLibOSGEffectGroups
 */
template <>
struct FieldTraits<DisplayFilter *> :
    public FieldTraitsFCPtrBase<DisplayFilter *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<DisplayFilter *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_EFFECTGROUPS_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFDisplayFilterPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFDisplayFilterPtr"; }
};

template<> inline
const Char8 *FieldTraits<DisplayFilter *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecDisplayFilterPtr"; 
}

template<> inline
const Char8 *FieldTraits<DisplayFilter *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecDisplayFilterPtr"; 
}

template<> inline
const Char8 *FieldTraits<DisplayFilter *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakDisplayFilterPtr"; 
}

template<> inline
const Char8 *FieldTraits<DisplayFilter *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdDisplayFilterPtr"; 
}

template<> inline
const Char8 *FieldTraits<DisplayFilter *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecDisplayFilterPtr"; 
}

template<> inline
const Char8 *FieldTraits<DisplayFilter *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecDisplayFilterPtr"; 
}

template<> inline
const Char8 *FieldTraits<DisplayFilter *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakDisplayFilterPtr"; 
}

template<> inline
const Char8 *FieldTraits<DisplayFilter *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdDisplayFilterPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpEffectGroupsFieldSFields */
typedef PointerSField<DisplayFilter *,
                      RecordedRefCountPolicy  > SFRecDisplayFilterPtr;
/*! \ingroup GrpEffectGroupsFieldSFields */
typedef PointerSField<DisplayFilter *,
                      UnrecordedRefCountPolicy> SFUnrecDisplayFilterPtr;
/*! \ingroup GrpEffectGroupsFieldSFields */
typedef PointerSField<DisplayFilter *,
                      WeakRefCountPolicy      > SFWeakDisplayFilterPtr;
/*! \ingroup GrpEffectGroupsFieldSFields */
typedef PointerSField<DisplayFilter *,
                      NoRefCountPolicy        > SFUncountedDisplayFilterPtr;


/*! \ingroup GrpEffectGroupsFieldMFields */
typedef PointerMField<DisplayFilter *,
                      RecordedRefCountPolicy  > MFRecDisplayFilterPtr;
/*! \ingroup GrpEffectGroupsFieldMFields */
typedef PointerMField<DisplayFilter *,
                      UnrecordedRefCountPolicy> MFUnrecDisplayFilterPtr;
/*! \ingroup GrpEffectGroupsFieldMFields */
typedef PointerMField<DisplayFilter *,
                      WeakRefCountPolicy      > MFWeakDisplayFilterPtr;
/*! \ingroup GrpEffectGroupsFieldMFields */
typedef PointerMField<DisplayFilter *,
                      NoRefCountPolicy        > MFUncountedDisplayFilterPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpEffectGroupsFieldSFields \ingroup GrpLibOSGEffectGroups */
struct SFRecDisplayFilterPtr : 
    public PointerSField<DisplayFilter *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpEffectGroupsFieldSFields \ingroup GrpLibOSGEffectGroups */
struct SFUnrecDisplayFilterPtr : 
    public PointerSField<DisplayFilter *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpEffectGroupsFieldSFields \ingroup GrpLibOSGEffectGroups */
struct SFWeakDisplayFilterPtr :
    public PointerSField<DisplayFilter *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpEffectGroupsFieldSFields \ingroup GrpLibOSGEffectGroups */
struct SFUncountedDisplayFilterPtr :
    public PointerSField<DisplayFilter *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpEffectGroupsFieldMFields \ingroup GrpLibOSGEffectGroups */
struct MFRecDisplayFilterPtr :
    public PointerMField<DisplayFilter *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpEffectGroupsFieldMFields \ingroup GrpLibOSGEffectGroups */
struct MFUnrecDisplayFilterPtr :
    public PointerMField<DisplayFilter *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpEffectGroupsFieldMFields \ingroup GrpLibOSGEffectGroups */
struct MFWeakDisplayFilterPtr :
    public PointerMField<DisplayFilter *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpEffectGroupsFieldMFields \ingroup GrpLibOSGEffectGroups */
struct MFUncountedDisplayFilterPtr :
    public PointerMField<DisplayFilter *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGDISPLAYFILTERFIELDS_H_ */
