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
 **     class MoveManipulator!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include "OSGConfig.h"




#include "OSGMoveManipulatorBase.h"
#include "OSGMoveManipulator.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::MoveManipulator
    The MoveHandle is used for moving objects. It consist of three axis which can be picked and translated and one center box to translate freely in 3D.
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<MoveManipulator *>::_type("MoveManipulatorPtr", "ManipulatorPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(MoveManipulator *)

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void MoveManipulatorBase::classDescInserter(TypeObject &oType)
{
}


MoveManipulatorBase::TypeObject MoveManipulatorBase::_type(
    MoveManipulatorBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&MoveManipulatorBase::createEmptyLocal),
    MoveManipulator::initMethod,
    MoveManipulator::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&MoveManipulator::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"MoveManipulator\"\n"
    "\tparent=\"Manipulator\"\n"
    "\tlibrary=\"ContribGUI\"\n"
    "\tpointerfieldtypes=\"none\"\n"
    "\tstructure=\"concrete\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    "\tdecoratable=\"false\"\n"
    "\tuseLocalIncludes=\"true\"\n"
    ">\n"
    "The MoveHandle is used for moving objects. It consist of three axis which can be picked and translated and one center box to translate freely in 3D.\n"
    "</FieldContainer>\n",
    "The MoveHandle is used for moving objects. It consist of three axis which can be picked and translated and one center box to translate freely in 3D.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &MoveManipulatorBase::getType(void)
{
    return _type;
}

const FieldContainerType &MoveManipulatorBase::getType(void) const
{
    return _type;
}

UInt32 MoveManipulatorBase::getContainerSize(void) const
{
    return sizeof(MoveManipulator);
}

/*------------------------- decorator get ------------------------------*/






/*------------------------------ access -----------------------------------*/

UInt32 MoveManipulatorBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);


    return returnValue;
}

void MoveManipulatorBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

}

void MoveManipulatorBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

}

//! create a new instance of the class
MoveManipulatorTransitPtr MoveManipulatorBase::createLocal(BitVector bFlags)
{
    MoveManipulatorTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<MoveManipulator>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
MoveManipulatorTransitPtr MoveManipulatorBase::createDependent(BitVector bFlags)
{
    MoveManipulatorTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<MoveManipulator>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
MoveManipulatorTransitPtr MoveManipulatorBase::create(void)
{
    MoveManipulatorTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<MoveManipulator>(tmpPtr);
    }

    return fc;
}

MoveManipulator *MoveManipulatorBase::createEmptyLocal(BitVector bFlags)
{
    MoveManipulator *returnValue;

    newPtr<MoveManipulator>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
MoveManipulator *MoveManipulatorBase::createEmpty(void)
{
    MoveManipulator *returnValue;

    newPtr<MoveManipulator>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr MoveManipulatorBase::shallowCopyLocal(
    BitVector bFlags) const
{
    MoveManipulator *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const MoveManipulator *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr MoveManipulatorBase::shallowCopyDependent(
    BitVector bFlags) const
{
    MoveManipulator *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const MoveManipulator *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr MoveManipulatorBase::shallowCopy(void) const
{
    MoveManipulator *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const MoveManipulator *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

MoveManipulatorBase::MoveManipulatorBase(void) :
    Inherited()
{
}

MoveManipulatorBase::MoveManipulatorBase(const MoveManipulatorBase &source) :
    Inherited(source)
{
}


/*-------------------------- destructors ----------------------------------*/

MoveManipulatorBase::~MoveManipulatorBase(void)
{
}



#ifdef OSG_MT_CPTR_ASPECT
void MoveManipulatorBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    MoveManipulator *pThis = static_cast<MoveManipulator *>(this);

    pThis->execSync(static_cast<MoveManipulator *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *MoveManipulatorBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    MoveManipulator *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const MoveManipulator *>(pRefAspect),
                  dynamic_cast<const MoveManipulator *>(this));

    return returnValue;
}
#endif

void MoveManipulatorBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE
