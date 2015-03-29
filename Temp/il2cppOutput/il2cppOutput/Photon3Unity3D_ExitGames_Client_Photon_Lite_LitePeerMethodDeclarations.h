#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ExitGames.Client.Photon.Lite.LitePeer
struct LitePeer_t2385;
// ExitGames.Client.Photon.IPhotonPeerListener
struct IPhotonPeerListener_t19;
// System.Byte[]
struct ByteU5BU5D_t21;
// System.Object
struct Object_t;
// System.Int32[]
struct Int32U5BU5D_t257;
// ExitGames.Client.Photon.Hashtable
struct Hashtable_t256;
// System.String[]
struct StringU5BU5D_t4;
// System.String
struct String_t;
// ExitGames.Client.Photon.ConnectionProtocol
#include "Photon3Unity3D_ExitGames_Client_Photon_ConnectionProtocol.h"
// ExitGames.Client.Photon.Lite.EventCaching
#include "Photon3Unity3D_ExitGames_Client_Photon_Lite_EventCaching.h"
// ExitGames.Client.Photon.Lite.ReceiverGroup
#include "Photon3Unity3D_ExitGames_Client_Photon_Lite_ReceiverGroup.h"

// System.Void ExitGames.Client.Photon.Lite.LitePeer::.ctor(ExitGames.Client.Photon.IPhotonPeerListener)
 void LitePeer__ctor_m7402 (LitePeer_t2385 * __this, Object_t * ___listener, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Lite.LitePeer::.ctor()
 void LitePeer__ctor_m7403 (LitePeer_t2385 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Lite.LitePeer::.ctor(ExitGames.Client.Photon.ConnectionProtocol)
 void LitePeer__ctor_m7404 (LitePeer_t2385 * __this, uint8_t ___protocolType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Lite.LitePeer::.ctor(ExitGames.Client.Photon.IPhotonPeerListener,ExitGames.Client.Photon.ConnectionProtocol)
 void LitePeer__ctor_m7405 (LitePeer_t2385 * __this, Object_t * ___listener, uint8_t ___protocolType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Lite.LitePeer::OpChangeGroups(System.Byte[],System.Byte[])
 bool LitePeer_OpChangeGroups_m7406 (LitePeer_t2385 * __this, ByteU5BU5D_t21* ___groupsToRemove, ByteU5BU5D_t21* ___groupsToAdd, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Lite.LitePeer::OpRaiseEvent(System.Byte,System.Boolean,System.Object)
 bool LitePeer_OpRaiseEvent_m7407 (LitePeer_t2385 * __this, uint8_t ___eventCode, bool ___sendReliable, Object_t * ___customEventContent, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Lite.LitePeer::OpRaiseEvent(System.Byte,System.Boolean,System.Object,System.Byte,ExitGames.Client.Photon.Lite.EventCaching,System.Int32[],ExitGames.Client.Photon.Lite.ReceiverGroup,System.Byte)
 bool LitePeer_OpRaiseEvent_m7408 (LitePeer_t2385 * __this, uint8_t ___eventCode, bool ___sendReliable, Object_t * ___customEventContent, uint8_t ___channelId, uint8_t ___cache, Int32U5BU5D_t257* ___targetActors, uint8_t ___receivers, uint8_t ___interestGroup, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Lite.LitePeer::OpRaiseEvent(System.Byte,System.Byte,ExitGames.Client.Photon.Hashtable,System.Boolean)
 bool LitePeer_OpRaiseEvent_m7409 (LitePeer_t2385 * __this, uint8_t ___eventCode, uint8_t ___interestGroup, Hashtable_t256 * ___customEventContent, bool ___sendReliable, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Lite.LitePeer::OpRaiseEvent(System.Byte,ExitGames.Client.Photon.Hashtable,System.Boolean)
 bool LitePeer_OpRaiseEvent_m7410 (LitePeer_t2385 * __this, uint8_t ___eventCode, Hashtable_t256 * ___customEventContent, bool ___sendReliable, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Lite.LitePeer::OpRaiseEvent(System.Byte,ExitGames.Client.Photon.Hashtable,System.Boolean,System.Byte)
 bool LitePeer_OpRaiseEvent_m7411 (LitePeer_t2385 * __this, uint8_t ___eventCode, Hashtable_t256 * ___customEventContent, bool ___sendReliable, uint8_t ___channelId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Lite.LitePeer::OpRaiseEvent(System.Byte,ExitGames.Client.Photon.Hashtable,System.Boolean,System.Byte,System.Int32[])
 bool LitePeer_OpRaiseEvent_m7412 (LitePeer_t2385 * __this, uint8_t ___eventCode, Hashtable_t256 * ___customEventContent, bool ___sendReliable, uint8_t ___channelId, Int32U5BU5D_t257* ___targetActors, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Lite.LitePeer::OpRaiseEvent(System.Byte,ExitGames.Client.Photon.Hashtable,System.Boolean,System.Byte,ExitGames.Client.Photon.Lite.EventCaching,ExitGames.Client.Photon.Lite.ReceiverGroup)
 bool LitePeer_OpRaiseEvent_m7413 (LitePeer_t2385 * __this, uint8_t ___eventCode, Hashtable_t256 * ___customEventContent, bool ___sendReliable, uint8_t ___channelId, uint8_t ___cache, uint8_t ___receivers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Lite.LitePeer::OpSetPropertiesOfActor(System.Int32,ExitGames.Client.Photon.Hashtable,System.Boolean,System.Byte)
 bool LitePeer_OpSetPropertiesOfActor_m7414 (LitePeer_t2385 * __this, int32_t ___actorNr, Hashtable_t256 * ___properties, bool ___broadcast, uint8_t ___channelId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Lite.LitePeer::OpSetPropertiesOfGame(ExitGames.Client.Photon.Hashtable,System.Boolean,System.Byte)
 bool LitePeer_OpSetPropertiesOfGame_m7415 (LitePeer_t2385 * __this, Hashtable_t256 * ___properties, bool ___broadcast, uint8_t ___channelId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Lite.LitePeer::OpGetProperties(System.Byte)
 bool LitePeer_OpGetProperties_m7416 (LitePeer_t2385 * __this, uint8_t ___channelId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Lite.LitePeer::OpGetPropertiesOfActor(System.Int32[],System.String[],System.Byte)
 bool LitePeer_OpGetPropertiesOfActor_m7417 (LitePeer_t2385 * __this, Int32U5BU5D_t257* ___actorNrList, StringU5BU5D_t4* ___properties, uint8_t ___channelId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Lite.LitePeer::OpGetPropertiesOfActor(System.Int32[],System.Byte[],System.Byte)
 bool LitePeer_OpGetPropertiesOfActor_m7418 (LitePeer_t2385 * __this, Int32U5BU5D_t257* ___actorNrList, ByteU5BU5D_t21* ___properties, uint8_t ___channelId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Lite.LitePeer::OpGetPropertiesOfGame(System.String[],System.Byte)
 bool LitePeer_OpGetPropertiesOfGame_m7419 (LitePeer_t2385 * __this, StringU5BU5D_t4* ___properties, uint8_t ___channelId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Lite.LitePeer::OpGetPropertiesOfGame(System.Byte[],System.Byte)
 bool LitePeer_OpGetPropertiesOfGame_m7420 (LitePeer_t2385 * __this, ByteU5BU5D_t21* ___properties, uint8_t ___channelId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Lite.LitePeer::OpJoin(System.String)
 bool LitePeer_OpJoin_m7421 (LitePeer_t2385 * __this, String_t* ___gameName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Lite.LitePeer::OpJoin(System.String,ExitGames.Client.Photon.Hashtable,ExitGames.Client.Photon.Hashtable,System.Boolean)
 bool LitePeer_OpJoin_m7422 (LitePeer_t2385 * __this, String_t* ___gameName, Hashtable_t256 * ___gameProperties, Hashtable_t256 * ___actorProperties, bool ___broadcastActorProperties, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Lite.LitePeer::OpLeave()
 bool LitePeer_OpLeave_m7423 (LitePeer_t2385 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
