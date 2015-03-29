#pragma once
#include <stdint.h>
// ExitGames.Client.Photon.Hashtable
struct Hashtable_t256;
// System.String
struct String_t;
// System.Object
#include "mscorlib_System_Object.h"
// RoomInfo
struct RoomInfo_t281  : public Object_t
{
	// ExitGames.Client.Photon.Hashtable RoomInfo::customPropertiesField
	Hashtable_t256 * ___customPropertiesField;
	// System.Byte RoomInfo::maxPlayersField
	uint8_t ___maxPlayersField;
	// System.Boolean RoomInfo::openField
	bool ___openField;
	// System.Boolean RoomInfo::visibleField
	bool ___visibleField;
	// System.Boolean RoomInfo::autoCleanUpField
	bool ___autoCleanUpField;
	// System.String RoomInfo::nameField
	String_t* ___nameField;
	// System.Boolean RoomInfo::<removedFromList>k__BackingField
	bool ___U3CremovedFromListU3Ek__BackingField;
	// System.Int32 RoomInfo::<playerCount>k__BackingField
	int32_t ___U3CplayerCountU3Ek__BackingField;
	// System.Boolean RoomInfo::<isLocalClientInside>k__BackingField
	bool ___U3CisLocalClientInsideU3Ek__BackingField;
};
