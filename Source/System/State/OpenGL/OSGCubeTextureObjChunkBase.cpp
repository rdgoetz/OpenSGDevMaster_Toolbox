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
 **     class CubeTextureObjChunk!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILECUBETEXTUREOBJCHUNKINST

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>



#include <OSGImage.h> // PosZImage Class
#include <OSGImage.h> // PosXImage Class
#include <OSGImage.h> // NegXImage Class
#include <OSGImage.h> // PosYImage Class
#include <OSGImage.h> // NegYImage Class

#include "OSGCubeTextureObjChunkBase.h"
#include "OSGCubeTextureObjChunk.h"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::CubeTextureObjChunk
    \ingroup GrpSystemState

    See \ref PageSystemCubeTextureObjChunk for a description.

    The CubeTexture is defined by 6 separate texture images. As it is derived from 
    the standard texture chunk it already has an image, which is used for the 
    negative Z direction. The other 5 images are stored in variables that are named
    according to the direction they represent (osg::CubeTextureObjChunk::_sfPosZImage,
    osg::CubeTextureObjChunk::_sfNegYImage, osg::CubeTextureObjChunk::_sfPosYImage, 
    osg::CubeTextureObjChunk::_sfNegXImage, osg::CubeTextureObjChunk::_sfPosXImage).
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var ImagePtr        CubeTextureObjChunkBase::_sfPosZImage
    The image for the positive Z direction of the cube texture.
*/

/*! \var ImagePtr        CubeTextureObjChunkBase::_sfPosXImage
    The image for the positive X direction of the cube texture.
*/

/*! \var ImagePtr        CubeTextureObjChunkBase::_sfNegXImage
    The image for the negative X direction of the cube texture.
*/

/*! \var ImagePtr        CubeTextureObjChunkBase::_sfPosYImage
    The image for the positive Y direction of the cube texture.
*/

/*! \var ImagePtr        CubeTextureObjChunkBase::_sfNegYImage
    The image for the negative Y direction of the cube texture.
*/

/*! \var bool            CubeTextureObjChunkBase::_sfIsReflectionMap
    
*/


void CubeTextureObjChunkBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFImagePtr::Description(
        SFImagePtr::getClassType(),
        "posZImage",
        "The image for the positive Z direction of the cube texture.\n",
        PosZImageFieldId, PosZImageFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast     <FieldEditMethodSig>(&CubeTextureObjChunkBase::invalidEditField),
        reinterpret_cast<FieldGetMethodSig >(&CubeTextureObjChunkBase::getSFPosZImage));

    oType.addInitialDesc(pDesc);

    pDesc = new SFImagePtr::Description(
        SFImagePtr::getClassType(),
        "posXImage",
        "The image for the positive X direction of the cube texture.\n",
        PosXImageFieldId, PosXImageFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast     <FieldEditMethodSig>(&CubeTextureObjChunkBase::invalidEditField),
        reinterpret_cast<FieldGetMethodSig >(&CubeTextureObjChunkBase::getSFPosXImage));

    oType.addInitialDesc(pDesc);

    pDesc = new SFImagePtr::Description(
        SFImagePtr::getClassType(),
        "negXImage",
        "The image for the negative X direction of the cube texture.\n",
        NegXImageFieldId, NegXImageFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast     <FieldEditMethodSig>(&CubeTextureObjChunkBase::invalidEditField),
        reinterpret_cast<FieldGetMethodSig >(&CubeTextureObjChunkBase::getSFNegXImage));

    oType.addInitialDesc(pDesc);

    pDesc = new SFImagePtr::Description(
        SFImagePtr::getClassType(),
        "posYImage",
        "The image for the positive Y direction of the cube texture.\n",
        PosYImageFieldId, PosYImageFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast     <FieldEditMethodSig>(&CubeTextureObjChunkBase::invalidEditField),
        reinterpret_cast<FieldGetMethodSig >(&CubeTextureObjChunkBase::getSFPosYImage));

    oType.addInitialDesc(pDesc);

    pDesc = new SFImagePtr::Description(
        SFImagePtr::getClassType(),
        "negYImage",
        "The image for the negative Y direction of the cube texture.\n",
        NegYImageFieldId, NegYImageFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast     <FieldEditMethodSig>(&CubeTextureObjChunkBase::invalidEditField),
        reinterpret_cast<FieldGetMethodSig >(&CubeTextureObjChunkBase::getSFNegYImage));

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_COMPAT
    typedef const SFBool *(CubeTextureObjChunkBase::*GetSFIsReflectionMapF)(void) const;

    GetSFIsReflectionMapF GetSFIsReflectionMap = &CubeTextureObjChunkBase::getSFIsReflectionMap;
