/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
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
 **     class ShaderParameterChunk!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &ShaderParameterChunkBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 ShaderParameterChunkBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 ShaderParameterChunkBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/


//! Get the value of the \a index element the ShaderParameterChunk::_mfParameters field.
inline
ShaderParameterPtrConst ShaderParameterChunkBase::getParameters(const UInt32 index) const
{
    return _mfParameters[index];
}

//! Get the ShaderParameterChunk::_mfParameters field.
inline
const MFShaderParameterPtr &ShaderParameterChunkBase::getParameters(void) const
{
    return _mfParameters;
}


#ifdef OSG_MT_FIELDCONTAINERPTR
inline
void ShaderParameterChunkBase::execSync(      ShaderParameterChunkBase *pOther,
                                       ConstFieldMaskArg  whichField,
                                       ConstFieldMaskArg  syncMode,
                                 const UInt32             uiSyncInfo,
                                       UInt32             uiCopyOffset)
{
    Inherited::execSync(pOther, whichField, syncMode, uiSyncInfo, uiCopyOffset);

    if(FieldBits::NoField != (ParametersFieldMask & whichField))
        _mfParameters.syncWith(pOther->_mfParameters,
                                syncMode,
                                uiSyncInfo,
                                uiCopyOffset);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
inline
void ShaderParameterChunkBase::execSync (      ShaderParameterChunkBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (ParametersFieldMask & whichField))
        _mfParameters.syncWith(pFrom->_mfParameters,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);
}
#endif

#if 0
inline
void ShaderParameterChunkBase::execBeginEdit(ConstFieldMaskArg whichField,
                                      UInt32            uiAspect,
                                      UInt32            uiContainerSize)
{
    Inherited::execBeginEdit(whichField, uiAspect, uiContainerSize);

    if(FieldBits::NoField != (ParametersFieldMask & whichField))
    {
        _mfParameters.beginEdit(uiAspect, uiContainerSize);
    }
}
#endif


inline
Char8 *ShaderParameterChunkBase::getClassname(void)
{
    return "ShaderParameterChunk";
}

typedef PointerBuilder<ShaderParameterChunk>::ObjPtr          ShaderParameterChunkPtr;
typedef PointerBuilder<ShaderParameterChunk>::ObjPtrConst     ShaderParameterChunkPtrConst;
typedef PointerBuilder<ShaderParameterChunk>::ObjConstPtr     ShaderParameterChunkConstPtr;

typedef PointerBuilder<ShaderParameterChunk>::ObjPtrArg       ShaderParameterChunkPtrArg;
typedef PointerBuilder<ShaderParameterChunk>::ObjConstPtrArg  ShaderParameterChunkConstPtrArg;
typedef PointerBuilder<ShaderParameterChunk>::ObjPtrConstArg  ShaderParameterChunkPtrConstArg;

OSG_END_NAMESPACE

