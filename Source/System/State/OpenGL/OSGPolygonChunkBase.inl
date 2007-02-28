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
 **     class PolygonChunk!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &PolygonChunkBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 PolygonChunkBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 PolygonChunkBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the PolygonChunk::_sfCullFace field.

inline
GLenum &PolygonChunkBase::editCullFace(void)
{
    editSField(CullFaceFieldMask);

    return _sfCullFace.getValue();
}

//! Get the value of the PolygonChunk::_sfCullFace field.
inline
const GLenum &PolygonChunkBase::getCullFace(void) const
{
    return _sfCullFace.getValue();
}

#ifdef OSG_1_COMPAT
inline
GLenum              &PolygonChunkBase::getCullFace       (void)
{
    return this->editCullFace       ();
}
#endif

//! Set the value of the PolygonChunk::_sfCullFace field.
inline
void PolygonChunkBase::setCullFace(const GLenum &value)
{
    editSField(CullFaceFieldMask);

    _sfCullFace.setValue(value);
}
//! Get the value of the PolygonChunk::_sfFrontFace field.

inline
GLenum &PolygonChunkBase::editFrontFace(void)
{
    editSField(FrontFaceFieldMask);

    return _sfFrontFace.getValue();
}

//! Get the value of the PolygonChunk::_sfFrontFace field.
inline
const GLenum &PolygonChunkBase::getFrontFace(void) const
{
    return _sfFrontFace.getValue();
}

#ifdef OSG_1_COMPAT
inline
GLenum              &PolygonChunkBase::getFrontFace      (void)
{
    return this->editFrontFace      ();
}
#endif

//! Set the value of the PolygonChunk::_sfFrontFace field.
inline
void PolygonChunkBase::setFrontFace(const GLenum &value)
{
    editSField(FrontFaceFieldMask);

    _sfFrontFace.setValue(value);
}
//! Get the value of the PolygonChunk::_sfFrontMode field.

inline
GLenum &PolygonChunkBase::editFrontMode(void)
{
    editSField(FrontModeFieldMask);

    return _sfFrontMode.getValue();
}

//! Get the value of the PolygonChunk::_sfFrontMode field.
inline
const GLenum &PolygonChunkBase::getFrontMode(void) const
{
    return _sfFrontMode.getValue();
}

#ifdef OSG_1_COMPAT
inline
GLenum              &PolygonChunkBase::getFrontMode      (void)
{
    return this->editFrontMode      ();
}
#endif

//! Set the value of the PolygonChunk::_sfFrontMode field.
inline
void PolygonChunkBase::setFrontMode(const GLenum &value)
{
    editSField(FrontModeFieldMask);

    _sfFrontMode.setValue(value);
}
//! Get the value of the PolygonChunk::_sfBackMode field.

inline
GLenum &PolygonChunkBase::editBackMode(void)
{
    editSField(BackModeFieldMask);

    return _sfBackMode.getValue();
}

//! Get the value of the PolygonChunk::_sfBackMode field.
inline
const GLenum &PolygonChunkBase::getBackMode(void) const
{
    return _sfBackMode.getValue();
}

#ifdef OSG_1_COMPAT
inline
GLenum              &PolygonChunkBase::getBackMode       (void)
{
    return this->editBackMode       ();
}
#endif

//! Set the value of the PolygonChunk::_sfBackMode field.
inline
void PolygonChunkBase::setBackMode(const GLenum &value)
{
    editSField(BackModeFieldMask);

    _sfBackMode.setValue(value);
}
//! Get the value of the PolygonChunk::_sfSmooth field.

inline
bool &PolygonChunkBase::editSmooth(void)
{
    editSField(SmoothFieldMask);

    return _sfSmooth.getValue();
}

//! Get the value of the PolygonChunk::_sfSmooth field.
inline
const bool &PolygonChunkBase::getSmooth(void) const
{
    return _sfSmooth.getValue();
}

#ifdef OSG_1_COMPAT
inline
bool                &PolygonChunkBase::getSmooth         (void)
{
    return this->editSmooth         ();
}
#endif

//! Set the value of the PolygonChunk::_sfSmooth field.
inline
void PolygonChunkBase::setSmooth(const bool &value)
{
    editSField(SmoothFieldMask);

    _sfSmooth.setValue(value);
}
//! Get the value of the PolygonChunk::_sfOffsetFactor field.

inline
Real32 &PolygonChunkBase::editOffsetFactor(void)
{
    editSField(OffsetFactorFieldMask);

    return _sfOffsetFactor.getValue();
}

//! Get the value of the PolygonChunk::_sfOffsetFactor field.
inline
const Real32 &PolygonChunkBase::getOffsetFactor(void) const
{
    return _sfOffsetFactor.getValue();
}

#ifdef OSG_1_COMPAT
inline
Real32              &PolygonChunkBase::getOffsetFactor   (void)
{
    return this->editOffsetFactor   ();
}
#endif

