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
 **     class ShaderVariableMatrix!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>




#include "OSGShaderVariableMatrixBase.h"
#include "OSGShaderVariableMatrix.h"

#include "boost/bind.hpp"

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::ShaderVariableMatrix
    
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var Matrix          ShaderVariableMatrixBase::_sfValue
    variable value
*/


void ShaderVariableMatrixBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFMatrix::Description(
        SFMatrix::getClassType(),
        "value",
        "variable value\n",
        ValueFieldId, ValueFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ShaderVariableMatrix::editHandleValue),
        static_cast<FieldGetMethodSig >(&ShaderVariableMatrix::getHandleValue));

    oType.addInitialDesc(pDesc);
}


ShaderVariableMatrixBase::TypeObject ShaderVariableMatrixBase::_type(
    ShaderVariableMatrixBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&ShaderVariableMatrixBase::createEmptyLocal),
    ShaderVariableMatrix::initMethod,
    ShaderVariableMatrix::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&ShaderVariableMatrix::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "   name=\"ShaderVariableMatrix\"\n"
    "   parent=\"ShaderValueVariable\"\n"
    "   library=\"System\"\n"
    "   pointerfieldtypes=\"both\"\n"
    "   structure=\"concrete\"\n"
    "   systemcomponent=\"true\"\n"
    "   parentsystemcomponent=\"true\"\n"
    "   decoratable=\"false\"\n"
    "   useLocalIncludes=\"false\"\n"
    "   docGroupBase=\"GrpSystemShader\"\n"
    "   >\n"
    "  <Field\n"
    "\t name=\"value\"\n"
    "\t type=\"Matrix\"\n"
    "\t cardinality=\"single\"\n"
    "\t visibility=\"external\"\n"
    "\t access=\"public\"\n"
    "\t >\n"
    "\tvariable value\n"
    "  </Field>\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &ShaderVariableMatrixBase::getType(void)
{
    return _type;
}

const FieldContainerType &ShaderVariableMatrixBase::getType(void) const
{
    return _type;
}

UInt32 ShaderVariableMatrixBase::getContainerSize(void) const
{
    return sizeof(ShaderVariableMatrix);
}

/*------------------------- decorator get ------------------------------*/


SFMatrix *ShaderVariableMatrixBase::editSFValue(void)
{
    editSField(ValueFieldMask);

    return &_sfValue;
}

const SFMatrix *ShaderVariableMatrixBase::getSFValue(void) const
{
    return &_sfValue;
}






/*------------------------------ access -----------------------------------*/

UInt32 ShaderVariableMatrixBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (ValueFieldMask & whichField))
    {
        returnValue += _sfValue.getBinSize();
    }

    return returnValue;
}

void ShaderVariableMatrixBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (ValueFieldMask & whichField))
    {
        _sfValue.copyToBin(pMem);
    }
}

void ShaderVariableMatrixBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (ValueFieldMask & whichField))
    {
        _sfValue.copyFromBin(pMem);
    }
}

//! create a new instance of the class
ShaderVariableMatrixTransitPtr ShaderVariableMatrixBase::createLocal(BitVector bFlags)
{
    ShaderVariableMatrixTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<ShaderVariableMatrix>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
ShaderVariableMatrixTransitPtr ShaderVariableMatrixBase::createDependent(BitVector bFlags)
{
    ShaderVariableMatrixTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<ShaderVariableMatrix>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
ShaderVariableMatrixTransitPtr ShaderVariableMatrixBase::create(void)
{
    ShaderVariableMatrixTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<ShaderVariableMatrix>(tmpPtr);
    }

    return fc;
}

ShaderVariableMatrix *ShaderVariableMatrixBase::createEmptyLocal(BitVector bFlags)
{
    ShaderVariableMatrix *returnValue;

    newPtr<ShaderVariableMatrix>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
ShaderVariableMatrix *ShaderVariableMatrixBase::createEmpty(void)
{
    ShaderVariableMatrix *returnValue;

    newPtr<ShaderVariableMatrix>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr ShaderVariableMatrixBase::shallowCopyLocal(
    BitVector bFlags) const
{
    ShaderVariableMatrix *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const ShaderVariableMatrix *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr ShaderVariableMatrixBase::shallowCopyDependent(
    BitVector bFlags) const
{
    ShaderVariableMatrix *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const ShaderVariableMatrix *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr ShaderVariableMatrixBase::shallowCopy(void) const
{
    ShaderVariableMatrix *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const ShaderVariableMatrix *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

ShaderVariableMatrixBase::ShaderVariableMatrixBase(void) :
    Inherited(),
    _sfValue                  ()
{
}

ShaderVariableMatrixBase::ShaderVariableMatrixBase(const ShaderVariableMatrixBase &source) :
    Inherited(source),
    _sfValue                  (source._sfValue                  )
{
}


/*-------------------------- destructors ----------------------------------*/

ShaderVariableMatrixBase::~ShaderVariableMatrixBase(void)
{
}


GetFieldHandlePtr ShaderVariableMatrixBase::getHandleValue           (void) const
{
    SFMatrix::GetHandlePtr returnValue(
        new  SFMatrix::GetHandle(
             &_sfValue,
             this->getType().getFieldDesc(ValueFieldId),
             const_cast<ShaderVariableMatrixBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr ShaderVariableMatrixBase::editHandleValue          (void)
{
    SFMatrix::EditHandlePtr returnValue(
        new  SFMatrix::EditHandle(
             &_sfValue,
             this->getType().getFieldDesc(ValueFieldId),
             this));


    editSField(ValueFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void ShaderVariableMatrixBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    ShaderVariableMatrix *pThis = static_cast<ShaderVariableMatrix *>(this);

    pThis->execSync(static_cast<ShaderVariableMatrix *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *ShaderVariableMatrixBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    ShaderVariableMatrix *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const ShaderVariableMatrix *>(pRefAspect),
                  dynamic_cast<const ShaderVariableMatrix *>(this));

    return returnValue;
}
#endif

void ShaderVariableMatrixBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<ShaderVariableMatrix *>::_type("ShaderVariableMatrixPtr", "ShaderValueVariablePtr");
#endif

OSG_FIELDTRAITS_GETTYPE(ShaderVariableMatrix *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           ShaderVariableMatrix *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           ShaderVariableMatrix *,
                           0);

OSG_END_NAMESPACE
