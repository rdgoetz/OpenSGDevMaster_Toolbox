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
 **     class DrawableStatsAttachment!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &DrawableStatsAttachmentBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 DrawableStatsAttachmentBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 DrawableStatsAttachmentBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the DrawableStatsAttachment::_sfVertices field.

inline
UInt32 &DrawableStatsAttachmentBase::editVertices(void)
{
    editSField(VerticesFieldMask);

    return _sfVertices.getValue();
}

//! Get the value of the DrawableStatsAttachment::_sfVertices field.
inline
const UInt32 &DrawableStatsAttachmentBase::getVertices(void) const
{
    return _sfVertices.getValue();
}

#ifdef OSG_1_GET_COMPAT
inline
UInt32              &DrawableStatsAttachmentBase::getVertices       (void)
{
    return this->editVertices       ();
}
#endif

//! Set the value of the DrawableStatsAttachment::_sfVertices field.
inline
void DrawableStatsAttachmentBase::setVertices(const UInt32 &value)
{
    editSField(VerticesFieldMask);

    _sfVertices.setValue(value);
}
//! Get the value of the DrawableStatsAttachment::_sfPoints field.

inline
UInt32 &DrawableStatsAttachmentBase::editPoints(void)
{
    editSField(PointsFieldMask);

    return _sfPoints.getValue();
}

//! Get the value of the DrawableStatsAttachment::_sfPoints field.
inline
const UInt32 &DrawableStatsAttachmentBase::getPoints(void) const
{
    return _sfPoints.getValue();
}

#ifdef OSG_1_GET_COMPAT
inline
UInt32              &DrawableStatsAttachmentBase::getPoints         (void)
{
    return this->editPoints         ();
}
#endif

//! Set the value of the DrawableStatsAttachment::_sfPoints field.
inline
void DrawableStatsAttachmentBase::setPoints(const UInt32 &value)
{
    editSField(PointsFieldMask);

    _sfPoints.setValue(value);
}
//! Get the value of the DrawableStatsAttachment::_sfLines field.

inline
UInt32 &DrawableStatsAttachmentBase::editLines(void)
{
    editSField(LinesFieldMask);

    return _sfLines.getValue();
}

//! Get the value of the DrawableStatsAttachment::_sfLines field.
inline
const UInt32 &DrawableStatsAttachmentBase::getLines(void) const
{
    return _sfLines.getValue();
}

#ifdef OSG_1_GET_COMPAT
inline
UInt32              &DrawableStatsAttachmentBase::getLines          (void)
{
    return this->editLines          ();
}
#endif

//! Set the value of the DrawableStatsAttachment::_sfLines field.
inline
void DrawableStatsAttachmentBase::setLines(const UInt32 &value)
{
    editSField(LinesFieldMask);

    _sfLines.setValue(value);
}
//! Get the value of the DrawableStatsAttachment::_sfTriangles field.

inline
UInt32 &DrawableStatsAttachmentBase::editTriangles(void)
{
    editSField(TrianglesFieldMask);

    return _sfTriangles.getValue();
}

//! Get the value of the DrawableStatsAttachment::_sfTriangles field.
inline
const UInt32 &DrawableStatsAttachmentBase::getTriangles(void) const
{
    return _sfTriangles.getValue();
}

#ifdef OSG_1_GET_COMPAT
inline
UInt32              &DrawableStatsAttachmentBase::getTriangles      (void)
{
    return this->editTriangles      ();
}
#endif

//! Set the value of the DrawableStatsAttachment::_sfTriangles field.
inline
void DrawableStatsAttachmentBase::setTriangles(const UInt32 &value)
{
    editSField(TrianglesFieldMask);

    _sfTriangles.setValue(value);
}
//! Get the value of the DrawableStatsAttachment::_sfProcessedAttributeBytes field.

inline
UInt32 &DrawableStatsAttachmentBase::editProcessedAttributeBytes(void)
{
    editSField(ProcessedAttributeBytesFieldMask);

    return _sfProcessedAttributeBytes.getValue();
}

//! Get the value of the DrawableStatsAttachment::_sfProcessedAttributeBytes field.
inline
const UInt32 &DrawableStatsAttachmentBase::getProcessedAttributeBytes(void) const
{
    return _sfProcessedAttributeBytes.getValue();
}

#ifdef OSG_1_GET_COMPAT
inline
UInt32              &DrawableStatsAttachmentBase::getProcessedAttributeBytes(void)
{
    return this->editProcessedAttributeBytes();
}
#endif

//! Set the value of the DrawableStatsAttachment::_sfProcessedAttributeBytes field.
inline
void DrawableStatsAttachmentBase::setProcessedAttributeBytes(const UInt32 &value)
{
    editSField(ProcessedAttributeBytesFieldMask);

    _sfProcessedAttributeBytes.setValue(value);
}
//! Get the value of the DrawableStatsAttachment::_sfStoredAttributeBytes field.

inline
UInt32 &DrawableStatsAttachmentBase::editStoredAttributeBytes(void)
{
    editSField(StoredAttributeBytesFieldMask);

    return _sfStoredAttributeBytes.getValue();
}

//! Get the value of the DrawableStatsAttachment::_sfStoredAttributeBytes field.
inline
const UInt32 &DrawableStatsAttachmentBase::getStoredAttributeBytes(void) const
{
    return _sfStoredAttributeBytes.getValue();
}

#ifdef OSG_1_GET_COMPAT
inline
UInt32              &DrawableStatsAttachmentBase::getStoredAttributeBytes(void)
{
    return this->editStoredAttributeBytes();
}
#endif

//! Set the value of the DrawableStatsAttachment::_sfStoredAttributeBytes field.
inline
void DrawableStatsAttachmentBase::setStoredAttributeBytes(const UInt32 &value)
{
    editSField(StoredAttributeBytesFieldMask);

    _sfStoredAttributeBytes.setValue(value);
}
//! Get the value of the DrawableStatsAttachment::_sfValid field.

inline
bool &DrawableStatsAttachmentBase::editValid(void)
{
    editSField(ValidFieldMask);

    return _sfValid.getValue();
}

//! Get the value of the DrawableStatsAttachment::_sfValid field.
inline
const bool &DrawableStatsAttachmentBase::getValid(void) const
{
    return _sfValid.getValue();
}

#ifdef OSG_1_GET_COMPAT
inline
bool                &DrawableStatsAttachmentBase::getValid          (void)
{
    return this->editValid          ();
}
#endif

//! Set the value of the DrawableStatsAttachment::_sfValid field.
inline
void DrawableStatsAttachmentBase::setValid(const bool &value)
{
    editSField(ValidFieldMask);

    _sfValid.setValue(value);
}


#ifdef OSG_MT_CPTR_ASPECT
inline
void DrawableStatsAttachmentBase::execSync (      DrawableStatsAttachmentBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (VerticesFieldMask & whichField))
        _sfVertices.syncWith(pFrom->_sfVertices);

    if(FieldBits::NoField != (PointsFieldMask & whichField))
        _sfPoints.syncWith(pFrom->_sfPoints);

    if(FieldBits::NoField != (LinesFieldMask & whichField))
        _sfLines.syncWith(pFrom->_sfLines);

    if(FieldBits::NoField != (TrianglesFieldMask & whichField))
        _sfTriangles.syncWith(pFrom->_sfTriangles);

    if(FieldBits::NoField != (ProcessedAttributeBytesFieldMask & whichField))
        _sfProcessedAttributeBytes.syncWith(pFrom->_sfProcessedAttributeBytes);

    if(FieldBits::NoField != (StoredAttributeBytesFieldMask & whichField))
        _sfStoredAttributeBytes.syncWith(pFrom->_sfStoredAttributeBytes);

    if(FieldBits::NoField != (ValidFieldMask & whichField))
        _sfValid.syncWith(pFrom->_sfValid);
}
#endif


inline
Char8 *DrawableStatsAttachmentBase::getClassname(void)
{
    return "DrawableStatsAttachment";
}
OSG_GEN_CONTAINERPTR(DrawableStatsAttachment);

OSG_END_NAMESPACE

