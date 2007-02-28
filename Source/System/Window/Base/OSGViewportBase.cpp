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
 **     class Viewport!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEVIEWPORTINST

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>



#include <OSGFieldContainer.h> // Parent Class
#include <OSGCamera.h> // Camera Class
#include <OSGNode.h> // Root Class
#include <OSGBackground.h> // Background Class
#include <OSGForeground.h> // Foregrounds Class

#include "OSGViewportBase.h"
#include "OSGViewport.h"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::Viewport
    \ingroup GrpSystemWindowsViewports

    A Viewport is a part of the Window it is attached to used for rendering. See
    \ref PageSystemWindowViewports for a description.

    The size of the viewport is defined by the _sfLeft, _sfRight, _sfBottom and
    _sfTop Fields. The Window this Viewport is attached is stored in _sfWindow.
    _sfBackground defines the background clearing method, the
    _sfRoot and _sfCamera Fields the scene being rendered and the camera used to
    view it. The optional _mfForegrounds define which information are added or
    actions are executed after the Viewport has been rendered.

    \ext

    To create a new Viewport the draw and render methods should be overridden. 

    \endext

    \dev

    When adding fields to the Viewport, make sure to add the code to copy them to
    all the different ClusterWindows!

    \enddev
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var Real32          ViewportBase::_sfLeft
    The left edge of the viewport. Values between 0 and 1 are relative to the size of
    the Window, values >1 are absolute pixel coordinates, value == -1 means the
    left border. All other values are illegal.
*/

/*! \var Real32          ViewportBase::_sfRight
    The right edge of the viewport. Values between 0 and 1 are relative to the size of
    the Window, values >1 are absolute pixel coordinates, value == -1 means the
    right border. All other values are illegal.
*/

/*! \var Real32          ViewportBase::_sfBottom
    The bottom edge of the viewport. Values between 0 and 1 are relative to the size of
    the Window, values >1 are absolute pixel coordinates, value == -1 means the
    bottom border. All other values are illegal.
*/

/*! \var Real32          ViewportBase::_sfTop
    The top edge of the viewport. Values between 0 and 1 are relative to the size of
    the Window, values >1 are absolute pixel coordinates, value == -1 means the
    top border. All other values are illegal.
*/

/*! \var ParentFieldContainerPtr ViewportBase::_sfParent
    The Window this viewport is contained in.
*/

/*! \var CameraPtr       ViewportBase::_sfCamera
    The Camera used to render the viewport.
*/

/*! \var NodePtr         ViewportBase::_sfRoot
    The root of the tree that is displayed in this viewport.
*/

/*! \var BackgroundPtr   ViewportBase::_sfBackground
    The background used to clear this viewport.
*/

/*! \var ForegroundPtr   ViewportBase::_mfForegrounds
    The foreground additions to the rendered image.
*/

/*! \var UInt32          ViewportBase::_sfTravMask
    The foreground additions to the rendered image.
*/

/*! \var Real32          ViewportBase::_sfDrawTime
    Drawtime of the last frame using this viewport.
*/


void ViewportBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


#ifdef OSG_1_COMPAT
    typedef const SFReal32 *(ViewportBase::*GetSFLeftF)(void) const;

    GetSFLeftF GetSFLeft = &ViewportBase::getSFLeft;
#endif

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "left",
        "The left edge of the viewport. Values between 0 and 1 are relative to the size of\n"
        "the Window, values >1 are absolute pixel coordinates, value == -1 means the\n"
        "left border. All other values are illegal.\n",
        LeftFieldId, LeftFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&ViewportBase::editSFLeft),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFLeft));
#else
        reinterpret_cast<FieldGetMethodSig >(&ViewportBase::getSFLeft));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_COMPAT
    typedef const SFReal32 *(ViewportBase::*GetSFRightF)(void) const;

    GetSFRightF GetSFRight = &ViewportBase::getSFRight;
#endif

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "right",
        "The right edge of the viewport. Values between 0 and 1 are relative to the size of\n"
        "the Window, values >1 are absolute pixel coordinates, value == -1 means the\n"
        "right border. All other values are illegal.\n",
        RightFieldId, RightFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&ViewportBase::editSFRight),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFRight));
