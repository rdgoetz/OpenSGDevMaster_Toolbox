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
 **     class TextureBaseChunk!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILETEXTUREBASECHUNKINST

#include <stdlib.h>
#include <stdio.h>

#include <OSGConfig.h>


#include <OSGGL.h>   // Target default header


#include "OSGTextureBaseChunkBase.h"
#include "OSGTextureBaseChunk.h"

OSG_USING_NAMESPACE

// Field descriptions

/*! \var GLenum TextureBaseChunkBase::_sfTarget
            Texture target. Overwrite automatically determined texture target
        based on the parameters of the assigned image if set to anything 
        else than GL_NONE. Used for nVidia's rectangle textures. Be careful
        when using it!
    

*/

void TextureBaseChunkBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL; 


#ifdef OSG_1_COMPAT
    typedef const SFGLenum *(TextureBaseChunkBase::*GetSFTargetF)(void) const;

    GetSFTargetF GetSFTarget = &TextureBaseChunkBase::getSFTarget;
#endif

    pDesc = new SFGLenum::Description(
        SFGLenum::getClassType(), 
        "target", 
        TargetFieldId, TargetFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&TextureBaseChunkBase::editSFTarget),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFTarget));
#else
        reinterpret_cast<FieldGetMethodSig >(&TextureBaseChunkBase::getSFTarget));
#endif

    oType.addInitialDesc(pDesc);
}


TextureBaseChunkBase::TypeObject TextureBaseChunkBase::_type(true,
    TextureBaseChunkBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    NULL, 
    TextureBaseChunk::initMethod,
    (InitalInsertDescFunc) &TextureBaseChunkBase::classDescInserter,
    false);

/*------------------------------ get -----------------------------------*/

FieldContainerType &TextureBaseChunkBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &TextureBaseChunkBase::getType(void) const 
{
    return _type;
} 

UInt32 TextureBaseChunkBase::getContainerSize(void) const 
{ 
    return sizeof(TextureBaseChunk); 
}

/*------------------------- decorator get ------------------------------*/


SFGLenum *TextureBaseChunkBase::editSFTarget(void)
{
    editSField(TargetFieldMask);

    return &_sfTarget;
}

const SFGLenum *TextureBaseChunkBase::getSFTarget(void) const
{
    return &_sfTarget;
}

#ifdef OSG_1_COMPAT
SFGLenum *TextureBaseChunkBase::getSFTarget(void)
{
    return this->editSFTarget();
}
#endif



/*------------------------------ access -----------------------------------*/

UInt32 TextureBaseChunkBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (TargetFieldMask & whichField))
    {
        returnValue += _sfTarget.getBinSize();
    }

    return returnValue;
}

void TextureBaseChunkBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (TargetFieldMask & whichField))
    {
        _sfTarget.copyToBin(pMem);
    }
}

void TextureBaseChunkBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (TargetFieldMask & whichField))
    {
        _sfTarget.copyFromBin(pMem);
    }
}



/*------------------------- constructors ----------------------------------*/

TextureBaseChunkBase::TextureBaseChunkBase(void) :
    Inherited(),
    _sfTarget(GLenum(GL_NONE))
{
}

TextureBaseChunkBase::TextureBaseChunkBase(const TextureBaseChunkBase &source) :
    Inherited(source),
    _sfTarget(source._sfTarget)
{
}

/*-------------------------- destructors ----------------------------------*/

TextureBaseChunkBase::~TextureBaseChunkBase(void)
{
}


#ifdef OSG_MT_FIELDCONTAINERPTR
void TextureBaseChunkBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        ConstFieldMaskArg  syncMode  ,
                                  const UInt32             uiSyncInfo,
                                        UInt32             uiCopyOffset)
{
    this->execSync(static_cast<TextureBaseChunkBase *>(&oFrom),
                   whichField, 
                   syncMode, 
                   uiSyncInfo,
                   uiCopyOffset);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
void TextureBaseChunkBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode  ,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<TextureBaseChunkBase *>(&oFrom), 
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif

#if 0
void TextureBaseChunkBase::execBeginEditV(ConstFieldMaskArg whichField,
                                       UInt32            uiAspect,
                                       UInt32            uiContainerSize)
{
    this->execBeginEdit(whichField, uiAspect, uiContainerSize);
}
#endif


void TextureBaseChunkBase::resolveLinks(void)
{
    Inherited::resolveLinks();
}


#include "OSGSField.ins"
#include "OSGMField.ins"

#if defined(OSG_TMPL_STATIC_MEMBER_NEEDS_FUNCTION_INSTANTIATION) || \
    defined(OSG_TMPL_STATIC_MEMBER_NEEDS_CLASS_INSTANTIATION   )

#include "OSGSFieldFuncs.ins"
#include "OSGMFieldFuncs.ins"
#endif

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<TextureBaseChunkPtr>::_type("TextureBaseChunkPtr", "StateChunkPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(TextureBaseChunkPtr)

OSG_FIELD_DLLEXPORT_DEF1(SField, TextureBaseChunkPtr);
OSG_FIELD_DLLEXPORT_DEF1(MField, TextureBaseChunkPtr);

OSG_END_NAMESPACE


/*------------------------------------------------------------------------*/
/*                              cvs id's                                  */

#ifdef OSG_SGI_CC
#pragma set woff 1174
#endif

#ifdef OSG_LINUX_ICC
#pragma warning( disable : 177 )
#endif

namespace
{
    static Char8 cvsid_cpp       [] = "@(#)$Id$";
    static Char8 cvsid_hpp       [] = OSGTEXTUREBASECHUNKBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGTEXTUREBASECHUNKBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGTEXTUREBASECHUNKFIELDS_HEADER_CVSID;
}
