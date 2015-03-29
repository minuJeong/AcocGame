#pragma once
#include <stdint.h>
// System.Int32[]
struct Int32U5BU5D_t257;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t3909;
// ExitGames.Client.Photon.Hashtable[]
struct HashtableU5BU5D_t4780;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t4639;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2615;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,ExitGames.Client.Photon.Hashtable,System.Collections.DictionaryEntry>
struct Transform_1_t4781;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.Hashtable>
struct Dictionary_2_t284  : public Object_t
{
	// System.Int32[] System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.Hashtable>::table
	Int32U5BU5D_t257* ___table;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.Hashtable>::linkSlots
	LinkU5BU5D_t3909* ___linkSlots;
	// TKey[] System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.Hashtable>::keySlots
	Int32U5BU5D_t257* ___keySlots;
	// TValue[] System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.Hashtable>::valueSlots
	HashtableU5BU5D_t4780* ___valueSlots;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.Hashtable>::touchedSlots
	int32_t ___touchedSlots;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.Hashtable>::emptySlot
	int32_t ___emptySlot;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.Hashtable>::count
	int32_t ___count;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.Hashtable>::threshold
	int32_t ___threshold;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.Hashtable>::hcp
	Object_t* ___hcp;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.Hashtable>::serialization_info
	SerializationInfo_t2615 * ___serialization_info;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.Hashtable>::generation
	int32_t ___generation;
};
struct Dictionary_2_t284_StaticFields{
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.Hashtable>::INITIAL_SIZE
	int32_t ___INITIAL_SIZE;
	// System.Single System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.Hashtable>::DEFAULT_LOAD_FACTOR
	float ___DEFAULT_LOAD_FACTOR;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.Hashtable>::NO_SLOT
	int32_t ___NO_SLOT;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.Hashtable>::HASH_FLAG
	int32_t ___HASH_FLAG;
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.Hashtable>::<>f__am$cacheB
	Transform_1_t4781 * ___U3CU3Ef__am$cacheB;
};
