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
 **     class TextureGrabForeground!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &TextureGrabForegroundBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 TextureGrabForegroundBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 TextureGrabForegroundBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/


//! Get the value of the TextureGrabForeground::_sfTexture field.
inline
TextureObjChunk * TextureGrabForegroundBase::getTexture(void) const
{
    return _sfTexture.getValue();
}

//! Set the value of the TextureGrabForeground::_sfTexture field.
inline
void TextureGrabForegroundBase::setTexture(TextureObjChunk * const value)
{
    editSField(TextureFieldMask);

    _sfTexture.setValue(value);
}
//! Get the value of the TextureGrabForeground::_sfAutoResize field.

inline
bool &TextureGrabForegroundBase::editAutoResize(void)
{
    editSField(AutoResizeFieldMask);

    return _sfAutoResize.getValue();
}

//! Get the value of the TextureGrabForeground::_sfAutoResize field.
inline
      bool  TextureGrabForegroundBase::getAutoResize(void) const
{
    return _sfAutoResize.getValue();
}

//! Set the value of the TextureGrabForeground::_sfAutoResize field.
inline
void TextureGrabForegroundBase::setAutoResize(const bool value)
{
    editSField(AutoResizeFieldMask);

    _sfAutoResize.setValue(value);
}
//! Get the value of the TextureGrabForeground::_sfBindTarget field.

inline
GLenum &TextureGrabForegroundBase::editBindTarget(void)
{
    editSField(BindTargetFieldMask);

    return _sfBindTarget.getValue();
}

//! Get the value of the TextureGrabForeground::_sfBindTarget field.
inline
const GLenum &TextureGrabForegroundBase::getBindTarget(void) const
{
    return _sfBindTarget.getValue();
}

//! Set the value of the TextureGrabForeground::_sfBindTarget field.
inline
void TextureGrabForegroundBase::setBindTarget(const GLenum &value)
{
    editSField(BindTargetFieldMask);

    _sfBindTarget.setValue(value);
}
//! Get the value of the TextureGrabForeground::_sfCopyTarget field.

inline
GLenum &TextureGrabForegroundBase::editCopyTarget(void)
{
    editSField(CopyTargetFieldMask);

    return _sfCopyTarget.getValue();
}

//! Get the value of the TextureGrabForeground::_sfCopyTarget field.
inline
const GLenum &TextureGrabForegroundBase::getCopyTarget(void) const
{
    return _sfCopyTarget.getValue();
}

//! Set the value of the TextureGrabForeground::_sfCopyTarget field.
inline
void TextureGrabForegroundBase::setCopyTarget(const GLenum &value)
{
    editSField(CopyTargetFieldMask);

    _sfCopyTarget.setValue(value);
}


#ifdef OSG_MT_CPTR_ASPECT
inline
void TextureGrabForegroundBase::execSync (      TextureGrabForegroundBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (TextureFieldMask & whichField))
        _sfTexture.syncWith(pFrom->_sfTexture);

    if(FieldBits::NoField != (AutoResizeFieldMask & whichField))
        _sfAutoResize.syncWith(pFrom->_sfAutoResize);

    if(FieldBits::NoField != (BindTargetFieldMask & whichField))
        _sfBindTarget.syncWith(pFrom->_sfBindTarget);

    if(FieldBits::NoField != (CopyTargetFieldMask & whichField))
        _sfCopyTarget.syncWith(pFrom->_sfCopyTarget);
}
#endif


inline
const Char8 *TextureGrabForegroundBase::getClassname(void)
{
    return "TextureGrabForeground";
}
OSG_GEN_CONTAINERPTR(TextureGrabForeground);

OSG_END_NAMESPACE

