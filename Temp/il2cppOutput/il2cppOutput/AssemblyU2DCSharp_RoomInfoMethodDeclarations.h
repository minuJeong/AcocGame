#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// RoomInfo
struct RoomInfo_t281;
// ExitGames.Client.Photon.Hashtable
struct Hashtable_t256;
// System.String
struct String_t;
// System.Object
struct Object_t;

// System.Void RoomInfo::.ctor(System.String,ExitGames.Client.Photon.Hashtable)
 void RoomInfo__ctor_m1680 (RoomInfo_t281 * __this, String_t* ___roomName, Hashtable_t256 * ___properties, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean RoomInfo::get_removedFromList()
 bool RoomInfo_get_removedFromList_m1681 (RoomInfo_t281 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RoomInfo::set_removedFromList(System.Boolean)
 void RoomInfo_set_removedFromList_m1682 (RoomInfo_t281 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.Hashtable RoomInfo::get_customProperties()
 Hashtable_t256 * RoomInfo_get_customProperties_m1683 (RoomInfo_t281 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String RoomInfo::get_name()
 String_t* RoomInfo_get_name_m1684 (RoomInfo_t281 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 RoomInfo::get_playerCount()
 int32_t RoomInfo_get_playerCount_m1685 (RoomInfo_t281 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RoomInfo::set_playerCount(System.Int32)
 void RoomInfo_set_playerCount_m1686 (RoomInfo_t281 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean RoomInfo::get_isLocalClientInside()
 bool RoomInfo_get_isLocalClientInside_m1687 (RoomInfo_t281 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RoomInfo::set_isLocalClientInside(System.Boolean)
 void RoomInfo_set_isLocalClientInside_m1688 (RoomInfo_t281 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte RoomInfo::get_maxPlayers()
 uint8_t RoomInfo_get_maxPlayers_m1689 (RoomInfo_t281 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean RoomInfo::get_open()
 bool RoomInfo_get_open_m1690 (RoomInfo_t281 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean RoomInfo::get_visible()
 bool RoomInfo_get_visible_m1691 (RoomInfo_t281 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean RoomInfo::Equals(System.Object)
 bool RoomInfo_Equals_m1692 (RoomInfo_t281 * __this, Object_t * ___p, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 RoomInfo::GetHashCode()
 int32_t RoomInfo_GetHashCode_m1693 (RoomInfo_t281 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String RoomInfo::ToString()
 String_t* RoomInfo_ToString_m1694 (RoomInfo_t281 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String RoomInfo::ToStringFull()
 String_t* RoomInfo_ToStringFull_m1695 (RoomInfo_t281 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RoomInfo::CacheProperties(ExitGames.Client.Photon.Hashtable)
 void RoomInfo_CacheProperties_m1696 (RoomInfo_t281 * __this, Hashtable_t256 * ___propertiesToCache, MethodInfo* method) IL2CPP_METHOD_ATTR;
