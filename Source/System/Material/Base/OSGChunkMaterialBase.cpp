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
 **     class ChunkMaterial!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>



#include <OSGStateChunk.h> // Chunks Class

#include "OSGChunkMaterialBase.h"
#include "OSGChunkMaterial.h"

#include "boost/bind.hpp"

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::ChunkMaterial
    \ingroup GrpSystemMaterial

    The chunk material class. See \ref PageSystemMaterialChunkMaterial for a
    description.

    Chunks can be attached and detached from the material using
    OSG::ChunkMaterial::addChunk() and OSG::ChunkMaterial::subChunk(). For more
    complex manipulation of the chunk list use the OSG::ChunkMaterial::_mfChunks
    field's functions.
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var StateChunk *    ChunkMaterialBase::_mfChunks
    
*/

/*! \var Int32           ChunkMaterialBase::_mfSlots
    
*/


void ChunkMaterialBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new MFUnrecStateChunkPtr::Description(
        MFUnrecStateChunkPtr::getClassType(),
        "chunks",
        "",
        ChunksFieldId, ChunksFieldMask,
        false,
        (Field::MFDefaultFlags | Field::FCustomAccess),
        static_cast<FieldEditMethodSig>(&ChunkMaterial::editHandleChunks),
        static_cast<FieldGetMethodSig >(&ChunkMaterial::getHandleChunks));

    oType.addInitialDesc(pDesc);

    pDesc = new MFInt32::Description(
        MFInt32::getClassType(),
        "slots",
        "",
        SlotsFieldId, SlotsFieldMask,
        false,
        (Field::MFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ChunkMaterial::editHandleSlots),
        static_cast<FieldGetMethodSig >(&ChunkMaterial::getHandleSlots));

    oType.addInitialDesc(pDesc);
}


ChunkMaterialBase::TypeObject ChunkMaterialBase::_type(
    ChunkMaterialBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&ChunkMaterialBase::createEmptyLocal),
    ChunkMaterial::initMethod,
    ChunkMaterial::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&ChunkMaterial::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"ChunkMaterial\"\n"
    "\tparent=\"PrimeMaterial\"\n"
    "\tlibrary=\"System\"\n"
    "\tstructure=\"concrete\"\n"
    "\tpointerfieldtypes=\"both\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    ">\n"
    "\\ingroup GrpSystemMaterial\n"
    "\n"
    "The chunk material class. See \\ref PageSystemMaterialChunkMaterial for a\n"
    "description.\n"
    "\n"
    "Chunks can be attached and detached from the material using\n"
    "OSG::ChunkMaterial::addChunk() and OSG::ChunkMaterial::subChunk(). For more\n"
    "complex manipulation of the chunk list use the OSG::ChunkMaterial::_mfChunks\n"
    "field's functions.\n"
    "\t<Field\n"
    "\t\tname=\"chunks\"\n"
    "\t\ttype=\"StateChunkPtr\"\n"
    "\t\tcardinality=\"multi\"\n"
    "\t\tvisibility=\"external\"\n"
    "        access=\"protected\"\n"
    "        ptrFieldAccess = \"custom\"\n"
    "        pushToFieldAs=\"pushToChunks\"\n"
    "        removeFromMFieldIndexAs=\"removeFromChunks\"\n"
    "        removeFromMFieldObjectAs=\"removeFromChunksByObj\"\n"
    "        replaceInMFieldIndexAs=\"replaceChunk\"\n"
    "        hasPushToField=\"True\"\n"
    "        hasRemoveFromMFieldIndex=\"True\"\n"
    "        hasRemoveFromMFieldObject=\"True\"\n"
    "        hasReplaceInMFieldIndex=\"True\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"slots\"\n"
    "\t\ttype=\"Int32\"\n"
    "\t\tcardinality=\"multi\"\n"
    "\t\tvisibility=\"external\"\n"
    "        access=\"protected\"\n"
    "\t>\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    "\\ingroup GrpSystemMaterial\n"
    "\n"
    "The chunk material class. See \\ref PageSystemMaterialChunkMaterial for a\n"
    "description.\n"
    "\n"
    "Chunks can be attached and detached from the material using\n"
    "OSG::ChunkMaterial::addChunk() and OSG::ChunkMaterial::subChunk(). For more\n"
    "complex manipulation of the chunk list use the OSG::ChunkMaterial::_mfChunks\n"
    "field's functions.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &ChunkMaterialBase::getType(void)
{
    return _type;
}

const FieldContainerType &ChunkMaterialBase::getType(void) const
{
    return _type;
}

UInt32 ChunkMaterialBase::getContainerSize(void) const
{
    return sizeof(ChunkMaterial);
}

/*------------------------- decorator get ------------------------------*/


//! Get the ChunkMaterial::_mfChunks field.
const MFUnrecStateChunkPtr *ChunkMaterialBase::getMFChunks(void) const
{
    return &_mfChunks;
}

MFInt32 *ChunkMaterialBase::editMFSlots(void)
{
    editMField(SlotsFieldMask, _mfSlots);

    return &_mfSlots;
}

const MFInt32 *ChunkMaterialBase::getMFSlots(void) const
{
    return &_mfSlots;
}







/*------------------------------ access -----------------------------------*/

UInt32 ChunkMaterialBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (ChunksFieldMask & whichField))
    {
        returnValue += _mfChunks.getBinSize();
    }
    if(FieldBits::NoField != (SlotsFieldMask & whichField))
    {
        returnValue += _mfSlots.getBinSize();
    }

    return returnValue;
}

void ChunkMaterialBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (ChunksFieldMask & whichField))
    {
        _mfChunks.copyToBin(pMem);
    }
    if(FieldBits::NoField != (SlotsFieldMask & whichField))
    {
        _mfSlots.copyToBin(pMem);
    }
}

void ChunkMaterialBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (ChunksFieldMask & whichField))
    {
        _mfChunks.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (SlotsFieldMask & whichField))
    {
        _mfSlots.copyFromBin(pMem);
    }
}

//! create a new instance of the class
ChunkMaterialTransitPtr ChunkMaterialBase::createLocal(BitVector bFlags)
{
    ChunkMaterialTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<ChunkMaterial>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
ChunkMaterialTransitPtr ChunkMaterialBase::createDependent(BitVector bFlags)
{
    ChunkMaterialTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<ChunkMaterial>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
ChunkMaterialTransitPtr ChunkMaterialBase::create(void)
{
    ChunkMaterialTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<ChunkMaterial>(tmpPtr);
    }

    return fc;
}

ChunkMaterial *ChunkMaterialBase::createEmptyLocal(BitVector bFlags)
{
    ChunkMaterial *returnValue;

    newPtr<ChunkMaterial>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
ChunkMaterial *ChunkMaterialBase::createEmpty(void)
{
    ChunkMaterial *returnValue;

    newPtr<ChunkMaterial>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr ChunkMaterialBase::shallowCopyLocal(
    BitVector bFlags) const
{
    ChunkMaterial *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const ChunkMaterial *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr ChunkMaterialBase::shallowCopyDependent(
    BitVector bFlags) const
{
    ChunkMaterial *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const ChunkMaterial *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr ChunkMaterialBase::shallowCopy(void) const
{
    ChunkMaterial *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const ChunkMaterial *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

ChunkMaterialBase::ChunkMaterialBase(void) :
    Inherited(),
    _mfChunks                 (),
    _mfSlots                  ()
{
}

ChunkMaterialBase::ChunkMaterialBase(const ChunkMaterialBase &source) :
    Inherited(source),
    _mfChunks                 (),
    _mfSlots                  (source._mfSlots                  )
{
}


/*-------------------------- destructors ----------------------------------*/

ChunkMaterialBase::~ChunkMaterialBase(void)
{
}

void ChunkMaterialBase::onCreate(const ChunkMaterial *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {
        ChunkMaterial *pThis = static_cast<ChunkMaterial *>(this);

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

GetFieldHandlePtr ChunkMaterialBase::getHandleChunks          (void) const
{
    MFUnrecStateChunkPtr::GetHandlePtr returnValue(
        new  MFUnrecStateChunkPtr::GetHandle(
             &_mfChunks,
             this->getType().getFieldDesc(ChunksFieldId),
             const_cast<ChunkMaterialBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr ChunkMaterialBase::editHandleChunks         (void)
{
    MFUnrecStateChunkPtr::EditHandlePtr returnValue(
        new  MFUnrecStateChunkPtr::EditHandle(
             &_mfChunks,
             this->getType().getFieldDesc(ChunksFieldId),
             this));

    returnValue->setAddMethod(
        boost::bind(&ChunkMaterial::pushToChunks,
                    static_cast<ChunkMaterial *>(this), _1));
    returnValue->setReplaceMethod(
        boost::bind(&ChunkMaterial::replaceChunk,
                    static_cast<ChunkMaterial *>(this), _1, _2));
    returnValue->setRemoveMethod(
        boost::bind(&ChunkMaterial::removeFromChunks,
                    static_cast<ChunkMaterial *>(this), _1));
    returnValue->setRemoveObjMethod(
        boost::bind(&ChunkMaterial::removeFromChunksByObj,
                    static_cast<ChunkMaterial *>(this), _1));

    editMField(ChunksFieldMask, _mfChunks);

    return returnValue;
}

GetFieldHandlePtr ChunkMaterialBase::getHandleSlots           (void) const
{
    MFInt32::GetHandlePtr returnValue(
        new  MFInt32::GetHandle(
             &_mfSlots,
             this->getType().getFieldDesc(SlotsFieldId),
             const_cast<ChunkMaterialBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr ChunkMaterialBase::editHandleSlots          (void)
{
    MFInt32::EditHandlePtr returnValue(
        new  MFInt32::EditHandle(
             &_mfSlots,
             this->getType().getFieldDesc(SlotsFieldId),
             this));


    editMField(SlotsFieldMask, _mfSlots);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void ChunkMaterialBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    ChunkMaterial *pThis = static_cast<ChunkMaterial *>(this);

    pThis->execSync(static_cast<ChunkMaterial *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *ChunkMaterialBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    ChunkMaterial *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const ChunkMaterial *>(pRefAspect),
                  dynamic_cast<const ChunkMaterial *>(this));

    return returnValue;
}
#endif

void ChunkMaterialBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<ChunkMaterial *>(this)->clearChunks();

#ifdef OSG_MT_CPTR_ASPECT
    AspectOffsetStore oOffsets;

    _pAspectStore->fillOffsetArray(oOffsets, this);
#endif

#ifdef OSG_MT_CPTR_ASPECT
    _mfSlots.terminateShare(Thread::getCurrentAspect(),
                                      oOffsets);
#endif
}


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<ChunkMaterial *>::_type("ChunkMaterialPtr", "PrimeMaterialPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(ChunkMaterial *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           ChunkMaterial *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           ChunkMaterial *,
                           0);

OSG_END_NAMESPACE
