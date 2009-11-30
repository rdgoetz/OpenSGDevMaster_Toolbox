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
 **     class GeoIntegralBufferRefProperty!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include "OSGConfig.h"




#include "OSGGeoIntegralBufferRefPropertyBase.h"
#include "OSGGeoIntegralBufferRefProperty.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::GeoIntegralBufferRefProperty
    
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<GeoIntegralBufferRefProperty *>::_type("GeoIntegralBufferRefPropertyPtr", "GeoIntegralBufferPropertyPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(GeoIntegralBufferRefProperty *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           GeoIntegralBufferRefProperty *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           GeoIntegralBufferRefProperty *,
                           0);

DataType &FieldTraits< GeoIntegralBufferRefProperty *, 1 >::getType(void)
{
    return FieldTraits<GeoIntegralBufferRefProperty *, 0>::getType();
}


OSG_EXPORT_PTR_SFIELD(ChildPointerSField,
                      GeoIntegralBufferRefProperty *,
                      UnrecordedRefCountPolicy,
                      1);


OSG_EXPORT_PTR_MFIELD(ChildPointerMField,
                      GeoIntegralBufferRefProperty *,
                      UnrecordedRefCountPolicy,
                      1);


/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void GeoIntegralBufferRefPropertyBase::classDescInserter(TypeObject &oType)
{
}


GeoIntegralBufferRefPropertyBase::TypeObject GeoIntegralBufferRefPropertyBase::_type(
    GeoIntegralBufferRefPropertyBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&GeoIntegralBufferRefPropertyBase::createEmptyLocal),
    GeoIntegralBufferRefProperty::initMethod,
    GeoIntegralBufferRefProperty::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&GeoIntegralBufferRefProperty::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "   name=\"GeoIntegralBufferRefProperty\"\n"
    "   parent=\"GeoIntegralBufferProperty\"\n"
    "   library=\"Drawable\"\n"
    "   pointerfieldtypes=\"both\"\n"
    "   structure=\"concrete\"\n"
    "   systemcomponent=\"true\"\n"
    "   parentsystemcomponent=\"true\"\n"
    "   decoratable=\"false\"\n"
    "   childFields=\"both\"\n"
    ">\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &GeoIntegralBufferRefPropertyBase::getType(void)
{
    return _type;
}

const FieldContainerType &GeoIntegralBufferRefPropertyBase::getType(void) const
{
    return _type;
}

UInt32 GeoIntegralBufferRefPropertyBase::getContainerSize(void) const
{
    return sizeof(GeoIntegralBufferRefProperty);
}

/*------------------------- decorator get ------------------------------*/






/*------------------------------ access -----------------------------------*/

UInt32 GeoIntegralBufferRefPropertyBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);


    return returnValue;
}

void GeoIntegralBufferRefPropertyBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

}

void GeoIntegralBufferRefPropertyBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

}

//! create a new instance of the class
GeoIntegralBufferRefPropertyTransitPtr GeoIntegralBufferRefPropertyBase::createLocal(BitVector bFlags)
{
    GeoIntegralBufferRefPropertyTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<GeoIntegralBufferRefProperty>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
GeoIntegralBufferRefPropertyTransitPtr GeoIntegralBufferRefPropertyBase::createDependent(BitVector bFlags)
{
    GeoIntegralBufferRefPropertyTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<GeoIntegralBufferRefProperty>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
GeoIntegralBufferRefPropertyTransitPtr GeoIntegralBufferRefPropertyBase::create(void)
{
    GeoIntegralBufferRefPropertyTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<GeoIntegralBufferRefProperty>(tmpPtr);
    }

    return fc;
}

GeoIntegralBufferRefProperty *GeoIntegralBufferRefPropertyBase::createEmptyLocal(BitVector bFlags)
{
    GeoIntegralBufferRefProperty *returnValue;

    newPtr<GeoIntegralBufferRefProperty>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
GeoIntegralBufferRefProperty *GeoIntegralBufferRefPropertyBase::createEmpty(void)
{
    GeoIntegralBufferRefProperty *returnValue;

    newPtr<GeoIntegralBufferRefProperty>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr GeoIntegralBufferRefPropertyBase::shallowCopyLocal(
    BitVector bFlags) const
{
    GeoIntegralBufferRefProperty *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const GeoIntegralBufferRefProperty *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr GeoIntegralBufferRefPropertyBase::shallowCopyDependent(
    BitVector bFlags) const
{
    GeoIntegralBufferRefProperty *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const GeoIntegralBufferRefProperty *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr GeoIntegralBufferRefPropertyBase::shallowCopy(void) const
{
    GeoIntegralBufferRefProperty *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const GeoIntegralBufferRefProperty *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

GeoIntegralBufferRefPropertyBase::GeoIntegralBufferRefPropertyBase(void) :
    Inherited()
{
}

GeoIntegralBufferRefPropertyBase::GeoIntegralBufferRefPropertyBase(const GeoIntegralBufferRefPropertyBase &source) :
    Inherited(source)
{
}


/*-------------------------- destructors ----------------------------------*/

GeoIntegralBufferRefPropertyBase::~GeoIntegralBufferRefPropertyBase(void)
{
}



#ifdef OSG_MT_CPTR_ASPECT
void GeoIntegralBufferRefPropertyBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    GeoIntegralBufferRefProperty *pThis = static_cast<GeoIntegralBufferRefProperty *>(this);

    pThis->execSync(static_cast<GeoIntegralBufferRefProperty *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *GeoIntegralBufferRefPropertyBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    GeoIntegralBufferRefProperty *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const GeoIntegralBufferRefProperty *>(pRefAspect),
                  dynamic_cast<const GeoIntegralBufferRefProperty *>(this));

    return returnValue;
}
#endif

void GeoIntegralBufferRefPropertyBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE