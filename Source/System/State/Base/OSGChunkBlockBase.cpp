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
 **     class ChunkBlock!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>



#include <OSGStateChunk.h> // Chunks Class

#include "OSGChunkBlockBase.h"
#include "OSGChunkBlock.h"

#include "boost/bind.hpp"

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::ChunkBlock
    
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var StateChunk *    ChunkBlockBase::_mfChunks
    
*/


void ChunkBlockBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new MFUnrecStateChunkPtr::Description(
        MFUnrecStateChunkPtr::getClassType(),
        "chunks",
        "",
        ChunksFieldId, ChunksFieldMask,
        false,
        (Field::MFDefaultFlags | Field::FCustomAccess),
        static_cast<FieldEditMethodSig>(&ChunkBlock::editHandleChunks),
        static_cast<FieldGetMethodSig >(&ChunkBlock::getHandleChunks));

    oType.addInitialDesc(pDesc);
}


ChunkBlockBase::TypeObject ChunkBlockBase::_type(
    ChunkBlockBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&ChunkBlockBase::createEmptyLocal),
    ChunkBlock::initMethod,
    ChunkBlock::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&ChunkBlock::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"ChunkBlock\"\n"
    "\tparent=\"FieldContainer\"\n"
    "\tlibrary=\"System\"\n"
    "\tpointerfieldtypes=\"both\"\n"
    "\tstructure=\"concrete\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    "    isNodeCore=\"false\"\n"
    ">\n"
    "\t<Field\n"
    "\t\tname=\"chunks\"\n"
    "\t\ttype=\"StateChunkPtr\"\n"
    "\t\tcardinality=\"multi\"\n"
    "\t\tvisibility=\"external\"\n"
    "        access=\"protected\"\n"
    "        ptrFieldAccess = \"custom\"\n"
    "        pushToFieldAs=\"pushToChunks\"\n"
    "    >\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &ChunkBlockBase::getType(void)
{
    return _type;
}

const FieldContainerType &ChunkBlockBase::getType(void) const
{
    return _type;
}

UInt32 ChunkBlockBase::getContainerSize(void) const
{
    return sizeof(ChunkBlock);
}

/*------------------------- decorator get ------------------------------*/


//! Get the ChunkBlock::_mfChunks field.
const MFUnrecStateChunkPtr *ChunkBlockBase::getMFChunks(void) const
{
    return &_mfChunks;
}






/*------------------------------ access -----------------------------------*/

UInt32 ChunkBlockBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (ChunksFieldMask & whichField))
    {
        returnValue += _mfChunks.getBinSize();
    }

    return returnValue;
}

void ChunkBlockBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (ChunksFieldMask & whichField))
    {
        _mfChunks.copyToBin(pMem);
    }
}

void ChunkBlockBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (ChunksFieldMask & whichField))
    {
        _mfChunks.copyFromBin(pMem);
    }
}

//! create a new instance of the class
ChunkBlockTransitPtr ChunkBlockBase::createLocal(BitVector bFlags)
{
    ChunkBlockTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<ChunkBlock>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
ChunkBlockTransitPtr ChunkBlockBase::createDependent(BitVector bFlags)
{
    ChunkBlockTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<ChunkBlock>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
ChunkBlockTransitPtr ChunkBlockBase::create(void)
{
    ChunkBlockTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<ChunkBlock>(tmpPtr);
    }

    return fc;
}

ChunkBlock *ChunkBlockBase::createEmptyLocal(BitVector bFlags)
{
    ChunkBlock *returnValue;

    newPtr<ChunkBlock>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
ChunkBlock *ChunkBlockBase::createEmpty(void)
{
    ChunkBlock *returnValue;

    newPtr<ChunkBlock>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr ChunkBlockBase::shallowCopyLocal(
    BitVector bFlags) const
{
    ChunkBlock *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const ChunkBlock *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr ChunkBlockBase::shallowCopyDependent(
    BitVector bFlags) const
{
    ChunkBlock *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const ChunkBlock *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr ChunkBlockBase::shallowCopy(void) const
{
    ChunkBlock *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const ChunkBlock *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

ChunkBlockBase::ChunkBlockBase(void) :
    Inherited(),
    _mfChunks                 ()
{
}

ChunkBlockBase::ChunkBlockBase(const ChunkBlockBase &source) :
    Inherited(source),
    _mfChunks                 ()
{
}


/*-------------------------- destructors ----------------------------------*/

ChunkBlockBase::~ChunkBlockBase(void)
{
}

void ChunkBlockBase::onCreate(const ChunkBlock *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {
        ChunkBlock *pThis = static_cast<ChunkBlock *>(this);

        MFUnrecStateChunkPtr::const_iterator ChunksIt  =
            source->_mfChunks.begin();
        MFUnrecStateChunkPtr::const_iterator ChunksEnd =
            source->_mfChunks.end  ();

        while(ChunksIt != ChunksEnd)
        {
            pThis->pushToChunks(*ChunksIt);

            ++ChunksIt;
        }
    }
}

GetFieldHandlePtr ChunkBlockBase::getHandleChunks          (void) const
{
    MFUnrecStateChunkPtr::GetHandlePtr returnValue(
        new  MFUnrecStateChunkPtr::GetHandle(
             &_mfChunks,
             this->getType().getFieldDesc(ChunksFieldId),
             const_cast<ChunkBlockBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr ChunkBlockBase::editHandleChunks         (void)
{
    MFUnrecStateChunkPtr::EditHandlePtr returnValue(
        new  MFUnrecStateChunkPtr::EditHandle(
             &_mfChunks,
             this->getType().getFieldDesc(ChunksFieldId),
             this));

    returnValue->setAddMethod(
        boost::bind(&ChunkBlock::pushToChunks,
                    static_cast<ChunkBlock *>(this), _1));

    editMField(ChunksFieldMask, _mfChunks);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void ChunkBlockBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    ChunkBlock *pThis = static_cast<ChunkBlock *>(this);

    pThis->execSync(static_cast<ChunkBlock *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *ChunkBlockBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    ChunkBlock *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const ChunkBlock *>(pRefAspect),
                  dynamic_cast<const ChunkBlock *>(this));

    return returnValue;
}
#endif

void ChunkBlockBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<ChunkBlock *>(this)->clearChunks();


}


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<ChunkBlock *>::_type("ChunkBlockPtr", "FieldContainerPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(ChunkBlock *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           ChunkBlock *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           ChunkBlock *,
                           0);

OSG_END_NAMESPACE