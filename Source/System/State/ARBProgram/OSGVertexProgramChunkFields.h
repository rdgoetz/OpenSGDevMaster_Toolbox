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


#ifndef _OSGVERTEXPROGRAMCHUNKFIELDS_H_
#define _OSGVERTEXPROGRAMCHUNKFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGStateDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class VertexProgramChunk;

OSG_GEN_CONTAINERPTR(VertexProgramChunk);

/*! \ingroup GrpStateFieldTraits
    \ingroup GrpLibOSGState
 */
template <>
struct FieldTraits<VertexProgramChunk *> :
    public FieldTraitsFCPtrBase<VertexProgramChunk *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<VertexProgramChunk *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_STATE_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFVertexProgramChunkPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFVertexProgramChunkPtr"; }
};

template<> inline
const Char8 *FieldTraits<VertexProgramChunk *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecVertexProgramChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<VertexProgramChunk *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecVertexProgramChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<VertexProgramChunk *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakVertexProgramChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<VertexProgramChunk *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdVertexProgramChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<VertexProgramChunk *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecVertexProgramChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<VertexProgramChunk *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecVertexProgramChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<VertexProgramChunk *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakVertexProgramChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<VertexProgramChunk *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdVertexProgramChunkPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpStateFieldSFields */
typedef PointerSField<VertexProgramChunk *,
                      RecordedRefCountPolicy  > SFRecVertexProgramChunkPtr;
/*! \ingroup GrpStateFieldSFields */
typedef PointerSField<VertexProgramChunk *,
                      UnrecordedRefCountPolicy> SFUnrecVertexProgramChunkPtr;
/*! \ingroup GrpStateFieldSFields */
typedef PointerSField<VertexProgramChunk *,
                      WeakRefCountPolicy      > SFWeakVertexProgramChunkPtr;
/*! \ingroup GrpStateFieldSFields */
typedef PointerSField<VertexProgramChunk *,
                      NoRefCountPolicy        > SFUncountedVertexProgramChunkPtr;


/*! \ingroup GrpStateFieldMFields */
typedef PointerMField<VertexProgramChunk *,
                      RecordedRefCountPolicy  > MFRecVertexProgramChunkPtr;
/*! \ingroup GrpStateFieldMFields */
typedef PointerMField<VertexProgramChunk *,
                      UnrecordedRefCountPolicy> MFUnrecVertexProgramChunkPtr;
/*! \ingroup GrpStateFieldMFields */
typedef PointerMField<VertexProgramChunk *,
                      WeakRefCountPolicy      > MFWeakVertexProgramChunkPtr;
/*! \ingroup GrpStateFieldMFields */
typedef PointerMField<VertexProgramChunk *,
                      NoRefCountPolicy        > MFUncountedVertexProgramChunkPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpStateFieldSFields \ingroup GrpLibOSGState */
struct SFRecVertexProgramChunkPtr : 
    public PointerSField<VertexProgramChunk *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpStateFieldSFields \ingroup GrpLibOSGState */
struct SFUnrecVertexProgramChunkPtr : 
    public PointerSField<VertexProgramChunk *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpStateFieldSFields \ingroup GrpLibOSGState */
struct SFWeakVertexProgramChunkPtr :
    public PointerSField<VertexProgramChunk *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpStateFieldSFields \ingroup GrpLibOSGState */
struct SFUncountedVertexProgramChunkPtr :
    public PointerSField<VertexProgramChunk *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpStateFieldMFields \ingroup GrpLibOSGState */
struct MFRecVertexProgramChunkPtr :
    public PointerMField<VertexProgramChunk *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpStateFieldMFields \ingroup GrpLibOSGState */
struct MFUnrecVertexProgramChunkPtr :
    public PointerMField<VertexProgramChunk *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpStateFieldMFields \ingroup GrpLibOSGState */
struct MFWeakVertexProgramChunkPtr :
    public PointerMField<VertexProgramChunk *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpStateFieldMFields \ingroup GrpLibOSGState */
struct MFUncountedVertexProgramChunkPtr :
    public PointerMField<VertexProgramChunk *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGVERTEXPROGRAMCHUNKFIELDS_H_ */
