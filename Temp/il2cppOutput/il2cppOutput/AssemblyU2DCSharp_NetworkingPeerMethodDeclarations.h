#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// NetworkingPeer
struct NetworkingPeer_t288;
// System.String
struct String_t;
// AuthenticationValues
struct AuthenticationValues_t265;
// Room
struct Room_t286;
// RoomOptions
struct RoomOptions_t264;
// TypedLobby
struct TypedLobby_t263;
// PhotonPlayer
struct PhotonPlayer_t230;
// System.Collections.Generic.List`1<Region>
struct List_1_t287;
// ExitGames.Client.Photon.IPhotonPeerListener
struct IPhotonPeerListener_t19;
// ExitGames.Client.Photon.Hashtable
struct Hashtable_t256;
// PhotonPlayer[]
struct PhotonPlayerU5BU5D_t276;
// ExitGames.Client.Photon.OperationResponse
struct OperationResponse_t13;
// System.Object
struct Object_t;
// RaiseEventOptions
struct RaiseEventOptions_t266;
// System.String[]
struct StringU5BU5D_t4;
// ExitGames.Client.Photon.EventData
struct EventData_t12;
// System.Object[]
struct ObjectU5BU5D_t5;
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t289;
// System.Type[]
struct TypeU5BU5D_t291;
// System.Int32[]
struct Int32U5BU5D_t257;
// UnityEngine.GameObject
struct GameObject_t47;
// PhotonView
struct PhotonView_t170;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t58;
// System.Reflection.MethodInfo
struct MethodInfo_t292;
// PeerState
#include "AssemblyU2DCSharp_PeerState.h"
// ServerConnection
#include "AssemblyU2DCSharp_ServerConnection.h"
// CloudRegionCode
#include "AssemblyU2DCSharp_CloudRegionCode.h"
// ExitGames.Client.Photon.ConnectionProtocol
#include "Photon3Unity3D_ExitGames_Client_Photon_ConnectionProtocol.h"
// MatchmakingMode
#include "AssemblyU2DCSharp_MatchmakingMode.h"
// ExitGames.Client.Photon.DebugLevel
#include "Photon3Unity3D_ExitGames_Client_Photon_DebugLevel.h"
// ExitGames.Client.Photon.StatusCode
#include "Photon3Unity3D_ExitGames_Client_Photon_StatusCode.h"
// PhotonNetworkingMessage
#include "AssemblyU2DCSharp_PhotonNetworkingMessage.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
// PhotonTargets
#include "AssemblyU2DCSharp_PhotonTargets.h"

