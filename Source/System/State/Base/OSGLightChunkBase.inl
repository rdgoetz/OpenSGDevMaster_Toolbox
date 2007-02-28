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
 **     class LightChunk!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &LightChunkBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 LightChunkBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 LightChunkBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the LightChunk::_sfDiffuse field.

inline
Color4r &LightChunkBase::editDiffuse(void)
{
    editSField(DiffuseFieldMask);

    return _sfDiffuse.getValue();
}

//! Get the value of the LightChunk::_sfDiffuse field.
inline
const Color4r &LightChunkBase::getDiffuse(void) const
{
    return _sfDiffuse.getValue();
}

#ifdef OSG_1_COMPAT
inline
Color4r             &LightChunkBase::getDiffuse        (void)
{
    return this->editDiffuse        ();
}
#endif

//! Set the value of the LightChunk::_sfDiffuse field.
inline
void LightChunkBase::setDiffuse(const Color4r &value)
{
    editSField(DiffuseFieldMask);

    _sfDiffuse.setValue(value);
}
//! Get the value of the LightChunk::_sfAmbient field.

inline
Color4r &LightChunkBase::editAmbient(void)
{
    editSField(AmbientFieldMask);

    return _sfAmbient.getValue();
}

//! Get the value of the LightChunk::_sfAmbient field.
inline
const Color4r &LightChunkBase::getAmbient(void) const
{
    return _sfAmbient.getValue();
}

#ifdef OSG_1_COMPAT
inline
Color4r             &LightChunkBase::getAmbient        (void)
{
    return this->editAmbient        ();
}
#endif

//! Set the value of the LightChunk::_sfAmbient field.
inline
void LightChunkBase::setAmbient(const Color4r &value)
{
    editSField(AmbientFieldMask);

    _sfAmbient.setValue(value);
}
//! Get the value of the LightChunk::_sfSpecular field.

inline
Color4r &LightChunkBase::editSpecular(void)
{
    editSField(SpecularFieldMask);

    return _sfSpecular.getValue();
}

//! Get the value of the LightChunk::_sfSpecular field.
inline
const Color4r &LightChunkBase::getSpecular(void) const
{
    return _sfSpecular.getValue();
}

#ifdef OSG_1_COMPAT
inline
Color4r             &LightChunkBase::getSpecular       (void)
{
    return this->editSpecular       ();
}
#endif

//! Set the value of the LightChunk::_sfSpecular field.
inline
void LightChunkBase::setSpecular(const Color4r &value)
{
    editSField(SpecularFieldMask);

    _sfSpecular.setValue(value);
}
//! Get the value of the LightChunk::_sfPosition field.

inline
Vec4r &LightChunkBase::editPosition(void)
{
    editSField(PositionFieldMask);

    return _sfPosition.getValue();
}

//! Get the value of the LightChunk::_sfPosition field.
inline
const Vec4r &LightChunkBase::getPosition(void) const
{
    return _sfPosition.getValue();
}

#ifdef OSG_1_COMPAT
inline
Vec4r               &LightChunkBase::getPosition       (void)
{
    return this->editPosition       ();
}
#endif

//! Set the value of the LightChunk::_sfPosition field.
inline
void LightChunkBase::setPosition(const Vec4r &value)
{
    editSField(PositionFieldMask);

    _sfPosition.setValue(value);
}
//! Get the value of the LightChunk::_sfDirection field.

inline
Vec3r &LightChunkBase::editDirection(void)
{
    editSField(DirectionFieldMask);

    return _sfDirection.getValue();
}

//! Get the value of the LightChunk::_sfDirection field.
inline
const Vec3r &LightChunkBase::getDirection(void) const
{
    return _sfDirection.getValue();
}

#ifdef OSG_1_COMPAT
inline
Vec3r               &LightChunkBase::getDirection      (void)
{
    return this->editDirection      ();
}
#endif

//! Set the value of the LightChunk::_sfDirection field.
inline
void LightChunkBase::setDirection(const Vec3r &value)
{
    editSField(DirectionFieldMask);

    _sfDirection.setValue(value);
}
//! Get the value of the LightChunk::_sfExponent field.

inline
Real &LightChunkBase::editExponent(void)
{
    editSField(ExponentFieldMask);

    return _sfExponent.getValue();
}

//! Get the value of the LightChunk::_sfExponent field.
inline
const Real &LightChunkBase::getExponent(void) const
{
    return _sfExponent.getValue();
}

#ifdef OSG_1_COMPAT
inline
Real                &LightChunkBase::getExponent       (void)
{
    return this->editExponent       ();
}
#endif