#endif

    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "isReflectionMap",
        "",
        IsReflectionMapFieldId, IsReflectionMapFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&CubeTextureObjChunkBase::editSFIsReflectionMap),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFIsReflectionMap));
#else
        reinterpret_cast<FieldGetMethodSig >(&CubeTextureObjChunkBase::getSFIsReflectionMap));
#endif

    oType.addInitialDesc(pDesc);
}


CubeTextureObjChunkBase::TypeObject CubeTextureObjChunkBase::_type(true,
    CubeTextureObjChunkBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    (PrototypeCreateF) &CubeTextureObjChunkBase::createEmpty,
    CubeTextureObjChunk::initMethod,
    (InitalInsertDescFunc) &CubeTextureObjChunkBase::classDescInserter,
    false,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"CubeTextureObjChunk\"\n"
    "\tparent=\"TextureObjChunk\"\n"
    "\tlibrary=\"State\"\n"
    "\tpointerfieldtypes=\"both\"\n"
    "\tstructure=\"concrete\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    "\tdecoratable=\"false\"\n"
    ">\n"
    "\\ingroup GrpSystemState\n"
    "\n"
    "See \\ref PageSystemCubeTextureObjChunk for a description.\n"
    "\n"
    "The CubeTexture is defined by 6 separate texture images. As it is derived from \n"
    "the standard texture chunk it already has an image, which is used for the \n"
    "negative Z direction. The other 5 images are stored in variables that are named\n"
    "according to the direction they represent (osg::CubeTextureObjChunk::_sfPosZImage,\n"
    "osg::CubeTextureObjChunk::_sfNegYImage, osg::CubeTextureObjChunk::_sfPosYImage, \n"
    "osg::CubeTextureObjChunk::_sfNegXImage, osg::CubeTextureObjChunk::_sfPosXImage).\n"
    "\t<Field\n"
    "\t\tname=\"posZImage\"\n"
    "\t\ttype=\"ImagePtr\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tThe image for the positive Z direction of the cube texture.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"posXImage\"\n"
    "\t\ttype=\"ImagePtr\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tThe image for the positive X direction of the cube texture.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"negXImage\"\n"
    "\t\ttype=\"ImagePtr\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tThe image for the negative X direction of the cube texture.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"posYImage\"\n"
    "\t\ttype=\"ImagePtr\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tThe image for the positive Y direction of the cube texture.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"negYImage\"\n"
    "\t\ttype=\"ImagePtr\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tThe image for the negative Y direction of the cube texture.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"isReflectionMap\"\n"
    "\t\ttype=\"bool\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"true\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    "\\ingroup GrpSystemState\n"
    "\n"
    "See \\ref PageSystemCubeTextureObjChunk for a description.\n"
    "\n"
    "The CubeTexture is defined by 6 separate texture images. As it is derived from \n"
    "the standard texture chunk it already has an image, which is used for the \n"
    "negative Z direction. The other 5 images are stored in variables that are named\n"
    "according to the direction they represent (osg::CubeTextureObjChunk::_sfPosZImage,\n"
    "osg::CubeTextureObjChunk::_sfNegYImage, osg::CubeTextureObjChunk::_sfPosYImage, \n"
    "osg::CubeTextureObjChunk::_sfNegXImage, osg::CubeTextureObjChunk::_sfPosXImage).\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &CubeTextureObjChunkBase::getType(void)
{
    return _type;
}

const FieldContainerType &CubeTextureObjChunkBase::getType(void) const
{
    return _type;
}

UInt32 CubeTextureObjChunkBase::getContainerSize(void) const
{
    return sizeof(CubeTextureObjChunk);
}

/*------------------------- decorator get ------------------------------*/


//! Get the CubeTextureObjChunk::_sfPosZImage field.
const SFImagePtr *CubeTextureObjChunkBase::getSFPosZImage(void) const
{
    return &_sfPosZImage;
}

//! Get the CubeTextureObjChunk::_sfPosXImage field.
const SFImagePtr *CubeTextureObjChunkBase::getSFPosXImage(void) const
{
    return &_sfPosXImage;
}

//! Get the CubeTextureObjChunk::_sfNegXImage field.
const SFImagePtr *CubeTextureObjChunkBase::getSFNegXImage(void) const
{
    return &_sfNegXImage;
}

//! Get the CubeTextureObjChunk::_sfPosYImage field.
const SFImagePtr *CubeTextureObjChunkBase::getSFPosYImage(void) const
{
    return &_sfPosYImage;
}

//! Get the CubeTextureObjChunk::_sfNegYImage field.
const SFImagePtr *CubeTextureObjChunkBase::getSFNegYImage(void) const
{
    return &_sfNegYImage;
}

SFBool *CubeTextureObjChunkBase::editSFIsReflectionMap(void)
{
    editSField(IsReflectionMapFieldMask);

    return &_sfIsReflectionMap;
}

const SFBool *CubeTextureObjChunkBase::getSFIsReflectionMap(void) const
{
    return &_sfIsReflectionMap;
}

#ifdef OSG_1_COMPAT
SFBool              *CubeTextureObjChunkBase::getSFIsReflectionMap(void)
{
    return this->editSFIsReflectionMap();
}
#endif


void CubeTextureObjChunkBase::pushToField(      FieldContainerPtrConstArg pNewElement,
                                    const UInt32                    uiFieldId  )
{
    Inherited::pushToField(pNewElement, uiFieldId);

    if(uiFieldId == PosZImageFieldId)
    {
        static_cast<CubeTextureObjChunk *>(this)->setPosZImage(
            cast_dynamic<ImagePtr>(pNewElement));
    }
    if(uiFieldId == PosXImageFieldId)
    {
        static_cast<CubeTextureObjChunk *>(this)->setPosXImage(
            cast_dynamic<ImagePtr>(pNewElement));
    }
    if(uiFieldId == NegXImageFieldId)
    {
        static_cast<CubeTextureObjChunk *>(this)->setNegXImage(
            cast_dynamic<ImagePtr>(pNewElement));
    }
    if(uiFieldId == PosYImageFieldId)
    {
        static_cast<CubeTextureObjChunk *>(this)->setPosYImage(
            cast_dynamic<ImagePtr>(pNewElement));
    }
    if(uiFieldId == NegYImageFieldId)
    {
        static_cast<CubeTextureObjChunk *>(this)->setNegYImage(
            cast_dynamic<ImagePtr>(pNewElement));
    }
}

void CubeTextureObjChunkBase::insertIntoMField(const UInt32                    uiIndex,
                                               FieldContainerPtrConstArg pNewElement,
                                         const UInt32                    uiFieldId  )
{
    Inherited::insertIntoMField(uiIndex, pNewElement, uiFieldId);

}

void CubeTextureObjChunkBase::replaceInMField (const UInt32                    uiIndex,
                                               FieldContainerPtrConstArg pNewElement,
                                         const UInt32                    uiFieldId)
{
    Inherited::replaceInMField(uiIndex, pNewElement, uiFieldId);

}

void CubeTextureObjChunkBase::replaceInMField (      FieldContainerPtrConstArg pOldElement,
                                               FieldContainerPtrConstArg pNewElement,
                                         const UInt32                    uiFieldId  )
{
    Inherited::replaceInMField(pOldElement, pNewElement, uiFieldId);

}

void CubeTextureObjChunkBase::removeFromMField(const UInt32 uiIndex,
                                         const UInt32 uiFieldId)
{
    Inherited::removeFromMField(uiIndex, uiFieldId);

}

void CubeTextureObjChunkBase::removeFromMField(      FieldContainerPtrConstArg pElement,
                                         const UInt32                    uiFieldId)
{
    Inherited::removeFromMField(pElement, uiFieldId);

}

void CubeTextureObjChunkBase::clearField(const UInt32 uiFieldId)
{
    Inherited::clearField(uiFieldId);

    if(uiFieldId == PosZImageFieldId)
    {
        static_cast<CubeTextureObjChunk *>(this)->setPosZImage(NullFC);
    }
    if(uiFieldId == PosXImageFieldId)
    {
        static_cast<CubeTextureObjChunk *>(this)->setPosXImage(NullFC);
    }
    if(uiFieldId == NegXImageFieldId)
    {
        static_cast<CubeTextureObjChunk *>(this)->setNegXImage(NullFC);
    }
    if(uiFieldId == PosYImageFieldId)
    {
        static_cast<CubeTextureObjChunk *>(this)->setPosYImage(NullFC);
    }
    if(uiFieldId == NegYImageFieldId)
    {
        static_cast<CubeTextureObjChunk *>(this)->setNegYImage(NullFC);
    }
}



/*------------------------------ access -----------------------------------*/

UInt32 CubeTextureObjChunkBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (PosZImageFieldMask & whichField))
    {
        returnValue += _sfPosZImage.getBinSize();
    }
    if(FieldBits::NoField != (PosXImageFieldMask & whichField))
    {
        returnValue += _sfPosXImage.getBinSize();
    }
    if(FieldBits::NoField != (NegXImageFieldMask & whichField))
    {
        returnValue += _sfNegXImage.getBinSize();
    }
    if(FieldBits::NoField != (PosYImageFieldMask & whichField))
    {
        returnValue += _sfPosYImage.getBinSize();
    }
    if(FieldBits::NoField != (NegYImageFieldMask & whichField))
    {
        returnValue += _sfNegYImage.getBinSize();
    }
    if(FieldBits::NoField != (IsReflectionMapFieldMask & whichField))
    {
        returnValue += _sfIsReflectionMap.getBinSize();
    }

    return returnValue;
}

void CubeTextureObjChunkBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (PosZImageFieldMask & whichField))
    {
        _sfPosZImage.copyToBin(pMem);
    }
    if(FieldBits::NoField != (PosXImageFieldMask & whichField))
    {
        _sfPosXImage.copyToBin(pMem);
    }
    if(FieldBits::NoField != (NegXImageFieldMask & whichField))
    {
        _sfNegXImage.copyToBin(pMem);
    }
    if(FieldBits::NoField != (PosYImageFieldMask & whichField))
    {
        _sfPosYImage.copyToBin(pMem);
    }
    if(FieldBits::NoField != (NegYImageFieldMask & whichField))
    {
        _sfNegYImage.copyToBin(pMem);
    }
    if(FieldBits::NoField != (IsReflectionMapFieldMask & whichField))
    {
        _sfIsReflectionMap.copyToBin(pMem);
    }
}

void CubeTextureObjChunkBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (PosZImageFieldMask & whichField))
    {
        _sfPosZImage.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (PosXImageFieldMask & whichField))
    {
        _sfPosXImage.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (NegXImageFieldMask & whichField))
    {
        _sfNegXImage.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (PosYImageFieldMask & whichField))
    {
        _sfPosYImage.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (NegYImageFieldMask & whichField))
    {
        _sfNegYImage.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (IsReflectionMapFieldMask & whichField))
    {
        _sfIsReflectionMap.copyFromBin(pMem);
    }
}

