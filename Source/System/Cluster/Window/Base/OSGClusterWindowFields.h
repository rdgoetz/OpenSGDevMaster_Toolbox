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


#ifndef _OSGCLUSTERWINDOWFIELDS_H_
#define _OSGCLUSTERWINDOWFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGClusterDef.h"

#include "OSGWindowFields.h"

#include "OSGSFieldAdaptor.h"
#include "OSGMFieldAdaptor.h"


OSG_BEGIN_NAMESPACE

class ClusterWindow;

#if !defined(OSG_DO_DOC) // created as a dummy class, remove to prevent doubles
//! ClusterWindowPtr

typedef PointerFwdBuilder<WindowPtr,
                          WindowConstPtr,
                          ClusterWindow>::ObjPtr         ClusterWindowPtr;
typedef PointerFwdBuilder<WindowPtr,
                          WindowConstPtr,
                          ClusterWindow>::ObjPtrConst    ClusterWindowPtrConst;
typedef PointerFwdBuilder<WindowPtr,
                          WindowConstPtr,
                          ClusterWindow>::ObjConstPtr    ClusterWindowConstPtr;
typedef PointerFwdBuilder<WindowPtr,
                          WindowConstPtr,
                          ClusterWindow>::ObjPtrArg      ClusterWindowPtrArg;
typedef PointerFwdBuilder<WindowPtr,
                          WindowConstPtr,
                          ClusterWindow>::ObjConstPtrArg ClusterWindowConstPtrArg;
typedef PointerFwdBuilder<WindowPtr,
                          WindowConstPtr,
                          ClusterWindow>::ObjPtrConstArg ClusterWindowPtrConstArg;

#endif

#if !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)
/*! \ingroup GrpClusterFieldTraits
 */
#if !defined(OSG_DOC_DEV_TRAITS)
/*! \hideinhierarchy */
#endif

template <>
struct FieldTraits<ClusterWindowPtr> :
    public FieldTraitsTemplateBase<ClusterWindowPtr>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<ClusterWindowPtr>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CLUSTER_DLLMAPPING DataType &getType(void);

    static const char *getSName(void) { return "SFClusterWindowPtr"; }
    static const char *getMName(void) { return "MFClusterWindowPtr"; }
};

#if !defined(OSG_DOC_DEV_TRAITS)
/*! \class  FieldTraitsTemplateBase<ClusterWindowPtr, 0>
    \hideinhierarchy
 */
#endif

#endif // !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_FIELD_TYPEDEFS)
/*! \ingroup GrpClusterFieldSingle */

typedef SFieldAdaptor<ClusterWindowPtr, SFFieldContainerPtr> SFClusterWindowPtr;
#endif

#ifndef OSG_COMPILECLUSTERWINDOWINST
OSG_FIELD_DLLEXPORT_DECL1(SField, ClusterWindowPtr, OSG_CLUSTER_DLLTMPLMAPPING)
#endif

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_FIELD_TYPEDEFS)
/*! \ingroup GrpClusterFieldMulti */

typedef MFieldAdaptor<ClusterWindowPtr, MFFieldContainerPtr> MFClusterWindowPtr;
#endif

#ifndef OSG_COMPILECLUSTERWINDOWINST
OSG_FIELD_DLLEXPORT_DECL1(MField, ClusterWindowPtr, OSG_CLUSTER_DLLTMPLMAPPING)
#endif

OSG_END_NAMESPACE

#endif /* _OSGCLUSTERWINDOWFIELDS_H_ */
