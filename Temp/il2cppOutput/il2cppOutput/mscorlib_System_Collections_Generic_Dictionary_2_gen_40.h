﻿#pragma once
#include <stdint.h>
// System.Int32[]
struct Int32U5BU5D_t257;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t3909;
// System.Tuple`2<System.Type,System.String>[]
struct Tuple_2U5BU5D_t6650;
// System.String[]
struct StringU5BU5D_t4;
// System.Collections.Generic.IEqualityComparer`1<System.Tuple`2<System.Type,System.String>>
struct IEqualityComparer_1_t6651;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2615;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Tuple`2<System.Type,System.String>,System.String,System.Collections.DictionaryEntry>
struct Transform_1_t6652;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>
struct Dictionary_2_t1520  : public Object_t
{
	// System.Int32[] System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::table
	Int32U5BU5D_t257* ___table;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::linkSlots
	LinkU5BU5D_t3909* ___linkSlots;
	// TKey[] System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::keySlots
	Tuple_2U5BU5D_t6650* ___keySlots;
	// TValue[] System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::valueSlots
	StringU5BU5D_t4* ___valueSlots;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::touchedSlots
	int32_t ___touchedSlots;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::emptySlot
	int32_t ___emptySlot;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::count
	int32_t ___count;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::threshold
	int32_t ___threshold;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::hcp
	Object_t* ___hcp;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::serialization_info
	SerializationInfo_t2615 * ___serialization_info;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::generation
	int32_t ___generation;
};
struct Dictionary_2_t1520_StaticFields{
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::INITIAL_SIZE
	int32_t ___INITIAL_SIZE;
	// System.Single System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::DEFAULT_LOAD_FACTOR
	float ___DEFAULT_LOAD_FACTOR;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::NO_SLOT
	int32_t ___NO_SLOT;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::HASH_FLAG
	int32_t ___HASH_FLAG;
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.String>,System.String>::<>f__am$cacheB
	Transform_1_t6652 * ___U3CU3Ef__am$cacheB;
};
