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
 **     class GeoMultiProperty!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &GeoMultiPropertyBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 GeoMultiPropertyBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 GeoMultiPropertyBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/


//! Get the value of the GeoMultiProperty::_sfContainer field.
inline
GeoMultiPropertyDataPtrConst GeoMultiPropertyBase::getContainer(void) const
{
    return _sfContainer.getValue();
}

//! Set the value of the GeoMultiProperty::_sfContainer field.
inline
void GeoMultiPropertyBase::setContainer(GeoMultiPropertyDataPtrConstArg value)
{
    editSField(ContainerFieldMask);

    setRefd(_sfContainer.getValue(), value);

}
//! Get the value of the GeoMultiProperty::_sfOffset field.

inline
UInt32 &GeoMultiPropertyBase::editOffset(void)
{
    editSField(OffsetFieldMask);

    return _sfOffset.getValue();
}

//! Get the value of the GeoMultiProperty::_sfOffset field.
inline
const UInt32 &GeoMultiPropertyBase::getOffset(void) const
{
    return _sfOffset.getValue();
}

#ifdef OSG_1_COMPAT
inline
UInt32              &GeoMultiPropertyBase::getOffset         (void)
{
    return this->editOffset         ();
}
#endif

//! Set the value of the GeoMultiProperty::_sfOffset field.
inline
void GeoMultiPropertyBase::setOffset(const UInt32 &value)
{
    editSField(OffsetFieldMask);

    _sfOffset.setValue(value);
}
//! Get the value of the GeoMultiProperty::_sfIFormat field.

inline
GLenum &GeoMultiPropertyBase::editIFormat(void)
{
    editSField(IFormatFieldMask);

    return _sfIFormat.getValue();
}

//! Get the value of the GeoMultiProperty::_sfIFormat field.
inline
const GLenum &GeoMultiPropertyBase::getIFormat(void) const
{
    return _sfIFormat.getValue();
}

#ifdef OSG_1_COMPAT
inline
GLenum              &GeoMultiPropertyBase::getIFormat        (void)
{
    return this->editIFormat        ();
}
#endif

//! Set the value of the GeoMultiProperty::_sfIFormat field.
inline
void GeoMultiPropertyBase::setIFormat(const GLenum &value)
{
    editSField(IFormatFieldMask);

    _sfIFormat.setValue(value);
}
//! Get the value of the GeoMultiProperty::_sfIDimension field.

inline
UInt32 &GeoMultiPropertyBase::editIDimension(void)
{
    editSField(IDimensionFieldMask);

    return _sfIDimension.getValue();
}

//! Get the value of the GeoMultiProperty::_sfIDimension field.
inline
const UInt32 &GeoMultiPropertyBase::getIDimension(void) const
{
    return _sfIDimension.getValue();
}

#ifdef OSG_1_COMPAT
inline
UInt32              &GeoMultiPropertyBase::getIDimension     (void)
{
    return this->editIDimension     ();
}
#endif

//! Set the value of the GeoMultiProperty::_sfIDimension field.
inline
void GeoMultiPropertyBase::setIDimension(const UInt32 &value)
{
    editSField(IDimensionFieldMask);

    _sfIDimension.setValue(value);
}
//! Get the value of the GeoMultiProperty::_sfISize field.

inline
UInt32 &GeoMultiPropertyBase::editISize(void)
{
    editSField(ISizeFieldMask);

    return _sfISize.getValue();
}

//! Get the value of the GeoMultiProperty::_sfISize field.
inline
const UInt32 &GeoMultiPropertyBase::getISize(void) const
{
    return _sfISize.getValue();
}

#ifdef OSG_1_COMPAT
inline
UInt32              &GeoMultiPropertyBase::getISize          (void)
{
    return this->editISize          ();
}
#endif

//! Set the value of the GeoMultiProperty::_sfISize field.
inline
void GeoMultiPropertyBase::setISize(const UInt32 &value)
{
    editSField(ISizeFieldMask);

    _sfISize.setValue(value);
}
//! Get the value of the GeoMultiProperty::_sfINormalize field.

inline
bool &GeoMultiPropertyBase::editINormalize(void)
{
    editSField(INormalizeFieldMask);

    return _sfINormalize.getValue();
}

//! Get the value of the GeoMultiProperty::_sfINormalize field.
inline
const bool &GeoMultiPropertyBase::getINormalize(void) const
{
    return _sfINormalize.getValue();
}

#ifdef OSG_1_COMPAT
inline
bool                &GeoMultiPropertyBase::getINormalize     (void)
{
    return this->editINormalize     ();
}
#endif

//! Set the value of the GeoMultiProperty::_sfINormalize field.
inline
void GeoMultiPropertyBase::setINormalize(const bool &value)
{
    editSField(INormalizeFieldMask);

    _sfINormalize.setValue(value);
}
//! Get the value of the GeoMultiProperty::_sfIStride field.

