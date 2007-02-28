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
 **     class TextureBackground!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILETEXTUREBACKGROUNDINST

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>



#include <OSGTextureObjChunk.h> // Texture Class

#include "OSGTextureBackgroundBase.h"
#include "OSGTextureBackground.h"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::TextureBackground
    \ingroup GrpSystemWindowBackgrounds

    A textured background e.g for distortion corrected fast live video from a
    camera with known intrinsic parameters.
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var Color4f         TextureBackgroundBase::_sfColor
    
*/

/*! \var TextureObjChunkPtr TextureBackgroundBase::_sfTexture
    
*/

/*! \var Pnt2f           TextureBackgroundBase::_mfTexCoords
    
*/

/*! \var Real32          TextureBackgroundBase::_sfRadialDistortion
    
*/

/*! \var Vec2f           TextureBackgroundBase::_sfCenterOfDistortion
    
*/

/*! \var UInt16          TextureBackgroundBase::_sfHor
    Horizontal subdivision.
*/

/*! \var UInt16          TextureBackgroundBase::_sfVert
    Vertical subdivision.
*/


void TextureBackgroundBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


#ifdef OSG_1_COMPAT
    typedef const SFColor4f *(TextureBackgroundBase::*GetSFColorF)(void) const;

    GetSFColorF GetSFColor = &TextureBackgroundBase::getSFColor;
#endif

    pDesc = new SFColor4f::Description(
        SFColor4f::getClassType(),
        "color",
        "",
        ColorFieldId, ColorFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&TextureBackgroundBase::editSFColor),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFColor));
#else
        reinterpret_cast<FieldGetMethodSig >(&TextureBackgroundBase::getSFColor));
#endif

    oType.addInitialDesc(pDesc);

    pDesc = new SFTextureObjChunkPtr::Description(
        SFTextureObjChunkPtr::getClassType(),
        "texture",
        "",
        TextureFieldId, TextureFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast     <FieldEditMethodSig>(&TextureBackgroundBase::invalidEditField),
        reinterpret_cast<FieldGetMethodSig >(&TextureBackgroundBase::getSFTexture));

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_COMPAT
    typedef const MFPnt2f *(TextureBackgroundBase::*GetMFTexCoordsF)(void) const;

    GetMFTexCoordsF GetMFTexCoords = &TextureBackgroundBase::getMFTexCoords;
#endif

    pDesc = new MFPnt2f::Description(
        MFPnt2f::getClassType(),
        "texCoords",
        "",
        TexCoordsFieldId, TexCoordsFieldMask,
        false,
        Field::MFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&TextureBackgroundBase::editMFTexCoords),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetMFTexCoords));
#else
        reinterpret_cast<FieldGetMethodSig >(&TextureBackgroundBase::getMFTexCoords));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_COMPAT
    typedef const SFReal32 *(TextureBackgroundBase::*GetSFRadialDistortionF)(void) const;

    GetSFRadialDistortionF GetSFRadialDistortion = &TextureBackgroundBase::getSFRadialDistortion;
#endif

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "radialDistortion",
        "",
        RadialDistortionFieldId, RadialDistortionFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&TextureBackgroundBase::editSFRadialDistortion),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFRadialDistortion));
#else
        reinterpret_cast<FieldGetMethodSig >(&TextureBackgroundBase::getSFRadialDistortion));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_COMPAT
    typedef const SFVec2f *(TextureBackgroundBase::*GetSFCenterOfDistortionF)(void) const;

    GetSFCenterOfDistortionF GetSFCenterOfDistortion = &TextureBackgroundBase::getSFCenterOfDistortion;
#endif

    pDesc = new SFVec2f::Description(
        SFVec2f::getClassType(),
        "centerOfDistortion",
        "",
        CenterOfDistortionFieldId, CenterOfDistortionFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&TextureBackgroundBase::editSFCenterOfDistortion),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFCenterOfDistortion));
#else
        reinterpret_cast<FieldGetMethodSig >(&TextureBackgroundBase::getSFCenterOfDistortion));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_COMPAT
    typedef const SFUInt16 *(TextureBackgroundBase::*GetSFHorF)(void) const;

    GetSFHorF GetSFHor = &TextureBackgroundBase::getSFHor;
