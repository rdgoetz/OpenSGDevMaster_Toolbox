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
 **     class ClusterWindow!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILECLUSTERWINDOWINST

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>



#include <OSGWindow.h> // ClientWindow Class
#include <OSGImageComposer.h> // Composer Class

#include "OSGClusterWindowBase.h"
#include "OSGClusterWindow.h"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::ClusterWindow
    The base class for all windows.
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var std::string     ClusterWindowBase::_mfServers
    List of all symbolic server names
*/

/*! \var std::string     ClusterWindowBase::_sfConnectionType
    How to connect to the servers
*/

/*! \var std::string     ClusterWindowBase::_sfConnectionInterface
    Which network interface to use for communication
*/

/*! \var std::string     ClusterWindowBase::_sfConnectionDestination
    Multicast address for multicast connections
*/

/*! \var std::string     ClusterWindowBase::_sfConnectionParams
    Optional parameters e.g. "TTL=2"
*/

/*! \var UInt32          ClusterWindowBase::_sfServicePort
    Broadcastport used for server search
*/

/*! \var std::string     ClusterWindowBase::_sfServiceAddress
    Broadcast or Multicast address used for server search
*/

/*! \var WindowPtr       ClusterWindowBase::_sfClientWindow
    Window for client rendering
*/

/*! \var UInt32          ClusterWindowBase::_sfInterleave
    
*/

/*! \var UInt32          ClusterWindowBase::_sfFrameCount
    
*/

/*! \var ImageComposerPtr ClusterWindowBase::_sfComposer
    
*/

/*! \var std::string     ClusterWindowBase::_mfAutostart
    
*/


void ClusterWindowBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


#ifdef OSG_1_COMPAT
    typedef const MFString *(ClusterWindowBase::*GetMFServersF)(void) const;

    GetMFServersF GetMFServers = &ClusterWindowBase::getMFServers;
#endif

    pDesc = new MFString::Description(
        MFString::getClassType(),
        "servers",
        "List of all symbolic server names\n",
        ServersFieldId, ServersFieldMask,
        false,
        Field::MFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&ClusterWindowBase::editMFServers),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetMFServers));
#else
        reinterpret_cast<FieldGetMethodSig >(&ClusterWindowBase::getMFServers));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_COMPAT
    typedef const SFString *(ClusterWindowBase::*GetSFConnectionTypeF)(void) const;

    GetSFConnectionTypeF GetSFConnectionType = &ClusterWindowBase::getSFConnectionType;
#endif

    pDesc = new SFString::Description(
        SFString::getClassType(),
        "connectionType",
        "How to connect to the servers\n",
        ConnectionTypeFieldId, ConnectionTypeFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&ClusterWindowBase::editSFConnectionType),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFConnectionType));
#else
        reinterpret_cast<FieldGetMethodSig >(&ClusterWindowBase::getSFConnectionType));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_COMPAT
    typedef const SFString *(ClusterWindowBase::*GetSFConnectionInterfaceF)(void) const;

    GetSFConnectionInterfaceF GetSFConnectionInterface = &ClusterWindowBase::getSFConnectionInterface;
#endif

    pDesc = new SFString::Description(
        SFString::getClassType(),
        "connectionInterface",
        "Which network interface to use for communication\n",
        ConnectionInterfaceFieldId, ConnectionInterfaceFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&ClusterWindowBase::editSFConnectionInterface),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFConnectionInterface));
#else
        reinterpret_cast<FieldGetMethodSig >(&ClusterWindowBase::getSFConnectionInterface));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_COMPAT
    typedef const SFString *(ClusterWindowBase::*GetSFConnectionDestinationF)(void) const;

    GetSFConnectionDestinationF GetSFConnectionDestination = &ClusterWindowBase::getSFConnectionDestination;
#endif

    pDesc = new SFString::Description(
        SFString::getClassType(),
        "connectionDestination",
        "Multicast address for multicast connections\n",
        ConnectionDestinationFieldId, ConnectionDestinationFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&ClusterWindowBase::editSFConnectionDestination),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFConnectionDestination));
#else
        reinterpret_cast<FieldGetMethodSig >(&ClusterWindowBase::getSFConnectionDestination));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_COMPAT
    typedef const SFString *(ClusterWindowBase::*GetSFConnectionParamsF)(void) const;

    GetSFConnectionParamsF GetSFConnectionParams = &ClusterWindowBase::getSFConnectionParams;
#endif

    pDesc = new SFString::Description(
        SFString::getClassType(),
        "connectionParams",
        "Optional parameters e.g. \"TTL=2\"\n",
        ConnectionParamsFieldId, ConnectionParamsFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&ClusterWindowBase::editSFConnectionParams),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFConnectionParams));
#else
        reinterpret_cast<FieldGetMethodSig >(&ClusterWindowBase::getSFConnectionParams));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_COMPAT
    typedef const SFUInt32 *(ClusterWindowBase::*GetSFServicePortF)(void) const;

    GetSFServicePortF GetSFServicePort = &ClusterWindowBase::getSFServicePort;
#endif

    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(),
        "servicePort",
        "Broadcastport used for server search\n",
        ServicePortFieldId, ServicePortFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&ClusterWindowBase::editSFServicePort),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFServicePort));
#else
        reinterpret_cast<FieldGetMethodSig >(&ClusterWindowBase::getSFServicePort));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_COMPAT
    typedef const SFString *(ClusterWindowBase::*GetSFServiceAddressF)(void) const;

    GetSFServiceAddressF GetSFServiceAddress = &ClusterWindowBase::getSFServiceAddress;
#endif

    pDesc = new SFString::Description(
        SFString::getClassType(),
        "serviceAddress",
        "Broadcast or Multicast address used for server search\n",
        ServiceAddressFieldId, ServiceAddressFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&ClusterWindowBase::editSFServiceAddress),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFServiceAddress));
#else
        reinterpret_cast<FieldGetMethodSig >(&ClusterWindowBase::getSFServiceAddress));
#endif

    oType.addInitialDesc(pDesc);

    pDesc = new SFWindowPtr::Description(
        SFWindowPtr::getClassType(),
        "clientWindow",
        "Window for client rendering\n",
        ClientWindowFieldId, ClientWindowFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast     <FieldEditMethodSig>(&ClusterWindowBase::invalidEditField),
        reinterpret_cast<FieldGetMethodSig >(&ClusterWindowBase::getSFClientWindow));

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_COMPAT
    typedef const SFUInt32 *(ClusterWindowBase::*GetSFInterleaveF)(void) const;

    GetSFInterleaveF GetSFInterleave = &ClusterWindowBase::getSFInterleave;
#endif

    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(),
        "interleave",
        "",
        InterleaveFieldId, InterleaveFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&ClusterWindowBase::editSFInterleave),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFInterleave));
#else
        reinterpret_cast<FieldGetMethodSig >(&ClusterWindowBase::getSFInterleave));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_COMPAT
    typedef const SFUInt32 *(ClusterWindowBase::*GetSFFrameCountF)(void) const;

    GetSFFrameCountF GetSFFrameCount = &ClusterWindowBase::getSFFrameCount;
#endif

    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(),
        "frameCount",
        "",
        FrameCountFieldId, FrameCountFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&ClusterWindowBase::editSFFrameCount),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFFrameCount));
#else
        reinterpret_cast<FieldGetMethodSig >(&ClusterWindowBase::getSFFrameCount));
#endif

    oType.addInitialDesc(pDesc);

    pDesc = new SFImageComposerPtr::Description(
        SFImageComposerPtr::getClassType(),
        "composer",
        "",
        ComposerFieldId, ComposerFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast     <FieldEditMethodSig>(&ClusterWindowBase::invalidEditField),
        reinterpret_cast<FieldGetMethodSig >(&ClusterWindowBase::getSFComposer));

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_COMPAT
    typedef const MFString *(ClusterWindowBase::*GetMFAutostartF)(void) const;

    GetMFAutostartF GetMFAutostart = &ClusterWindowBase::getMFAutostart;
#endif

    pDesc = new MFString::Description(
        MFString::getClassType(),
        "autostart",
        "",
        AutostartFieldId, AutostartFieldMask,
        false,
        Field::MFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&ClusterWindowBase::editMFAutostart),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetMFAutostart));
#else
        reinterpret_cast<FieldGetMethodSig >(&ClusterWindowBase::getMFAutostart));
#endif

    oType.addInitialDesc(pDesc);
}


ClusterWindowBase::TypeObject ClusterWindowBase::_type(true,
    ClusterWindowBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    (PrototypeCreateF) &ClusterWindowBase::createEmpty,
    ClusterWindow::initMethod,
    (InitalInsertDescFunc) &ClusterWindowBase::classDescInserter,
    false,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"ClusterWindow\"\n"
    "\tparent=\"Window\"\n"
    "\tlibrary=\"Cluster\"\n"
    "\tpointerfieldtypes=\"both\"\n"
    "\tstructure=\"concrete\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    "\tdecoratable=\"false\"\n"
    "\tuseLocalIncludes=\"false\"\n"
    ">\n"
    "The base class for all windows.\n"
    "\t<Field\n"
    "\t\tname=\"servers\"\n"
    "\t\ttype=\"std::string\"\n"
    "\t\tcardinality=\"multi\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tList of all symbolic server names\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"connectionType\"\n"
    "\t\ttype=\"std::string\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tHow to connect to the servers\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"connectionInterface\"\n"
    "\t\ttype=\"std::string\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tWhich network interface to use for communication\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"connectionDestination\"\n"
    "\t\ttype=\"std::string\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tMulticast address for multicast connections\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"connectionParams\"\n"
    "\t\ttype=\"std::string\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tOptional parameters e.g. \"TTL=2\"\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"servicePort\"\n"
    "\t\ttype=\"UInt32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"8437\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tBroadcastport used for server search\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"serviceAddress\"\n"
    "\t\ttype=\"std::string\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue='\"224.245.211.234\"'\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tBroadcast or Multicast address used for server search\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"clientWindow\"\n"
    "\t\ttype=\"WindowPtr\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tWindow for client rendering\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"interleave\"\n"
    "\t\ttype=\"UInt32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"0\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"frameCount\"\n"
    "\t\ttype=\"UInt32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"0\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"composer\"\n"
    "\t\ttype=\"ImageComposerPtr\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"autostart\"\n"
    "\t\ttype=\"std::string\"\n"
    "\t\tcardinality=\"multi\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "<!--\n"
    "\t<Field\n"
    "\t\tname=\"calibration\"\n"
    "\t\ttype=\"DisplayCalibrationPtr\"\n"
    "\t\tcardinality=\"multi\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "-->\n"
    "</FieldContainer>\n",
    "The base class for all windows.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &ClusterWindowBase::getType(void)
{
    return _type;
}

const FieldContainerType &ClusterWindowBase::getType(void) const
{
    return _type;
}

UInt32 ClusterWindowBase::getContainerSize(void) const
{
    return sizeof(ClusterWindow);
}

/*------------------------- decorator get ------------------------------*/


MFString *ClusterWindowBase::editMFServers(void)
{
    editMField(ServersFieldMask, _mfServers);

    return &_mfServers;
}

const MFString *ClusterWindowBase::getMFServers(void) const
{
    return &_mfServers;
}

#ifdef OSG_1_COMPAT
MFString            *ClusterWindowBase::getMFServers        (void)
{
    return this->editMFServers        ();
}
#endif

SFString *ClusterWindowBase::editSFConnectionType(void)
{
    editSField(ConnectionTypeFieldMask);

    return &_sfConnectionType;
}

const SFString *ClusterWindowBase::getSFConnectionType(void) const
{
    return &_sfConnectionType;
}

#ifdef OSG_1_COMPAT
SFString            *ClusterWindowBase::getSFConnectionType (void)
{
    return this->editSFConnectionType ();
}
#endif

SFString *ClusterWindowBase::editSFConnectionInterface(void)
{
    editSField(ConnectionInterfaceFieldMask);

    return &_sfConnectionInterface;
}

const SFString *ClusterWindowBase::getSFConnectionInterface(void) const
{
    return &_sfConnectionInterface;
}

#ifdef OSG_1_COMPAT
SFString            *ClusterWindowBase::getSFConnectionInterface(void)
{
    return this->editSFConnectionInterface();
}
#endif

SFString *ClusterWindowBase::editSFConnectionDestination(void)
{
    editSField(ConnectionDestinationFieldMask);

    return &_sfConnectionDestination;
}

const SFString *ClusterWindowBase::getSFConnectionDestination(void) const
{
    return &_sfConnectionDestination;
}

#ifdef OSG_1_COMPAT
SFString            *ClusterWindowBase::getSFConnectionDestination(void)
{
    return this->editSFConnectionDestination();
}
#endif

SFString *ClusterWindowBase::editSFConnectionParams(void)
{
    editSField(ConnectionParamsFieldMask);

    return &_sfConnectionParams;
}

const SFString *ClusterWindowBase::getSFConnectionParams(void) const
{
    return &_sfConnectionParams;
}

#ifdef OSG_1_COMPAT
SFString            *ClusterWindowBase::getSFConnectionParams(void)
{
    return this->editSFConnectionParams();
}
#endif

SFUInt32 *ClusterWindowBase::editSFServicePort(void)
{
    editSField(ServicePortFieldMask);

    return &_sfServicePort;
}

const SFUInt32 *ClusterWindowBase::getSFServicePort(void) const
{
    return &_sfServicePort;
}

#ifdef OSG_1_COMPAT
SFUInt32            *ClusterWindowBase::getSFServicePort    (void)
{
    return this->editSFServicePort    ();
}
#endif

SFString *ClusterWindowBase::editSFServiceAddress(void)
{
    editSField(ServiceAddressFieldMask);

    return &_sfServiceAddress;
}

const SFString *ClusterWindowBase::getSFServiceAddress(void) const
{
    return &_sfServiceAddress;
}

#ifdef OSG_1_COMPAT
SFString            *ClusterWindowBase::getSFServiceAddress (void)
{
    return this->editSFServiceAddress ();
}
#endif

//! Get the ClusterWindow::_sfClientWindow field.
const SFWindowPtr *ClusterWindowBase::getSFClientWindow(void) const
{
    return &_sfClientWindow;
}

SFUInt32 *ClusterWindowBase::editSFInterleave(void)
{
    editSField(InterleaveFieldMask);

    return &_sfInterleave;
}

const SFUInt32 *ClusterWindowBase::getSFInterleave(void) const
{
    return &_sfInterleave;
}

#ifdef OSG_1_COMPAT
SFUInt32            *ClusterWindowBase::getSFInterleave     (void)
{
    return this->editSFInterleave     ();
}
#endif

SFUInt32 *ClusterWindowBase::editSFFrameCount(void)
{
    editSField(FrameCountFieldMask);

    return &_sfFrameCount;
}

const SFUInt32 *ClusterWindowBase::getSFFrameCount(void) const
{
    return &_sfFrameCount;
}

#ifdef OSG_1_COMPAT
SFUInt32            *ClusterWindowBase::getSFFrameCount     (void)
{
    return this->editSFFrameCount     ();
}
#endif

//! Get the ClusterWindow::_sfComposer field.
const SFImageComposerPtr *ClusterWindowBase::getSFComposer(void) const
{
    return &_sfComposer;
}

MFString *ClusterWindowBase::editMFAutostart(void)
{
    editMField(AutostartFieldMask, _mfAutostart);

    return &_mfAutostart;
}

const MFString *ClusterWindowBase::getMFAutostart(void) const
{
    return &_mfAutostart;
}

#ifdef OSG_1_COMPAT
MFString            *ClusterWindowBase::getMFAutostart      (void)
{
    return this->editMFAutostart      ();
}
#endif


void ClusterWindowBase::pushToField(      FieldContainerPtrConstArg pNewElement,
                                    const UInt32                    uiFieldId  )
{
    Inherited::pushToField(pNewElement, uiFieldId);

    if(uiFieldId == ClientWindowFieldId)
    {
        static_cast<ClusterWindow *>(this)->setClientWindow(
            cast_dynamic<WindowPtr>(pNewElement));
    }
    if(uiFieldId == ComposerFieldId)
    {
        static_cast<ClusterWindow *>(this)->setComposer(
            cast_dynamic<ImageComposerPtr>(pNewElement));
    }
}

void ClusterWindowBase::insertIntoMField(const UInt32                    uiIndex,
                                               FieldContainerPtrConstArg pNewElement,
                                         const UInt32                    uiFieldId  )
{
    Inherited::insertIntoMField(uiIndex, pNewElement, uiFieldId);

}

void ClusterWindowBase::replaceInMField (const UInt32                    uiIndex,
                                               FieldContainerPtrConstArg pNewElement,
                                         const UInt32                    uiFieldId)
{
    Inherited::replaceInMField(uiIndex, pNewElement, uiFieldId);

}

void ClusterWindowBase::replaceInMField (      FieldContainerPtrConstArg pOldElement,
                                               FieldContainerPtrConstArg pNewElement,
                                         const UInt32                    uiFieldId  )
{
    Inherited::replaceInMField(pOldElement, pNewElement, uiFieldId);

}

void ClusterWindowBase::removeFromMField(const UInt32 uiIndex,
                                         const UInt32 uiFieldId)
{
    Inherited::removeFromMField(uiIndex, uiFieldId);

}

void ClusterWindowBase::removeFromMField(      FieldContainerPtrConstArg pElement,
                                         const UInt32                    uiFieldId)
{
    Inherited::removeFromMField(pElement, uiFieldId);

}

void ClusterWindowBase::clearField(const UInt32 uiFieldId)
{
    Inherited::clearField(uiFieldId);

    if(uiFieldId == ClientWindowFieldId)
    {
        static_cast<ClusterWindow *>(this)->setClientWindow(NullFC);
    }
    if(uiFieldId == ComposerFieldId)
    {
        static_cast<ClusterWindow *>(this)->setComposer(NullFC);
    }
}

/*********************************** Non-ptr code ********************************/
void ClusterWindowBase::pushToServers(const std::string& value)
{
    editMField(ServersFieldMask, _mfServers);
    _mfServers.push_back(value);
}

void ClusterWindowBase::insertIntoServers(UInt32                uiIndex,
                                                   const std::string& value   )
{
    editMField(ServersFieldMask, _mfServers);

    MFString::iterator fieldIt = _mfServers.begin();

    fieldIt += uiIndex;

    _mfServers.insert(fieldIt, value);
}

void ClusterWindowBase::replaceInServers(UInt32                uiIndex,
                                                       const std::string& value   )
{
    if(uiIndex >= _mfServers.size())
        return;

    editMField(ServersFieldMask, _mfServers);

    _mfServers[uiIndex] = value;
}

void ClusterWindowBase::replaceInServers(const std::string& pOldElem,
                                                        const std::string& pNewElem)
{
    Int32  elemIdx = _mfServers.findIndex(pOldElem);

    if(elemIdx != -1)
    {
        editMField(ServersFieldMask, _mfServers);

        MFString::iterator fieldIt = _mfServers.begin();

        fieldIt += elemIdx;

        (*fieldIt) = pNewElem;
    }
}

void ClusterWindowBase::removeFromServers(UInt32 uiIndex)
{
    if(uiIndex < _mfServers.size())
    {
        editMField(ServersFieldMask, _mfServers);

        MFString::iterator fieldIt = _mfServers.begin();

        fieldIt += uiIndex;
        _mfServers.erase(fieldIt);
    }
}

void ClusterWindowBase::removeFromServers(const std::string& value)
{
    Int32 iElemIdx = _mfServers.findIndex(value);

    if(iElemIdx != -1)
    {
        editMField(ServersFieldMask, _mfServers);

        MFString::iterator fieldIt = _mfServers.begin();

        fieldIt += iElemIdx;

        _mfServers.erase(fieldIt);
    }
}

void ClusterWindowBase::clearServers(void)
{
    editMField(ServersFieldMask, _mfServers);

    _mfServers.clear();
}
/*********************************** Non-ptr code ********************************/
void ClusterWindowBase::pushToAutostart(const std::string& value)
{
    editMField(AutostartFieldMask, _mfAutostart);
    _mfAutostart.push_back(value);
}

void ClusterWindowBase::insertIntoAutostart(UInt32                uiIndex,
                                                   const std::string& value   )
{
    editMField(AutostartFieldMask, _mfAutostart);

    MFString::iterator fieldIt = _mfAutostart.begin();

    fieldIt += uiIndex;

    _mfAutostart.insert(fieldIt, value);
}

void ClusterWindowBase::replaceInAutostart(UInt32                uiIndex,
                                                       const std::string& value   )
{
    if(uiIndex >= _mfAutostart.size())
        return;

    editMField(AutostartFieldMask, _mfAutostart);

    _mfAutostart[uiIndex] = value;
}

void ClusterWindowBase::replaceInAutostart(const std::string& pOldElem,
                                                        const std::string& pNewElem)
{
    Int32  elemIdx = _mfAutostart.findIndex(pOldElem);

    if(elemIdx != -1)
    {
        editMField(AutostartFieldMask, _mfAutostart);

        MFString::iterator fieldIt = _mfAutostart.begin();

        fieldIt += elemIdx;

        (*fieldIt) = pNewElem;
    }
}

void ClusterWindowBase::removeFromAutostart(UInt32 uiIndex)
{
    if(uiIndex < _mfAutostart.size())
    {
        editMField(AutostartFieldMask, _mfAutostart);

        MFString::iterator fieldIt = _mfAutostart.begin();

        fieldIt += uiIndex;
        _mfAutostart.erase(fieldIt);
    }
}

void ClusterWindowBase::removeFromAutostart(const std::string& value)
{
    Int32 iElemIdx = _mfAutostart.findIndex(value);

    if(iElemIdx != -1)
    {
        editMField(AutostartFieldMask, _mfAutostart);

        MFString::iterator fieldIt = _mfAutostart.begin();

        fieldIt += iElemIdx;

        _mfAutostart.erase(fieldIt);
    }
}

void ClusterWindowBase::clearAutostart(void)
{
    editMField(AutostartFieldMask, _mfAutostart);

    _mfAutostart.clear();
}


/*------------------------------ access -----------------------------------*/

UInt32 ClusterWindowBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (ServersFieldMask & whichField))
    {
        returnValue += _mfServers.getBinSize();
    }
    if(FieldBits::NoField != (ConnectionTypeFieldMask & whichField))
    {
        returnValue += _sfConnectionType.getBinSize();
    }
    if(FieldBits::NoField != (ConnectionInterfaceFieldMask & whichField))
    {
        returnValue += _sfConnectionInterface.getBinSize();
    }
    if(FieldBits::NoField != (ConnectionDestinationFieldMask & whichField))
    {
        returnValue += _sfConnectionDestination.getBinSize();
    }
    if(FieldBits::NoField != (ConnectionParamsFieldMask & whichField))
    {
        returnValue += _sfConnectionParams.getBinSize();
    }
    if(FieldBits::NoField != (ServicePortFieldMask & whichField))
    {
        returnValue += _sfServicePort.getBinSize();
    }
    if(FieldBits::NoField != (ServiceAddressFieldMask & whichField))
    {
        returnValue += _sfServiceAddress.getBinSize();
    }
    if(FieldBits::NoField != (ClientWindowFieldMask & whichField))
    {
        returnValue += _sfClientWindow.getBinSize();
    }
    if(FieldBits::NoField != (InterleaveFieldMask & whichField))
    {
        returnValue += _sfInterleave.getBinSize();
    }
    if(FieldBits::NoField != (FrameCountFieldMask & whichField))
    {
        returnValue += _sfFrameCount.getBinSize();
    }
    if(FieldBits::NoField != (ComposerFieldMask & whichField))
    {
        returnValue += _sfComposer.getBinSize();
    }
    if(FieldBits::NoField != (AutostartFieldMask & whichField))
    {
        returnValue += _mfAutostart.getBinSize();
    }

    return returnValue;
}

void ClusterWindowBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (ServersFieldMask & whichField))
    {
        _mfServers.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ConnectionTypeFieldMask & whichField))
    {
        _sfConnectionType.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ConnectionInterfaceFieldMask & whichField))
    {
        _sfConnectionInterface.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ConnectionDestinationFieldMask & whichField))
    {
        _sfConnectionDestination.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ConnectionParamsFieldMask & whichField))
    {
        _sfConnectionParams.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ServicePortFieldMask & whichField))
    {
        _sfServicePort.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ServiceAddressFieldMask & whichField))
    {
        _sfServiceAddress.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ClientWindowFieldMask & whichField))
    {
        _sfClientWindow.copyToBin(pMem);
    }
    if(FieldBits::NoField != (InterleaveFieldMask & whichField))
    {
        _sfInterleave.copyToBin(pMem);
    }
    if(FieldBits::NoField != (FrameCountFieldMask & whichField))
    {
        _sfFrameCount.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ComposerFieldMask & whichField))
    {
        _sfComposer.copyToBin(pMem);
    }
    if(FieldBits::NoField != (AutostartFieldMask & whichField))
    {
        _mfAutostart.copyToBin(pMem);
    }
}

void ClusterWindowBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (ServersFieldMask & whichField))
    {
        _mfServers.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ConnectionTypeFieldMask & whichField))
    {
        _sfConnectionType.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ConnectionInterfaceFieldMask & whichField))
    {
        _sfConnectionInterface.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ConnectionDestinationFieldMask & whichField))
    {
        _sfConnectionDestination.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ConnectionParamsFieldMask & whichField))
    {
        _sfConnectionParams.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ServicePortFieldMask & whichField))
    {
        _sfServicePort.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ServiceAddressFieldMask & whichField))
    {
        _sfServiceAddress.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ClientWindowFieldMask & whichField))
    {
        _sfClientWindow.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (InterleaveFieldMask & whichField))
    {
        _sfInterleave.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (FrameCountFieldMask & whichField))
    {
        _sfFrameCount.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ComposerFieldMask & whichField))
    {
        _sfComposer.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (AutostartFieldMask & whichField))
    {
        _mfAutostart.copyFromBin(pMem);
    }
}

