#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PhotonPlayer
struct PhotonPlayer_t230;
// System.String
struct String_t;
// ExitGames.Client.Photon.Hashtable
struct Hashtable_t256;
// System.Object
struct Object_t;

// System.Void PhotonPlayer::.ctor(System.Boolean,System.Int32,System.String)
 void PhotonPlayer__ctor_m1583 (PhotonPlayer_t230 * __this, bool ___isLocal, int32_t ___actorID, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonPlayer::.ctor(System.Boolean,System.Int32,ExitGames.Client.Photon.Hashtable)
 void PhotonPlayer__ctor_m1584 (PhotonPlayer_t230 * __this, bool ___isLocal, int32_t ___actorID, Hashtable_t256 * ___properties, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonPlayer::get_ID()
 int32_t PhotonPlayer_get_ID_m1585 (PhotonPlayer_t230 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PhotonPlayer::get_name()
 String_t* PhotonPlayer_get_name_m1586 (PhotonPlayer_t230 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonPlayer::set_name(System.String)
 void PhotonPlayer_set_name_m1587 (PhotonPlayer_t230 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonPlayer::get_isMasterClient()
 bool PhotonPlayer_get_isMasterClient_m1588 (PhotonPlayer_t230 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.Hashtable PhotonPlayer::get_customProperties()
 Hashtable_t256 * PhotonPlayer_get_customProperties_m1589 (PhotonPlayer_t230 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonPlayer::set_customProperties(ExitGames.Client.Photon.Hashtable)
 void PhotonPlayer_set_customProperties_m1590 (PhotonPlayer_t230 * __this, Hashtable_t256 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.Hashtable PhotonPlayer::get_allProperties()
 Hashtable_t256 * PhotonPlayer_get_allProperties_m1591 (PhotonPlayer_t230 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonPlayer::Equals(System.Object)
 bool PhotonPlayer_Equals_m1592 (PhotonPlayer_t230 * __this, Object_t * ___p, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonPlayer::GetHashCode()
 int32_t PhotonPlayer_GetHashCode_m1593 (PhotonPlayer_t230 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonPlayer::InternalChangeLocalID(System.Int32)
 void PhotonPlayer_InternalChangeLocalID_m1594 (PhotonPlayer_t230 * __this, int32_t ___newID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonPlayer::InternalCacheProperties(ExitGames.Client.Photon.Hashtable)
 void PhotonPlayer_InternalCacheProperties_m1595 (PhotonPlayer_t230 * __this, Hashtable_t256 * ___properties, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonPlayer::SetCustomProperties(ExitGames.Client.Photon.Hashtable)
 void PhotonPlayer_SetCustomProperties_m1596 (PhotonPlayer_t230 * __this, Hashtable_t256 * ___propertiesToSet, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonPlayer::SetCustomProperties(ExitGames.Client.Photon.Hashtable,ExitGames.Client.Photon.Hashtable)
 void PhotonPlayer_SetCustomProperties_m1597 (PhotonPlayer_t230 * __this, Hashtable_t256 * ___propertiesToSet, Hashtable_t256 * ___expectedValues, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PhotonPlayer PhotonPlayer::Find(System.Int32)
 PhotonPlayer_t230 * PhotonPlayer_Find_m1598 (Object_t * __this/* static, unused */, int32_t ___ID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PhotonPlayer PhotonPlayer::Get(System.Int32)
 PhotonPlayer_t230 * PhotonPlayer_Get_m1599 (PhotonPlayer_t230 * __this, int32_t ___id, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PhotonPlayer PhotonPlayer::GetNext()
 PhotonPlayer_t230 * PhotonPlayer_GetNext_m1600 (PhotonPlayer_t230 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PhotonPlayer PhotonPlayer::GetNextFor(PhotonPlayer)
 PhotonPlayer_t230 * PhotonPlayer_GetNextFor_m1601 (PhotonPlayer_t230 * __this, PhotonPlayer_t230 * ___currentPlayer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PhotonPlayer PhotonPlayer::GetNextFor(System.Int32)
 PhotonPlayer_t230 * PhotonPlayer_GetNextFor_m1602 (PhotonPlayer_t230 * __this, int32_t ___currentPlayerId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PhotonPlayer::ToString()
 String_t* PhotonPlayer_ToString_m1603 (PhotonPlayer_t230 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PhotonPlayer::ToStringFull()
 String_t* PhotonPlayer_ToStringFull_m1604 (PhotonPlayer_t230 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