#else
        reinterpret_cast<FieldGetMethodSig >(&ViewportBase::getSFRight));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_COMPAT
    typedef const SFReal32 *(ViewportBase::*GetSFBottomF)(void) const;

    GetSFBottomF GetSFBottom = &ViewportBase::getSFBottom;
#endif

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "bottom",
        "The bottom edge of the viewport. Values between 0 and 1 are relative to the size of\n"
        "the Window, values >1 are absolute pixel coordinates, value == -1 means the\n"
        "bottom border. All other values are illegal.\n",
        BottomFieldId, BottomFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&ViewportBase::editSFBottom),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFBottom));
#else
        reinterpret_cast<FieldGetMethodSig >(&ViewportBase::getSFBottom));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_COMPAT
    typedef const SFReal32 *(ViewportBase::*GetSFTopF)(void) const;

    GetSFTopF GetSFTop = &ViewportBase::getSFTop;
#endif

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "top",
        "The top edge of the viewport. Values between 0 and 1 are relative to the size of\n"
        "the Window, values >1 are absolute pixel coordinates, value == -1 means the\n"
        "top border. All other values are illegal.\n",
        TopFieldId, TopFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&ViewportBase::editSFTop),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFTop));
#else
        reinterpret_cast<FieldGetMethodSig >(&ViewportBase::getSFTop));
#endif

    oType.addInitialDesc(pDesc);

    pDesc = new SFParentFieldContainerPtr::Description(
        SFParentFieldContainerPtr::getClassType(),
        "parent",
        "The Window this viewport is contained in.\n",
        ParentFieldId, ParentFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast     <FieldEditMethodSig>(&ViewportBase::invalidEditField),
        reinterpret_cast<FieldGetMethodSig >(&ViewportBase::getSFParent));

    oType.addInitialDesc(pDesc);

    pDesc = new SFCameraPtr::Description(
        SFCameraPtr::getClassType(),
        "camera",
        "The Camera used to render the viewport.\n",
        CameraFieldId, CameraFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast     <FieldEditMethodSig>(&ViewportBase::invalidEditField),
        reinterpret_cast<FieldGetMethodSig >(&ViewportBase::getSFCamera));

    oType.addInitialDesc(pDesc);

    pDesc = new SFNodePtr::Description(
        SFNodePtr::getClassType(),
        "root",
        "The root of the tree that is displayed in this viewport.\n",
        RootFieldId, RootFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast     <FieldEditMethodSig>(&ViewportBase::invalidEditField),
        reinterpret_cast<FieldGetMethodSig >(&ViewportBase::getSFRoot));

    oType.addInitialDesc(pDesc);

    pDesc = new SFBackgroundPtr::Description(
        SFBackgroundPtr::getClassType(),
        "background",
        "The background used to clear this viewport.\n",
        BackgroundFieldId, BackgroundFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast     <FieldEditMethodSig>(&ViewportBase::invalidEditField),
        reinterpret_cast<FieldGetMethodSig >(&ViewportBase::getSFBackground));

    oType.addInitialDesc(pDesc);

    pDesc = new MFForegroundPtr::Description(
        MFForegroundPtr::getClassType(),
        "foregrounds",
        "The foreground additions to the rendered image.\n",
        ForegroundsFieldId, ForegroundsFieldMask,
        false,
        Field::MFDefaultFlags,
        static_cast     <FieldEditMethodSig>(&ViewportBase::invalidEditField),
        reinterpret_cast<FieldGetMethodSig >(&ViewportBase::getMFForegrounds));

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_COMPAT
    typedef const SFUInt32 *(ViewportBase::*GetSFTravMaskF)(void) const;

    GetSFTravMaskF GetSFTravMask = &ViewportBase::getSFTravMask;
#endif

    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(),
        "travMask",
        "The foreground additions to the rendered image.\n",
        TravMaskFieldId, TravMaskFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&ViewportBase::editSFTravMask),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFTravMask));