#endif

    pDesc = new SFUInt16::Description(
        SFUInt16::getClassType(),
        "hor",
        "Horizontal subdivision.\n",
        HorFieldId, HorFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&TextureBackgroundBase::editSFHor),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFHor));
#else
        reinterpret_cast<FieldGetMethodSig >(&TextureBackgroundBase::getSFHor));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_COMPAT
    typedef const SFUInt16 *(TextureBackgroundBase::*GetSFVertF)(void) const;

    GetSFVertF GetSFVert = &TextureBackgroundBase::getSFVert;
#endif

    pDesc = new SFUInt16::Description(
        SFUInt16::getClassType(),
        "vert",
        "Vertical subdivision.\n",
        VertFieldId, VertFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&TextureBackgroundBase::editSFVert),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFVert));
#else
        reinterpret_cast<FieldGetMethodSig >(&TextureBackgroundBase::getSFVert));
#endif

    oType.addInitialDesc(pDesc);
}


TextureBackgroundBase::TypeObject TextureBackgroundBase::_type(true,
    TextureBackgroundBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    (PrototypeCreateF) &TextureBackgroundBase::createEmpty,
    TextureBackground::initMethod,
    (InitalInsertDescFunc) &TextureBackgroundBase::classDescInserter,
    false,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"TextureBackground\"\n"
    "\tparent=\"Background\"\n"
    "\tlibrary=\"Window\"\n"
    "\tpointerfieldtypes=\"single\"\n"
    "\tstructure=\"concrete\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    "\tdecoratable=\"false\"\n"
    "\tuseLocalIncludes=\"false\"\n"
    ">\n"
    "\\ingroup GrpSystemWindowBackgrounds\n"
    "\n"
    "A textured background e.g for distortion corrected fast live video from a\n"
    "camera with known intrinsic parameters.\n"
    "\t<Field\n"
    "\t\tname=\"color\"\n"
    "\t\ttype=\"Color4f\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"texture\"\n"
    "\t\ttype=\"TextureObjChunkPtr\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"texCoords\"\n"
    "\t\ttype=\"Pnt2f\"\n"
    "\t\tcardinality=\"multi\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"radialDistortion\"\n"
    "\t\ttype=\"Real32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"0\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"centerOfDistortion\"\n"
    "\t\ttype=\"Vec2f\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"0.5, 0.5\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"hor\"\n"
    "\t\ttype=\"UInt16\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"2\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tHorizontal subdivision.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"vert\"\n"
    "\t\ttype=\"UInt16\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"2\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tVertical subdivision.\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    "\\ingroup GrpSystemWindowBackgrounds\n"
    "\n"
    "A textured background e.g for distortion corrected fast live video from a\n"
    "camera with known intrinsic parameters.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &TextureBackgroundBase::getType(void)
{
    return _type;
}

const FieldContainerType &TextureBackgroundBase::getType(void) const
{
    return _type;
}

UInt32 TextureBackgroundBase::getContainerSize(void) const
{
    return sizeof(TextureBackground);
}

/*------------------------- decorator get ------------------------------*/


SFColor4f *TextureBackgroundBase::editSFColor(void)
{
    editSField(ColorFieldMask);

    return &_sfColor;
}

const SFColor4f *TextureBackgroundBase::getSFColor(void) const
{
    return &_sfColor;
}

#ifdef OSG_1_COMPAT
SFColor4f           *TextureBackgroundBase::getSFColor          (void)
{
    return this->editSFColor          ();
}
#endif

//! Get the TextureBackground::_sfTexture field.
const SFTextureObjChunkPtr *TextureBackgroundBase::getSFTexture(void) const
{
    return &_sfTexture;
}

MFPnt2f *TextureBackgroundBase::editMFTexCoords(void)
{
    editMField(TexCoordsFieldMask, _mfTexCoords);

    return &_mfTexCoords;
}

const MFPnt2f *TextureBackgroundBase::getMFTexCoords(void) const
{
    return &_mfTexCoords;
}

#ifdef OSG_1_COMPAT
MFPnt2f             *TextureBackgroundBase::getMFTexCoords      (void)
{
    return this->editMFTexCoords      ();
}
#endif

SFReal32 *TextureBackgroundBase::editSFRadialDistortion(void)
{
    editSField(RadialDistortionFieldMask);

    return &_sfRadialDistortion;
}

const SFReal32 *TextureBackgroundBase::getSFRadialDistortion(void) const
{
    return &_sfRadialDistortion;
}

#ifdef OSG_1_COMPAT
SFReal32            *TextureBackgroundBase::getSFRadialDistortion(void)
{
    return this->editSFRadialDistortion();
}
#endif

SFVec2f *TextureBackgroundBase::editSFCenterOfDistortion(void)
{
    editSField(CenterOfDistortionFieldMask);

    return &_sfCenterOfDistortion;
}

const SFVec2f *TextureBackgroundBase::getSFCenterOfDistortion(void) const
{
    return &_sfCenterOfDistortion;
}

#ifdef OSG_1_COMPAT
SFVec2f             *TextureBackgroundBase::getSFCenterOfDistortion(void)
{
    return this->editSFCenterOfDistortion();
}
#endif

SFUInt16 *TextureBackgroundBase::editSFHor(void)
{
    editSField(HorFieldMask);

    return &_sfHor;
}

const SFUInt16 *TextureBackgroundBase::getSFHor(void) const
{
    return &_sfHor;
}

#ifdef OSG_1_COMPAT
SFUInt16            *TextureBackgroundBase::getSFHor            (void)
{
    return this->editSFHor            ();
}
#endif

SFUInt16 *TextureBackgroundBase::editSFVert(void)
{
    editSField(VertFieldMask);

    return &_sfVert;
}

const SFUInt16 *TextureBackgroundBase::getSFVert(void) const
{
    return &_sfVert;
}

#ifdef OSG_1_COMPAT
SFUInt16            *TextureBackgroundBase::getSFVert           (void)
{
    return this->editSFVert           ();
}
#endif


void TextureBackgroundBase::pushToField(      FieldContainerPtrConstArg pNewElement,
                                    const UInt32                    uiFieldId  )
{
    Inherited::pushToField(pNewElement, uiFieldId);

    if(uiFieldId == TextureFieldId)
    {
        static_cast<TextureBackground *>(this)->setTexture(
            cast_dynamic<TextureObjChunkPtr>(pNewElement));
    }
}

void TextureBackgroundBase::insertIntoMField(const UInt32                    uiIndex,
                                               FieldContainerPtrConstArg pNewElement,
                                         const UInt32                    uiFieldId  )
{
    Inherited::insertIntoMField(uiIndex, pNewElement, uiFieldId);

}

void TextureBackgroundBase::replaceInMField (const UInt32                    uiIndex,
                                               FieldContainerPtrConstArg pNewElement,
                                         const UInt32                    uiFieldId)
{
    Inherited::replaceInMField(uiIndex, pNewElement, uiFieldId);

}

void TextureBackgroundBase::replaceInMField (      FieldContainerPtrConstArg pOldElement,
                                               FieldContainerPtrConstArg pNewElement,
                                         const UInt32                    uiFieldId  )
{
    Inherited::replaceInMField(pOldElement, pNewElement, uiFieldId);

}

void TextureBackgroundBase::removeFromMField(const UInt32 uiIndex,
                                         const UInt32 uiFieldId)
{
    Inherited::removeFromMField(uiIndex, uiFieldId);

}

void TextureBackgroundBase::removeFromMField(      FieldContainerPtrConstArg pElement,
                                         const UInt32                    uiFieldId)
{
    Inherited::removeFromMField(pElement, uiFieldId);

}

void TextureBackgroundBase::clearField(const UInt32 uiFieldId)
{
    Inherited::clearField(uiFieldId);

    if(uiFieldId == TextureFieldId)
    {
        static_cast<TextureBackground *>(this)->setTexture(NullFC);
    }
}

/*********************************** Non-ptr code ********************************/
void TextureBackgroundBase::pushToTexCoords(const Pnt2f& value)
{
    editMField(TexCoordsFieldMask, _mfTexCoords);
    _mfTexCoords.push_back(value);
}

void TextureBackgroundBase::insertIntoTexCoords(UInt32                uiIndex,
                                                   const Pnt2f& value   )
{
    editMField(TexCoordsFieldMask, _mfTexCoords);

    MFPnt2f::iterator fieldIt = _mfTexCoords.begin();

    fieldIt += uiIndex;

    _mfTexCoords.insert(fieldIt, value);
}

void TextureBackgroundBase::replaceInTexCoords(UInt32                uiIndex,
                                                       const Pnt2f& value   )
{
    if(uiIndex >= _mfTexCoords.size())
        return;

    editMField(TexCoordsFieldMask, _mfTexCoords);

    _mfTexCoords[uiIndex] = value;
}

void TextureBackgroundBase::replaceInTexCoords(const Pnt2f& pOldElem,
                                                        const Pnt2f& pNewElem)
{
    Int32  elemIdx = _mfTexCoords.findIndex(pOldElem);

    if(elemIdx != -1)
    {
        editMField(TexCoordsFieldMask, _mfTexCoords);

        MFPnt2f::iterator fieldIt = _mfTexCoords.begin();

        fieldIt += elemIdx;

        (*fieldIt) = pNewElem;
    }
}

void TextureBackgroundBase::removeFromTexCoords(UInt32 uiIndex)
{
    if(uiIndex < _mfTexCoords.size())
    {
        editMField(TexCoordsFieldMask, _mfTexCoords);

        MFPnt2f::iterator fieldIt = _mfTexCoords.begin();

        fieldIt += uiIndex;
        _mfTexCoords.erase(fieldIt);
    }
}

void TextureBackgroundBase::removeFromTexCoords(const Pnt2f& value)
{
    Int32 iElemIdx = _mfTexCoords.findIndex(value);

    if(iElemIdx != -1)
    {
        editMField(TexCoordsFieldMask, _mfTexCoords);

        MFPnt2f::iterator fieldIt = _mfTexCoords.begin();

        fieldIt += iElemIdx;

        _mfTexCoords.erase(fieldIt);
    }
}

void TextureBackgroundBase::clearTexCoords(void)
{
    editMField(TexCoordsFieldMask, _mfTexCoords);

    _mfTexCoords.clear();
}


/*------------------------------ access -----------------------------------*/

UInt32 TextureBackgroundBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (ColorFieldMask & whichField))
    {
        returnValue += _sfColor.getBinSize();
    }
    if(FieldBits::NoField != (TextureFieldMask & whichField))
    {
        returnValue += _sfTexture.getBinSize();
    }
    if(FieldBits::NoField != (TexCoordsFieldMask & whichField))
    {
        returnValue += _mfTexCoords.getBinSize();
    }
    if(FieldBits::NoField != (RadialDistortionFieldMask & whichField))
    {
        returnValue += _sfRadialDistortion.getBinSize();
    }
    if(FieldBits::NoField != (CenterOfDistortionFieldMask & whichField))
    {
        returnValue += _sfCenterOfDistortion.getBinSize();
    }
    if(FieldBits::NoField != (HorFieldMask & whichField))
    {
        returnValue += _sfHor.getBinSize();
    }
    if(FieldBits::NoField != (VertFieldMask & whichField))
    {
        returnValue += _sfVert.getBinSize();
    }

    return returnValue;
}

void TextureBackgroundBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (ColorFieldMask & whichField))
    {
        _sfColor.copyToBin(pMem);
    }
    if(FieldBits::NoField != (TextureFieldMask & whichField))
    {
        _sfTexture.copyToBin(pMem);
    }
    if(FieldBits::NoField != (TexCoordsFieldMask & whichField))
    {
        _mfTexCoords.copyToBin(pMem);
    }
    if(FieldBits::NoField != (RadialDistortionFieldMask & whichField))
    {
        _sfRadialDistortion.copyToBin(pMem);
    }
    if(FieldBits::NoField != (CenterOfDistortionFieldMask & whichField))
    {
        _sfCenterOfDistortion.copyToBin(pMem);
    }
    if(FieldBits::NoField != (HorFieldMask & whichField))
    {
        _sfHor.copyToBin(pMem);
    }
    if(FieldBits::NoField != (VertFieldMask & whichField))
    {
        _sfVert.copyToBin(pMem);
    }
}

void TextureBackgroundBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (ColorFieldMask & whichField))
    {
        _sfColor.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (TextureFieldMask & whichField))
    {
        _sfTexture.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (TexCoordsFieldMask & whichField))
    {
        _mfTexCoords.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (RadialDistortionFieldMask & whichField))
    {
        _sfRadialDistortion.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (CenterOfDistortionFieldMask & whichField))
    {
        _sfCenterOfDistortion.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (HorFieldMask & whichField))
    {
        _sfHor.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (VertFieldMask & whichField))
    {
        _sfVert.copyFromBin(pMem);
    }
}

