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


#ifndef _OSGGRADIENTBACKGROUNDFIELDS_H_
#define _OSGGRADIENTBACKGROUNDFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGWindowDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class GradientBackground;

OSG_GEN_CONTAINERPTR(GradientBackground);

/*! \ingroup GrpWindowFieldTraits
    \ingroup GrpLibOSGWindow
 */
template <>
struct FieldTraits<GradientBackground *> :
    public FieldTraitsFCPtrBase<GradientBackground *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<GradientBackground *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_WINDOW_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFGradientBackgroundPtr"; }
};


template<> inline
const Char8 *FieldTraits<GradientBackground *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecGradientBackgroundPtr"; 
}

template<> inline
const Char8 *FieldTraits<GradientBackground *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecGradientBackgroundPtr"; 
}

template<> inline
const Char8 *FieldTraits<GradientBackground *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakGradientBackgroundPtr"; 
}

template<> inline
const Char8 *FieldTraits<GradientBackground *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdGradientBackgroundPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS

/*! \ingroup GrpWindowFieldMFields */
typedef PointerMField<GradientBackground *,
                      RecordedRefCountPolicy  > MFRecGradientBackgroundPtr;
/*! \ingroup GrpWindowFieldMFields */
typedef PointerMField<GradientBackground *,
                      UnrecordedRefCountPolicy> MFUnrecGradientBackgroundPtr;
/*! \ingroup GrpWindowFieldMFields */
typedef PointerMField<GradientBackground *,
                      WeakRefCountPolicy      > MFWeakGradientBackgroundPtr;
/*! \ingroup GrpWindowFieldMFields */
typedef PointerMField<GradientBackground *,
                      NoRefCountPolicy        > MFUncountedGradientBackgroundPtr;




#else // these are the doxygen hacks


/*! \ingroup GrpWindowFieldMFields \ingroup GrpLibOSGWindow */
struct MFRecGradientBackgroundPtr :
    public PointerMField<GradientBackground *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpWindowFieldMFields \ingroup GrpLibOSGWindow */
struct MFUnrecGradientBackgroundPtr :
    public PointerMField<GradientBackground *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpWindowFieldMFields \ingroup GrpLibOSGWindow */
struct MFWeakGradientBackgroundPtr :
    public PointerMField<GradientBackground *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpWindowFieldMFields \ingroup GrpLibOSGWindow */
struct MFUncountedGradientBackgroundPtr :
    public PointerMField<GradientBackground *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGGRADIENTBACKGROUNDFIELDS_H_ */
