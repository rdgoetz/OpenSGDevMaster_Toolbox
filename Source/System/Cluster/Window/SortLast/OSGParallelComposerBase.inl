/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
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
 **     class ParallelComposer!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &ParallelComposerBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 ParallelComposerBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 ParallelComposerBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the ParallelComposer::_sfShort field.

inline
bool &ParallelComposerBase::editShort(void)
{
    editSField(ShortFieldMask);

    return _sfShort.getValue();
}

//! Get the value of the ParallelComposer::_sfShort field.
inline
      bool  ParallelComposerBase::getShort(void) const
{
    return _sfShort.getValue();
}

//! Set the value of the ParallelComposer::_sfShort field.
inline
void ParallelComposerBase::setShort(const bool value)
{
    editSField(ShortFieldMask);

    _sfShort.setValue(value);
}
//! Get the value of the ParallelComposer::_sfAlpha field.

inline
bool &ParallelComposerBase::editAlpha(void)
{
    editSField(AlphaFieldMask);

    return _sfAlpha.getValue();
}

//! Get the value of the ParallelComposer::_sfAlpha field.
inline
      bool  ParallelComposerBase::getAlpha(void) const
{
    return _sfAlpha.getValue();
}

//! Set the value of the ParallelComposer::_sfAlpha field.
inline
void ParallelComposerBase::setAlpha(const bool value)
{
    editSField(AlphaFieldMask);

    _sfAlpha.setValue(value);
}
//! Get the value of the ParallelComposer::_sfPcLibPath field.

inline
std::string &ParallelComposerBase::editPcLibPath(void)
{
    editSField(PcLibPathFieldMask);

    return _sfPcLibPath.getValue();
}

//! Get the value of the ParallelComposer::_sfPcLibPath field.
inline
const std::string &ParallelComposerBase::getPcLibPath(void) const
{
    return _sfPcLibPath.getValue();
}

//! Set the value of the ParallelComposer::_sfPcLibPath field.
inline
void ParallelComposerBase::setPcLibPath(const std::string &value)
{
    editSField(PcLibPathFieldMask);

    _sfPcLibPath.setValue(value);
}


#ifdef OSG_MT_CPTR_ASPECT
inline
void ParallelComposerBase::execSync (      ParallelComposerBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (ShortFieldMask & whichField))
        _sfShort.syncWith(pFrom->_sfShort);

    if(FieldBits::NoField != (AlphaFieldMask & whichField))
        _sfAlpha.syncWith(pFrom->_sfAlpha);

    if(FieldBits::NoField != (PcLibPathFieldMask & whichField))
        _sfPcLibPath.syncWith(pFrom->_sfPcLibPath);
}
#endif


inline
const Char8 *ParallelComposerBase::getClassname(void)
{
    return "ParallelComposer";
}
OSG_GEN_CONTAINERPTR(ParallelComposer);

OSG_END_NAMESPACE