//! create an empty new instance of the class, do not copy the prototype
ClusterWindowPtr ClusterWindowBase::createEmpty(void)
{
    ClusterWindowPtr returnValue;

    newPtr<ClusterWindow>(returnValue);

    return returnValue;
}

FieldContainerPtr ClusterWindowBase::shallowCopy(void) const
{
    ClusterWindowPtr returnValue;

    newPtr(returnValue, dynamic_cast<const ClusterWindow *>(this));

    return returnValue;
}



/*------------------------- constructors ----------------------------------*/

ClusterWindowBase::ClusterWindowBase(void) :
    Inherited(),
    _mfServers                (),
    _sfConnectionType         (),
    _sfConnectionInterface    (),
    _sfConnectionDestination  (),
    _sfConnectionParams       (),
    _sfServicePort            (UInt32(8437)),
    _sfServiceAddress         (std::string("224.245.211.234")),
    _sfClientWindow           (),
    _sfInterleave             (UInt32(0)),
    _sfFrameCount             (UInt32(0)),
    _sfComposer               (),
    _mfAutostart              ()
{
}

ClusterWindowBase::ClusterWindowBase(const ClusterWindowBase &source) :
    Inherited(source),
    _mfServers                (source._mfServers                ),
    _sfConnectionType         (source._sfConnectionType         ),
    _sfConnectionInterface    (source._sfConnectionInterface    ),
    _sfConnectionDestination  (source._sfConnectionDestination  ),
    _sfConnectionParams       (source._sfConnectionParams       ),
    _sfServicePort            (source._sfServicePort            ),
    _sfServiceAddress         (source._sfServiceAddress         ),
    _sfClientWindow           (),
    _sfInterleave             (source._sfInterleave             ),
    _sfFrameCount             (source._sfFrameCount             ),
    _sfComposer               (),
    _mfAutostart              (source._mfAutostart              )
{
}