#else
        reinterpret_cast<FieldGetMethodSig >(&ViewportBase::getSFTravMask));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_COMPAT
    typedef const SFReal32 *(ViewportBase::*GetSFDrawTimeF)(void) const;

    GetSFDrawTimeF GetSFDrawTime = &ViewportBase::getSFDrawTime;
#endif

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "drawTime",
        "Drawtime of the last frame using this viewport.\n",
        DrawTimeFieldId, DrawTimeFieldMask,
        true,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&ViewportBase::editSFDrawTime),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFDrawTime));
#else
        reinterpret_cast<FieldGetMethodSig >(&ViewportBase::getSFDrawTime));
#endif

    oType.addInitialDesc(pDesc);
}


ViewportBase::TypeObject ViewportBase::_type(true,
    ViewportBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    (PrototypeCreateF) &ViewportBase::createEmpty,
    Viewport::initMethod,
    (InitalInsertDescFunc) &ViewportBase::classDescInserter,
    false,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"Viewport\"\n"
    "\tparent=\"AttachmentContainer\"\n"
    "\tlibrary=\"System\"\n"
    "\tpointerfieldtypes=\"both\"\n"
    "\tstructure=\"concrete\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    ">\n"
    "\\ingroup GrpSystemWindowsViewports\n"
    "\n"
    "A Viewport is a part of the Window it is attached to used for rendering. See\n"
    "\\ref PageSystemWindowViewports for a description.\n"
    "\n"
    "The size of the viewport is defined by the _sfLeft, _sfRight, _sfBottom and\n"
    "_sfTop Fields. The Window this Viewport is attached is stored in _sfWindow.\n"
    "_sfBackground defines the background clearing method, the\n"
    "_sfRoot and _sfCamera Fields the scene being rendered and the camera used to\n"
    "view it. The optional _mfForegrounds define which information are added or\n"
    "actions are executed after the Viewport has been rendered.\n"
    "\n"
    "\\ext\n"
    "\n"
    "To create a new Viewport the draw and render methods should be overridden. \n"
    "\n"
    "\\endext\n"
    "\n"
    "\\dev\n"
    "\n"
    "When adding fields to the Viewport, make sure to add the code to copy them to\n"
    "all the different ClusterWindows!\n"
    "\n"
    "\\enddev\n"
    "\t<Field\n"
    "\t\tname=\"left\"\n"
    "\t\ttype=\"Real32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tThe left edge of the viewport. Values between 0 and 1 are relative to the size of\n"
    "\tthe Window, values &gt; 1 are absolute pixel coordinates, value == -1 means the\n"
    "        left border. All other values are illegal.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"right\"\n"
    "\t\ttype=\"Real32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tThe right edge of the viewport. Values between 0 and 1 are relative to the size of\n"
    "\tthe Window, values &gt; 1 are absolute pixel coordinates, value == -1 means the\n"
    "\tright border. All other values are illegal.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"bottom\"\n"
    "\t\ttype=\"Real32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tThe bottom edge of the viewport. Values between 0 and 1 are relative to the size of\n"
    "\tthe Window, values &gt; 1 are absolute pixel coordinates, value == -1 means the\n"
    "\tbottom border. All other values are illegal.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"top\"\n"
    "\t\ttype=\"Real32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tThe top edge of the viewport. Values between 0 and 1 are relative to the size of\n"
    "\tthe Window, values &gt; 1 are absolute pixel coordinates, value == -1 means the\n"
    "\ttop border. All other values are illegal.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"parent\"\n"
    "\t\ttype=\"ParentFieldContainerPtr\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "        doRefCount=\"false\"\n"
    "        passFieldMask=\"true\"\n"
    "\t>\n"
    "\tThe Window this viewport is contained in.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"camera\"\n"
    "\t\ttype=\"CameraPtr\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tThe Camera used to render the viewport.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"root\"\n"
    "\t\ttype=\"NodePtr\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tThe root of the tree that is displayed in this viewport.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"background\"\n"
    "\t\ttype=\"BackgroundPtr\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tThe background used to clear this viewport.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"foregrounds\"\n"
    "\t\ttype=\"ForegroundPtr\"\n"
    "\t\tcardinality=\"multi\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "                pushToFieldAs=\"addForeground\"\n"
    "\t>\n"
    "\tThe foreground additions to the rendered image.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"travMask\"\n"
    "\t\ttype=\"UInt32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "                defaultValue=\"TypeTraits&lt;UInt32&gt;::getMax()\"\n"
    "\t>\n"
    "\tThe foreground additions to the rendered image.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"drawTime\"\n"
    "\t\ttype=\"Real32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"internal\"\n"
    "                defaultValue=\"0.0f\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tDrawtime of the last frame using this viewport.\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    "\\ingroup GrpSystemWindowsViewports\n"
    "\n"
    "A Viewport is a part of the Window it is attached to used for rendering. See\n"
    "\\ref PageSystemWindowViewports for a description.\n"
    "\n"
    "The size of the viewport is defined by the _sfLeft, _sfRight, _sfBottom and\n"
    "_sfTop Fields. The Window this Viewport is attached is stored in _sfWindow.\n"
    "_sfBackground defines the background clearing method, the\n"
    "_sfRoot and _sfCamera Fields the scene being rendered and the camera used to\n"
    "view it. The optional _mfForegrounds define which information are added or\n"
    "actions are executed after the Viewport has been rendered.\n"
    "\n"
    "\\ext\n"
    "\n"
    "To create a new Viewport the draw and render methods should be overridden. \n"
    "\n"
    "\\endext\n"
    "\n"
    "\\dev\n"
    "\n"
    "When adding fields to the Viewport, make sure to add the code to copy them to\n"
    "all the different ClusterWindows!\n"
    "\n"
    "\\enddev\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &ViewportBase::getType(void)
{
    return _type;
}

const FieldContainerType &ViewportBase::getType(void) const
{
    return _type;
}

UInt32 ViewportBase::getContainerSize(void) const
{
    return sizeof(Viewport);
}

/*------------------------- decorator get ------------------------------*/


SFReal32 *ViewportBase::editSFLeft(void)
{
    editSField(LeftFieldMask);

    return &_sfLeft;
}

const SFReal32 *ViewportBase::getSFLeft(void) const
{
    return &_sfLeft;
}

#ifdef OSG_1_COMPAT
SFReal32            *ViewportBase::getSFLeft           (void)
{
    return this->editSFLeft           ();
}
#endif

SFReal32 *ViewportBase::editSFRight(void)
{
    editSField(RightFieldMask);

    return &_sfRight;
}

const SFReal32 *ViewportBase::getSFRight(void) const
{
    return &_sfRight;
}

#ifdef OSG_1_COMPAT
SFReal32            *ViewportBase::getSFRight          (void)
{
    return this->editSFRight          ();
}
#endif

SFReal32 *ViewportBase::editSFBottom(void)
{
    editSField(BottomFieldMask);

    return &_sfBottom;
}

const SFReal32 *ViewportBase::getSFBottom(void) const
{
    return &_sfBottom;
}

#ifdef OSG_1_COMPAT
SFReal32            *ViewportBase::getSFBottom         (void)
{
    return this->editSFBottom         ();
}
#endif

SFReal32 *ViewportBase::editSFTop(void)
{
    editSField(TopFieldMask);

    return &_sfTop;
}

const SFReal32 *ViewportBase::getSFTop(void) const
{
    return &_sfTop;
}

#ifdef OSG_1_COMPAT
SFReal32            *ViewportBase::getSFTop            (void)
{
    return this->editSFTop            ();
}
#endif

//! Get the Viewport::_sfParent field.
const SFParentFieldContainerPtr *ViewportBase::getSFParent(void) const
{
    return &_sfParent;
}

//! Get the Viewport::_sfCamera field.
const SFCameraPtr *ViewportBase::getSFCamera(void) const
{
    return &_sfCamera;
}

//! Get the Viewport::_sfRoot field.
const SFNodePtr *ViewportBase::getSFRoot(void) const
{
    return &_sfRoot;
}

//! Get the Viewport::_sfBackground field.
const SFBackgroundPtr *ViewportBase::getSFBackground(void) const
{
    return &_sfBackground;
}

//! Get the Viewport::_mfForegrounds field.
const MFForegroundPtr *ViewportBase::getMFForegrounds(void) const
{
    return &_mfForegrounds;
}

SFUInt32 *ViewportBase::editSFTravMask(void)
{
    editSField(TravMaskFieldMask);

    return &_sfTravMask;
}

const SFUInt32 *ViewportBase::getSFTravMask(void) const
{
    return &_sfTravMask;
}

#ifdef OSG_1_COMPAT
SFUInt32            *ViewportBase::getSFTravMask       (void)
{
    return this->editSFTravMask       ();
}
#endif

SFReal32 *ViewportBase::editSFDrawTime(void)
{
    editSField(DrawTimeFieldMask);

    return &_sfDrawTime;
}

const SFReal32 *ViewportBase::getSFDrawTime(void) const
{
    return &_sfDrawTime;
}

#ifdef OSG_1_COMPAT
SFReal32            *ViewportBase::getSFDrawTime       (void)
{
    return this->editSFDrawTime       ();
}
#endif


void ViewportBase::pushToField(      FieldContainerPtrConstArg pNewElement,
                                    const UInt32                    uiFieldId  )
{
    Inherited::pushToField(pNewElement, uiFieldId);

    if(uiFieldId == ParentFieldId)
    {
        static_cast<Viewport *>(this)->setParent(
            cast_dynamic<ParentFieldContainerPtr>(pNewElement));
    }
    if(uiFieldId == CameraFieldId)
    {
        static_cast<Viewport *>(this)->setCamera(
            cast_dynamic<CameraPtr>(pNewElement));
    }
    if(uiFieldId == RootFieldId)
    {
        static_cast<Viewport *>(this)->setRoot(
            cast_dynamic<NodePtr>(pNewElement));
    }
    if(uiFieldId == BackgroundFieldId)
    {
        static_cast<Viewport *>(this)->setBackground(
            cast_dynamic<BackgroundPtr>(pNewElement));
    }
    if(uiFieldId == ForegroundsFieldId)
    {
        static_cast<Viewport *>(this)->addForeground(
            cast_dynamic<ForegroundPtr>(pNewElement));
    }
}

void ViewportBase::insertIntoMField(const UInt32                    uiIndex,
                                               FieldContainerPtrConstArg pNewElement,
                                         const UInt32                    uiFieldId  )
{
    Inherited::insertIntoMField(uiIndex, pNewElement, uiFieldId);

    if(uiFieldId == ForegroundsFieldId)
    {
        static_cast<Viewport *>(this)->insertIntoForegrounds(
            uiIndex,
            cast_dynamic<ForegroundPtr>(pNewElement));
    }
}

void ViewportBase::replaceInMField (const UInt32                    uiIndex,
                                               FieldContainerPtrConstArg pNewElement,
                                         const UInt32                    uiFieldId)
{
    Inherited::replaceInMField(uiIndex, pNewElement, uiFieldId);

    if(uiFieldId == ForegroundsFieldId)
    {
        static_cast<Viewport *>(this)->replaceInForegrounds(
            uiIndex,
            cast_dynamic<ForegroundPtr>(pNewElement));
    }
}

void ViewportBase::replaceInMField (      FieldContainerPtrConstArg pOldElement,
                                               FieldContainerPtrConstArg pNewElement,
                                         const UInt32                    uiFieldId  )
{
    Inherited::replaceInMField(pOldElement, pNewElement, uiFieldId);

    if(uiFieldId == ForegroundsFieldId)
    {
        static_cast<Viewport *>(this)->replaceInForegrounds(
            cast_dynamic<ForegroundPtr>(pOldElement),
            cast_dynamic<ForegroundPtr>(pNewElement));
    }
}

void ViewportBase::removeFromMField(const UInt32 uiIndex,
                                         const UInt32 uiFieldId)
{
    Inherited::removeFromMField(uiIndex, uiFieldId);

    if(uiFieldId == ForegroundsFieldId)
    {
        static_cast<Viewport *>(this)->removeFromForegrounds(
            uiIndex);
    }
}

void ViewportBase::removeFromMField(      FieldContainerPtrConstArg pElement,
                                         const UInt32                    uiFieldId)
{
    Inherited::removeFromMField(pElement, uiFieldId);

    if(uiFieldId == ForegroundsFieldId)
    {
        static_cast<Viewport *>(this)->removeFromForegrounds(
            cast_dynamic<ForegroundPtr>(pElement));
    }
}

void ViewportBase::clearField(const UInt32 uiFieldId)
{
    Inherited::clearField(uiFieldId);

    if(uiFieldId == ParentFieldId)
    {
        static_cast<Viewport *>(this)->setParent(NullFC);
    }
    if(uiFieldId == CameraFieldId)
    {
        static_cast<Viewport *>(this)->setCamera(NullFC);
    }
    if(uiFieldId == RootFieldId)
    {
        static_cast<Viewport *>(this)->setRoot(NullFC);
    }
    if(uiFieldId == BackgroundFieldId)
    {
        static_cast<Viewport *>(this)->setBackground(NullFC);
    }
    if(uiFieldId == ForegroundsFieldId)
    {
        static_cast<Viewport *>(this)->clearForegrounds();
    }
}

void ViewportBase::addForeground(ForegroundPtrConstArg value)
{
    if(value == NullFC)
        return;

    editMField(ForegroundsFieldMask, _mfForegrounds);

    addRef(value);

    _mfForegrounds.push_back(value);
}

void ViewportBase::insertIntoForegrounds(UInt32                uiIndex,
                                                   ForegroundPtrConstArg value   )
{
    if(value == NullFC)
        return;

    editMField(ForegroundsFieldMask, _mfForegrounds);

    MFForegroundPtr::iterator fieldIt = _mfForegrounds.begin();

    addRef(value);

    fieldIt += uiIndex;

    _mfForegrounds.insert(fieldIt, value);
}

void ViewportBase::replaceInForegrounds(UInt32                uiIndex,
                                                       ForegroundPtrConstArg value   )
{
    if(value == NullFC)
        return;

    if(uiIndex >= _mfForegrounds.size())
        return;

    editMField(ForegroundsFieldMask, _mfForegrounds);

    addRef(value);

    subRef(_mfForegrounds[uiIndex]);

    _mfForegrounds[uiIndex] = value;
}

void ViewportBase::replaceInForegrounds(ForegroundPtrConstArg pOldElem,
                                                        ForegroundPtrConstArg pNewElem)
{
    if(pNewElem == NullFC)
        return;

    Int32  elemIdx = _mfForegrounds.findIndex(pOldElem);

    if(elemIdx != -1)
    {
        editMField(ForegroundsFieldMask, _mfForegrounds);

        MFForegroundPtr::iterator fieldIt = _mfForegrounds.begin();

        fieldIt += elemIdx;

        addRef(pNewElem);
        subRef(pOldElem);

        (*fieldIt) = pNewElem;
    }
}

void ViewportBase::removeFromForegrounds(UInt32 uiIndex)
{
    if(uiIndex < _mfForegrounds.size())
    {
        editMField(ForegroundsFieldMask, _mfForegrounds);

        MFForegroundPtr::iterator fieldIt = _mfForegrounds.begin();

        fieldIt += uiIndex;

        subRef(*fieldIt);

        _mfForegrounds.erase(fieldIt);
    }
}

void ViewportBase::removeFromForegrounds(ForegroundPtrConstArg value)
{
    Int32 iElemIdx = _mfForegrounds.findIndex(value);

    if(iElemIdx != -1)
    {
        editMField(ForegroundsFieldMask, _mfForegrounds);

        MFForegroundPtr::iterator fieldIt = _mfForegrounds.begin();

        fieldIt += iElemIdx;

        subRef(*fieldIt);

        _mfForegrounds.erase(fieldIt);
    }
}
void ViewportBase::clearForegrounds(void)
{
    editMField(ForegroundsFieldMask, _mfForegrounds);

    MFForegroundPtr::iterator       fieldIt  = _mfForegrounds.begin();
    MFForegroundPtr::const_iterator fieldEnd = _mfForegrounds.end  ();

    while(fieldIt != fieldEnd)
    {
        subRef(*fieldIt);

        ++fieldIt;
    }

    _mfForegrounds.clear();
}



/*------------------------------ access -----------------------------------*/

UInt32 ViewportBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (LeftFieldMask & whichField))
    {
        returnValue += _sfLeft.getBinSize();
    }
    if(FieldBits::NoField != (RightFieldMask & whichField))
    {
        returnValue += _sfRight.getBinSize();
    }
    if(FieldBits::NoField != (BottomFieldMask & whichField))
    {
        returnValue += _sfBottom.getBinSize();
    }
    if(FieldBits::NoField != (TopFieldMask & whichField))
    {
        returnValue += _sfTop.getBinSize();
    }
    if(FieldBits::NoField != (ParentFieldMask & whichField))
    {
        returnValue += _sfParent.getBinSize();
    }
    if(FieldBits::NoField != (CameraFieldMask & whichField))
    {
        returnValue += _sfCamera.getBinSize();
    }
    if(FieldBits::NoField != (RootFieldMask & whichField))
    {
        returnValue += _sfRoot.getBinSize();
    }
    if(FieldBits::NoField != (BackgroundFieldMask & whichField))
    {
        returnValue += _sfBackground.getBinSize();
    }
    if(FieldBits::NoField != (ForegroundsFieldMask & whichField))
    {
        returnValue += _mfForegrounds.getBinSize();
    }
    if(FieldBits::NoField != (TravMaskFieldMask & whichField))
    {
        returnValue += _sfTravMask.getBinSize();
    }
    if(FieldBits::NoField != (DrawTimeFieldMask & whichField))
    {
        returnValue += _sfDrawTime.getBinSize();
    }

    return returnValue;
}

void ViewportBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (LeftFieldMask & whichField))
    {
        _sfLeft.copyToBin(pMem);
    }
    if(FieldBits::NoField != (RightFieldMask & whichField))
    {
        _sfRight.copyToBin(pMem);
    }
    if(FieldBits::NoField != (BottomFieldMask & whichField))
    {
        _sfBottom.copyToBin(pMem);
    }
    if(FieldBits::NoField != (TopFieldMask & whichField))
    {
        _sfTop.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ParentFieldMask & whichField))
    {
        _sfParent.copyToBin(pMem);
    }
    if(FieldBits::NoField != (CameraFieldMask & whichField))
    {
        _sfCamera.copyToBin(pMem);
    }
    if(FieldBits::NoField != (RootFieldMask & whichField))
    {
        _sfRoot.copyToBin(pMem);
    }
    if(FieldBits::NoField != (BackgroundFieldMask & whichField))
    {
        _sfBackground.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ForegroundsFieldMask & whichField))
    {
        _mfForegrounds.copyToBin(pMem);
    }
    if(FieldBits::NoField != (TravMaskFieldMask & whichField))
    {
        _sfTravMask.copyToBin(pMem);
    }
    if(FieldBits::NoField != (DrawTimeFieldMask & whichField))
    {
        _sfDrawTime.copyToBin(pMem);
    }
}

void ViewportBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (LeftFieldMask & whichField))
    {
        _sfLeft.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (RightFieldMask & whichField))
    {
        _sfRight.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (BottomFieldMask & whichField))
    {
        _sfBottom.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (TopFieldMask & whichField))
    {
        _sfTop.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ParentFieldMask & whichField))
    {
        _sfParent.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (CameraFieldMask & whichField))
    {
        _sfCamera.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (RootFieldMask & whichField))
    {
        _sfRoot.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (BackgroundFieldMask & whichField))
    {
        _sfBackground.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ForegroundsFieldMask & whichField))
    {
        _mfForegrounds.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (TravMaskFieldMask & whichField))
    {
        _sfTravMask.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (DrawTimeFieldMask & whichField))
    {
        _sfDrawTime.copyFromBin(pMem);
    }
}

//! create an empty new instance of the class, do not copy the prototype
ViewportPtr ViewportBase::createEmpty(void)
{
    ViewportPtr returnValue;

    newPtr<Viewport>(returnValue);

    return returnValue;
}

FieldContainerPtr ViewportBase::shallowCopy(void) const
{
    ViewportPtr returnValue;

    newPtr(returnValue, dynamic_cast<const Viewport *>(this));

    return returnValue;
}



/*------------------------- constructors ----------------------------------*/

