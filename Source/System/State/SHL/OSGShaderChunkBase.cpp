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
 **     class ShaderChunk!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILESHADERCHUNKINST

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>




#include "OSGShaderChunkBase.h"
#include "OSGShaderChunk.h"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::ShaderChunk
    
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var std::string     ShaderChunkBase::_sfVertexProgram
    vertex program source
*/

/*! \var std::string     ShaderChunkBase::_sfFragmentProgram
    fragment program source
*/


void ShaderChunkBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


#ifdef OSG_1_COMPAT
    typedef const SFString *(ShaderChunkBase::*GetSFVertexProgramF)(void) const;

    GetSFVertexProgramF GetSFVertexProgram = &ShaderChunkBase::getSFVertexProgram;
#endif

    pDesc = new SFString::Description(
        SFString::getClassType(),
        "vertexProgram",
        "vertex program source\n",
        VertexProgramFieldId, VertexProgramFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&ShaderChunkBase::editSFVertexProgram),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFVertexProgram));
#else
        reinterpret_cast<FieldGetMethodSig >(&ShaderChunkBase::getSFVertexProgram));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_COMPAT
    typedef const SFString *(ShaderChunkBase::*GetSFFragmentProgramF)(void) const;

    GetSFFragmentProgramF GetSFFragmentProgram = &ShaderChunkBase::getSFFragmentProgram;
#endif

    pDesc = new SFString::Description(
        SFString::getClassType(),
        "fragmentProgram",
        "fragment program source\n",
        FragmentProgramFieldId, FragmentProgramFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&ShaderChunkBase::editSFFragmentProgram),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFFragmentProgram));
#else
        reinterpret_cast<FieldGetMethodSig >(&ShaderChunkBase::getSFFragmentProgram));
#endif

    oType.addInitialDesc(pDesc);
}


ShaderChunkBase::TypeObject ShaderChunkBase::_type(true,
    ShaderChunkBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    NULL,
    ShaderChunk::initMethod,
    (InitalInsertDescFunc) &ShaderChunkBase::classDescInserter,
    false,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"ShaderChunk\"\n"
    "\tparent=\"ShaderParameterChunk\"\n"
    "\tlibrary=\"State\"\n"
    "\tpointerfieldtypes=\"both\"\n"
    "\tstructure=\"abstract\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    "\tdecoratable=\"false\"\n"
    "\tuseLocalIncludes=\"false\"\n"
    ">\n"
    "\t<Field\n"
    "\t\tname=\"vertexProgram\"\n"
    "\t\ttype=\"std::string\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tvertex program source\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"fragmentProgram\"\n"
    "\t\ttype=\"std::string\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tfragment program source\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &ShaderChunkBase::getType(void)
{
    return _type;
}

const FieldContainerType &ShaderChunkBase::getType(void) const
{
    return _type;
}

UInt32 ShaderChunkBase::getContainerSize(void) const
{
    return sizeof(ShaderChunk);
}

/*------------------------- decorator get ------------------------------*/


SFString *ShaderChunkBase::editSFVertexProgram(void)
{
    editSField(VertexProgramFieldMask);

    return &_sfVertexProgram;
}

const SFString *ShaderChunkBase::getSFVertexProgram(void) const
{
    return &_sfVertexProgram;
}

#ifdef OSG_1_COMPAT
SFString            *ShaderChunkBase::getSFVertexProgram  (void)
{
    return this->editSFVertexProgram  ();
}
#endif

SFString *ShaderChunkBase::editSFFragmentProgram(void)
{
    editSField(FragmentProgramFieldMask);

    return &_sfFragmentProgram;
}

const SFString *ShaderChunkBase::getSFFragmentProgram(void) const
{
    return &_sfFragmentProgram;
}

#ifdef OSG_1_COMPAT
SFString            *ShaderChunkBase::getSFFragmentProgram(void)
{
    return this->editSFFragmentProgram();
}
#endif





/*------------------------------ access -----------------------------------*/

UInt32 ShaderChunkBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (VertexProgramFieldMask & whichField))
    {
        returnValue += _sfVertexProgram.getBinSize();
    }
    if(FieldBits::NoField != (FragmentProgramFieldMask & whichField))
    {
        returnValue += _sfFragmentProgram.getBinSize();
    }

    return returnValue;
}

void ShaderChunkBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (VertexProgramFieldMask & whichField))
    {
        _sfVertexProgram.copyToBin(pMem);
    }
    if(FieldBits::NoField != (FragmentProgramFieldMask & whichField))
    {
        _sfFragmentProgram.copyToBin(pMem);
    }
}

void ShaderChunkBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (VertexProgramFieldMask & whichField))
    {
        _sfVertexProgram.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (FragmentProgramFieldMask & whichField))
    {
        _sfFragmentProgram.copyFromBin(pMem);
    }
}



/*------------------------- constructors ----------------------------------*/

ShaderChunkBase::ShaderChunkBase(void) :
    Inherited(),
    _sfVertexProgram          (),
    _sfFragmentProgram        ()
{
}

ShaderChunkBase::ShaderChunkBase(const ShaderChunkBase &source) :
    Inherited(source),
    _sfVertexProgram          (source._sfVertexProgram          ),
    _sfFragmentProgram        (source._sfFragmentProgram        )
{
}

/*-------------------------- destructors ----------------------------------*/

ShaderChunkBase::~ShaderChunkBase(void)
{
}


#ifdef OSG_MT_FIELDCONTAINERPTR
void ShaderChunkBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo,
                                        UInt32             uiCopyOffset)
{
    this->execSync(static_cast<ShaderChunkBase *>(&oFrom),
                   whichField,
                   syncMode,
                   uiSyncInfo,
                   uiCopyOffset);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
void ShaderChunkBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<ShaderChunkBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif

#if 0
void ShaderChunkBase::execBeginEditV(ConstFieldMaskArg whichField,
                                       UInt32            uiAspect,
                                       UInt32            uiContainerSize)
{
    this->execBeginEdit(whichField, uiAspect, uiContainerSize);
}
#endif


void ShaderChunkBase::resolveLinks(void)
{
    Inherited::resolveLinks();
}


OSG_END_NAMESPACE

#include "OSGSFieldAdaptor.ins"
#include "OSGMFieldAdaptor.ins"

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<ShaderChunkPtr>::_type("ShaderChunkPtr", "ShaderParameterChunkPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(ShaderChunkPtr)

OSG_FIELD_DLLEXPORT_DEF2(SFieldAdaptor, ShaderChunkPtr, SFFieldContainerPtr);
OSG_FIELD_DLLEXPORT_DEF2(MFieldAdaptor, ShaderChunkPtr, MFFieldContainerPtr);

OSG_END_NAMESPACE
