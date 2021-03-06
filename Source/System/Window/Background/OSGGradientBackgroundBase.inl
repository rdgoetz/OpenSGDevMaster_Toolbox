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
 **     class GradientBackground!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &GradientBackgroundBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 GradientBackgroundBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 GradientBackgroundBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the GradientBackground::_sfNormPosition field.

inline
bool &GradientBackgroundBase::editNormPosition(void)
{
    editSField(NormPositionFieldMask);

    return _sfNormPosition.getValue();
}

//! Get the value of the GradientBackground::_sfNormPosition field.
inline
      bool  GradientBackgroundBase::getNormPosition(void) const
{
    return _sfNormPosition.getValue();
}

//! Set the value of the GradientBackground::_sfNormPosition field.
inline
void GradientBackgroundBase::setNormPosition(const bool value)
{
    editSField(NormPositionFieldMask);

    _sfNormPosition.setValue(value);
}
//! Get the value of the GradientBackground::_sfStyle field.

inline
UInt32 &GradientBackgroundBase::editStyle(void)
{
    editSField(StyleFieldMask);

    return _sfStyle.getValue();
}

//! Get the value of the GradientBackground::_sfStyle field.
inline
      UInt32  GradientBackgroundBase::getStyle(void) const
{
    return _sfStyle.getValue();
}

//! Set the value of the GradientBackground::_sfStyle field.
inline
void GradientBackgroundBase::setStyle(const UInt32 value)
{
    editSField(StyleFieldMask);

    _sfStyle.setValue(value);
}

//! Get the value of the \a index element the GradientBackground::_mfColor field.
inline
const Color3f &GradientBackgroundBase::getColor(const UInt32 index) const
{
    return _mfColor[index];
}

inline
Color3f &GradientBackgroundBase::editColor(const UInt32 index)
{
    editMField(ColorFieldMask, _mfColor);

    return _mfColor[index];
}


//! Get the value of the \a index element the GradientBackground::_mfPosition field.
inline
      Real32  GradientBackgroundBase::getPosition(const UInt32 index) const
{
    return _mfPosition[index];
}

inline
Real32 &GradientBackgroundBase::editPosition(const UInt32 index)
{
    editMField(PositionFieldMask, _mfPosition);

    return _mfPosition[index];
}



#ifdef OSG_MT_CPTR_ASPECT
inline
void GradientBackgroundBase::execSync (      GradientBackgroundBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (ColorFieldMask & whichField))
        _mfColor.syncWith(pFrom->_mfColor,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);

    if(FieldBits::NoField != (PositionFieldMask & whichField))
        _mfPosition.syncWith(pFrom->_mfPosition,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);

    if(FieldBits::NoField != (NormPositionFieldMask & whichField))
        _sfNormPosition.syncWith(pFrom->_sfNormPosition);

    if(FieldBits::NoField != (StyleFieldMask & whichField))
        _sfStyle.syncWith(pFrom->_sfStyle);
}
#endif


inline
const Char8 *GradientBackgroundBase::getClassname(void)
{
    return "GradientBackground";
}
OSG_GEN_CONTAINERPTR(GradientBackground);

OSG_END_NAMESPACE

