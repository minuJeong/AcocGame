#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Room
struct Room_t286;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t4;
// RoomOptions
struct RoomOptions_t264;
// ExitGames.Client.Photon.Hashtable
struct Hashtable_t256;

// System.Void Room::.ctor(System.String,RoomOptions)
 void Room__ctor_m1662 (Room_t286 * __this, String_t* ___roomName, RoomOptions_t264 * ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Room::get_playerCount()
 int32_t Room_get_playerCount_m1663 (Room_t286 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Room::get_name()
 String_t* Room_get_name_m1664 (Room_t286 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Room::set_name(System.String)
 void Room_set_name_m1665 (Room_t286 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Room::get_maxPlayers()
 int32_t Room_get_maxPlayers_m1666 (Room_t286 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Room::set_maxPlayers(System.Int32)
 void Room_set_maxPlayers_m1667 (Room_t286 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Room::get_open()
 bool Room_get_open_m1668 (Room_t286 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Room::set_open(System.Boolean)
 void Room_set_open_m1669 (Room_t286 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Room::get_visible()
 bool Room_get_visible_m1670 (Room_t286 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Room::set_visible(System.Boolean)
 void Room_set_visible_m1671 (Room_t286 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] Room::get_propertiesListedInLobby()
 StringU5BU5D_t4* Room_get_propertiesListedInLobby_m1672 (Room_t286 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Room::set_propertiesListedInLobby(System.String[])
 void Room_set_propertiesListedInLobby_m1673 (Room_t286 * __this, StringU5BU5D_t4* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Room::get_autoCleanUp()
 bool Room_get_autoCleanUp_m1674 (Room_t286 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Room::SetCustomProperties(ExitGames.Client.Photon.Hashtable)
 void Room_SetCustomProperties_m1675 (Room_t286 * __this, Hashtable_t256 * ___propertiesToSet, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Room::SetCustomProperties(ExitGames.Client.Photon.Hashtable,ExitGames.Client.Photon.Hashtable)
 void Room_SetCustomProperties_m1676 (Room_t286 * __this, Hashtable_t256 * ___propertiesToSet, Hashtable_t256 * ___expectedValues, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Room::SetPropertiesListedInLobby(System.String[])
 void Room_SetPropertiesListedInLobby_m1677 (Room_t286 * __this, StringU5BU5D_t4* ___propsListedInLobby, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Room::ToString()
 String_t* Room_ToString_m1678 (Room_t286 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Room::ToStringFull()
 String_t* Room_ToStringFull_m1679 (Room_t286 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