/*-------------------------- destructors ----------------------------------*/

ClusterWindowBase::~ClusterWindowBase(void)
{
}

void ClusterWindowBase::onCreate(const ClusterWindow *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {

        this->setClientWindow(source->getClientWindow());

        this->setComposer(source->getComposer());
    }
}

#ifdef OSG_MT_FIELDCONTAINERPTR
void ClusterWindowBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo,
                                        UInt32             uiCopyOffset)
{
    this->execSync(static_cast<ClusterWindowBase *>(&oFrom),
                   whichField,
                   syncMode,
                   uiSyncInfo,
                   uiCopyOffset);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
void ClusterWindowBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<ClusterWindowBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif

#if 0
void ClusterWindowBase::execBeginEditV(ConstFieldMaskArg whichField,
                                       UInt32            uiAspect,
                                       UInt32            uiContainerSize)
{
    this->execBeginEdit(whichField, uiAspect, uiContainerSize);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
FieldContainerPtr ClusterWindowBase::createAspectCopy(void) const
{
    ClusterWindowPtr returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const ClusterWindow *>(this));

    return returnValue;
}
#endif

void ClusterWindowBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<ClusterWindow *>(this)->setClientWindow(NullFC);

    static_cast<ClusterWindow *>(this)->setComposer(NullFC);
}


OSG_END_NAMESPACE

#include "OSGSFieldAdaptor.ins"
#include "OSGMFieldAdaptor.ins"

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<ClusterWindowPtr>::_type("ClusterWindowPtr", "WindowPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(ClusterWindowPtr)

OSG_FIELD_DLLEXPORT_DEF2(SFieldAdaptor, ClusterWindowPtr, SFFieldContainerPtr);
OSG_FIELD_DLLEXPORT_DEF2(MFieldAdaptor, ClusterWindowPtr, MFFieldContainerPtr);

OSG_END_NAMESPACE