//! create an empty new instance of the class, do not copy the prototype
TextureBackgroundPtr TextureBackgroundBase::createEmpty(void)
{
    TextureBackgroundPtr returnValue;

    newPtr<TextureBackground>(returnValue);

    return returnValue;
}

FieldContainerPtr TextureBackgroundBase::shallowCopy(void) const
{
    TextureBackgroundPtr returnValue;

    newPtr(returnValue, dynamic_cast<const TextureBackground *>(this));

    return returnValue;
}



/*------------------------- constructors ----------------------------------*/

TextureBackgroundBase::TextureBackgroundBase(void) :
    Inherited(),
    _sfColor                  (),
    _sfTexture                (),
    _mfTexCoords              (),
    _sfRadialDistortion       (Real32(0)),
    _sfCenterOfDistortion     (Vec2f(0.5, 0.5)),
    _sfHor                    (UInt16(2)),
    _sfVert                   (UInt16(2))
{
}

TextureBackgroundBase::TextureBackgroundBase(const TextureBackgroundBase &source) :
    Inherited(source),
    _sfColor                  (source._sfColor                  ),
    _sfTexture                (),
    _mfTexCoords              (source._mfTexCoords              ),
    _sfRadialDistortion       (source._sfRadialDistortion       ),
    _sfCenterOfDistortion     (source._sfCenterOfDistortion     ),
    _sfHor                    (source._sfHor                    ),
    _sfVert                   (source._sfVert                   )
{
}

