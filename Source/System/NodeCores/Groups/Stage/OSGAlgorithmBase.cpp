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
 **     class Algorithm!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>




#include "OSGAlgorithmBase.h"
#include "OSGAlgorithm.h"

#include "boost/bind.hpp"

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::Algorithm
    
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/


void AlgorithmBase::classDescInserter(TypeObject &oType)
{
}


AlgorithmBase::TypeObject AlgorithmBase::_type(
    AlgorithmBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    NULL,
    Algorithm::initMethod,
    Algorithm::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&Algorithm::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"Algorithm\"\n"
    "\tparent=\"FieldContainer\"\n"
    "\tlibrary=\"Group\"\n"
    "\tpointerfieldtypes=\"both\"\n"
    "\tstructure=\"abstract\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    "\tdecoratable=\"false\"\n"
    "\tuseLocalIncludes=\"false\"\n"
    "    isNodeCore=\"false\"\n"
    ">\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &AlgorithmBase::getType(void)
{
    return _type;
}

const FieldContainerType &AlgorithmBase::getType(void) const
{
    return _type;
}

UInt32 AlgorithmBase::getContainerSize(void) const
{
    return sizeof(Algorithm);
}

/*------------------------- decorator get ------------------------------*/






/*------------------------------ access -----------------------------------*/

UInt32 AlgorithmBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);


    return returnValue;
}

void AlgorithmBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

}

void AlgorithmBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

}




/*------------------------- constructors ----------------------------------*/

AlgorithmBase::AlgorithmBase(void) :
    Inherited()
{
}

AlgorithmBase::AlgorithmBase(const AlgorithmBase &source) :
    Inherited(source)
{
}


/*-------------------------- destructors ----------------------------------*/

AlgorithmBase::~AlgorithmBase(void)
{
}



#ifdef OSG_MT_CPTR_ASPECT
void AlgorithmBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Algorithm *pThis = static_cast<Algorithm *>(this);

    pThis->execSync(static_cast<Algorithm *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif



void AlgorithmBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<Algorithm *>::_type("AlgorithmPtr", "FieldContainerPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(Algorithm *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           Algorithm *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           Algorithm *,
                           0);

OSG_END_NAMESPACE
