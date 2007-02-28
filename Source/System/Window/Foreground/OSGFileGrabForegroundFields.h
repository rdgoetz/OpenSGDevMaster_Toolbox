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
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGFILEGRABFOREGROUNDFIELDS_H_
#define _OSGFILEGRABFOREGROUNDFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGWindowDef.h"

#include "OSGGrabForegroundFields.h"

#include "OSGSFieldAdaptor.h"
#include "OSGMFieldAdaptor.h"


OSG_BEGIN_NAMESPACE

class FileGrabForeground;

#if !defined(OSG_DO_DOC) // created as a dummy class, remove to prevent doubles
//! FileGrabForegroundPtr

typedef PointerFwdBuilder<GrabForegroundPtr,
                          GrabForegroundConstPtr,
                          FileGrabForeground>::ObjPtr         FileGrabForegroundPtr;
typedef PointerFwdBuilder<GrabForegroundPtr,
                          GrabForegroundConstPtr,
                          FileGrabForeground>::ObjPtrConst    FileGrabForegroundPtrConst;
typedef PointerFwdBuilder<GrabForegroundPtr,
                          GrabForegroundConstPtr,
                          FileGrabForeground>::ObjConstPtr    FileGrabForegroundConstPtr;
typedef PointerFwdBuilder<GrabForegroundPtr,
                          GrabForegroundConstPtr,
                          FileGrabForeground>::ObjPtrArg      FileGrabForegroundPtrArg;
typedef PointerFwdBuilder<GrabForegroundPtr,
                          GrabForegroundConstPtr,
                          FileGrabForeground>::ObjConstPtrArg FileGrabForegroundConstPtrArg;
typedef PointerFwdBuilder<GrabForegroundPtr,
                          GrabForegroundConstPtr,
                          FileGrabForeground>::ObjPtrConstArg FileGrabForegroundPtrConstArg;

#endif

#if !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)
/*! \ingroup GrpWindowFieldTraits
 */
#if !defined(OSG_DOC_DEV_TRAITS)
/*! \hideinhierarchy */
#endif

template <>
struct FieldTraits<FileGrabForegroundPtr> :
    public FieldTraitsTemplateBase<FileGrabForegroundPtr>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<FileGrabForegroundPtr>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_WINDOW_DLLMAPPING DataType &getType(void);

    static const char *getSName(void) { return "SFFileGrabForegroundPtr"; }
    static const char *getMName(void) { return "MFFileGrabForegroundPtr"; }
};

#if !defined(OSG_DOC_DEV_TRAITS)
/*! \class  FieldTraitsTemplateBase<FileGrabForegroundPtr, 0>
    \hideinhierarchy
 */
#endif

#endif // !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_FIELD_TYPEDEFS)
/*! \ingroup GrpWindowFieldSingle */

typedef SFieldAdaptor<FileGrabForegroundPtr, SFFieldContainerPtr> SFFileGrabForegroundPtr;
#endif

#ifndef OSG_COMPILEFILEGRABFOREGROUNDINST
OSG_FIELD_DLLEXPORT_DECL1(SField, FileGrabForegroundPtr, OSG_WINDOW_DLLTMPLMAPPING)
#endif

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_FIELD_TYPEDEFS)
/*! \ingroup GrpWindowFieldMulti */

typedef MFieldAdaptor<FileGrabForegroundPtr, MFFieldContainerPtr> MFFileGrabForegroundPtr;
#endif

#ifndef OSG_COMPILEFILEGRABFOREGROUNDINST
OSG_FIELD_DLLEXPORT_DECL1(MField, FileGrabForegroundPtr, OSG_WINDOW_DLLTMPLMAPPING)
#endif

OSG_END_NAMESPACE

#endif /* _OSGFILEGRABFOREGROUNDFIELDS_H_ */