inline
UInt32 &GeoMultiPropertyBase::editIStride(void)
{
    editSField(IStrideFieldMask);

    return _sfIStride.getValue();
}

//! Get the value of the GeoMultiProperty::_sfIStride field.
inline
const UInt32 &GeoMultiPropertyBase::getIStride(void) const
{
    return _sfIStride.getValue();
}

#ifdef OSG_1_COMPAT
inline
UInt32              &GeoMultiPropertyBase::getIStride        (void)
{
    return this->editIStride        ();
}
#endif

//! Set the value of the GeoMultiProperty::_sfIStride field.
inline
void GeoMultiPropertyBase::setIStride(const UInt32 &value)
{
    editSField(IStrideFieldMask);

    _sfIStride.setValue(value);
}

//! create a new instance of the class
inline
GeoMultiPropertyPtr GeoMultiPropertyBase::create(void)
{
    GeoMultiPropertyPtr fc;

    if(getClassType().getPrototype() != NullFC)
    {
        fc = OSG::cast_dynamic<GeoMultiProperty::ObjPtr>(
            getClassType().getPrototype()-> shallowCopy());
    }

    return fc;
}

#ifdef OSG_MT_FIELDCONTAINERPTR
inline
void GeoMultiPropertyBase::execSync(      GeoMultiPropertyBase *pOther,
                                       ConstFieldMaskArg  whichField,
                                       ConstFieldMaskArg  syncMode,
                                 const UInt32             uiSyncInfo,
                                       UInt32             uiCopyOffset)
{
    Inherited::execSync(pOther, whichField, syncMode, uiSyncInfo, uiCopyOffset);

    if(FieldBits::NoField != (ContainerFieldMask & whichField))
        _sfContainer.syncWith(pOther->_sfContainer);

    if(FieldBits::NoField != (OffsetFieldMask & whichField))
        _sfOffset.syncWith(pOther->_sfOffset);

    if(FieldBits::NoField != (IFormatFieldMask & whichField))
        _sfIFormat.syncWith(pOther->_sfIFormat);

    if(FieldBits::NoField != (IDimensionFieldMask & whichField))
        _sfIDimension.syncWith(pOther->_sfIDimension);

    if(FieldBits::NoField != (ISizeFieldMask & whichField))
        _sfISize.syncWith(pOther->_sfISize);

    if(FieldBits::NoField != (INormalizeFieldMask & whichField))
        _sfINormalize.syncWith(pOther->_sfINormalize);

    if(FieldBits::NoField != (IStrideFieldMask & whichField))
        _sfIStride.syncWith(pOther->_sfIStride);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
inline
void GeoMultiPropertyBase::execSync (      GeoMultiPropertyBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (ContainerFieldMask & whichField))
        _sfContainer.syncWith(pFrom->_sfContainer);

    if(FieldBits::NoField != (OffsetFieldMask & whichField))
        _sfOffset.syncWith(pFrom->_sfOffset);

    if(FieldBits::NoField != (IFormatFieldMask & whichField))
        _sfIFormat.syncWith(pFrom->_sfIFormat);

    if(FieldBits::NoField != (IDimensionFieldMask & whichField))
        _sfIDimension.syncWith(pFrom->_sfIDimension);

    if(FieldBits::NoField != (ISizeFieldMask & whichField))
        _sfISize.syncWith(pFrom->_sfISize);

    if(FieldBits::NoField != (INormalizeFieldMask & whichField))
        _sfINormalize.syncWith(pFrom->_sfINormalize);

    if(FieldBits::NoField != (IStrideFieldMask & whichField))
        _sfIStride.syncWith(pFrom->_sfIStride);
}
#endif

#if 0
inline
void GeoMultiPropertyBase::execBeginEdit(ConstFieldMaskArg whichField,
                                      UInt32            uiAspect,
                                      UInt32            uiContainerSize)
{
    Inherited::execBeginEdit(whichField, uiAspect, uiContainerSize);
}
#endif


inline
Char8 *GeoMultiPropertyBase::getClassname(void)
{
    return "GeoMultiProperty";
}

typedef PointerBuilder<GeoMultiProperty>::ObjPtr          GeoMultiPropertyPtr;
typedef PointerBuilder<GeoMultiProperty>::ObjPtrConst     GeoMultiPropertyPtrConst;
typedef PointerBuilder<GeoMultiProperty>::ObjConstPtr     GeoMultiPropertyConstPtr;

typedef PointerBuilder<GeoMultiProperty>::ObjPtrArg       GeoMultiPropertyPtrArg;
typedef PointerBuilder<GeoMultiProperty>::ObjConstPtrArg  GeoMultiPropertyConstPtrArg;
typedef PointerBuilder<GeoMultiProperty>::ObjPtrConstArg  GeoMultiPropertyPtrConstArg;

OSG_END_NAMESPACE