// System.Void NetworkingPeer::.ctor(ExitGames.Client.Photon.IPhotonPeerListener,System.String,ExitGames.Client.Photon.ConnectionProtocol)
 void NetworkingPeer__ctor_m1225 (NetworkingPeer_t288 * __this, Object_t * ___listener, String_t* ___playername, uint8_t ___connectionProtocol, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::.cctor()
 void NetworkingPeer__cctor_m1226 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NetworkingPeer::get_mAppVersionPun()
 String_t* NetworkingPeer_get_mAppVersionPun_m1227 (NetworkingPeer_t288 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// AuthenticationValues NetworkingPeer::get_CustomAuthenticationValues()
 AuthenticationValues_t265 * NetworkingPeer_get_CustomAuthenticationValues_m1228 (NetworkingPeer_t288 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::set_CustomAuthenticationValues(AuthenticationValues)
 void NetworkingPeer_set_CustomAuthenticationValues_m1229 (NetworkingPeer_t288 * __this, AuthenticationValues_t265 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NetworkingPeer::get_MasterServerAddress()
 String_t* NetworkingPeer_get_MasterServerAddress_m1230 (NetworkingPeer_t288 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::set_MasterServerAddress(System.String)
 void NetworkingPeer_set_MasterServerAddress_m1231 (NetworkingPeer_t288 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NetworkingPeer::get_PlayerName()
 String_t* NetworkingPeer_get_PlayerName_m1232 (NetworkingPeer_t288 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::set_PlayerName(System.String)
 void NetworkingPeer_set_PlayerName_m1233 (NetworkingPeer_t288 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PeerState NetworkingPeer::get_State()
 int32_t NetworkingPeer_get_State_m1234 (NetworkingPeer_t288 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::set_State(PeerState)
 void NetworkingPeer_set_State_m1235 (NetworkingPeer_t288 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Room NetworkingPeer::get_mCurrentGame()
 Room_t286 * NetworkingPeer_get_mCurrentGame_m1236 (NetworkingPeer_t288 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Room NetworkingPeer::get_mRoomToGetInto()
 Room_t286 * NetworkingPeer_get_mRoomToGetInto_m1237 (NetworkingPeer_t288 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::set_mRoomToGetInto(Room)
 void NetworkingPeer_set_mRoomToGetInto_m1238 (NetworkingPeer_t288 * __this, Room_t286 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// RoomOptions NetworkingPeer::get_mRoomOptionsForCreate()
 RoomOptions_t264 * NetworkingPeer_get_mRoomOptionsForCreate_m1239 (NetworkingPeer_t288 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::set_mRoomOptionsForCreate(RoomOptions)
 void NetworkingPeer_set_mRoomOptionsForCreate_m1240 (NetworkingPeer_t288 * __this, RoomOptions_t264 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TypedLobby NetworkingPeer::get_mRoomToEnterLobby()
 TypedLobby_t263 * NetworkingPeer_get_mRoomToEnterLobby_m1241 (NetworkingPeer_t288 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::set_mRoomToEnterLobby(TypedLobby)
 void NetworkingPeer_set_mRoomToEnterLobby_m1242 (NetworkingPeer_t288 * __this, TypedLobby_t263 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PhotonPlayer NetworkingPeer::get_mLocalActor()
 PhotonPlayer_t230 * NetworkingPeer_get_mLocalActor_m1243 (NetworkingPeer_t288 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::set_mLocalActor(PhotonPlayer)
 void NetworkingPeer_set_mLocalActor_m1244 (NetworkingPeer_t288 * __this, PhotonPlayer_t230 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NetworkingPeer::get_mGameserver()
 String_t* NetworkingPeer_get_mGameserver_m1245 (NetworkingPeer_t288 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::set_mGameserver(System.String)
 void NetworkingPeer_set_mGameserver_m1246 (NetworkingPeer_t288 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TypedLobby NetworkingPeer::get_lobby()
 TypedLobby_t263 * NetworkingPeer_get_lobby_m1247 (NetworkingPeer_t288 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::set_lobby(TypedLobby)
 void NetworkingPeer_set_lobby_m1248 (NetworkingPeer_t288 * __this, TypedLobby_t263 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NetworkingPeer::get_mPlayersOnMasterCount()
 int32_t NetworkingPeer_get_mPlayersOnMasterCount_m1249 (NetworkingPeer_t288 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::set_mPlayersOnMasterCount(System.Int32)
 void NetworkingPeer_set_mPlayersOnMasterCount_m1250 (NetworkingPeer_t288 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NetworkingPeer::get_mGameCount()
 int32_t NetworkingPeer_get_mGameCount_m1251 (NetworkingPeer_t288 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::set_mGameCount(System.Int32)
 void NetworkingPeer_set_mGameCount_m1252 (NetworkingPeer_t288 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NetworkingPeer::get_mPlayersInRoomsCount()
 int32_t NetworkingPeer_get_mPlayersInRoomsCount_m1253 (NetworkingPeer_t288 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::set_mPlayersInRoomsCount(System.Int32)
 void NetworkingPeer_set_mPlayersInRoomsCount_m1254 (NetworkingPeer_t288 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// ServerConnection NetworkingPeer::get_server()
 int32_t NetworkingPeer_get_server_m1255 (NetworkingPeer_t288 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::set_server(ServerConnection)
 void NetworkingPeer_set_server_m1256 (NetworkingPeer_t288 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::get_IsUsingNameServer()
 bool NetworkingPeer_get_IsUsingNameServer_m1257 (NetworkingPeer_t288 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::set_IsUsingNameServer(System.Boolean)
 void NetworkingPeer_set_IsUsingNameServer_m1258 (NetworkingPeer_t288 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<Region> NetworkingPeer::get_AvailableRegions()
 List_1_t287 * NetworkingPeer_get_AvailableRegions_m1259 (NetworkingPeer_t288 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::set_AvailableRegions(System.Collections.Generic.List`1<Region>)
 void NetworkingPeer_set_AvailableRegions_m1260 (NetworkingPeer_t288 * __this, List_1_t287 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// CloudRegionCode NetworkingPeer::get_CloudRegion()
 int32_t NetworkingPeer_get_CloudRegion_m1261 (NetworkingPeer_t288 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::set_CloudRegion(CloudRegionCode)
 void NetworkingPeer_set_CloudRegion_m1262 (NetworkingPeer_t288 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::get_IsAuthorizeSecretAvailable()
 bool NetworkingPeer_get_IsAuthorizeSecretAvailable_m1263 (NetworkingPeer_t288 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::Connect(System.String,System.String)
 bool NetworkingPeer_Connect_m1264 (NetworkingPeer_t288 * __this, String_t* ___serverAddress, String_t* ___applicationName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::Connect(System.String,ServerConnection)
 bool NetworkingPeer_Connect_m1265 (NetworkingPeer_t288 * __this, String_t* ___serverAddress, int32_t ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::ConnectToNameServer()
 bool NetworkingPeer_ConnectToNameServer_m1266 (NetworkingPeer_t288 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::ConnectToRegionMaster(CloudRegionCode)
 bool NetworkingPeer_ConnectToRegionMaster_m1267 (NetworkingPeer_t288 * __this, int32_t ___region, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::GetRegions()
 bool NetworkingPeer_GetRegions_m1268 (NetworkingPeer_t288 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::Disconnect()
 void NetworkingPeer_Disconnect_m1269 (NetworkingPeer_t288 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::DisconnectToReconnect()
 void NetworkingPeer_DisconnectToReconnect_m1270 (NetworkingPeer_t288 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::LeftLobbyCleanup()
 void NetworkingPeer_LeftLobbyCleanup_m1271 (NetworkingPeer_t288 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::LeftRoomCleanup()
 void NetworkingPeer_LeftRoomCleanup_m1272 (NetworkingPeer_t288 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::LocalCleanupAnythingInstantiated(System.Boolean)
 void NetworkingPeer_LocalCleanupAnythingInstantiated_m1273 (NetworkingPeer_t288 * __this, bool ___destroyInstantiatedGameObjects, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::ReadoutProperties(ExitGames.Client.Photon.Hashtable,ExitGames.Client.Photon.Hashtable,System.Int32)
 void NetworkingPeer_ReadoutProperties_m1274 (NetworkingPeer_t288 * __this, Hashtable_t256 * ___gameProperties, Hashtable_t256 * ___pActorProperties, int32_t ___targetActorNr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::AddNewPlayer(System.Int32,PhotonPlayer)
 void NetworkingPeer_AddNewPlayer_m1275 (NetworkingPeer_t288 * __this, int32_t ___ID, PhotonPlayer_t230 * ___player, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::RemovePlayer(System.Int32,PhotonPlayer)
 void NetworkingPeer_RemovePlayer_m1276 (NetworkingPeer_t288 * __this, int32_t ___ID, PhotonPlayer_t230 * ___player, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::RebuildPlayerListCopies()
 void NetworkingPeer_RebuildPlayerListCopies_m1277 (NetworkingPeer_t288 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::ResetPhotonViewsOnSerialize()
 void NetworkingPeer_ResetPhotonViewsOnSerialize_m1278 (NetworkingPeer_t288 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::HandleEventLeave(System.Int32)
 void NetworkingPeer_HandleEventLeave_m1279 (NetworkingPeer_t288 * __this, int32_t ___actorID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::CheckMasterClient(System.Int32)
 void NetworkingPeer_CheckMasterClient_m1280 (NetworkingPeer_t288 * __this, int32_t ___leavingPlayerId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NetworkingPeer::ReturnLowestPlayerId(PhotonPlayer[],System.Int32)
 int32_t NetworkingPeer_ReturnLowestPlayerId_m1281 (Object_t * __this/* static, unused */, PhotonPlayerU5BU5D_t276* ___players, int32_t ___playerIdToIgnore, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::SetMasterClient(System.Int32,System.Boolean)
 bool NetworkingPeer_SetMasterClient_m1282 (NetworkingPeer_t288 * __this, int32_t ___playerId, bool ___sync, MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.Hashtable NetworkingPeer::GetActorPropertiesForActorNr(ExitGames.Client.Photon.Hashtable,System.Int32)
 Hashtable_t256 * NetworkingPeer_GetActorPropertiesForActorNr_m1283 (NetworkingPeer_t288 * __this, Hashtable_t256 * ___actorProperties, int32_t ___actorNr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PhotonPlayer NetworkingPeer::GetPlayerWithID(System.Int32)
 PhotonPlayer_t230 * NetworkingPeer_GetPlayerWithID_m1284 (NetworkingPeer_t288 * __this, int32_t ___number, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::SendPlayerName()
 void NetworkingPeer_SendPlayerName_m1285 (NetworkingPeer_t288 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::GameEnteredOnGameServer(ExitGames.Client.Photon.OperationResponse)
 void NetworkingPeer_GameEnteredOnGameServer_m1286 (NetworkingPeer_t288 * __this, OperationResponse_t13 * ___operationResponse, MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.Hashtable NetworkingPeer::GetLocalActorProperties()
 Hashtable_t256 * NetworkingPeer_GetLocalActorProperties_m1287 (NetworkingPeer_t288 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::ChangeLocalID(System.Int32)
 void NetworkingPeer_ChangeLocalID_m1288 (NetworkingPeer_t288 * __this, int32_t ___newID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::OpCreateGame(System.String,RoomOptions,TypedLobby)
 bool NetworkingPeer_OpCreateGame_m1289 (NetworkingPeer_t288 * __this, String_t* ___roomName, RoomOptions_t264 * ___roomOptions, TypedLobby_t263 * ___typedLobby, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::OpJoinRoom(System.String,RoomOptions,TypedLobby,System.Boolean)
 bool NetworkingPeer_OpJoinRoom_m1290 (NetworkingPeer_t288 * __this, String_t* ___roomName, RoomOptions_t264 * ___roomOptions, TypedLobby_t263 * ___typedLobby, bool ___createIfNotExists, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::OpJoinRandomRoom(ExitGames.Client.Photon.Hashtable,System.Byte,ExitGames.Client.Photon.Hashtable,MatchmakingMode,TypedLobby,System.String)
 bool NetworkingPeer_OpJoinRandomRoom_m1291 (NetworkingPeer_t288 * __this, Hashtable_t256 * ___expectedCustomRoomProperties, uint8_t ___expectedMaxPlayers, Hashtable_t256 * ___playerProperties, uint8_t ___matchingType, TypedLobby_t263 * ___typedLobby, String_t* ___sqlLobbyFilter, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::OpLeave()
 bool NetworkingPeer_OpLeave_m1292 (NetworkingPeer_t288 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::OpRaiseEvent(System.Byte,System.Object,System.Boolean,RaiseEventOptions)
 bool NetworkingPeer_OpRaiseEvent_m1293 (NetworkingPeer_t288 * __this, uint8_t ___eventCode, Object_t * ___customEventContent, bool ___sendReliable, RaiseEventOptions_t266 * ___raiseEventOptions, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String)
 void NetworkingPeer_DebugReturn_m1294 (NetworkingPeer_t288 * __this, uint8_t ___level, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::OnOperationResponse(ExitGames.Client.Photon.OperationResponse)
 void NetworkingPeer_OnOperationResponse_m1295 (NetworkingPeer_t288 * __this, OperationResponse_t13 * ___operationResponse, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NetworkingPeer::get_FriendsListAge()
 int32_t NetworkingPeer_get_FriendsListAge_m1296 (NetworkingPeer_t288 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::OpFindFriends(System.String[])
 bool NetworkingPeer_OpFindFriends_m1297 (NetworkingPeer_t288 * __this, StringU5BU5D_t4* ___friendsToFind, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::OnStatusChanged(ExitGames.Client.Photon.StatusCode)
 void NetworkingPeer_OnStatusChanged_m1298 (NetworkingPeer_t288 * __this, int32_t ___statusCode, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::OnEvent(ExitGames.Client.Photon.EventData)
 void NetworkingPeer_OnEvent_m1299 (NetworkingPeer_t288 * __this, EventData_t12 * ___photonEvent, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::SendVacantViewIds()
 void NetworkingPeer_SendVacantViewIds_m1300 (NetworkingPeer_t288 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::SendMonoMessage(PhotonNetworkingMessage,System.Object[])
 void NetworkingPeer_SendMonoMessage_m1301 (Object_t * __this/* static, unused */, int32_t ___methodString, ObjectU5BU5D_t5* ___parameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::ExecuteRPC(ExitGames.Client.Photon.Hashtable,PhotonPlayer)
 void NetworkingPeer_ExecuteRPC_m1302 (NetworkingPeer_t288 * __this, Hashtable_t256 * ___rpcData, PhotonPlayer_t230 * ___sender, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::CheckTypeMatch(System.Reflection.ParameterInfo[],System.Type[])
 bool NetworkingPeer_CheckTypeMatch_m1303 (NetworkingPeer_t288 * __this, ParameterInfoU5BU5D_t289* ___methodParameters, TypeU5BU5D_t291* ___callParameterTypes, MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.Hashtable NetworkingPeer::SendInstantiate(System.String,UnityEngine.Vector3,UnityEngine.Quaternion,System.Int32,System.Int32[],System.Object[],System.Boolean)
 Hashtable_t256 * NetworkingPeer_SendInstantiate_m1304 (NetworkingPeer_t288 * __this, String_t* ___prefabName, Vector3_t31  ___position, Quaternion_t110  ___rotation, int32_t ___group, Int32U5BU5D_t257* ___viewIDs, ObjectU5BU5D_t5* ___data, bool ___isGlobalObject, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject NetworkingPeer::DoInstantiate(ExitGames.Client.Photon.Hashtable,PhotonPlayer,UnityEngine.GameObject)
 GameObject_t47 * NetworkingPeer_DoInstantiate_m1305 (NetworkingPeer_t288 * __this, Hashtable_t256 * ___evData, PhotonPlayer_t230 * ___photonPlayer, GameObject_t47 * ___resourceGameObject, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::StoreInstantiationData(System.Int32,System.Object[])
 void NetworkingPeer_StoreInstantiationData_m1306 (NetworkingPeer_t288 * __this, int32_t ___instantiationId, ObjectU5BU5D_t5* ___instantiationData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] NetworkingPeer::FetchInstantiationData(System.Int32)
 ObjectU5BU5D_t5* NetworkingPeer_FetchInstantiationData_m1307 (NetworkingPeer_t288 * __this, int32_t ___instantiationId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::RemoveInstantiationData(System.Int32)
 void NetworkingPeer_RemoveInstantiationData_m1308 (NetworkingPeer_t288 * __this, int32_t ___instantiationId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::DestroyPlayerObjects(System.Int32,System.Boolean)
 void NetworkingPeer_DestroyPlayerObjects_m1309 (NetworkingPeer_t288 * __this, int32_t ___playerId, bool ___localOnly, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::DestroyAll(System.Boolean)
 void NetworkingPeer_DestroyAll_m1310 (NetworkingPeer_t288 * __this, bool ___localOnly, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::RemoveInstantiatedGO(UnityEngine.GameObject,System.Boolean)
 void NetworkingPeer_RemoveInstantiatedGO_m1311 (NetworkingPeer_t288 * __this, GameObject_t47 * ___go, bool ___localOnly, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NetworkingPeer::GetInstantiatedObjectsId(UnityEngine.GameObject)
 int32_t NetworkingPeer_GetInstantiatedObjectsId_m1312 (NetworkingPeer_t288 * __this, GameObject_t47 * ___go, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::ServerCleanInstantiateAndDestroy(System.Int32,System.Int32,System.Boolean)
 void NetworkingPeer_ServerCleanInstantiateAndDestroy_m1313 (NetworkingPeer_t288 * __this, int32_t ___instantiateId, int32_t ___creatorId, bool ___isRuntimeInstantiated, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::SendDestroyOfPlayer(System.Int32)
 void NetworkingPeer_SendDestroyOfPlayer_m1314 (NetworkingPeer_t288 * __this, int32_t ___actorNr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::SendDestroyOfAll()
 void NetworkingPeer_SendDestroyOfAll_m1315 (NetworkingPeer_t288 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::OpRemoveFromServerInstantiationsOfPlayer(System.Int32)
 void NetworkingPeer_OpRemoveFromServerInstantiationsOfPlayer_m1316 (NetworkingPeer_t288 * __this, int32_t ___actorNr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::RequestOwnership(System.Int32,System.Int32)
 void NetworkingPeer_RequestOwnership_m1317 (NetworkingPeer_t288 * __this, int32_t ___viewID, int32_t ___fromOwner, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::TransferOwnership(System.Int32,System.Int32)
 void NetworkingPeer_TransferOwnership_m1318 (NetworkingPeer_t288 * __this, int32_t ___viewID, int32_t ___playerID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::LocalCleanPhotonView(PhotonView)
 void NetworkingPeer_LocalCleanPhotonView_m1319 (NetworkingPeer_t288 * __this, PhotonView_t170 * ___view, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PhotonView NetworkingPeer::GetPhotonView(System.Int32)
 PhotonView_t170 * NetworkingPeer_GetPhotonView_m1320 (NetworkingPeer_t288 * __this, int32_t ___viewID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::RegisterPhotonView(PhotonView)
 void NetworkingPeer_RegisterPhotonView_m1321 (NetworkingPeer_t288 * __this, PhotonView_t170 * ___netView, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::OpCleanRpcBuffer(System.Int32)
 void NetworkingPeer_OpCleanRpcBuffer_m1322 (NetworkingPeer_t288 * __this, int32_t ___actorNumber, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::OpRemoveCompleteCacheOfPlayer(System.Int32)
 void NetworkingPeer_OpRemoveCompleteCacheOfPlayer_m1323 (NetworkingPeer_t288 * __this, int32_t ___actorNumber, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::OpRemoveCompleteCache()
 void NetworkingPeer_OpRemoveCompleteCache_m1324 (NetworkingPeer_t288 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::RemoveCacheOfLeftPlayers()
 void NetworkingPeer_RemoveCacheOfLeftPlayers_m1325 (NetworkingPeer_t288 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::CleanRpcBufferIfMine(PhotonView)
 void NetworkingPeer_CleanRpcBufferIfMine_m1326 (NetworkingPeer_t288 * __this, PhotonView_t170 * ___view, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::OpCleanRpcBuffer(PhotonView)
 void NetworkingPeer_OpCleanRpcBuffer_m1327 (NetworkingPeer_t288 * __this, PhotonView_t170 * ___view, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::RemoveRPCsInGroup(System.Int32)
 void NetworkingPeer_RemoveRPCsInGroup_m1328 (NetworkingPeer_t288 * __this, int32_t ___group, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::SetLevelPrefix(System.Int16)
 void NetworkingPeer_SetLevelPrefix_m1329 (NetworkingPeer_t288 * __this, int16_t ___prefix, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::RPC(PhotonView,System.String,PhotonPlayer,System.Boolean,System.Object[])
 void NetworkingPeer_RPC_m1330 (NetworkingPeer_t288 * __this, PhotonView_t170 * ___view, String_t* ___methodName, PhotonPlayer_t230 * ___player, bool ___encrypt, ObjectU5BU5D_t5* ___parameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::RPC(PhotonView,System.String,PhotonTargets,System.Boolean,System.Object[])
 void NetworkingPeer_RPC_m1331 (NetworkingPeer_t288 * __this, PhotonView_t170 * ___view, String_t* ___methodName, int32_t ___target, bool ___encrypt, ObjectU5BU5D_t5* ___parameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::SetReceivingEnabled(System.Int32,System.Boolean)
 void NetworkingPeer_SetReceivingEnabled_m1332 (NetworkingPeer_t288 * __this, int32_t ___group, bool ___enabled, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::SetReceivingEnabled(System.Int32[],System.Int32[])
 void NetworkingPeer_SetReceivingEnabled_m1333 (NetworkingPeer_t288 * __this, Int32U5BU5D_t257* ___enableGroups, Int32U5BU5D_t257* ___disableGroups, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::SetSendingEnabled(System.Int32,System.Boolean)
 void NetworkingPeer_SetSendingEnabled_m1334 (NetworkingPeer_t288 * __this, int32_t ___group, bool ___enabled, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::SetSendingEnabled(System.Int32[],System.Int32[])
 void NetworkingPeer_SetSendingEnabled_m1335 (NetworkingPeer_t288 * __this, Int32U5BU5D_t257* ___enableGroups, Int32U5BU5D_t257* ___disableGroups, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::NewSceneLoaded()
 void NetworkingPeer_NewSceneLoaded_m1336 (NetworkingPeer_t288 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::RunViewUpdate()
 void NetworkingPeer_RunViewUpdate_m1337 (NetworkingPeer_t288 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.Hashtable NetworkingPeer::OnSerializeWrite(PhotonView)
 Hashtable_t256 * NetworkingPeer_OnSerializeWrite_m1338 (NetworkingPeer_t288 * __this, PhotonView_t170 * ___view, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::OnSerializeRead(ExitGames.Client.Photon.Hashtable,PhotonPlayer,System.Int32,System.Int16)
 void NetworkingPeer_OnSerializeRead_m1339 (NetworkingPeer_t288 * __this, Hashtable_t256 * ___data, PhotonPlayer_t230 * ___sender, int32_t ___networkTime, int16_t ___correctPrefix, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::AlmostEquals(System.Object[],System.Object[])
 bool NetworkingPeer_AlmostEquals_m1340 (NetworkingPeer_t288 * __this, ObjectU5BU5D_t5* ___lastData, ObjectU5BU5D_t5* ___currentContent, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::DeltaCompressionWrite(PhotonView,ExitGames.Client.Photon.Hashtable)
 bool NetworkingPeer_DeltaCompressionWrite_m1341 (NetworkingPeer_t288 * __this, PhotonView_t170 * ___view, Hashtable_t256 * ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::DeltaCompressionRead(PhotonView,ExitGames.Client.Photon.Hashtable)
 bool NetworkingPeer_DeltaCompressionRead_m1342 (NetworkingPeer_t288 * __this, PhotonView_t170 * ___view, Hashtable_t256 * ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::ObjectIsSameWithInprecision(System.Object,System.Object)
 bool NetworkingPeer_ObjectIsSameWithInprecision_m1343 (NetworkingPeer_t288 * __this, Object_t * ___one, Object_t * ___two, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::GetMethod(UnityEngine.MonoBehaviour,System.String,System.Reflection.MethodInfo&)
 bool NetworkingPeer_GetMethod_m1344 (Object_t * __this/* static, unused */, MonoBehaviour_t58 * ___monob, String_t* ___methodType, MethodInfo_t292 ** ___mi, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::LoadLevelIfSynced()
 void NetworkingPeer_LoadLevelIfSynced_m1345 (NetworkingPeer_t288 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::SetLevelInPropsIfSynced(System.Object)
 void NetworkingPeer_SetLevelInPropsIfSynced_m1346 (NetworkingPeer_t288 * __this, Object_t * ___levelId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NetworkingPeer::SetApp(System.String,System.String)
 void NetworkingPeer_SetApp_m1347 (NetworkingPeer_t288 * __this, String_t* ___appId, String_t* ___gameVersion, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NetworkingPeer::WebRpc(System.String,System.Object)
 bool NetworkingPeer_WebRpc_m1348 (NetworkingPeer_t288 * __this, String_t* ___uriPath, Object_t * ___parameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