//! Set the value of the PolygonChunk::_sfOffsetFactor field.
inline
void PolygonChunkBase::setOffsetFactor(const Real32 &value)
{
    editSField(OffsetFactorFieldMask);

    _sfOffsetFactor.setValue(value);
}
//! Get the value of the PolygonChunk::_sfOffsetBias field.

inline
Real32 &PolygonChunkBase::editOffsetBias(void)
{
    editSField(OffsetBiasFieldMask);

    return _sfOffsetBias.getValue();
}

//! Get the value of the PolygonChunk::_sfOffsetBias field.
inline
const Real32 &PolygonChunkBase::getOffsetBias(void) const
{
    return _sfOffsetBias.getValue();
}

#ifdef OSG_1_COMPAT
inline
Real32              &PolygonChunkBase::getOffsetBias     (void)
{
    return this->editOffsetBias     ();
}
#endif

//! Set the value of the PolygonChunk::_sfOffsetBias field.
inline
void PolygonChunkBase::setOffsetBias(const Real32 &value)
{
    editSField(OffsetBiasFieldMask);

    _sfOffsetBias.setValue(value);
}
//! Get the value of the PolygonChunk::_sfOffsetPoint field.

inline
bool &PolygonChunkBase::editOffsetPoint(void)
{
    editSField(OffsetPointFieldMask);

    return _sfOffsetPoint.getValue();
}

//! Get the value of the PolygonChunk::_sfOffsetPoint field.
inline
const bool &PolygonChunkBase::getOffsetPoint(void) const
{
    return _sfOffsetPoint.getValue();
}

#ifdef OSG_1_COMPAT
inline
bool                &PolygonChunkBase::getOffsetPoint    (void)
{
    return this->editOffsetPoint    ();
}
#endif

//! Set the value of the PolygonChunk::_sfOffsetPoint field.
inline
void PolygonChunkBase::setOffsetPoint(const bool &value)
{
    editSField(OffsetPointFieldMask);

    _sfOffsetPoint.setValue(value);
}
//! Get the value of the PolygonChunk::_sfOffsetLine field.

inline
bool &PolygonChunkBase::editOffsetLine(void)
{
    editSField(OffsetLineFieldMask);

    return _sfOffsetLine.getValue();
}

//! Get the value of the PolygonChunk::_sfOffsetLine field.
inline
const bool &PolygonChunkBase::getOffsetLine(void) const
{
    return _sfOffsetLine.getValue();
}

#ifdef OSG_1_COMPAT
inline
bool                &PolygonChunkBase::getOffsetLine     (void)
{
    return this->editOffsetLine     ();
}
#endif

//! Set the value of the PolygonChunk::_sfOffsetLine field.
inline
void PolygonChunkBase::setOffsetLine(const bool &value)
{
    editSField(OffsetLineFieldMask);

    _sfOffsetLine.setValue(value);
}
//! Get the value of the PolygonChunk::_sfOffsetFill field.

inline
bool &PolygonChunkBase::editOffsetFill(void)
{
    editSField(OffsetFillFieldMask);

    return _sfOffsetFill.getValue();
}

//! Get the value of the PolygonChunk::_sfOffsetFill field.
inline
const bool &PolygonChunkBase::getOffsetFill(void) const
{
    return _sfOffsetFill.getValue();
}

#ifdef OSG_1_COMPAT
inline
bool                &PolygonChunkBase::getOffsetFill     (void)
{
    return this->editOffsetFill     ();
}
#endif

//! Set the value of the PolygonChunk::_sfOffsetFill field.
inline
void PolygonChunkBase::setOffsetFill(const bool &value)
{
    editSField(OffsetFillFieldMask);

    _sfOffsetFill.setValue(value);
}

//! Get the value of the \a index element the PolygonChunk::_mfStipple field.
inline
const Int32 &PolygonChunkBase::getStipple(const UInt32 index) const
{
    return _mfStipple[index];
}

inline
Int32 &PolygonChunkBase::editStipple(const UInt32 index)
{
    editMField(StippleFieldMask, _mfStipple);

    return _mfStipple[index];
}

//! Get the PolygonChunk::_mfStipple field.
inline
MFInt32 &PolygonChunkBase::editStipple(void)
{
    editMField(StippleFieldMask, _mfStipple);

    return _mfStipple;
}

#ifdef OSG_1_COMPAT
inline
Int32               &PolygonChunkBase::getStipple        (const UInt32 index)
{
    return this->editStipple        (index);
}

inline
MFInt32             &PolygonChunkBase::getStipple        (void)
{
    return this->editStipple        ();
}

#endif


//! Get the PolygonChunk::_mfStipple field.
inline
const MFInt32 &PolygonChunkBase::getStipple(void) const
{
    return _mfStipple;
}

//! create a new instance of the class
inline
PolygonChunkPtr PolygonChunkBase::create(void)
{
    PolygonChunkPtr fc;

    if(getClassType().getPrototype() != NullFC)
    {
        fc = OSG::cast_dynamic<PolygonChunk::ObjPtr>(
            getClassType().getPrototype()-> shallowCopy());
    }

    return fc;
}

