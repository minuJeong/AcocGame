#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PhotonNetwork
struct PhotonNetwork_t306;
// System.String
struct String_t;
// AuthenticationValues
struct AuthenticationValues_t265;
// Room
struct Room_t286;
// PhotonPlayer
struct PhotonPlayer_t230;
// PhotonPlayer[]
struct PhotonPlayerU5BU5D_t276;
// System.Collections.Generic.List`1<FriendInfo>
struct List_1_t305;
// TypedLobby
struct TypedLobby_t263;
// System.Type
struct Type_t;
// System.Collections.Generic.HashSet`1<UnityEngine.GameObject>
struct HashSet_1_t303;
// System.String[]
struct StringU5BU5D_t4;
// ExitGames.Client.Photon.Hashtable
struct Hashtable_t256;
// RoomOptions
struct RoomOptions_t264;
// RoomInfo[]
struct RoomInfoU5BU5D_t280;
// System.Object
struct Object_t;
// RaiseEventOptions
struct RaiseEventOptions_t266;
// System.Int32[]
struct Int32U5BU5D_t257;
// UnityEngine.GameObject
struct GameObject_t47;
// System.Object[]
struct ObjectU5BU5D_t5;
// PhotonView
struct PhotonView_t170;
// ConnectionState
#include "AssemblyU2DCSharp_ConnectionState.h"
// PeerState
#include "AssemblyU2DCSharp_PeerState.h"
// ServerConnection
#include "AssemblyU2DCSharp_ServerConnection.h"
// ExitGames.Client.Photon.ConnectionProtocol
#include "Photon3Unity3D_ExitGames_Client_Photon_ConnectionProtocol.h"
// CloudRegionCode
#include "AssemblyU2DCSharp_CloudRegionCode.h"
// MatchmakingMode
#include "AssemblyU2DCSharp_MatchmakingMode.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
// PhotonTargets
#include "AssemblyU2DCSharp_PhotonTargets.h"

