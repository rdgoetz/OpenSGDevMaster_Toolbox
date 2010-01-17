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


#ifndef _OSGCOMPUTECALLBACKALGORITHMFIELDS_H_
#define _OSGCOMPUTECALLBACKALGORITHMFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGContribComputeBaseDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class ComputeCallbackAlgorithm;

OSG_GEN_CONTAINERPTR(ComputeCallbackAlgorithm);

/*! \ingroup GrpContribComputeBaseFieldTraits
    \ingroup GrpLibOSGContribComputeBase
 */
template <>
struct FieldTraits<ComputeCallbackAlgorithm *> :
    public FieldTraitsFCPtrBase<ComputeCallbackAlgorithm *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<ComputeCallbackAlgorithm *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBCOMPUTEBASE_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFComputeCallbackAlgorithmPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFComputeCallbackAlgorithmPtr"; }
};

template<> inline
const Char8 *FieldTraits<ComputeCallbackAlgorithm *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecComputeCallbackAlgorithmPtr"; 
}

template<> inline
const Char8 *FieldTraits<ComputeCallbackAlgorithm *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecComputeCallbackAlgorithmPtr"; 
}

template<> inline
const Char8 *FieldTraits<ComputeCallbackAlgorithm *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakComputeCallbackAlgorithmPtr"; 
}

template<> inline
const Char8 *FieldTraits<ComputeCallbackAlgorithm *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdComputeCallbackAlgorithmPtr"; 
}

template<> inline
const Char8 *FieldTraits<ComputeCallbackAlgorithm *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecComputeCallbackAlgorithmPtr"; 
}

template<> inline
const Char8 *FieldTraits<ComputeCallbackAlgorithm *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecComputeCallbackAlgorithmPtr"; 
}

template<> inline
const Char8 *FieldTraits<ComputeCallbackAlgorithm *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakComputeCallbackAlgorithmPtr"; 
}

template<> inline
const Char8 *FieldTraits<ComputeCallbackAlgorithm *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdComputeCallbackAlgorithmPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpContribComputeBaseFieldSFields */
typedef PointerSField<ComputeCallbackAlgorithm *,
                      RecordedRefCountPolicy  > SFRecComputeCallbackAlgorithmPtr;
/*! \ingroup GrpContribComputeBaseFieldSFields */
typedef PointerSField<ComputeCallbackAlgorithm *,
                      UnrecordedRefCountPolicy> SFUnrecComputeCallbackAlgorithmPtr;
/*! \ingroup GrpContribComputeBaseFieldSFields */
typedef PointerSField<ComputeCallbackAlgorithm *,
                      WeakRefCountPolicy      > SFWeakComputeCallbackAlgorithmPtr;
/*! \ingroup GrpContribComputeBaseFieldSFields */
typedef PointerSField<ComputeCallbackAlgorithm *,
                      NoRefCountPolicy        > SFUncountedComputeCallbackAlgorithmPtr;


/*! \ingroup GrpContribComputeBaseFieldMFields */
typedef PointerMField<ComputeCallbackAlgorithm *,
                      RecordedRefCountPolicy  > MFRecComputeCallbackAlgorithmPtr;
/*! \ingroup GrpContribComputeBaseFieldMFields */
typedef PointerMField<ComputeCallbackAlgorithm *,
                      UnrecordedRefCountPolicy> MFUnrecComputeCallbackAlgorithmPtr;
/*! \ingroup GrpContribComputeBaseFieldMFields */
typedef PointerMField<ComputeCallbackAlgorithm *,
                      WeakRefCountPolicy      > MFWeakComputeCallbackAlgorithmPtr;
/*! \ingroup GrpContribComputeBaseFieldMFields */
typedef PointerMField<ComputeCallbackAlgorithm *,
                      NoRefCountPolicy        > MFUncountedComputeCallbackAlgorithmPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpContribComputeBaseFieldSFields \ingroup GrpLibOSGContribComputeBase */
struct SFRecComputeCallbackAlgorithmPtr : 
    public PointerSField<ComputeCallbackAlgorithm *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpContribComputeBaseFieldSFields \ingroup GrpLibOSGContribComputeBase */
struct SFUnrecComputeCallbackAlgorithmPtr : 
    public PointerSField<ComputeCallbackAlgorithm *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribComputeBaseFieldSFields \ingroup GrpLibOSGContribComputeBase */
struct SFWeakComputeCallbackAlgorithmPtr :
    public PointerSField<ComputeCallbackAlgorithm *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpContribComputeBaseFieldSFields \ingroup GrpLibOSGContribComputeBase */
struct SFUncountedComputeCallbackAlgorithmPtr :
    public PointerSField<ComputeCallbackAlgorithm *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpContribComputeBaseFieldMFields \ingroup GrpLibOSGContribComputeBase */
struct MFRecComputeCallbackAlgorithmPtr :
    public PointerMField<ComputeCallbackAlgorithm *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpContribComputeBaseFieldMFields \ingroup GrpLibOSGContribComputeBase */
struct MFUnrecComputeCallbackAlgorithmPtr :
    public PointerMField<ComputeCallbackAlgorithm *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribComputeBaseFieldMFields \ingroup GrpLibOSGContribComputeBase */
struct MFWeakComputeCallbackAlgorithmPtr :
    public PointerMField<ComputeCallbackAlgorithm *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpContribComputeBaseFieldMFields \ingroup GrpLibOSGContribComputeBase */
struct MFUncountedComputeCallbackAlgorithmPtr :
    public PointerMField<ComputeCallbackAlgorithm *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGCOMPUTECALLBACKALGORITHMFIELDS_H_ */