ViewportBase::ViewportBase(void) :
    Inherited(),
    _sfLeft                   (),
    _sfRight                  (),
    _sfBottom                 (),
    _sfTop                    (),
    _sfParent                 (),
    _sfCamera                 (),
    _sfRoot                   (),
    _sfBackground             (),
    _mfForegrounds            (),
    _sfTravMask               (UInt32(TypeTraits<UInt32>::getMax())),
    _sfDrawTime               (Real32(0.0f))
{
}

ViewportBase::ViewportBase(const ViewportBase &source) :
    Inherited(source),
    _sfLeft                   (source._sfLeft                   ),
    _sfRight                  (source._sfRight                  ),
    _sfBottom                 (source._sfBottom                 ),
    _sfTop                    (source._sfTop                    ),
    _sfParent                 (),
    _sfCamera                 (),
    _sfRoot                   (),
    _sfBackground             (),
    _mfForegrounds            (),
    _sfTravMask               (source._sfTravMask               ),
    _sfDrawTime               (source._sfDrawTime               )
{
}

/*-------------------------- destructors ----------------------------------*/

ViewportBase::~ViewportBase(void)
{
}

void ViewportBase::onCreate(const Viewport *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {

        this->setParent(source->getParent());

        this->setCamera(source->getCamera());

        this->setRoot(source->getRoot());

        this->setBackground(source->getBackground());

        MFForegroundPtr::const_iterator ForegroundsIt  =
            source->_mfForegrounds.begin();
        MFForegroundPtr::const_iterator ForegroundsEnd =
            source->_mfForegrounds.end  ();

        while(ForegroundsIt != ForegroundsEnd)
        {
            this->addForeground(*ForegroundsIt);

            ++ForegroundsIt;
        }
    }
}

