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
 **     class TextureObjRefChunk!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &TextureObjRefChunkBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 TextureObjRefChunkBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 

inline
OSG::UInt16 TextureObjRefChunkBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the TextureObjRefChunk::_sfGLId field.

inline
GLenum &TextureObjRefChunkBase::editGLId(void)
{
    editSField(GLIdFieldMask);

    return _sfGLId.getValue();
}

//! Get the value of the TextureObjRefChunk::_sfGLId field.
inline
const GLenum &TextureObjRefChunkBase::getGLId(void) const
{
    return _sfGLId.getValue();
}

#ifdef OSG_1_COMPAT
inline
GLenum &TextureObjRefChunkBase::getGLId(void)
{
    return this->editGLId();
}
#endif

//! Set the value of the TextureObjRefChunk::_sfGLId field.
inline
void TextureObjRefChunkBase::setGLId(const GLenum &value)
{
    editSField(GLIdFieldMask);

    _sfGLId.setValue(value);
}

//! create a new instance of the class
inline
TextureObjRefChunkPtr TextureObjRefChunkBase::create(void) 
{
    TextureObjRefChunkPtr fc; 

    if(getClassType().getPrototype() != NullFC) 
    {
        fc = OSG::cast_dynamic<TextureObjRefChunk::ObjPtr>(
            getClassType().getPrototype()-> shallowCopy()); 
    }
    
    return fc; 
}

#ifdef OSG_MT_FIELDCONTAINERPTR
inline
void TextureObjRefChunkBase::execSync(      TextureObjRefChunkBase *pOther,
                                       ConstFieldMaskArg  whichField,
                                       ConstFieldMaskArg  syncMode  ,
                                 const UInt32             uiSyncInfo,
                                       UInt32             uiCopyOffset)
{
    Inherited::execSync(pOther, whichField, syncMode, uiSyncInfo, uiCopyOffset);

    if(FieldBits::NoField != (GLIdFieldMask & whichField))
        _sfGLId.syncWith(pOther->_sfGLId);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
inline
void TextureObjRefChunkBase::execSync (      TextureObjRefChunkBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode  ,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (GLIdFieldMask & whichField))
        _sfGLId.syncWith(pFrom->_sfGLId);
}
#endif

#if 0
inline
void TextureObjRefChunkBase::execBeginEdit(ConstFieldMaskArg whichField,
                                      UInt32            uiAspect,
                                      UInt32            uiContainerSize)
{
    Inherited::execBeginEdit(whichField, uiAspect, uiContainerSize);
}
#endif


inline
Char8 *TextureObjRefChunkBase::getClassname(void)
{
    return "TextureObjRefChunk";
}

typedef PointerBuilder<TextureObjRefChunk>::ObjPtr          TextureObjRefChunkPtr;
typedef PointerBuilder<TextureObjRefChunk>::ObjPtrConst     TextureObjRefChunkPtrConst;
typedef PointerBuilder<TextureObjRefChunk>::ObjConstPtr     TextureObjRefChunkConstPtr;

typedef PointerBuilder<TextureObjRefChunk>::ObjPtrArg       TextureObjRefChunkPtrArg;
typedef PointerBuilder<TextureObjRefChunk>::ObjConstPtrArg  TextureObjRefChunkConstPtrArg;
typedef PointerBuilder<TextureObjRefChunk>::ObjPtrConstArg  TextureObjRefChunkPtrConstArg;

OSG_END_NAMESPACE

#define OSGTEXTUREOBJREFCHUNKBASE_INLINE_CVSID "@(#)$Id: $"

