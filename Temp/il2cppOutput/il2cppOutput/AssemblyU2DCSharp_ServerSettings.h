#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1;
// UnityEngine.ScriptableObject
#include "UnityEngine_UnityEngine_ScriptableObject.h"
// ServerSettings/HostingOption
#include "AssemblyU2DCSharp_ServerSettings_HostingOption.h"
// ExitGames.Client.Photon.ConnectionProtocol
#include "Photon3Unity3D_ExitGames_Client_Photon_ConnectionProtocol.h"
// CloudRegionCode
#include "AssemblyU2DCSharp_CloudRegionCode.h"
// ServerSettings
struct ServerSettings_t302  : public ScriptableObject_t151
{
	// ServerSettings/HostingOption ServerSettings::HostType
	int32_t ___HostType;
	// ExitGames.Client.Photon.ConnectionProtocol ServerSettings::Protocol
	uint8_t ___Protocol;
	// System.String ServerSettings::ServerAddress
	String_t* ___ServerAddress;
	// System.Int32 ServerSettings::ServerPort
	int32_t ___ServerPort;
	// CloudRegionCode ServerSettings::PreferredRegion
	int32_t ___PreferredRegion;
	// System.String ServerSettings::AppID
	String_t* ___AppID;
	// System.Boolean ServerSettings::PingCloudServersOnAwake
	bool ___PingCloudServersOnAwake;
	// System.Collections.Generic.List`1<System.String> ServerSettings::RpcList
	List_1_t1 * ___RpcList;
	// System.Boolean ServerSettings::DisableAutoOpenWizard
	bool ___DisableAutoOpenWizard;
};
