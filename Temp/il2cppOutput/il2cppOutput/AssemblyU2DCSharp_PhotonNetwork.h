#pragma once
#include <stdint.h>
// System.String
struct String_t;
// PhotonHandler
struct PhotonHandler_t299;
// NetworkingPeer
struct NetworkingPeer_t288;
// ServerSettings
struct ServerSettings_t302;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>
struct Dictionary_2_t278;
// Room
struct Room_t286;
// System.Collections.Generic.HashSet`1<UnityEngine.GameObject>
struct HashSet_1_t303;
// System.Type
struct Type_t;
// PhotonNetwork/EventCallback
struct EventCallback_t301;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t304;
// System.Collections.Generic.List`1<FriendInfo>
struct List_1_t305;
// System.Object
#include "mscorlib_System_Object.h"
// PhotonLogLevel
#include "AssemblyU2DCSharp_PhotonLogLevel.h"
// PhotonNetwork
struct PhotonNetwork_t306  : public Object_t
{
};
struct PhotonNetwork_t306_StaticFields{
	// System.String PhotonNetwork::versionPUN
	String_t* ___versionPUN;
	// System.String PhotonNetwork::serverSettingsAssetFile
	String_t* ___serverSettingsAssetFile;
	// System.String PhotonNetwork::serverSettingsAssetPath
	String_t* ___serverSettingsAssetPath;
	// PhotonHandler PhotonNetwork::photonMono
	PhotonHandler_t299 * ___photonMono;
	// NetworkingPeer PhotonNetwork::networkingPeer
	NetworkingPeer_t288 * ___networkingPeer;
	// System.Int32 PhotonNetwork::MAX_VIEW_IDS
	int32_t ___MAX_VIEW_IDS;
	// ServerSettings PhotonNetwork::PhotonServerSettings
	ServerSettings_t302 * ___PhotonServerSettings;
	// System.Single PhotonNetwork::precisionForVectorSynchronization
	float ___precisionForVectorSynchronization;
	// System.Single PhotonNetwork::precisionForQuaternionSynchronization
	float ___precisionForQuaternionSynchronization;
	// System.Single PhotonNetwork::precisionForFloatSynchronization
	float ___precisionForFloatSynchronization;
	// System.Boolean PhotonNetwork::InstantiateInRoomOnly
	bool ___InstantiateInRoomOnly;
	// PhotonLogLevel PhotonNetwork::logLevel
	int32_t ___logLevel;
	// System.Boolean PhotonNetwork::UsePrefabCache
	bool ___UsePrefabCache;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject> PhotonNetwork::PrefabCache
	Dictionary_2_t278 * ___PrefabCache;
	// System.Boolean PhotonNetwork::isOfflineMode
	bool ___isOfflineMode;
	// Room PhotonNetwork::offlineModeRoom
	Room_t286 * ___offlineModeRoom;
	// System.Boolean PhotonNetwork::UseNameServer
	bool ___UseNameServer;
	// System.Collections.Generic.HashSet`1<UnityEngine.GameObject> PhotonNetwork::SendMonoMessageTargets
	HashSet_1_t303 * ___SendMonoMessageTargets;
	// System.Type PhotonNetwork::SendMonoMessageTargetType
	Type_t * ___SendMonoMessageTargetType;
	// System.Boolean PhotonNetwork::_mAutomaticallySyncScene
	bool ____mAutomaticallySyncScene;
	// System.Boolean PhotonNetwork::m_autoCleanUpPlayerObjects
	bool ___m_autoCleanUpPlayerObjects;
	// System.Boolean PhotonNetwork::autoJoinLobbyField
	bool ___autoJoinLobbyField;
	// System.Int32 PhotonNetwork::sendInterval
	int32_t ___sendInterval;
	// System.Int32 PhotonNetwork::sendIntervalOnSerialize
	int32_t ___sendIntervalOnSerialize;
	// System.Boolean PhotonNetwork::m_isMessageQueueRunning
	bool ___m_isMessageQueueRunning;
	// PhotonNetwork/EventCallback PhotonNetwork::OnEventCall
	EventCallback_t301 * ___OnEventCall;
	// System.Int32 PhotonNetwork::lastUsedViewSubId
	int32_t ___lastUsedViewSubId;
	// System.Int32 PhotonNetwork::lastUsedViewSubIdStatic
	int32_t ___lastUsedViewSubIdStatic;
	// System.Collections.Generic.List`1<System.Int32> PhotonNetwork::manuallyAllocatedViewIds
	List_1_t304 * ___manuallyAllocatedViewIds;
	// System.Collections.Generic.List`1<FriendInfo> PhotonNetwork::<Friends>k__BackingField
	List_1_t305 * ___U3CFriendsU3Ek__BackingField;
};