//! Set the value of the LightChunk::_sfExponent field.
inline
void LightChunkBase::setExponent(const Real &value)
{
    editSField(ExponentFieldMask);

    _sfExponent.setValue(value);
}
//! Get the value of the LightChunk::_sfCutoff field.

inline
Real &LightChunkBase::editCutoff(void)
{
    editSField(CutoffFieldMask);

    return _sfCutoff.getValue();
}

//! Get the value of the LightChunk::_sfCutoff field.
inline
const Real &LightChunkBase::getCutoff(void) const
{
    return _sfCutoff.getValue();
}

#ifdef OSG_1_COMPAT
inline
Real                &LightChunkBase::getCutoff         (void)
{
    return this->editCutoff         ();
}
#endif

//! Set the value of the LightChunk::_sfCutoff field.
inline
void LightChunkBase::setCutoff(const Real &value)
{
    editSField(CutoffFieldMask);

    _sfCutoff.setValue(value);
}
//! Get the value of the LightChunk::_sfConstantAttenuation field.

inline
Real &LightChunkBase::editConstantAttenuation(void)
{
    editSField(ConstantAttenuationFieldMask);

    return _sfConstantAttenuation.getValue();
}

//! Get the value of the LightChunk::_sfConstantAttenuation field.
inline
const Real &LightChunkBase::getConstantAttenuation(void) const
{
    return _sfConstantAttenuation.getValue();
}

#ifdef OSG_1_COMPAT
inline
Real                &LightChunkBase::getConstantAttenuation(void)
{
    return this->editConstantAttenuation();
}
#endif

//! Set the value of the LightChunk::_sfConstantAttenuation field.
inline
void LightChunkBase::setConstantAttenuation(const Real &value)
{
    editSField(ConstantAttenuationFieldMask);

    _sfConstantAttenuation.setValue(value);
}
//! Get the value of the LightChunk::_sfLinearAttenuation field.

inline
Real &LightChunkBase::editLinearAttenuation(void)
{
    editSField(LinearAttenuationFieldMask);

    return _sfLinearAttenuation.getValue();
}

//! Get the value of the LightChunk::_sfLinearAttenuation field.
inline
const Real &LightChunkBase::getLinearAttenuation(void) const
{
    return _sfLinearAttenuation.getValue();
}

#ifdef OSG_1_COMPAT
inline
Real                &LightChunkBase::getLinearAttenuation(void)
{
    return this->editLinearAttenuation();
}
#endif

//! Set the value of the LightChunk::_sfLinearAttenuation field.
inline
void LightChunkBase::setLinearAttenuation(const Real &value)
{
    editSField(LinearAttenuationFieldMask);

    _sfLinearAttenuation.setValue(value);
}
//! Get the value of the LightChunk::_sfQuadraticAttenuation field.

inline
Real &LightChunkBase::editQuadraticAttenuation(void)
{
    editSField(QuadraticAttenuationFieldMask);

    return _sfQuadraticAttenuation.getValue();
}

//! Get the value of the LightChunk::_sfQuadraticAttenuation field.
inline
const Real &LightChunkBase::getQuadraticAttenuation(void) const
{
    return _sfQuadraticAttenuation.getValue();
}

#ifdef OSG_1_COMPAT
inline
Real                &LightChunkBase::getQuadraticAttenuation(void)
{
    return this->editQuadraticAttenuation();
}
#endif

//! Set the value of the LightChunk::_sfQuadraticAttenuation field.
inline
void LightChunkBase::setQuadraticAttenuation(const Real &value)
{
    editSField(QuadraticAttenuationFieldMask);

    _sfQuadraticAttenuation.setValue(value);
}

//! Get the value of the LightChunk::_sfBeacon field.
inline
NodePtrConst LightChunkBase::getBeacon(void) const
{
    return _sfBeacon.getValue();
}

//! Set the value of the LightChunk::_sfBeacon field.
inline
void LightChunkBase::setBeacon(NodePtrConstArg value)
{
    editSField(BeaconFieldMask);

    _sfBeacon.setValue(value);

}

//! create a new instance of the class
inline
LightChunkPtr LightChunkBase::create(void)
{
    LightChunkPtr fc;

    if(getClassType().getPrototype() != NullFC)
    {
        fc = OSG::cast_dynamic<LightChunk::ObjPtr>(
            getClassType().getPrototype()-> shallowCopy());
    }

    return fc;
}

