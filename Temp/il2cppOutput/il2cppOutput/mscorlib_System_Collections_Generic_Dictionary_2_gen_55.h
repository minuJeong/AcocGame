﻿#pragma once
#include <stdint.h>
// System.Int32[]
struct Int32U5BU5D_t257;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t3909;
// System.Int64[]
struct Int64U5BU5D_t2397;
// System.Boolean[]
struct BooleanU5BU5D_t73;
// System.Collections.Generic.IEqualityComparer`1<System.Int64>
struct IEqualityComparer_1_t6473;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2615;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Boolean,System.Collections.DictionaryEntry>
struct Transform_1_t6474;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.Dictionary`2<System.Int64,System.Boolean>
struct Dictionary_2_t6475  : public Object_t
{
	// System.Int32[] System.Collections.Generic.Dictionary`2<System.Int64,System.Boolean>::table
	Int32U5BU5D_t257* ___table;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2<System.Int64,System.Boolean>::linkSlots
	LinkU5BU5D_t3909* ___linkSlots;
	// TKey[] System.Collections.Generic.Dictionary`2<System.Int64,System.Boolean>::keySlots
	Int64U5BU5D_t2397* ___keySlots;
	// TValue[] System.Collections.Generic.Dictionary`2<System.Int64,System.Boolean>::valueSlots
	BooleanU5BU5D_t73* ___valueSlots;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Int64,System.Boolean>::touchedSlots
	int32_t ___touchedSlots;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Int64,System.Boolean>::emptySlot
	int32_t ___emptySlot;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Int64,System.Boolean>::count
	int32_t ___count;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Int64,System.Boolean>::threshold
	int32_t ___threshold;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2<System.Int64,System.Boolean>::hcp
	Object_t* ___hcp;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2<System.Int64,System.Boolean>::serialization_info
	SerializationInfo_t2615 * ___serialization_info;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Int64,System.Boolean>::generation
	int32_t ___generation;
};
struct Dictionary_2_t6475_StaticFields{
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Int64,System.Boolean>::INITIAL_SIZE
	int32_t ___INITIAL_SIZE;
	// System.Single System.Collections.Generic.Dictionary`2<System.Int64,System.Boolean>::DEFAULT_LOAD_FACTOR
	float ___DEFAULT_LOAD_FACTOR;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Int64,System.Boolean>::NO_SLOT
	int32_t ___NO_SLOT;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Int64,System.Boolean>::HASH_FLAG
	int32_t ___HASH_FLAG;
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2<System.Int64,System.Boolean>::<>f__am$cacheB
	Transform_1_t6474 * ___U3CU3Ef__am$cacheB;
};