/*-------------------------- destructors ----------------------------------*/

TextureBackgroundBase::~TextureBackgroundBase(void)
{
}

void TextureBackgroundBase::onCreate(const TextureBackground *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {

        this->setTexture(source->getTexture());
    }
}

#ifdef OSG_MT_FIELDCONTAINERPTR
void TextureBackgroundBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo,
                                        UInt32             uiCopyOffset)
{
    this->execSync(static_cast<TextureBackgroundBase *>(&oFrom),
                   whichField,
                   syncMode,
                   uiSyncInfo,
                   uiCopyOffset);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
void TextureBackgroundBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<TextureBackgroundBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif

#if 0
void TextureBackgroundBase::execBeginEditV(ConstFieldMaskArg whichField,
                                       UInt32            uiAspect,
                                       UInt32            uiContainerSize)
{
    this->execBeginEdit(whichField, uiAspect, uiContainerSize);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
FieldContainerPtr TextureBackgroundBase::createAspectCopy(void) const
{
    TextureBackgroundPtr returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const TextureBackground *>(this));

    return returnValue;
}
#endif

void TextureBackgroundBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<TextureBackground *>(this)->setTexture(NullFC);
}


OSG_END_NAMESPACE

#include "OSGSFieldAdaptor.ins"

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<TextureBackgroundPtr>::_type("TextureBackgroundPtr", "BackgroundPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(TextureBackgroundPtr)

OSG_FIELD_DLLEXPORT_DEF2(SFieldAdaptor, TextureBackgroundPtr, SFFieldContainerPtr);

OSG_END_NAMESPACE