//! create an empty new instance of the class, do not copy the prototype
CubeTextureObjChunkPtr CubeTextureObjChunkBase::createEmpty(void)
{
    CubeTextureObjChunkPtr returnValue;

    newPtr<CubeTextureObjChunk>(returnValue);

    return returnValue;
}

FieldContainerPtr CubeTextureObjChunkBase::shallowCopy(void) const
{
    CubeTextureObjChunkPtr returnValue;

    newPtr(returnValue, dynamic_cast<const CubeTextureObjChunk *>(this));

    return returnValue;
}



/*------------------------- constructors ----------------------------------*/

CubeTextureObjChunkBase::CubeTextureObjChunkBase(void) :
    Inherited(),
    _sfPosZImage              (),
    _sfPosXImage              (),
    _sfNegXImage              (),
    _sfPosYImage              (),
    _sfNegYImage              (),
    _sfIsReflectionMap        (bool(true))
{
}

CubeTextureObjChunkBase::CubeTextureObjChunkBase(const CubeTextureObjChunkBase &source) :
    Inherited(source),
    _sfPosZImage              (),
    _sfPosXImage              (),
    _sfNegXImage              (),
    _sfPosYImage              (),
    _sfNegYImage              (),
    _sfIsReflectionMap        (source._sfIsReflectionMap        )
{
}

