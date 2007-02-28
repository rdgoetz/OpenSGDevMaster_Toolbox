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


#ifndef _OSGCUBETEXTURECHUNKFIELDS_H_
#define _OSGCUBETEXTURECHUNKFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGSystemDef.h"

#include "OSGTextureChunkFields.h"

#include "OSGSFieldAdaptor.h"
#include "OSGMFieldAdaptor.h"


OSG_BEGIN_NAMESPACE

class CubeTextureChunk;

#if !defined(OSG_DO_DOC) // created as a dummy class, remove to prevent doubles
//! CubeTextureChunkPtr

typedef PointerFwdBuilder<TextureChunkPtr,
                          TextureChunkConstPtr,
                          CubeTextureChunk>::ObjPtr         CubeTextureChunkPtr;
typedef PointerFwdBuilder<TextureChunkPtr,
                          TextureChunkConstPtr,
                          CubeTextureChunk>::ObjPtrConst    CubeTextureChunkPtrConst;
typedef PointerFwdBuilder<TextureChunkPtr,
                          TextureChunkConstPtr,
                          CubeTextureChunk>::ObjConstPtr    CubeTextureChunkConstPtr;
typedef PointerFwdBuilder<TextureChunkPtr,
                          TextureChunkConstPtr,
                          CubeTextureChunk>::ObjPtrArg      CubeTextureChunkPtrArg;
typedef PointerFwdBuilder<TextureChunkPtr,
                          TextureChunkConstPtr,
                          CubeTextureChunk>::ObjConstPtrArg CubeTextureChunkConstPtrArg;
typedef PointerFwdBuilder<TextureChunkPtr,
                          TextureChunkConstPtr,
                          CubeTextureChunk>::ObjPtrConstArg CubeTextureChunkPtrConstArg;

#endif

#if !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)
/*! \ingroup GrpSystemFieldTraits
 */
#if !defined(OSG_DOC_DEV_TRAITS)
/*! \hideinhierarchy */
#endif

template <>
struct FieldTraits<CubeTextureChunkPtr> :
    public FieldTraitsTemplateBase<CubeTextureChunkPtr>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<CubeTextureChunkPtr>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_SYSTEM_DLLMAPPING DataType &getType(void);

    static const char *getSName(void) { return "SFCubeTextureChunkPtr"; }
    static const char *getMName(void) { return "MFCubeTextureChunkPtr"; }
};

#if !defined(OSG_DOC_DEV_TRAITS)
/*! \class  FieldTraitsTemplateBase<CubeTextureChunkPtr, 0>
    \hideinhierarchy
 */
#endif

#endif // !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_FIELD_TYPEDEFS)
/*! \ingroup GrpSystemFieldSingle */

typedef SFieldAdaptor<CubeTextureChunkPtr, SFFieldContainerPtr> SFCubeTextureChunkPtr;
#endif

#ifndef OSG_COMPILECUBETEXTURECHUNKINST
OSG_FIELD_DLLEXPORT_DECL1(SField, CubeTextureChunkPtr, OSG_SYSTEM_DLLTMPLMAPPING)
#endif

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_FIELD_TYPEDEFS)
/*! \ingroup GrpSystemFieldMulti */

typedef MFieldAdaptor<CubeTextureChunkPtr, MFFieldContainerPtr> MFCubeTextureChunkPtr;
#endif

#ifndef OSG_COMPILECUBETEXTURECHUNKINST
OSG_FIELD_DLLEXPORT_DECL1(MField, CubeTextureChunkPtr, OSG_SYSTEM_DLLTMPLMAPPING)
#endif

OSG_END_NAMESPACE

#endif /* _OSGCUBETEXTURECHUNKFIELDS_H_ */
