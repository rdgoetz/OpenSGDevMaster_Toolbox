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
 **     class MaterialGroup!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &MaterialGroupBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 MaterialGroupBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 MaterialGroupBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/


//! Get the value of the MaterialGroup::_sfMaterial field.
inline
MaterialPtrConst MaterialGroupBase::getMaterial(void) const
{
    return _sfMaterial.getValue();
}

//! Set the value of the MaterialGroup::_sfMaterial field.
inline
void MaterialGroupBase::setMaterial(MaterialPtrConstArg value)
{
    editSField(MaterialFieldMask);

    setRefd(_sfMaterial.getValue(), value);

}

//! create a new instance of the class
inline
MaterialGroupPtr MaterialGroupBase::create(void)
{
    MaterialGroupPtr fc;

    if(getClassType().getPrototype() != NullFC)
    {
        fc = OSG::cast_dynamic<MaterialGroup::ObjPtr>(
            getClassType().getPrototype()-> shallowCopy());
    }

    return fc;
}

#ifdef OSG_MT_FIELDCONTAINERPTR
inline
void MaterialGroupBase::execSync(      MaterialGroupBase *pOther,
                                       ConstFieldMaskArg  whichField,
                                       ConstFieldMaskArg  syncMode,
                                 const UInt32             uiSyncInfo,
                                       UInt32             uiCopyOffset)
{
    Inherited::execSync(pOther, whichField, syncMode, uiSyncInfo, uiCopyOffset);

    if(FieldBits::NoField != (MaterialFieldMask & whichField))
        _sfMaterial.syncWith(pOther->_sfMaterial);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
inline
void MaterialGroupBase::execSync (      MaterialGroupBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (MaterialFieldMask & whichField))
        _sfMaterial.syncWith(pFrom->_sfMaterial);
}
#endif

#if 0
inline
void MaterialGroupBase::execBeginEdit(ConstFieldMaskArg whichField,
                                      UInt32            uiAspect,
                                      UInt32            uiContainerSize)
{
    Inherited::execBeginEdit(whichField, uiAspect, uiContainerSize);
}
#endif


inline
Char8 *MaterialGroupBase::getClassname(void)
{
    return "MaterialGroup";
}

typedef PointerBuilder<MaterialGroup>::ObjPtr          MaterialGroupPtr;
typedef PointerBuilder<MaterialGroup>::ObjPtrConst     MaterialGroupPtrConst;
typedef PointerBuilder<MaterialGroup>::ObjConstPtr     MaterialGroupConstPtr;

typedef PointerBuilder<MaterialGroup>::ObjPtrArg       MaterialGroupPtrArg;
typedef PointerBuilder<MaterialGroup>::ObjConstPtrArg  MaterialGroupConstPtrArg;
typedef PointerBuilder<MaterialGroup>::ObjPtrConstArg  MaterialGroupPtrConstArg;

OSG_END_NAMESPACE

