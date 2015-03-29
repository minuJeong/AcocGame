#pragma once
#include <stdint.h>
// System.String
struct String_t;
// ExitGames.Client.Photon.IPhotonPeerListener
struct IPhotonPeerListener_t19;
// System.Collections.Generic.Dictionary`2<System.Int32,PhotonPlayer>
struct Dictionary_2_t275;
// PhotonPlayer[]
struct PhotonPlayerU5BU5D_t276;
// PhotonPlayer
struct PhotonPlayer_t230;
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<System.Reflection.MethodInfo>>
struct Dictionary_2_t277;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>
struct Dictionary_2_t278;
// System.Collections.Generic.Dictionary`2<System.String,RoomInfo>
struct Dictionary_2_t279;
// RoomInfo[]
struct RoomInfoU5BU5D_t280;
// System.Collections.Generic.HashSet`1<System.Int32>
struct HashSet_1_t282;
// System.Collections.Generic.Dictionary`2<System.Int32,PhotonView>
struct Dictionary_2_t283;
// System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.Hashtable>
struct Dictionary_2_t284;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t57;
// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>
struct Dictionary_2_t9;
// System.String[]
struct StringU5BU5D_t4;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>
struct Dictionary_2_t285;
// AuthenticationValues
struct AuthenticationValues_t265;
// Room
struct Room_t286;
// RoomOptions
struct RoomOptions_t264;
// TypedLobby
struct TypedLobby_t263;
// System.Collections.Generic.List`1<Region>
struct List_1_t287;
// ExitGames.Client.Photon.LoadbalancingPeer
#include "AssemblyU2DCSharp_ExitGames_Client_Photon_LoadbalancingPeer.h"
// JoinType
#include "AssemblyU2DCSharp_JoinType.h"
// PeerState
#include "AssemblyU2DCSharp_PeerState.h"
// ServerConnection
#include "AssemblyU2DCSharp_ServerConnection.h"
// CloudRegionCode
#include "AssemblyU2DCSharp_CloudRegionCode.h"
// NetworkingPeer
struct NetworkingPeer_t288  : public LoadbalancingPeer_t262
{
	// System.String NetworkingPeer::mAppVersion
	String_t* ___mAppVersion;
	// System.String NetworkingPeer::mAppId
	String_t* ___mAppId;
	// System.String NetworkingPeer::playername
	String_t* ___playername;
	// ExitGames.Client.Photon.IPhotonPeerListener NetworkingPeer::externalListener
	Object_t * ___externalListener;
	// JoinType NetworkingPeer::mLastJoinType
	int32_t ___mLastJoinType;
	// System.Boolean NetworkingPeer::mPlayernameHasToBeUpdated
	bool ___mPlayernameHasToBeUpdated;
	// System.Collections.Generic.Dictionary`2<System.Int32,PhotonPlayer> NetworkingPeer::mActors
	Dictionary_2_t275 * ___mActors;
	// PhotonPlayer[] NetworkingPeer::mOtherPlayerListCopy
	PhotonPlayerU5BU5D_t276* ___mOtherPlayerListCopy;
	// PhotonPlayer[] NetworkingPeer::mPlayerListCopy
	PhotonPlayerU5BU5D_t276* ___mPlayerListCopy;
	// PhotonPlayer NetworkingPeer::mMasterClient
	PhotonPlayer_t230 * ___mMasterClient;
	// System.Boolean NetworkingPeer::hasSwitchedMC
	bool ___hasSwitchedMC;
	// System.Boolean NetworkingPeer::requestSecurity
	bool ___requestSecurity;
	// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<System.Reflection.MethodInfo>> NetworkingPeer::monoRPCMethodsCache
	Dictionary_2_t277 * ___monoRPCMethodsCache;
	// System.Collections.Generic.Dictionary`2<System.String,RoomInfo> NetworkingPeer::mGameList
	Dictionary_2_t279 * ___mGameList;
	// RoomInfo[] NetworkingPeer::mGameListCopy
	RoomInfoU5BU5D_t280* ___mGameListCopy;
	// System.Boolean NetworkingPeer::insideLobby
	bool ___insideLobby;
	// System.Collections.Generic.HashSet`1<System.Int32> NetworkingPeer::allowedReceivingGroups
	HashSet_1_t282 * ___allowedReceivingGroups;
	// System.Collections.Generic.HashSet`1<System.Int32> NetworkingPeer::blockSendingGroups
	HashSet_1_t282 * ___blockSendingGroups;
	// System.Collections.Generic.Dictionary`2<System.Int32,PhotonView> NetworkingPeer::photonViewList
	Dictionary_2_t283 * ___photonViewList;
	// System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.Hashtable> NetworkingPeer::dataPerGroupReliable
	Dictionary_2_t284 * ___dataPerGroupReliable;
	// System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.Hashtable> NetworkingPeer::dataPerGroupUnreliable
	Dictionary_2_t284 * ___dataPerGroupUnreliable;
	// System.Int16 NetworkingPeer::currentLevelPrefix
	int16_t ___currentLevelPrefix;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> NetworkingPeer::rpcShortcuts
	Dictionary_2_t57 * ___rpcShortcuts;
	// System.Boolean NetworkingPeer::IsInitialConnect
	bool ___IsInitialConnect;
	// System.String NetworkingPeer::NameServerAddress
	String_t* ___NameServerAddress;
	// System.String NetworkingPeer::NameServerAddressHttp
	String_t* ___NameServerAddressHttp;
	// System.Boolean NetworkingPeer::didAuthenticate
	bool ___didAuthenticate;
	// System.String[] NetworkingPeer::friendListRequested
	StringU5BU5D_t4* ___friendListRequested;
	// System.Int32 NetworkingPeer::friendListTimestamp
	int32_t ___friendListTimestamp;
	// System.Boolean NetworkingPeer::isFetchingFriends
	bool ___isFetchingFriends;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]> NetworkingPeer::tempInstantiationData
	Dictionary_2_t285 * ___tempInstantiationData;
	// System.Boolean NetworkingPeer::loadingLevelAndPausedNetwork
	bool ___loadingLevelAndPausedNetwork;
	// AuthenticationValues NetworkingPeer::<CustomAuthenticationValues>k__BackingField
	AuthenticationValues_t265 * ___U3CCustomAuthenticationValuesU3Ek__BackingField;
	// System.String NetworkingPeer::<MasterServerAddress>k__BackingField
	String_t* ___U3CMasterServerAddressU3Ek__BackingField;
	// PeerState NetworkingPeer::<State>k__BackingField
	int32_t ___U3CStateU3Ek__BackingField;
	// Room NetworkingPeer::<mRoomToGetInto>k__BackingField
	Room_t286 * ___U3CmRoomToGetIntoU3Ek__BackingField;
	// RoomOptions NetworkingPeer::<mRoomOptionsForCreate>k__BackingField
	RoomOptions_t264 * ___U3CmRoomOptionsForCreateU3Ek__BackingField;
	// TypedLobby NetworkingPeer::<mRoomToEnterLobby>k__BackingField
	TypedLobby_t263 * ___U3CmRoomToEnterLobbyU3Ek__BackingField;
	// PhotonPlayer NetworkingPeer::<mLocalActor>k__BackingField
	PhotonPlayer_t230 * ___U3CmLocalActorU3Ek__BackingField;
	// System.String NetworkingPeer::<mGameserver>k__BackingField
	String_t* ___U3CmGameserverU3Ek__BackingField;
	// TypedLobby NetworkingPeer::<lobby>k__BackingField
	TypedLobby_t263 * ___U3ClobbyU3Ek__BackingField;
	// System.Int32 NetworkingPeer::<mPlayersOnMasterCount>k__BackingField
	int32_t ___U3CmPlayersOnMasterCountU3Ek__BackingField;
	// System.Int32 NetworkingPeer::<mGameCount>k__BackingField
	int32_t ___U3CmGameCountU3Ek__BackingField;
	// System.Int32 NetworkingPeer::<mPlayersInRoomsCount>k__BackingField
	int32_t ___U3CmPlayersInRoomsCountU3Ek__BackingField;
	// ServerConnection NetworkingPeer::<server>k__BackingField
	int32_t ___U3CserverU3Ek__BackingField;
	// System.Boolean NetworkingPeer::<IsUsingNameServer>k__BackingField
	bool ___U3CIsUsingNameServerU3Ek__BackingField;
	// System.Collections.Generic.List`1<Region> NetworkingPeer::<AvailableRegions>k__BackingField
	List_1_t287 * ___U3CAvailableRegionsU3Ek__BackingField;
	// CloudRegionCode NetworkingPeer::<CloudRegion>k__BackingField
	int32_t ___U3CCloudRegionU3Ek__BackingField;
};
struct NetworkingPeer_t288_StaticFields{
	// System.String NetworkingPeer::CurrentSceneProperty
	String_t* ___CurrentSceneProperty;
	// System.Boolean NetworkingPeer::UsePrefabCache
	bool ___UsePrefabCache;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject> NetworkingPeer::PrefabCache
	Dictionary_2_t278 * ___PrefabCache;
	// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32> NetworkingPeer::ProtocolToNameServerPort
	Dictionary_2_t9 * ___ProtocolToNameServerPort;
};
