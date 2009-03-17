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


#ifndef _OSGXWINDOWFIELDS_H_
#define _OSGXWINDOWFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGWindowXDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class XWindow;

OSG_GEN_CONTAINERPTR(XWindow);

/*! \ingroup GrpWindowXFieldTraits
    \ingroup GrpLibOSGWindowX
 */
template <>
struct FieldTraits<XWindow *> :
    public FieldTraitsFCPtrBase<XWindow *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<XWindow *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_WINDOWX_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFXWindowPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFXWindowPtr"; }
};

template<> inline
const Char8 *FieldTraits<XWindow *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecXWindowPtr"; 
}

template<> inline
const Char8 *FieldTraits<XWindow *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecXWindowPtr"; 
}

template<> inline
const Char8 *FieldTraits<XWindow *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakXWindowPtr"; 
}

template<> inline
const Char8 *FieldTraits<XWindow *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdXWindowPtr"; 
}

template<> inline
const Char8 *FieldTraits<XWindow *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecXWindowPtr"; 
}

template<> inline
const Char8 *FieldTraits<XWindow *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecXWindowPtr"; 
}

template<> inline
const Char8 *FieldTraits<XWindow *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakXWindowPtr"; 
}

template<> inline
const Char8 *FieldTraits<XWindow *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdXWindowPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpWindowXFieldSFields */
typedef PointerSField<XWindow *,
                      RecordedRefCountPolicy  > SFRecXWindowPtr;
/*! \ingroup GrpWindowXFieldSFields */
typedef PointerSField<XWindow *,
                      UnrecordedRefCountPolicy> SFUnrecXWindowPtr;
/*! \ingroup GrpWindowXFieldSFields */
typedef PointerSField<XWindow *,
                      WeakRefCountPolicy      > SFWeakXWindowPtr;
/*! \ingroup GrpWindowXFieldSFields */
typedef PointerSField<XWindow *,
                      NoRefCountPolicy        > SFUncountedXWindowPtr;


/*! \ingroup GrpWindowXFieldMFields */
typedef PointerMField<XWindow *,
                      RecordedRefCountPolicy  > MFRecXWindowPtr;
/*! \ingroup GrpWindowXFieldMFields */
typedef PointerMField<XWindow *,
                      UnrecordedRefCountPolicy> MFUnrecXWindowPtr;
/*! \ingroup GrpWindowXFieldMFields */
typedef PointerMField<XWindow *,
                      WeakRefCountPolicy      > MFWeakXWindowPtr;
/*! \ingroup GrpWindowXFieldMFields */
typedef PointerMField<XWindow *,
                      NoRefCountPolicy        > MFUncountedXWindowPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpWindowXFieldSFields \ingroup GrpLibOSGWindowX */
struct SFRecXWindowPtr : 
    public PointerSField<XWindow *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpWindowXFieldSFields \ingroup GrpLibOSGWindowX */
struct SFUnrecXWindowPtr : 
    public PointerSField<XWindow *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpWindowXFieldSFields \ingroup GrpLibOSGWindowX */
struct SFWeakXWindowPtr :
    public PointerSField<XWindow *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpWindowXFieldSFields \ingroup GrpLibOSGWindowX */
struct SFUncountedXWindowPtr :
    public PointerSField<XWindow *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpWindowXFieldMFields \ingroup GrpLibOSGWindowX */
struct MFRecXWindowPtr :
    public PointerMField<XWindow *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpWindowXFieldMFields \ingroup GrpLibOSGWindowX */
struct MFUnrecXWindowPtr :
    public PointerMField<XWindow *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpWindowXFieldMFields \ingroup GrpLibOSGWindowX */
struct MFWeakXWindowPtr :
    public PointerMField<XWindow *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpWindowXFieldMFields \ingroup GrpLibOSGWindowX */
struct MFUncountedXWindowPtr :
    public PointerMField<XWindow *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGXWINDOWFIELDS_H_ */
