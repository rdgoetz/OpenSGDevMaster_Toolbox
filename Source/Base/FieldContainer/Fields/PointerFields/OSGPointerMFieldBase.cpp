/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *             Copyright (C) 2000-2003 by the OpenSG Forum                   *
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

#include "OSGPointerMFieldBase.h"

OSG_BEGIN_NAMESPACE

FieldType PointerMFieldBase::_fieldType(
    "FieldContainerPtrMFieldBase",
    "Field",                    
    MFieldTraits::getType (),   
    FieldType::MultiField,
    FieldType::PtrField);


const FieldType &PointerMFieldBase::getClassType(void)
{
    return _fieldType;
}

UInt32 PointerMFieldBase::getSize(void) const
{
    return _ptrStore.size();
}

UInt32 PointerMFieldBase::getCardinality(void) const
{
    return _fieldType.getCardinality();
}

UInt32 PointerMFieldBase::getClass(void) const
{
    return _fieldType.getClass();
}

const FieldType& PointerMFieldBase::getType(void) const
{
    return _fieldType;
}

void PointerMFieldBase::pushValueToString  (std::string  &str, UInt32 index) const
{
    typedef boost::mpl::if_<boost::mpl::bool_< 
        static_cast<bool>(MFieldTraits    ::Convertible &
                          FieldTraitsBase ::ToStringConvertible)>, 
        MFieldTraits, 
        StringConversionError<value_type,
                              0> >::type Converter;

    Converter::putToString(_ptrStore[index], str);
}

void PointerMFieldBase::pushValueFromStream(std::istream &str)
{
    assert(false && "PointerMFieldBase::pushValueFromStream() NYI");
}

void PointerMFieldBase::pushValueToStream  (OutStream    &str, UInt32 index) const
{
    typedef boost::mpl::if_<boost::mpl::bool_< 
        static_cast<bool>(MFieldTraits    ::Convertible &
                          FieldTraitsBase ::ToStreamConvertible)>, 
        MFieldTraits, 
        StreamConversionError<value_type,
                              0> >::type Converter;

    Converter::putToStream(_ptrStore[index], str);
}

void PointerMFieldBase::pushSizeToStream    (OutStream    &str) const
{
    str << _ptrStore.size();
}

OSG_END_NAMESPACE
