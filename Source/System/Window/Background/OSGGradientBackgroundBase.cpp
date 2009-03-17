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
 **     class GradientBackground!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>




#include "OSGGradientBackgroundBase.h"
#include "OSGGradientBackground.h"

#include "boost/bind.hpp"

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::GradientBackground
    A background showing a color gradient. The colors and positions correspond to
    each other, so both have to have the same number of elements.
    The style field (_sfStyle) selects the kind of gradient being
    drawn (HORIZONTAL, VERTICAL).
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var Color3f         GradientBackgroundBase::_mfColor
    The colors of the gradient.
*/

/*! \var Real32          GradientBackgroundBase::_mfPosition
    The positions of the gradient.
*/

/*! \var bool            GradientBackgroundBase::_sfNormPosition
    If true the values of the position field must be normed coordinates in the
    range [0,1], otherwise they must be pixel coordinates.
*/

/*! \var UInt32          GradientBackgroundBase::_sfStyle
    Gradient style. Allowed values are VERTICAL and HORIZONTAL.
*/


void GradientBackgroundBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new MFColor3f::Description(
        MFColor3f::getClassType(),
        "color",
        "The colors of the gradient.\n",
        ColorFieldId, ColorFieldMask,
        false,
        (Field::MFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&GradientBackground::editHandleColor),
        static_cast<FieldGetMethodSig >(&GradientBackground::getHandleColor));

    oType.addInitialDesc(pDesc);

    pDesc = new MFReal32::Description(
        MFReal32::getClassType(),
        "position",
        "The positions of the gradient.\n",
        PositionFieldId, PositionFieldMask,
        false,
        (Field::MFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&GradientBackground::editHandlePosition),
        static_cast<FieldGetMethodSig >(&GradientBackground::getHandlePosition));

    oType.addInitialDesc(pDesc);

    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "normPosition",
        "If true the values of the position field must be normed coordinates in the\n"
        "range [0,1], otherwise they must be pixel coordinates.\n",
        NormPositionFieldId, NormPositionFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&GradientBackground::editHandleNormPosition),
        static_cast<FieldGetMethodSig >(&GradientBackground::getHandleNormPosition));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(),
        "style",
        "Gradient style. Allowed values are VERTICAL and HORIZONTAL.\n",
        StyleFieldId, StyleFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&GradientBackground::editHandleStyle),
        static_cast<FieldGetMethodSig >(&GradientBackground::getHandleStyle));

    oType.addInitialDesc(pDesc);
}


GradientBackgroundBase::TypeObject GradientBackgroundBase::_type(
    GradientBackgroundBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&GradientBackgroundBase::createEmptyLocal),
    GradientBackground::initMethod,
    GradientBackground::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&GradientBackground::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"GradientBackground\"\n"
    "\tparent=\"TileableBackground\"\n"
    "\tlibrary=\"Window\"\n"
    "\tpointerfieldtypes=\"multi\"\n"
    "\tstructure=\"concrete\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    "\tdecoratable=\"false\"\n"
    ">\n"
    "A background showing a color gradient. The colors and positions correspond to\n"
    "each other, so both have to have the same number of elements.\n"
    "The style field (_sfStyle) selects the kind of gradient being\n"
    "drawn (HORIZONTAL, VERTICAL).\n"
    "\t<Field\n"
    "\t\tname=\"color\"\n"
    "\t\ttype=\"Color3f\"\n"
    "\t\tcardinality=\"multi\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"protected\"\n"
    "\t>\n"
    "\tThe colors of the gradient.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"position\"\n"
    "\t\ttype=\"Real32\"\n"
    "\t\tcardinality=\"multi\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"protected\"\n"
    "\t>\n"
    "\tThe positions of the gradient.\n"
    "\t</Field>\n"
    "    <Field\n"
    "        name=\"normPosition\"\n"
    "        type=\"bool\"\n"
    "        cardinality=\"single\"\n"
    "        visibility=\"external\"\n"
    "        defaultValue=\"true\"\n"
    "        access=\"protected\"\n"
    "    >\n"
    "    If true the values of the position field must be normed coordinates in the\n"
    "    range [0,1], otherwise they must be pixel coordinates.\n"
    "    </Field>\n"
    "\t<Field\n"
    "\t\tname=\"style\"\n"
    "\t\ttype=\"UInt32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "        defaultValue=\"GradientBackground::VERTICAL\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tGradient style. Allowed values are VERTICAL and HORIZONTAL.\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    "A background showing a color gradient. The colors and positions correspond to\n"
    "each other, so both have to have the same number of elements.\n"
    "The style field (_sfStyle) selects the kind of gradient being\n"
    "drawn (HORIZONTAL, VERTICAL).\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &GradientBackgroundBase::getType(void)
{
    return _type;
}