/*-------------------------- destructors ----------------------------------*/

CubeTextureObjChunkBase::~CubeTextureObjChunkBase(void)
{
}

void CubeTextureObjChunkBase::onCreate(const CubeTextureObjChunk *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {

        this->setPosZImage(source->getPosZImage());

        this->setPosXImage(source->getPosXImage());

        this->setNegXImage(source->getNegXImage());

        this->setPosYImage(source->getPosYImage());

        this->setNegYImage(source->getNegYImage());
    }
}

#ifdef OSG_MT_FIELDCONTAINERPTR
void CubeTextureObjChunkBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo,
                                        UInt32             uiCopyOffset)
{
    this->execSync(static_cast<CubeTextureObjChunkBase *>(&oFrom),
                   whichField,
                   syncMode,
                   uiSyncInfo,
                   uiCopyOffset);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
void CubeTextureObjChunkBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<CubeTextureObjChunkBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif

#if 0
void CubeTextureObjChunkBase::execBeginEditV(ConstFieldMaskArg whichField,
                                       UInt32            uiAspect,
                                       UInt32            uiContainerSize)
{
    this->execBeginEdit(whichField, uiAspect, uiContainerSize);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
FieldContainerPtr CubeTextureObjChunkBase::createAspectCopy(void) const
{
    CubeTextureObjChunkPtr returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const CubeTextureObjChunk *>(this));

    return returnValue;
}
#endif

void CubeTextureObjChunkBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<CubeTextureObjChunk *>(this)->setPosZImage(NullFC);

    static_cast<CubeTextureObjChunk *>(this)->setPosXImage(NullFC);

    static_cast<CubeTextureObjChunk *>(this)->setNegXImage(NullFC);

    static_cast<CubeTextureObjChunk *>(this)->setPosYImage(NullFC);

    static_cast<CubeTextureObjChunk *>(this)->setNegYImage(NullFC);
}


OSG_END_NAMESPACE

#include "OSGSFieldAdaptor.ins"
#include "OSGMFieldAdaptor.ins"

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<CubeTextureObjChunkPtr>::_type("CubeTextureObjChunkPtr", "TextureObjChunkPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(CubeTextureObjChunkPtr)

OSG_FIELD_DLLEXPORT_DEF2(SFieldAdaptor, CubeTextureObjChunkPtr, SFFieldContainerPtr);
OSG_FIELD_DLLEXPORT_DEF2(MFieldAdaptor, CubeTextureObjChunkPtr, MFFieldContainerPtr);

OSG_END_NAMESPACE