#ifdef OSG_MT_FIELDCONTAINERPTR
inline
void PolygonChunkBase::execSync(      PolygonChunkBase *pOther,
                                       ConstFieldMaskArg  whichField,
                                       ConstFieldMaskArg  syncMode,
                                 const UInt32             uiSyncInfo,
                                       UInt32             uiCopyOffset)
{
    Inherited::execSync(pOther, whichField, syncMode, uiSyncInfo, uiCopyOffset);

    if(FieldBits::NoField != (CullFaceFieldMask & whichField))
        _sfCullFace.syncWith(pOther->_sfCullFace);

    if(FieldBits::NoField != (FrontFaceFieldMask & whichField))
        _sfFrontFace.syncWith(pOther->_sfFrontFace);

    if(FieldBits::NoField != (FrontModeFieldMask & whichField))
        _sfFrontMode.syncWith(pOther->_sfFrontMode);

    if(FieldBits::NoField != (BackModeFieldMask & whichField))
        _sfBackMode.syncWith(pOther->_sfBackMode);

    if(FieldBits::NoField != (SmoothFieldMask & whichField))
        _sfSmooth.syncWith(pOther->_sfSmooth);

    if(FieldBits::NoField != (OffsetFactorFieldMask & whichField))
        _sfOffsetFactor.syncWith(pOther->_sfOffsetFactor);

    if(FieldBits::NoField != (OffsetBiasFieldMask & whichField))
        _sfOffsetBias.syncWith(pOther->_sfOffsetBias);

    if(FieldBits::NoField != (OffsetPointFieldMask & whichField))
        _sfOffsetPoint.syncWith(pOther->_sfOffsetPoint);

    if(FieldBits::NoField != (OffsetLineFieldMask & whichField))
        _sfOffsetLine.syncWith(pOther->_sfOffsetLine);

    if(FieldBits::NoField != (OffsetFillFieldMask & whichField))
        _sfOffsetFill.syncWith(pOther->_sfOffsetFill);

    if(FieldBits::NoField != (StippleFieldMask & whichField))
        _mfStipple.syncWith(pOther->_mfStipple,
                                syncMode,
                                uiSyncInfo,
                                uiCopyOffset);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
inline
void PolygonChunkBase::execSync (      PolygonChunkBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (CullFaceFieldMask & whichField))
        _sfCullFace.syncWith(pFrom->_sfCullFace);

    if(FieldBits::NoField != (FrontFaceFieldMask & whichField))
        _sfFrontFace.syncWith(pFrom->_sfFrontFace);

    if(FieldBits::NoField != (FrontModeFieldMask & whichField))
        _sfFrontMode.syncWith(pFrom->_sfFrontMode);

    if(FieldBits::NoField != (BackModeFieldMask & whichField))
        _sfBackMode.syncWith(pFrom->_sfBackMode);

    if(FieldBits::NoField != (SmoothFieldMask & whichField))
        _sfSmooth.syncWith(pFrom->_sfSmooth);

    if(FieldBits::NoField != (OffsetFactorFieldMask & whichField))
        _sfOffsetFactor.syncWith(pFrom->_sfOffsetFactor);

    if(FieldBits::NoField != (OffsetBiasFieldMask & whichField))
        _sfOffsetBias.syncWith(pFrom->_sfOffsetBias);

    if(FieldBits::NoField != (OffsetPointFieldMask & whichField))
        _sfOffsetPoint.syncWith(pFrom->_sfOffsetPoint);

    if(FieldBits::NoField != (OffsetLineFieldMask & whichField))
        _sfOffsetLine.syncWith(pFrom->_sfOffsetLine);

    if(FieldBits::NoField != (OffsetFillFieldMask & whichField))
        _sfOffsetFill.syncWith(pFrom->_sfOffsetFill);

    if(FieldBits::NoField != (StippleFieldMask & whichField))
        _mfStipple.syncWith(pFrom->_mfStipple,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);
}
#endif

#if 0
inline
void PolygonChunkBase::execBeginEdit(ConstFieldMaskArg whichField,
                                      UInt32            uiAspect,
                                      UInt32            uiContainerSize)
{
    Inherited::execBeginEdit(whichField, uiAspect, uiContainerSize);

    if(FieldBits::NoField != (StippleFieldMask & whichField))
    {
        _mfStipple.beginEdit(uiAspect, uiContainerSize);
    }
}
#endif


inline
Char8 *PolygonChunkBase::getClassname(void)
{
    return "PolygonChunk";
}

typedef PointerBuilder<PolygonChunk>::ObjPtr          PolygonChunkPtr;
typedef PointerBuilder<PolygonChunk>::ObjPtrConst     PolygonChunkPtrConst;
typedef PointerBuilder<PolygonChunk>::ObjConstPtr     PolygonChunkConstPtr;

typedef PointerBuilder<PolygonChunk>::ObjPtrArg       PolygonChunkPtrArg;
typedef PointerBuilder<PolygonChunk>::ObjConstPtrArg  PolygonChunkConstPtrArg;
typedef PointerBuilder<PolygonChunk>::ObjPtrConstArg  PolygonChunkPtrConstArg;

OSG_END_NAMESPACE

