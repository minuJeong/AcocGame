#pragma once
#include <stdint.h>
// System.Int32[]
struct Int32U5BU5D_t257;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t3908;
// System.Type[]
struct TypeU5BU5D_t291;
// ExitGames.Client.Photon.CustomType[]
struct CustomTypeU5BU5D_t11401;
// System.Collections.Generic.IEqualityComparer`1<System.Type>
struct IEqualityComparer_1_t4680;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2614;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Type,ExitGames.Client.Photon.CustomType,System.Collections.DictionaryEntry>
struct Transform_1_t11402;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.Dictionary`2<System.Type,ExitGames.Client.Photon.CustomType>
struct Dictionary_2_t2395  : public Object_t
{
	// System.Int32[] System.Collections.Generic.Dictionary`2<System.Type,ExitGames.Client.Photon.CustomType>::table
	Int32U5BU5D_t257* ___table;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2<System.Type,ExitGames.Client.Photon.CustomType>::linkSlots
	LinkU5BU5D_t3908* ___linkSlots;
	// TKey[] System.Collections.Generic.Dictionary`2<System.Type,ExitGames.Client.Photon.CustomType>::keySlots
	TypeU5BU5D_t291* ___keySlots;
	// TValue[] System.Collections.Generic.Dictionary`2<System.Type,ExitGames.Client.Photon.CustomType>::valueSlots
	CustomTypeU5BU5D_t11401* ___valueSlots;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Type,ExitGames.Client.Photon.CustomType>::touchedSlots
	int32_t ___touchedSlots;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Type,ExitGames.Client.Photon.CustomType>::emptySlot
	int32_t ___emptySlot;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Type,ExitGames.Client.Photon.CustomType>::count
	int32_t ___count;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Type,ExitGames.Client.Photon.CustomType>::threshold
	int32_t ___threshold;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2<System.Type,ExitGames.Client.Photon.CustomType>::hcp
	Object_t* ___hcp;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2<System.Type,ExitGames.Client.Photon.CustomType>::serialization_info
	SerializationInfo_t2614 * ___serialization_info;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Type,ExitGames.Client.Photon.CustomType>::generation
	int32_t ___generation;
};
struct Dictionary_2_t2395_StaticFields{
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Type,ExitGames.Client.Photon.CustomType>::INITIAL_SIZE
	int32_t ___INITIAL_SIZE;
	// System.Single System.Collections.Generic.Dictionary`2<System.Type,ExitGames.Client.Photon.CustomType>::DEFAULT_LOAD_FACTOR
	float ___DEFAULT_LOAD_FACTOR;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Type,ExitGames.Client.Photon.CustomType>::NO_SLOT
	int32_t ___NO_SLOT;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Type,ExitGames.Client.Photon.CustomType>::HASH_FLAG
	int32_t ___HASH_FLAG;
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2<System.Type,ExitGames.Client.Photon.CustomType>::<>f__am$cacheB
	Transform_1_t11402 * ___U3CU3Ef__am$cacheB;
};