// System.Void PhotonNetwork::.cctor()
 void PhotonNetwork__cctor_m1461 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PhotonNetwork::get_gameVersion()
 String_t* PhotonNetwork_get_gameVersion_m1462 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::set_gameVersion(System.String)
 void PhotonNetwork_set_gameVersion_m1463 (Object_t * __this/* static, unused */, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PhotonNetwork::get_ServerAddress()
 String_t* PhotonNetwork_get_ServerAddress_m1464 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::get_connected()
 bool PhotonNetwork_get_connected_m1465 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::get_connecting()
 bool PhotonNetwork_get_connecting_m1466 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::get_connectedAndReady()
 bool PhotonNetwork_get_connectedAndReady_m1467 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// ConnectionState PhotonNetwork::get_connectionState()
 int32_t PhotonNetwork_get_connectionState_m1468 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PeerState PhotonNetwork::get_connectionStateDetailed()
 int32_t PhotonNetwork_get_connectionStateDetailed_m1469 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// AuthenticationValues PhotonNetwork::get_AuthValues()
 AuthenticationValues_t265 * PhotonNetwork_get_AuthValues_m1470 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::set_AuthValues(AuthenticationValues)
 void PhotonNetwork_set_AuthValues_m1471 (Object_t * __this/* static, unused */, AuthenticationValues_t265 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Room PhotonNetwork::get_room()
 Room_t286 * PhotonNetwork_get_room_m1472 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PhotonPlayer PhotonNetwork::get_player()
 PhotonPlayer_t230 * PhotonNetwork_get_player_m1473 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PhotonPlayer PhotonNetwork::get_masterClient()
 PhotonPlayer_t230 * PhotonNetwork_get_masterClient_m1474 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::SetMasterClient(PhotonPlayer)
 bool PhotonNetwork_SetMasterClient_m1475 (Object_t * __this/* static, unused */, PhotonPlayer_t230 * ___masterClientPlayer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PhotonNetwork::get_playerName()
 String_t* PhotonNetwork_get_playerName_m1476 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::set_playerName(System.String)
 void PhotonNetwork_set_playerName_m1477 (Object_t * __this/* static, unused */, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PhotonPlayer[] PhotonNetwork::get_playerList()
 PhotonPlayerU5BU5D_t276* PhotonNetwork_get_playerList_m1478 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PhotonPlayer[] PhotonNetwork::get_otherPlayers()
 PhotonPlayerU5BU5D_t276* PhotonNetwork_get_otherPlayers_m1479 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<FriendInfo> PhotonNetwork::get_Friends()
 List_1_t305 * PhotonNetwork_get_Friends_m1480 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::set_Friends(System.Collections.Generic.List`1<FriendInfo>)
 void PhotonNetwork_set_Friends_m1481 (Object_t * __this/* static, unused */, List_1_t305 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonNetwork::get_FriendsListAge()
 int32_t PhotonNetwork_get_FriendsListAge_m1482 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::get_offlineMode()
 bool PhotonNetwork_get_offlineMode_m1483 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::set_offlineMode(System.Boolean)
 void PhotonNetwork_set_offlineMode_m1484 (Object_t * __this/* static, unused */, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::CacheSendMonoMessageTargets(System.Type)
 void PhotonNetwork_CacheSendMonoMessageTargets_m1485 (Object_t * __this/* static, unused */, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.HashSet`1<UnityEngine.GameObject> PhotonNetwork::FindGameObjectsWithComponent(System.Type)
 HashSet_1_t303 * PhotonNetwork_FindGameObjectsWithComponent_m1486 (Object_t * __this/* static, unused */, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonNetwork::get_maxConnections()
 int32_t PhotonNetwork_get_maxConnections_m1487 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::set_maxConnections(System.Int32)
 void PhotonNetwork_set_maxConnections_m1488 (Object_t * __this/* static, unused */, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::get_automaticallySyncScene()
 bool PhotonNetwork_get_automaticallySyncScene_m1489 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::set_automaticallySyncScene(System.Boolean)
 void PhotonNetwork_set_automaticallySyncScene_m1490 (Object_t * __this/* static, unused */, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::get_autoCleanUpPlayerObjects()
 bool PhotonNetwork_get_autoCleanUpPlayerObjects_m1491 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::set_autoCleanUpPlayerObjects(System.Boolean)
 void PhotonNetwork_set_autoCleanUpPlayerObjects_m1492 (Object_t * __this/* static, unused */, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::get_autoJoinLobby()
 bool PhotonNetwork_get_autoJoinLobby_m1493 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::set_autoJoinLobby(System.Boolean)
 void PhotonNetwork_set_autoJoinLobby_m1494 (Object_t * __this/* static, unused */, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::get_insideLobby()
 bool PhotonNetwork_get_insideLobby_m1495 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TypedLobby PhotonNetwork::get_lobby()
 TypedLobby_t263 * PhotonNetwork_get_lobby_m1496 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::set_lobby(TypedLobby)
 void PhotonNetwork_set_lobby_m1497 (Object_t * __this/* static, unused */, TypedLobby_t263 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonNetwork::get_sendRate()
 int32_t PhotonNetwork_get_sendRate_m1498 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::set_sendRate(System.Int32)
 void PhotonNetwork_set_sendRate_m1499 (Object_t * __this/* static, unused */, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonNetwork::get_sendRateOnSerialize()
 int32_t PhotonNetwork_get_sendRateOnSerialize_m1500 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::set_sendRateOnSerialize(System.Int32)
 void PhotonNetwork_set_sendRateOnSerialize_m1501 (Object_t * __this/* static, unused */, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::get_isMessageQueueRunning()
 bool PhotonNetwork_get_isMessageQueueRunning_m1502 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::set_isMessageQueueRunning(System.Boolean)
 void PhotonNetwork_set_isMessageQueueRunning_m1503 (Object_t * __this/* static, unused */, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonNetwork::get_unreliableCommandsLimit()
 int32_t PhotonNetwork_get_unreliableCommandsLimit_m1504 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::set_unreliableCommandsLimit(System.Int32)
 void PhotonNetwork_set_unreliableCommandsLimit_m1505 (Object_t * __this/* static, unused */, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double PhotonNetwork::get_time()
 double PhotonNetwork_get_time_m1506 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::get_isMasterClient()
 bool PhotonNetwork_get_isMasterClient_m1507 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::get_inRoom()
 bool PhotonNetwork_get_inRoom_m1508 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::get_isNonMasterClientInRoom()
 bool PhotonNetwork_get_isNonMasterClientInRoom_m1509 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonNetwork::get_countOfPlayersOnMaster()
 int32_t PhotonNetwork_get_countOfPlayersOnMaster_m1510 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonNetwork::get_countOfPlayersInRooms()
 int32_t PhotonNetwork_get_countOfPlayersInRooms_m1511 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonNetwork::get_countOfPlayers()
 int32_t PhotonNetwork_get_countOfPlayers_m1512 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonNetwork::get_countOfRooms()
 int32_t PhotonNetwork_get_countOfRooms_m1513 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::get_NetworkStatisticsEnabled()
 bool PhotonNetwork_get_NetworkStatisticsEnabled_m1514 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::set_NetworkStatisticsEnabled(System.Boolean)
 void PhotonNetwork_set_NetworkStatisticsEnabled_m1515 (Object_t * __this/* static, unused */, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonNetwork::get_ResentReliableCommands()
 int32_t PhotonNetwork_get_ResentReliableCommands_m1516 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::get_CrcCheckEnabled()
 bool PhotonNetwork_get_CrcCheckEnabled_m1517 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::set_CrcCheckEnabled(System.Boolean)
 void PhotonNetwork_set_CrcCheckEnabled_m1518 (Object_t * __this/* static, unused */, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonNetwork::get_PacketLossByCrcCheck()
 int32_t PhotonNetwork_get_PacketLossByCrcCheck_m1519 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonNetwork::get_MaxResendsBeforeDisconnect()
 int32_t PhotonNetwork_get_MaxResendsBeforeDisconnect_m1520 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::set_MaxResendsBeforeDisconnect(System.Int32)
 void PhotonNetwork_set_MaxResendsBeforeDisconnect_m1521 (Object_t * __this/* static, unused */, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// ServerConnection PhotonNetwork::get_Server()
 int32_t PhotonNetwork_get_Server_m1522 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::NetworkStatisticsReset()
 void PhotonNetwork_NetworkStatisticsReset_m1523 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PhotonNetwork::NetworkStatisticsToString()
 String_t* PhotonNetwork_NetworkStatisticsToString_m1524 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::SwitchToProtocol(ExitGames.Client.Photon.ConnectionProtocol)
 void PhotonNetwork_SwitchToProtocol_m1525 (Object_t * __this/* static, unused */, uint8_t ___cp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::InternalCleanPhotonMonoFromSceneIfStuck()
 void PhotonNetwork_InternalCleanPhotonMonoFromSceneIfStuck_m1526 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::ConnectUsingSettings(System.String)
 bool PhotonNetwork_ConnectUsingSettings_m1527 (Object_t * __this/* static, unused */, String_t* ___gameVersion, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::ConnectToMaster(System.String,System.Int32,System.String,System.String)
 bool PhotonNetwork_ConnectToMaster_m1528 (Object_t * __this/* static, unused */, String_t* ___masterServerAddress, int32_t ___port, String_t* ___appID, String_t* ___gameVersion, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::ConnectToBestCloudServer(System.String)
 bool PhotonNetwork_ConnectToBestCloudServer_m1529 (Object_t * __this/* static, unused */, String_t* ___gameVersion, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::OverrideBestCloudServer(CloudRegionCode)
 void PhotonNetwork_OverrideBestCloudServer_m1530 (Object_t * __this/* static, unused */, int32_t ___region, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::RefreshCloudServerRating()
 void PhotonNetwork_RefreshCloudServerRating_m1531 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::Disconnect()
 void PhotonNetwork_Disconnect_m1532 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::InitializeSecurity()
 void PhotonNetwork_InitializeSecurity_m1533 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::FindFriends(System.String[])
 bool PhotonNetwork_FindFriends_m1534 (Object_t * __this/* static, unused */, StringU5BU5D_t4* ___friendsToFind, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::CreateRoom(System.String,System.Boolean,System.Boolean,System.Int32)
 bool PhotonNetwork_CreateRoom_m1535 (Object_t * __this/* static, unused */, String_t* ___roomName, bool ___isVisible, bool ___isOpen, int32_t ___maxPlayers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::CreateRoom(System.String,System.Boolean,System.Boolean,System.Int32,ExitGames.Client.Photon.Hashtable,System.String[])
 bool PhotonNetwork_CreateRoom_m1536 (Object_t * __this/* static, unused */, String_t* ___roomName, bool ___isVisible, bool ___isOpen, int32_t ___maxPlayers, Hashtable_t256 * ___customRoomProperties, StringU5BU5D_t4* ___propsToListInLobby, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::CreateRoom(System.String)
 bool PhotonNetwork_CreateRoom_m1537 (Object_t * __this/* static, unused */, String_t* ___roomName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::CreateRoom(System.String,RoomOptions,TypedLobby)
 bool PhotonNetwork_CreateRoom_m1538 (Object_t * __this/* static, unused */, String_t* ___roomName, RoomOptions_t264 * ___roomOptions, TypedLobby_t263 * ___typedLobby, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::JoinRoom(System.String,System.Boolean)
 bool PhotonNetwork_JoinRoom_m1539 (Object_t * __this/* static, unused */, String_t* ___roomName, bool ___createIfNotExists, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::JoinRoom(System.String)
 bool PhotonNetwork_JoinRoom_m1540 (Object_t * __this/* static, unused */, String_t* ___roomName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::JoinOrCreateRoom(System.String,RoomOptions,TypedLobby)
 bool PhotonNetwork_JoinOrCreateRoom_m1541 (Object_t * __this/* static, unused */, String_t* ___roomName, RoomOptions_t264 * ___roomOptions, TypedLobby_t263 * ___typedLobby, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::JoinRandomRoom()
 bool PhotonNetwork_JoinRandomRoom_m1542 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::JoinRandomRoom(ExitGames.Client.Photon.Hashtable,System.Byte)
 bool PhotonNetwork_JoinRandomRoom_m1543 (Object_t * __this/* static, unused */, Hashtable_t256 * ___expectedCustomRoomProperties, uint8_t ___expectedMaxPlayers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::JoinRandomRoom(ExitGames.Client.Photon.Hashtable,System.Byte,MatchmakingMode,TypedLobby,System.String)
 bool PhotonNetwork_JoinRandomRoom_m1544 (Object_t * __this/* static, unused */, Hashtable_t256 * ___expectedCustomRoomProperties, uint8_t ___expectedMaxPlayers, uint8_t ___matchingType, TypedLobby_t263 * ___typedLobby, String_t* ___sqlLobbyFilter, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::JoinLobby()
 bool PhotonNetwork_JoinLobby_m1545 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::JoinLobby(TypedLobby)
 bool PhotonNetwork_JoinLobby_m1546 (Object_t * __this/* static, unused */, TypedLobby_t263 * ___typedLobby, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::LeaveLobby()
 bool PhotonNetwork_LeaveLobby_m1547 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::LeaveRoom()
 bool PhotonNetwork_LeaveRoom_m1548 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// RoomInfo[] PhotonNetwork::GetRoomList()
 RoomInfoU5BU5D_t280* PhotonNetwork_GetRoomList_m1549 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::SetPlayerCustomProperties(ExitGames.Client.Photon.Hashtable)
 void PhotonNetwork_SetPlayerCustomProperties_m1550 (Object_t * __this/* static, unused */, Hashtable_t256 * ___customProperties, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::RaiseEvent(System.Byte,System.Object,System.Boolean,RaiseEventOptions)
 bool PhotonNetwork_RaiseEvent_m1551 (Object_t * __this/* static, unused */, uint8_t ___eventCode, Object_t * ___eventContent, bool ___sendReliable, RaiseEventOptions_t266 * ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonNetwork::AllocateViewID()
 int32_t PhotonNetwork_AllocateViewID_m1552 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonNetwork::AllocateSceneViewID()
 int32_t PhotonNetwork_AllocateSceneViewID_m1553 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::UnAllocateViewID(System.Int32)
 void PhotonNetwork_UnAllocateViewID_m1554 (Object_t * __this/* static, unused */, int32_t ___viewID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonNetwork::AllocateViewID(System.Int32)
 int32_t PhotonNetwork_AllocateViewID_m1555 (Object_t * __this/* static, unused */, int32_t ___ownerId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] PhotonNetwork::AllocateSceneViewIDs(System.Int32)
 Int32U5BU5D_t257* PhotonNetwork_AllocateSceneViewIDs_m1556 (Object_t * __this/* static, unused */, int32_t ___countOfNewViews, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject PhotonNetwork::Instantiate(System.String,UnityEngine.Vector3,UnityEngine.Quaternion,System.Int32)
 GameObject_t47 * PhotonNetwork_Instantiate_m1557 (Object_t * __this/* static, unused */, String_t* ___prefabName, Vector3_t31  ___position, Quaternion_t110  ___rotation, int32_t ___group, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject PhotonNetwork::Instantiate(System.String,UnityEngine.Vector3,UnityEngine.Quaternion,System.Int32,System.Object[])
 GameObject_t47 * PhotonNetwork_Instantiate_m1558 (Object_t * __this/* static, unused */, String_t* ___prefabName, Vector3_t31  ___position, Quaternion_t110  ___rotation, int32_t ___group, ObjectU5BU5D_t5* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject PhotonNetwork::InstantiateSceneObject(System.String,UnityEngine.Vector3,UnityEngine.Quaternion,System.Int32,System.Object[])
 GameObject_t47 * PhotonNetwork_InstantiateSceneObject_m1559 (Object_t * __this/* static, unused */, String_t* ___prefabName, Vector3_t31  ___position, Quaternion_t110  ___rotation, int32_t ___group, ObjectU5BU5D_t5* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonNetwork::GetPing()
 int32_t PhotonNetwork_GetPing_m1560 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::FetchServerTimestamp()
 void PhotonNetwork_FetchServerTimestamp_m1561 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::SendOutgoingCommands()
 void PhotonNetwork_SendOutgoingCommands_m1562 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::CloseConnection(PhotonPlayer)
 bool PhotonNetwork_CloseConnection_m1563 (Object_t * __this/* static, unused */, PhotonPlayer_t230 * ___kickPlayer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::Destroy(PhotonView)
 void PhotonNetwork_Destroy_m1564 (Object_t * __this/* static, unused */, PhotonView_t170 * ___targetView, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::Destroy(UnityEngine.GameObject)
 void PhotonNetwork_Destroy_m1565 (Object_t * __this/* static, unused */, GameObject_t47 * ___targetGo, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::DestroyPlayerObjects(PhotonPlayer)
 void PhotonNetwork_DestroyPlayerObjects_m1566 (Object_t * __this/* static, unused */, PhotonPlayer_t230 * ___targetPlayer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::DestroyPlayerObjects(System.Int32)
 void PhotonNetwork_DestroyPlayerObjects_m1567 (Object_t * __this/* static, unused */, int32_t ___targetPlayerId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::DestroyAll()
 void PhotonNetwork_DestroyAll_m1568 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::RemoveRPCs(PhotonPlayer)
 void PhotonNetwork_RemoveRPCs_m1569 (Object_t * __this/* static, unused */, PhotonPlayer_t230 * ___targetPlayer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::RemoveRPCs(PhotonView)
 void PhotonNetwork_RemoveRPCs_m1570 (Object_t * __this/* static, unused */, PhotonView_t170 * ___targetPhotonView, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::RemoveRPCsInGroup(System.Int32)
 void PhotonNetwork_RemoveRPCsInGroup_m1571 (Object_t * __this/* static, unused */, int32_t ___targetGroup, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::RPC(PhotonView,System.String,PhotonTargets,System.Boolean,System.Object[])
 void PhotonNetwork_RPC_m1572 (Object_t * __this/* static, unused */, PhotonView_t170 * ___view, String_t* ___methodName, int32_t ___target, bool ___encrypt, ObjectU5BU5D_t5* ___parameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::RPC(PhotonView,System.String,PhotonPlayer,System.Boolean,System.Object[])
 void PhotonNetwork_RPC_m1573 (Object_t * __this/* static, unused */, PhotonView_t170 * ___view, String_t* ___methodName, PhotonPlayer_t230 * ___targetPlayer, bool ___encrpyt, ObjectU5BU5D_t5* ___parameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::SetReceivingEnabled(System.Int32,System.Boolean)
 void PhotonNetwork_SetReceivingEnabled_m1574 (Object_t * __this/* static, unused */, int32_t ___group, bool ___enabled, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::SetReceivingEnabled(System.Int32[],System.Int32[])
 void PhotonNetwork_SetReceivingEnabled_m1575 (Object_t * __this/* static, unused */, Int32U5BU5D_t257* ___enableGroups, Int32U5BU5D_t257* ___disableGroups, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::SetSendingEnabled(System.Int32,System.Boolean)
 void PhotonNetwork_SetSendingEnabled_m1576 (Object_t * __this/* static, unused */, int32_t ___group, bool ___enabled, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::SetSendingEnabled(System.Int32[],System.Int32[])
 void PhotonNetwork_SetSendingEnabled_m1577 (Object_t * __this/* static, unused */, Int32U5BU5D_t257* ___enableGroups, Int32U5BU5D_t257* ___disableGroups, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::SetLevelPrefix(System.Int16)
 void PhotonNetwork_SetLevelPrefix_m1578 (Object_t * __this/* static, unused */, int16_t ___prefix, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::VerifyCanUseNetwork()
 bool PhotonNetwork_VerifyCanUseNetwork_m1579 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::LoadLevel(System.Int32)
 void PhotonNetwork_LoadLevel_m1580 (Object_t * __this/* static, unused */, int32_t ___levelNumber, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonNetwork::LoadLevel(System.String)
 void PhotonNetwork_LoadLevel_m1581 (Object_t * __this/* static, unused */, String_t* ___levelName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonNetwork::WebRpc(System.String,System.Object)
 bool PhotonNetwork_WebRpc_m1582 (Object_t * __this/* static, unused */, String_t* ___name, Object_t * ___parameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
