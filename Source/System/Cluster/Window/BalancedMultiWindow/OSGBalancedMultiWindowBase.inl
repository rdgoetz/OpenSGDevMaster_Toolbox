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
 **     class BalancedMultiWindow!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &BalancedMultiWindowBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 BalancedMultiWindowBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 BalancedMultiWindowBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the BalancedMultiWindow::_sfBalance field.

inline
bool &BalancedMultiWindowBase::editBalance(void)
{
    editSField(BalanceFieldMask);

    return _sfBalance.getValue();
}

//! Get the value of the BalancedMultiWindow::_sfBalance field.
inline
      bool  BalancedMultiWindowBase::getBalance(void) const
{
    return _sfBalance.getValue();
}

//! Set the value of the BalancedMultiWindow::_sfBalance field.
inline
void BalancedMultiWindowBase::setBalance(const bool value)
{
    editSField(BalanceFieldMask);

    _sfBalance.setValue(value);
}
//! Get the value of the BalancedMultiWindow::_sfBestCut field.

inline
bool &BalancedMultiWindowBase::editBestCut(void)
{
    editSField(BestCutFieldMask);

    return _sfBestCut.getValue();
}

//! Get the value of the BalancedMultiWindow::_sfBestCut field.
inline
      bool  BalancedMultiWindowBase::getBestCut(void) const
{
    return _sfBestCut.getValue();
}

//! Set the value of the BalancedMultiWindow::_sfBestCut field.
inline
void BalancedMultiWindowBase::setBestCut(const bool value)
{
    editSField(BestCutFieldMask);

    _sfBestCut.setValue(value);
}
//! Get the value of the BalancedMultiWindow::_sfShowBalancing field.

inline
bool &BalancedMultiWindowBase::editShowBalancing(void)
{
    editSField(ShowBalancingFieldMask);

    return _sfShowBalancing.getValue();
}

//! Get the value of the BalancedMultiWindow::_sfShowBalancing field.
inline
      bool  BalancedMultiWindowBase::getShowBalancing(void) const
{
    return _sfShowBalancing.getValue();
}

//! Set the value of the BalancedMultiWindow::_sfShowBalancing field.
inline
void BalancedMultiWindowBase::setShowBalancing(const bool value)
{
    editSField(ShowBalancingFieldMask);

    _sfShowBalancing.setValue(value);
}
//! Get the value of the BalancedMultiWindow::_sfTileSize field.

inline
UInt32 &BalancedMultiWindowBase::editTileSize(void)
{
    editSField(TileSizeFieldMask);

    return _sfTileSize.getValue();
}

//! Get the value of the BalancedMultiWindow::_sfTileSize field.
inline
      UInt32  BalancedMultiWindowBase::getTileSize(void) const
{
    return _sfTileSize.getValue();
}

//! Set the value of the BalancedMultiWindow::_sfTileSize field.
inline
void BalancedMultiWindowBase::setTileSize(const UInt32 value)
{
    editSField(TileSizeFieldMask);

    _sfTileSize.setValue(value);
}
//! Get the value of the BalancedMultiWindow::_sfShort field.

inline
bool &BalancedMultiWindowBase::editShort(void)
{
    editSField(ShortFieldMask);

    return _sfShort.getValue();
}

//! Get the value of the BalancedMultiWindow::_sfShort field.
inline
      bool  BalancedMultiWindowBase::getShort(void) const
{
    return _sfShort.getValue();
}

//! Set the value of the BalancedMultiWindow::_sfShort field.
inline
void BalancedMultiWindowBase::setShort(const bool value)
{
    editSField(ShortFieldMask);

    _sfShort.setValue(value);
}


#ifdef OSG_MT_CPTR_ASPECT
inline
void BalancedMultiWindowBase::execSync (      BalancedMultiWindowBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (BalanceFieldMask & whichField))
        _sfBalance.syncWith(pFrom->_sfBalance);

    if(FieldBits::NoField != (BestCutFieldMask & whichField))
        _sfBestCut.syncWith(pFrom->_sfBestCut);

    if(FieldBits::NoField != (ShowBalancingFieldMask & whichField))
        _sfShowBalancing.syncWith(pFrom->_sfShowBalancing);

    if(FieldBits::NoField != (TileSizeFieldMask & whichField))
        _sfTileSize.syncWith(pFrom->_sfTileSize);

    if(FieldBits::NoField != (ShortFieldMask & whichField))
        _sfShort.syncWith(pFrom->_sfShort);
}
#endif


inline
const Char8 *BalancedMultiWindowBase::getClassname(void)
{
    return "BalancedMultiWindow";
}
OSG_GEN_CONTAINERPTR(BalancedMultiWindow);

OSG_END_NAMESPACE