#ifdef OSG_MT_FIELDCONTAINERPTR
void ViewportBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo,
                                        UInt32             uiCopyOffset)
{
    this->execSync(static_cast<ViewportBase *>(&oFrom),
                   whichField,
                   syncMode,
                   uiSyncInfo,
                   uiCopyOffset);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
void ViewportBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<ViewportBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif

#if 0
void ViewportBase::execBeginEditV(ConstFieldMaskArg whichField,
                                       UInt32            uiAspect,
                                       UInt32            uiContainerSize)
{
    this->execBeginEdit(whichField, uiAspect, uiContainerSize);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
FieldContainerPtr ViewportBase::createAspectCopy(void) const
{
    ViewportPtr returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const Viewport *>(this));

    return returnValue;
}
#endif

void ViewportBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<Viewport *>(this)->setParent(NullFC);

    static_cast<Viewport *>(this)->setCamera(NullFC);

    static_cast<Viewport *>(this)->setRoot(NullFC);

    static_cast<Viewport *>(this)->setBackground(NullFC);

    static_cast<Viewport *>(this)->clearForegrounds();
}


OSG_END_NAMESPACE

#include "OSGSFieldAdaptor.ins"
#include "OSGMFieldAdaptor.ins"

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<ViewportPtr>::_type("ViewportPtr", "AttachmentContainerPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(ViewportPtr)

OSG_FIELD_DLLEXPORT_DEF2(SFieldAdaptor, ViewportPtr, SFFieldContainerPtr);
OSG_FIELD_DLLEXPORT_DEF2(MFieldAdaptor, ViewportPtr, MFFieldContainerPtr);

OSG_END_NAMESPACE
