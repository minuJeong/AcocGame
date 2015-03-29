#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ExitGames.Client.Photon.LoadbalancingPeer
struct LoadbalancingPeer_t262;
// ExitGames.Client.Photon.IPhotonPeerListener
struct IPhotonPeerListener_t19;
// System.String
struct String_t;
// TypedLobby
struct TypedLobby_t263;
// RoomOptions
struct RoomOptions_t264;
// ExitGames.Client.Photon.Hashtable
struct Hashtable_t256;
// System.String[]
struct StringU5BU5D_t4;
// System.Object
struct Object_t;
// AuthenticationValues
struct AuthenticationValues_t265;
// System.Byte[]
struct ByteU5BU5D_t21;
// RaiseEventOptions
struct RaiseEventOptions_t266;
// ExitGames.Client.Photon.ConnectionProtocol
#include "Photon3Unity3D_ExitGames_Client_Photon_ConnectionProtocol.h"
// MatchmakingMode
#include "AssemblyU2DCSharp_MatchmakingMode.h"

// System.Void ExitGames.Client.Photon.LoadbalancingPeer::.ctor(ExitGames.Client.Photon.IPhotonPeerListener,ExitGames.Client.Photon.ConnectionProtocol)
 void LoadbalancingPeer__ctor_m1196 (LoadbalancingPeer_t262 * __this, Object_t * ___listener, uint8_t ___protocolType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.LoadbalancingPeer::OpGetRegions(System.String)
 bool LoadbalancingPeer_OpGetRegions_m1197 (LoadbalancingPeer_t262 * __this, String_t* ___appId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.LoadbalancingPeer::OpJoinLobby(TypedLobby)
 bool LoadbalancingPeer_OpJoinLobby_m1198 (LoadbalancingPeer_t262 * __this, TypedLobby_t263 * ___lobby, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.LoadbalancingPeer::OpLeaveLobby()
 bool LoadbalancingPeer_OpLeaveLobby_m1199 (LoadbalancingPeer_t262 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.LoadbalancingPeer::OpCreateRoom(System.String,RoomOptions,TypedLobby,ExitGames.Client.Photon.Hashtable,System.Boolean)
 bool LoadbalancingPeer_OpCreateRoom_m1200 (LoadbalancingPeer_t262 * __this, String_t* ___roomName, RoomOptions_t264 * ___roomOptions, TypedLobby_t263 * ___lobby, Hashtable_t256 * ___playerProperties, bool ___onGameServer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.LoadbalancingPeer::OpJoinRoom(System.String,RoomOptions,TypedLobby,System.Boolean,ExitGames.Client.Photon.Hashtable,System.Boolean)
 bool LoadbalancingPeer_OpJoinRoom_m1201 (LoadbalancingPeer_t262 * __this, String_t* ___roomName, RoomOptions_t264 * ___roomOptions, TypedLobby_t263 * ___lobby, bool ___createIfNotExists, Hashtable_t256 * ___playerProperties, bool ___onGameServer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.LoadbalancingPeer::OpJoinRandomRoom(ExitGames.Client.Photon.Hashtable,System.Byte,ExitGames.Client.Photon.Hashtable,MatchmakingMode,TypedLobby,System.String)
 bool LoadbalancingPeer_OpJoinRandomRoom_m1202 (LoadbalancingPeer_t262 * __this, Hashtable_t256 * ___expectedCustomRoomProperties, uint8_t ___expectedMaxPlayers, Hashtable_t256 * ___playerProperties, uint8_t ___matchingType, TypedLobby_t263 * ___typedLobby, String_t* ___sqlLobbyFilter, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.LoadbalancingPeer::OpFindFriends(System.String[])
 bool LoadbalancingPeer_OpFindFriends_m1203 (LoadbalancingPeer_t262 * __this, StringU5BU5D_t4* ___friendsToFind, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.LoadbalancingPeer::OpSetCustomPropertiesOfActor(System.Int32,ExitGames.Client.Photon.Hashtable,System.Boolean,System.Byte)
 bool LoadbalancingPeer_OpSetCustomPropertiesOfActor_m1204 (LoadbalancingPeer_t262 * __this, int32_t ___actorNr, Hashtable_t256 * ___actorProperties, bool ___broadcast, uint8_t ___channelId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.LoadbalancingPeer::OpSetPropertiesOfActor(System.Int32,ExitGames.Client.Photon.Hashtable,System.Boolean,System.Byte,ExitGames.Client.Photon.Hashtable)
 bool LoadbalancingPeer_OpSetPropertiesOfActor_m1205 (LoadbalancingPeer_t262 * __this, int32_t ___actorNr, Hashtable_t256 * ___actorProperties, bool ___broadcast, uint8_t ___channelId, Hashtable_t256 * ___expectedValues, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.LoadbalancingPeer::OpSetPropertyOfRoom(System.Byte,System.Object)
 void LoadbalancingPeer_OpSetPropertyOfRoom_m1206 (LoadbalancingPeer_t262 * __this, uint8_t ___propCode, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.LoadbalancingPeer::OpSetCustomPropertiesOfRoom(ExitGames.Client.Photon.Hashtable,System.Boolean,System.Byte)
 bool LoadbalancingPeer_OpSetCustomPropertiesOfRoom_m1207 (LoadbalancingPeer_t262 * __this, Hashtable_t256 * ___gameProperties, bool ___broadcast, uint8_t ___channelId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.LoadbalancingPeer::OpSetPropertiesOfRoom(ExitGames.Client.Photon.Hashtable,System.Boolean,System.Byte,ExitGames.Client.Photon.Hashtable)
 bool LoadbalancingPeer_OpSetPropertiesOfRoom_m1208 (LoadbalancingPeer_t262 * __this, Hashtable_t256 * ___gameProperties, bool ___broadcast, uint8_t ___channelId, Hashtable_t256 * ___expectedValues, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.LoadbalancingPeer::OpAuthenticate(System.String,System.String,System.String,AuthenticationValues,System.String)
 bool LoadbalancingPeer_OpAuthenticate_m1209 (LoadbalancingPeer_t262 * __this, String_t* ___appId, String_t* ___appVersion, String_t* ___userId, AuthenticationValues_t265 * ___authValues, String_t* ___regionCode, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.LoadbalancingPeer::OpChangeGroups(System.Byte[],System.Byte[])
 bool LoadbalancingPeer_OpChangeGroups_m1210 (LoadbalancingPeer_t262 * __this, ByteU5BU5D_t21* ___groupsToRemove, ByteU5BU5D_t21* ___groupsToAdd, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.LoadbalancingPeer::OpRaiseEvent(System.Byte,System.Object,System.Boolean,RaiseEventOptions)
 bool LoadbalancingPeer_OpRaiseEvent_m1211 (LoadbalancingPeer_t262 * __this, uint8_t ___eventCode, Object_t * ___customEventContent, bool ___sendReliable, RaiseEventOptions_t266 * ___raiseEventOptions, MethodInfo* method) IL2CPP_METHOD_ATTR;
