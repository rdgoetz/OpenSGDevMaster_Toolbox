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
 **     class DepthClearBackground!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include "OSGConfig.h"




#include "OSGDepthClearBackgroundBase.h"
#include "OSGDepthClearBackground.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::DepthClearBackground
    \ingroup GrpSystemWindowBackgrounds
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<DepthClearBackground *>::_type("DepthClearBackgroundPtr", "BackgroundPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(DepthClearBackground *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           DepthClearBackground *,
                           0);


/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void DepthClearBackgroundBase::classDescInserter(TypeObject &oType)
{
}


DepthClearBackgroundBase::TypeObject DepthClearBackgroundBase::_type(
    DepthClearBackgroundBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&DepthClearBackgroundBase::createEmptyLocal),
    DepthClearBackground::initMethod,
    DepthClearBackground::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&DepthClearBackground::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\" ?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"DepthClearBackground\"\n"
    "\tparent=\"Background\"\n"
    "\tlibrary=\"Window\"\n"
    "\tstructure=\"concrete\"\n"
    "\tpointerfieldtypes=\"single\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    ">\n"
    "\\ingroup GrpSystemWindowBackgrounds\n"
    "\n"
    "A depth-clear background, see \\ref PageSystemWindowBackgroundDepthClear for a\n"
    "description.\n"
    "</FieldContainer>\n",
    "\\ingroup GrpSystemWindowBackgrounds\n"
    "\n"
    "A depth-clear background, see \\ref PageSystemWindowBackgroundDepthClear for a\n"
    "description.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &DepthClearBackgroundBase::getType(void)
{
    return _type;
}

const FieldContainerType &DepthClearBackgroundBase::getType(void) const
{
    return _type;
}

UInt32 DepthClearBackgroundBase::getContainerSize(void) const
{
    return sizeof(DepthClearBackground);
}

/*------------------------- decorator get ------------------------------*/






/*------------------------------ access -----------------------------------*/

UInt32 DepthClearBackgroundBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);


    return returnValue;
}

void DepthClearBackgroundBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

}

void DepthClearBackgroundBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

}

//! create a new instance of the class
DepthClearBackgroundTransitPtr DepthClearBackgroundBase::createLocal(BitVector bFlags)
{
    DepthClearBackgroundTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<DepthClearBackground>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
DepthClearBackgroundTransitPtr DepthClearBackgroundBase::createDependent(BitVector bFlags)
{
    DepthClearBackgroundTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<DepthClearBackground>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
DepthClearBackgroundTransitPtr DepthClearBackgroundBase::create(void)
{
    DepthClearBackgroundTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<DepthClearBackground>(tmpPtr);
    }

    return fc;
}

DepthClearBackground *DepthClearBackgroundBase::createEmptyLocal(BitVector bFlags)
{
    DepthClearBackground *returnValue;

    newPtr<DepthClearBackground>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
DepthClearBackground *DepthClearBackgroundBase::createEmpty(void)
{
    DepthClearBackground *returnValue;

    newPtr<DepthClearBackground>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr DepthClearBackgroundBase::shallowCopyLocal(
    BitVector bFlags) const
{
    DepthClearBackground *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const DepthClearBackground *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr DepthClearBackgroundBase::shallowCopyDependent(
    BitVector bFlags) const
{
    DepthClearBackground *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const DepthClearBackground *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr DepthClearBackgroundBase::shallowCopy(void) const
{
    DepthClearBackground *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const DepthClearBackground *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

DepthClearBackgroundBase::DepthClearBackgroundBase(void) :
    Inherited()
{
}

DepthClearBackgroundBase::DepthClearBackgroundBase(const DepthClearBackgroundBase &source) :
    Inherited(source)
{
}


/*-------------------------- destructors ----------------------------------*/

DepthClearBackgroundBase::~DepthClearBackgroundBase(void)
{
}



#ifdef OSG_MT_CPTR_ASPECT
void DepthClearBackgroundBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    DepthClearBackground *pThis = static_cast<DepthClearBackground *>(this);

    pThis->execSync(static_cast<DepthClearBackground *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *DepthClearBackgroundBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    DepthClearBackground *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const DepthClearBackground *>(pRefAspect),
                  dynamic_cast<const DepthClearBackground *>(this));

    return returnValue;
}
#endif

void DepthClearBackgroundBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE
