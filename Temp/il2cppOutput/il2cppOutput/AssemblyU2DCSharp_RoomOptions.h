#pragma once
#include <stdint.h>
// ExitGames.Client.Photon.Hashtable
struct Hashtable_t256;
// System.String[]
struct StringU5BU5D_t4;
// System.Object
#include "mscorlib_System_Object.h"
// RoomOptions
struct RoomOptions_t264  : public Object_t
{
	// System.Int32 RoomOptions::maxPlayers
	int32_t ___maxPlayers;
	// System.Boolean RoomOptions::isVisibleField
	bool ___isVisibleField;
	// System.Boolean RoomOptions::isOpenField
	bool ___isOpenField;
	// System.Boolean RoomOptions::cleanupCacheOnLeaveField
	bool ___cleanupCacheOnLeaveField;
	// ExitGames.Client.Photon.Hashtable RoomOptions::customRoomProperties
	Hashtable_t256 * ___customRoomProperties;
	// System.String[] RoomOptions::customRoomPropertiesForLobby
	StringU5BU5D_t4* ___customRoomPropertiesForLobby;
};