const FieldContainerType &GradientBackgroundBase::getType(void) const
{
    return _type;
}

UInt32 GradientBackgroundBase::getContainerSize(void) const
{
    return sizeof(GradientBackground);
}

/*------------------------- decorator get ------------------------------*/


MFColor3f *GradientBackgroundBase::editMFColor(void)
{
    editMField(ColorFieldMask, _mfColor);

    return &_mfColor;
}

const MFColor3f *GradientBackgroundBase::getMFColor(void) const
{
    return &_mfColor;
}


MFReal32 *GradientBackgroundBase::editMFPosition(void)
{
    editMField(PositionFieldMask, _mfPosition);

    return &_mfPosition;
}

const MFReal32 *GradientBackgroundBase::getMFPosition(void) const
{
    return &_mfPosition;
}


SFBool *GradientBackgroundBase::editSFNormPosition(void)
{
    editSField(NormPositionFieldMask);

    return &_sfNormPosition;
}

const SFBool *GradientBackgroundBase::getSFNormPosition(void) const
{
    return &_sfNormPosition;
}


SFUInt32 *GradientBackgroundBase::editSFStyle(void)
{
    editSField(StyleFieldMask);

    return &_sfStyle;
}

const SFUInt32 *GradientBackgroundBase::getSFStyle(void) const
{
    return &_sfStyle;
}






/*------------------------------ access -----------------------------------*/

UInt32 GradientBackgroundBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (ColorFieldMask & whichField))
    {
        returnValue += _mfColor.getBinSize();
    }
    if(FieldBits::NoField != (PositionFieldMask & whichField))
    {
        returnValue += _mfPosition.getBinSize();
    }
    if(FieldBits::NoField != (NormPositionFieldMask & whichField))
    {
        returnValue += _sfNormPosition.getBinSize();
    }
    if(FieldBits::NoField != (StyleFieldMask & whichField))
    {
        returnValue += _sfStyle.getBinSize();
    }

    return returnValue;
}

void GradientBackgroundBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (ColorFieldMask & whichField))
    {
        _mfColor.copyToBin(pMem);
    }
    if(FieldBits::NoField != (PositionFieldMask & whichField))
    {
        _mfPosition.copyToBin(pMem);
    }
    if(FieldBits::NoField != (NormPositionFieldMask & whichField))
    {
        _sfNormPosition.copyToBin(pMem);
    }
    if(FieldBits::NoField != (StyleFieldMask & whichField))
    {
        _sfStyle.copyToBin(pMem);
    }
}

void GradientBackgroundBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (ColorFieldMask & whichField))
    {
        _mfColor.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (PositionFieldMask & whichField))
    {
        _mfPosition.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (NormPositionFieldMask & whichField))
    {
        _sfNormPosition.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (StyleFieldMask & whichField))
    {
        _sfStyle.copyFromBin(pMem);
    }
}

