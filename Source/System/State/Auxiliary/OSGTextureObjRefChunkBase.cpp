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
 **     class TextureObjRefChunk!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>




#include "OSGTextureObjRefChunkBase.h"
#include "OSGTextureObjRefChunk.h"

#include "boost/bind.hpp"

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::TextureObjRefChunk
    
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var GLenum          TextureObjRefChunkBase::_sfGLId
    glid
*/


void TextureObjRefChunkBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFGLenum::Description(
        SFGLenum::getClassType(),
        "GLId",
        "glid\n",
        GLIdFieldId, GLIdFieldMask,
        false,
        (Field::FClusterLocal),
        static_cast<FieldEditMethodSig>(&TextureObjRefChunk::editHandleGLId),
        static_cast<FieldGetMethodSig >(&TextureObjRefChunk::getHandleGLId));

    oType.addInitialDesc(pDesc);
}


TextureObjRefChunkBase::TypeObject TextureObjRefChunkBase::_type(
    TextureObjRefChunkBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&TextureObjRefChunkBase::createEmptyLocal),
    TextureObjRefChunk::initMethod,
    TextureObjRefChunk::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&TextureObjRefChunk::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"TextureObjRefChunk\"\n"
    "\tparent=\"TextureBaseChunk\"\n"
    "\tlibrary=\"State\"\n"
    "\tpointerfieldtypes=\"both\"\n"
    "\tstructure=\"concrete\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    "\tdecoratable=\"false\"\n"
    ">\n"
    "\t<Field\n"
    "\t\tname=\"GLId\"\n"
    "\t\ttype=\"GLenum\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t\tdefaultValue=\"0\"\n"
    "\t\tfieldFlags=\"FClusterLocal\"\n"
    "\t>\n"
    "\tglid\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &TextureObjRefChunkBase::getType(void)
{
    return _type;
}

const FieldContainerType &TextureObjRefChunkBase::getType(void) const
{
    return _type;
}

UInt32 TextureObjRefChunkBase::getContainerSize(void) const
{
    return sizeof(TextureObjRefChunk);
}

/*------------------------- decorator get ------------------------------*/


SFGLenum *TextureObjRefChunkBase::editSFGLId(void)
{
    editSField(GLIdFieldMask);

    return &_sfGLId;
}

const SFGLenum *TextureObjRefChunkBase::getSFGLId(void) const
{
    return &_sfGLId;
}






/*------------------------------ access -----------------------------------*/

UInt32 TextureObjRefChunkBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (GLIdFieldMask & whichField))
    {
        returnValue += _sfGLId.getBinSize();
    }

    return returnValue;
}

void TextureObjRefChunkBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (GLIdFieldMask & whichField))
    {
        _sfGLId.copyToBin(pMem);
    }
}

void TextureObjRefChunkBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (GLIdFieldMask & whichField))
    {
        _sfGLId.copyFromBin(pMem);
    }
}

//! create a new instance of the class
TextureObjRefChunkTransitPtr TextureObjRefChunkBase::createLocal(BitVector bFlags)
{
    TextureObjRefChunkTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<TextureObjRefChunk>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
TextureObjRefChunkTransitPtr TextureObjRefChunkBase::createDependent(BitVector bFlags)
{
    TextureObjRefChunkTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<TextureObjRefChunk>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
TextureObjRefChunkTransitPtr TextureObjRefChunkBase::create(void)
{
    TextureObjRefChunkTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<TextureObjRefChunk>(tmpPtr);
    }

    return fc;
}

TextureObjRefChunk *TextureObjRefChunkBase::createEmptyLocal(BitVector bFlags)
{
    TextureObjRefChunk *returnValue;

    newPtr<TextureObjRefChunk>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
TextureObjRefChunk *TextureObjRefChunkBase::createEmpty(void)
{
    TextureObjRefChunk *returnValue;

    newPtr<TextureObjRefChunk>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr TextureObjRefChunkBase::shallowCopyLocal(
    BitVector bFlags) const
{
    TextureObjRefChunk *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const TextureObjRefChunk *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr TextureObjRefChunkBase::shallowCopyDependent(
    BitVector bFlags) const
{
    TextureObjRefChunk *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const TextureObjRefChunk *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr TextureObjRefChunkBase::shallowCopy(void) const
{
    TextureObjRefChunk *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const TextureObjRefChunk *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

TextureObjRefChunkBase::TextureObjRefChunkBase(void) :
    Inherited(),
    _sfGLId                   (GLenum(0))
{
}

TextureObjRefChunkBase::TextureObjRefChunkBase(const TextureObjRefChunkBase &source) :
    Inherited(source),
    _sfGLId                   (source._sfGLId                   )
{
}


/*-------------------------- destructors ----------------------------------*/

TextureObjRefChunkBase::~TextureObjRefChunkBase(void)
{
}


GetFieldHandlePtr TextureObjRefChunkBase::getHandleGLId            (void) const
{
    SFGLenum::GetHandlePtr returnValue(
        new  SFGLenum::GetHandle(
             &_sfGLId,
             this->getType().getFieldDesc(GLIdFieldId),
             const_cast<TextureObjRefChunkBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr TextureObjRefChunkBase::editHandleGLId           (void)
{
    SFGLenum::EditHandlePtr returnValue(
        new  SFGLenum::EditHandle(
             &_sfGLId,
             this->getType().getFieldDesc(GLIdFieldId),
             this));


    editSField(GLIdFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void TextureObjRefChunkBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    TextureObjRefChunk *pThis = static_cast<TextureObjRefChunk *>(this);

    pThis->execSync(static_cast<TextureObjRefChunk *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *TextureObjRefChunkBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    TextureObjRefChunk *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const TextureObjRefChunk *>(pRefAspect),
                  dynamic_cast<const TextureObjRefChunk *>(this));

    return returnValue;
}
#endif

void TextureObjRefChunkBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<TextureObjRefChunk *>::_type("TextureObjRefChunkPtr", "TextureBaseChunkPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(TextureObjRefChunk *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           TextureObjRefChunk *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           TextureObjRefChunk *,
                           0);

OSG_END_NAMESPACE
