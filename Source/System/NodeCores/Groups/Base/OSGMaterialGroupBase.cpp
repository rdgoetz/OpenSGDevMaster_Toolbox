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
 **     class MaterialGroup!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEMATERIALGROUPINST

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>



#include <OSGMaterial.h> // Material Class

#include "OSGMaterialGroupBase.h"
#include "OSGMaterialGroup.h"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::MaterialGroup
    MaterialGroup is a standard group node that allows for a material to be set
    that will override all materials in the entire subtree.  This can be useful
    if you want to disable materials in a subtree or if a large group of geometry
    nodes should have the same material applied.
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var MaterialPtr     MaterialGroupBase::_sfMaterial
    
*/


void MaterialGroupBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFMaterialPtr::Description(
        SFMaterialPtr::getClassType(),
        "material",
        "",
        MaterialFieldId, MaterialFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast     <FieldEditMethodSig>(&MaterialGroupBase::invalidEditField),
        reinterpret_cast<FieldGetMethodSig >(&MaterialGroupBase::getSFMaterial));

    oType.addInitialDesc(pDesc);
}


MaterialGroupBase::TypeObject MaterialGroupBase::_type(true,
    MaterialGroupBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    (PrototypeCreateF) &MaterialGroupBase::createEmpty,
    MaterialGroup::initMethod,
    (InitalInsertDescFunc) &MaterialGroupBase::classDescInserter,
    false,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"MaterialGroup\"\n"
    "\tparent=\"Group\"\n"
    "\tlibrary=\"System\"\n"
    "\tpointerfieldtypes=\"both\"\n"
    "\tstructure=\"concrete\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    "    isNodeCore=\"true\"\n"
    ">\n"
    "MaterialGroup is a standard group node that allows for a material to be set\n"
    "that will override all materials in the entire subtree.  This can be useful\n"
    "if you want to disable materials in a subtree or if a large group of geometry\n"
    "nodes should have the same material applied.\n"
    "\t<Field\n"
    "\t\tname=\"material\"\n"
    "\t\ttype=\"MaterialPtr\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\theader=\"OSGMaterial.h\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    "MaterialGroup is a standard group node that allows for a material to be set\n"
    "that will override all materials in the entire subtree.  This can be useful\n"
    "if you want to disable materials in a subtree or if a large group of geometry\n"
    "nodes should have the same material applied.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &MaterialGroupBase::getType(void)
{
    return _type;
}

const FieldContainerType &MaterialGroupBase::getType(void) const
{
    return _type;
}

UInt32 MaterialGroupBase::getContainerSize(void) const
{
    return sizeof(MaterialGroup);
}

/*------------------------- decorator get ------------------------------*/


//! Get the MaterialGroup::_sfMaterial field.
const SFMaterialPtr *MaterialGroupBase::getSFMaterial(void) const
{
    return &_sfMaterial;
}


void MaterialGroupBase::pushToField(      FieldContainerPtrConstArg pNewElement,
                                    const UInt32                    uiFieldId  )
{
    Inherited::pushToField(pNewElement, uiFieldId);

    if(uiFieldId == MaterialFieldId)
    {
        static_cast<MaterialGroup *>(this)->setMaterial(
            cast_dynamic<MaterialPtr>(pNewElement));
    }
}

void MaterialGroupBase::insertIntoMField(const UInt32                    uiIndex,
                                               FieldContainerPtrConstArg pNewElement,
                                         const UInt32                    uiFieldId  )
{
    Inherited::insertIntoMField(uiIndex, pNewElement, uiFieldId);

}

void MaterialGroupBase::replaceInMField (const UInt32                    uiIndex,
                                               FieldContainerPtrConstArg pNewElement,
                                         const UInt32                    uiFieldId)
{
    Inherited::replaceInMField(uiIndex, pNewElement, uiFieldId);

}

void MaterialGroupBase::replaceInMField (      FieldContainerPtrConstArg pOldElement,
                                               FieldContainerPtrConstArg pNewElement,
                                         const UInt32                    uiFieldId  )
{
    Inherited::replaceInMField(pOldElement, pNewElement, uiFieldId);

}

void MaterialGroupBase::removeFromMField(const UInt32 uiIndex,
                                         const UInt32 uiFieldId)
{
    Inherited::removeFromMField(uiIndex, uiFieldId);

}

void MaterialGroupBase::removeFromMField(      FieldContainerPtrConstArg pElement,
                                         const UInt32                    uiFieldId)
{
    Inherited::removeFromMField(pElement, uiFieldId);

}

void MaterialGroupBase::clearField(const UInt32 uiFieldId)
{
    Inherited::clearField(uiFieldId);

    if(uiFieldId == MaterialFieldId)
    {
        static_cast<MaterialGroup *>(this)->setMaterial(NullFC);
    }
}



/*------------------------------ access -----------------------------------*/

UInt32 MaterialGroupBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (MaterialFieldMask & whichField))
    {
        returnValue += _sfMaterial.getBinSize();
    }

    return returnValue;
}

void MaterialGroupBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (MaterialFieldMask & whichField))
    {
        _sfMaterial.copyToBin(pMem);
    }
}

void MaterialGroupBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (MaterialFieldMask & whichField))
    {
        _sfMaterial.copyFromBin(pMem);
    }
}

//! create an empty new instance of the class, do not copy the prototype
MaterialGroupPtr MaterialGroupBase::createEmpty(void)
{
    MaterialGroupPtr returnValue;

    newPtr<MaterialGroup>(returnValue);

    return returnValue;
}

FieldContainerPtr MaterialGroupBase::shallowCopy(void) const
{
    MaterialGroupPtr returnValue;

    newPtr(returnValue, dynamic_cast<const MaterialGroup *>(this));

    return returnValue;
}



/*------------------------- constructors ----------------------------------*/

MaterialGroupBase::MaterialGroupBase(void) :
    Inherited(),
    _sfMaterial               ()
{
}

MaterialGroupBase::MaterialGroupBase(const MaterialGroupBase &source) :
    Inherited(source),
    _sfMaterial               ()
{
}

/*-------------------------- destructors ----------------------------------*/

MaterialGroupBase::~MaterialGroupBase(void)
{
}

void MaterialGroupBase::onCreate(const MaterialGroup *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {

        this->setMaterial(source->getMaterial());
    }
}

#ifdef OSG_MT_FIELDCONTAINERPTR
void MaterialGroupBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo,
                                        UInt32             uiCopyOffset)
{
    this->execSync(static_cast<MaterialGroupBase *>(&oFrom),
                   whichField,
                   syncMode,
                   uiSyncInfo,
                   uiCopyOffset);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
void MaterialGroupBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<MaterialGroupBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif

#if 0
void MaterialGroupBase::execBeginEditV(ConstFieldMaskArg whichField,
                                       UInt32            uiAspect,
                                       UInt32            uiContainerSize)
{
    this->execBeginEdit(whichField, uiAspect, uiContainerSize);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
FieldContainerPtr MaterialGroupBase::createAspectCopy(void) const
{
    MaterialGroupPtr returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const MaterialGroup *>(this));

    return returnValue;
}
#endif

void MaterialGroupBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<MaterialGroup *>(this)->setMaterial(NullFC);
}


OSG_END_NAMESPACE

#include "OSGSFieldAdaptor.ins"
#include "OSGMFieldAdaptor.ins"

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<MaterialGroupPtr>::_type("MaterialGroupPtr", "GroupPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(MaterialGroupPtr)

OSG_FIELD_DLLEXPORT_DEF2(SFieldAdaptor, MaterialGroupPtr, SFFieldContainerPtr);
OSG_FIELD_DLLEXPORT_DEF2(MFieldAdaptor, MaterialGroupPtr, MFFieldContainerPtr);

OSG_END_NAMESPACE