//! create a new instance of the class
GradientBackgroundTransitPtr GradientBackgroundBase::createLocal(BitVector bFlags)
{
    GradientBackgroundTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<GradientBackground>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
GradientBackgroundTransitPtr GradientBackgroundBase::createDependent(BitVector bFlags)
{
    GradientBackgroundTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<GradientBackground>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
GradientBackgroundTransitPtr GradientBackgroundBase::create(void)
{
    GradientBackgroundTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<GradientBackground>(tmpPtr);
    }

    return fc;
}

GradientBackground *GradientBackgroundBase::createEmptyLocal(BitVector bFlags)
{
    GradientBackground *returnValue;

    newPtr<GradientBackground>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
GradientBackground *GradientBackgroundBase::createEmpty(void)
{
    GradientBackground *returnValue;

    newPtr<GradientBackground>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr GradientBackgroundBase::shallowCopyLocal(
    BitVector bFlags) const
{
    GradientBackground *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const GradientBackground *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr GradientBackgroundBase::shallowCopyDependent(
    BitVector bFlags) const
{
    GradientBackground *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const GradientBackground *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr GradientBackgroundBase::shallowCopy(void) const
{
    GradientBackground *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const GradientBackground *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

GradientBackgroundBase::GradientBackgroundBase(void) :
    Inherited(),
    _mfColor                  (),
    _mfPosition               (),
    _sfNormPosition           (bool(true)),
    _sfStyle                  (UInt32(GradientBackground::VERTICAL))
{
}

GradientBackgroundBase::GradientBackgroundBase(const GradientBackgroundBase &source) :
    Inherited(source),
    _mfColor                  (source._mfColor                  ),
    _mfPosition               (source._mfPosition               ),
    _sfNormPosition           (source._sfNormPosition           ),
    _sfStyle                  (source._sfStyle                  )
{
}


/*-------------------------- destructors ----------------------------------*/

GradientBackgroundBase::~GradientBackgroundBase(void)
{
}


GetFieldHandlePtr GradientBackgroundBase::getHandleColor           (void) const
{
    MFColor3f::GetHandlePtr returnValue(
        new  MFColor3f::GetHandle(
             &_mfColor,
             this->getType().getFieldDesc(ColorFieldId),
             const_cast<GradientBackgroundBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr GradientBackgroundBase::editHandleColor          (void)
{
    MFColor3f::EditHandlePtr returnValue(
        new  MFColor3f::EditHandle(
             &_mfColor,
             this->getType().getFieldDesc(ColorFieldId),
             this));


    editMField(ColorFieldMask, _mfColor);

    return returnValue;
}

GetFieldHandlePtr GradientBackgroundBase::getHandlePosition        (void) const
{
    MFReal32::GetHandlePtr returnValue(
        new  MFReal32::GetHandle(
             &_mfPosition,
             this->getType().getFieldDesc(PositionFieldId),
             const_cast<GradientBackgroundBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr GradientBackgroundBase::editHandlePosition       (void)
{
    MFReal32::EditHandlePtr returnValue(
        new  MFReal32::EditHandle(
             &_mfPosition,
             this->getType().getFieldDesc(PositionFieldId),
             this));


    editMField(PositionFieldMask, _mfPosition);

    return returnValue;
}

GetFieldHandlePtr GradientBackgroundBase::getHandleNormPosition    (void) const
{
    SFBool::GetHandlePtr returnValue(
        new  SFBool::GetHandle(
             &_sfNormPosition,
             this->getType().getFieldDesc(NormPositionFieldId),
             const_cast<GradientBackgroundBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr GradientBackgroundBase::editHandleNormPosition   (void)
{
    SFBool::EditHandlePtr returnValue(
        new  SFBool::EditHandle(
             &_sfNormPosition,
             this->getType().getFieldDesc(NormPositionFieldId),
             this));


    editSField(NormPositionFieldMask);

    return returnValue;
}

GetFieldHandlePtr GradientBackgroundBase::getHandleStyle           (void) const
{
    SFUInt32::GetHandlePtr returnValue(
        new  SFUInt32::GetHandle(
             &_sfStyle,
             this->getType().getFieldDesc(StyleFieldId),
             const_cast<GradientBackgroundBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr GradientBackgroundBase::editHandleStyle          (void)
{
    SFUInt32::EditHandlePtr returnValue(
        new  SFUInt32::EditHandle(
             &_sfStyle,
             this->getType().getFieldDesc(StyleFieldId),
             this));


    editSField(StyleFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void GradientBackgroundBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    GradientBackground *pThis = static_cast<GradientBackground *>(this);

    pThis->execSync(static_cast<GradientBackground *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *GradientBackgroundBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    GradientBackground *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const GradientBackground *>(pRefAspect),
                  dynamic_cast<const GradientBackground *>(this));

    return returnValue;
}
#endif

void GradientBackgroundBase::resolveLinks(void)
{
    Inherited::resolveLinks();

#ifdef OSG_MT_CPTR_ASPECT
    AspectOffsetStore oOffsets;

    _pAspectStore->fillOffsetArray(oOffsets, this);
#endif

#ifdef OSG_MT_CPTR_ASPECT
    _mfColor.terminateShare(Thread::getCurrentAspect(),
                                      oOffsets);
#endif
#ifdef OSG_MT_CPTR_ASPECT
    _mfPosition.terminateShare(Thread::getCurrentAspect(),
                                      oOffsets);
#endif
}


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<GradientBackground *>::_type("GradientBackgroundPtr", "TileableBackgroundPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(GradientBackground *)


OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           GradientBackground *,
                           0);

OSG_END_NAMESPACE