#ifdef OSG_MT_FIELDCONTAINERPTR
inline
void LightChunkBase::execSync(      LightChunkBase *pOther,
                                       ConstFieldMaskArg  whichField,
                                       ConstFieldMaskArg  syncMode,
                                 const UInt32             uiSyncInfo,
                                       UInt32             uiCopyOffset)
{
    Inherited::execSync(pOther, whichField, syncMode, uiSyncInfo, uiCopyOffset);

    if(FieldBits::NoField != (DiffuseFieldMask & whichField))
        _sfDiffuse.syncWith(pOther->_sfDiffuse);

    if(FieldBits::NoField != (AmbientFieldMask & whichField))
        _sfAmbient.syncWith(pOther->_sfAmbient);

    if(FieldBits::NoField != (SpecularFieldMask & whichField))
        _sfSpecular.syncWith(pOther->_sfSpecular);

    if(FieldBits::NoField != (PositionFieldMask & whichField))
        _sfPosition.syncWith(pOther->_sfPosition);

    if(FieldBits::NoField != (DirectionFieldMask & whichField))
        _sfDirection.syncWith(pOther->_sfDirection);

    if(FieldBits::NoField != (ExponentFieldMask & whichField))
        _sfExponent.syncWith(pOther->_sfExponent);

    if(FieldBits::NoField != (CutoffFieldMask & whichField))
        _sfCutoff.syncWith(pOther->_sfCutoff);

    if(FieldBits::NoField != (ConstantAttenuationFieldMask & whichField))
        _sfConstantAttenuation.syncWith(pOther->_sfConstantAttenuation);

    if(FieldBits::NoField != (LinearAttenuationFieldMask & whichField))
        _sfLinearAttenuation.syncWith(pOther->_sfLinearAttenuation);

    if(FieldBits::NoField != (QuadraticAttenuationFieldMask & whichField))
        _sfQuadraticAttenuation.syncWith(pOther->_sfQuadraticAttenuation);

    if(FieldBits::NoField != (BeaconFieldMask & whichField))
        _sfBeacon.syncWith(pOther->_sfBeacon);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
inline
void LightChunkBase::execSync (      LightChunkBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (DiffuseFieldMask & whichField))
        _sfDiffuse.syncWith(pFrom->_sfDiffuse);

    if(FieldBits::NoField != (AmbientFieldMask & whichField))
        _sfAmbient.syncWith(pFrom->_sfAmbient);

    if(FieldBits::NoField != (SpecularFieldMask & whichField))
        _sfSpecular.syncWith(pFrom->_sfSpecular);

    if(FieldBits::NoField != (PositionFieldMask & whichField))
        _sfPosition.syncWith(pFrom->_sfPosition);

    if(FieldBits::NoField != (DirectionFieldMask & whichField))
        _sfDirection.syncWith(pFrom->_sfDirection);

    if(FieldBits::NoField != (ExponentFieldMask & whichField))
        _sfExponent.syncWith(pFrom->_sfExponent);

    if(FieldBits::NoField != (CutoffFieldMask & whichField))
        _sfCutoff.syncWith(pFrom->_sfCutoff);

    if(FieldBits::NoField != (ConstantAttenuationFieldMask & whichField))
        _sfConstantAttenuation.syncWith(pFrom->_sfConstantAttenuation);

    if(FieldBits::NoField != (LinearAttenuationFieldMask & whichField))
        _sfLinearAttenuation.syncWith(pFrom->_sfLinearAttenuation);

    if(FieldBits::NoField != (QuadraticAttenuationFieldMask & whichField))
        _sfQuadraticAttenuation.syncWith(pFrom->_sfQuadraticAttenuation);

    if(FieldBits::NoField != (BeaconFieldMask & whichField))
        _sfBeacon.syncWith(pFrom->_sfBeacon);
}
#endif

#if 0
inline
void LightChunkBase::execBeginEdit(ConstFieldMaskArg whichField,
                                      UInt32            uiAspect,
                                      UInt32            uiContainerSize)
{
    Inherited::execBeginEdit(whichField, uiAspect, uiContainerSize);
}
#endif


inline
Char8 *LightChunkBase::getClassname(void)
{
    return "LightChunk";
}

typedef PointerBuilder<LightChunk>::ObjPtr          LightChunkPtr;
typedef PointerBuilder<LightChunk>::ObjPtrConst     LightChunkPtrConst;
typedef PointerBuilder<LightChunk>::ObjConstPtr     LightChunkConstPtr;

typedef PointerBuilder<LightChunk>::ObjPtrArg       LightChunkPtrArg;
typedef PointerBuilder<LightChunk>::ObjConstPtrArg  LightChunkConstPtrArg;
typedef PointerBuilder<LightChunk>::ObjPtrConstArg  LightChunkPtrConstArg;

OSG_END_NAMESPACE

