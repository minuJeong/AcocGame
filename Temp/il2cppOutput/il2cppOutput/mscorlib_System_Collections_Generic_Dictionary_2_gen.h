#pragma once
#include <stdint.h>
// System.Int32[]
struct Int32U5BU5D_t257;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t3908;
// System.String[]
struct StringU5BU5D_t4;
// ExitGames.Client.Photon.Chat.ChatChannel[]
struct ChatChannelU5BU5D_t4092;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t438;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2614;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,ExitGames.Client.Photon.Chat.ChatChannel,System.Collections.DictionaryEntry>
struct Transform_1_t4093;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.Dictionary`2<System.String,ExitGames.Client.Photon.Chat.ChatChannel>
struct Dictionary_2_t6  : public Object_t
{
	// System.Int32[] System.Collections.Generic.Dictionary`2<System.String,ExitGames.Client.Photon.Chat.ChatChannel>::table
	Int32U5BU5D_t257* ___table;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2<System.String,ExitGames.Client.Photon.Chat.ChatChannel>::linkSlots
	LinkU5BU5D_t3908* ___linkSlots;
	// TKey[] System.Collections.Generic.Dictionary`2<System.String,ExitGames.Client.Photon.Chat.ChatChannel>::keySlots
	StringU5BU5D_t4* ___keySlots;
	// TValue[] System.Collections.Generic.Dictionary`2<System.String,ExitGames.Client.Photon.Chat.ChatChannel>::valueSlots
	ChatChannelU5BU5D_t4092* ___valueSlots;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,ExitGames.Client.Photon.Chat.ChatChannel>::touchedSlots
	int32_t ___touchedSlots;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,ExitGames.Client.Photon.Chat.ChatChannel>::emptySlot
	int32_t ___emptySlot;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,ExitGames.Client.Photon.Chat.ChatChannel>::count
	int32_t ___count;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,ExitGames.Client.Photon.Chat.ChatChannel>::threshold
	int32_t ___threshold;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2<System.String,ExitGames.Client.Photon.Chat.ChatChannel>::hcp
	Object_t* ___hcp;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2<System.String,ExitGames.Client.Photon.Chat.ChatChannel>::serialization_info
	SerializationInfo_t2614 * ___serialization_info;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,ExitGames.Client.Photon.Chat.ChatChannel>::generation
	int32_t ___generation;
};
struct Dictionary_2_t6_StaticFields{
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,ExitGames.Client.Photon.Chat.ChatChannel>::INITIAL_SIZE
	int32_t ___INITIAL_SIZE;
	// System.Single System.Collections.Generic.Dictionary`2<System.String,ExitGames.Client.Photon.Chat.ChatChannel>::DEFAULT_LOAD_FACTOR
	float ___DEFAULT_LOAD_FACTOR;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,ExitGames.Client.Photon.Chat.ChatChannel>::NO_SLOT
	int32_t ___NO_SLOT;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,ExitGames.Client.Photon.Chat.ChatChannel>::HASH_FLAG
	int32_t ___HASH_FLAG;
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2<System.String,ExitGames.Client.Photon.Chat.ChatChannel>::<>f__am$cacheB
	Transform_1_t4093 * ___U3CU3Ef__am$cacheB;
};
