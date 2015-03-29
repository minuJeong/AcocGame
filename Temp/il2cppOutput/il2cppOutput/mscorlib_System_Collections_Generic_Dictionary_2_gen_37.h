#pragma once
#include <stdint.h>
// System.Int32[]
struct Int32U5BU5D_t257;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t3908;
// System.Object[]
struct ObjectU5BU5D_t5;
// Parse.Internal.ParseJSONCacheItem[]
struct ParseJSONCacheItemU5BU5D_t6515;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1041;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2614;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Parse.Internal.ParseJSONCacheItem,System.Collections.DictionaryEntry>
struct Transform_1_t6516;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.Dictionary`2<System.Object,Parse.Internal.ParseJSONCacheItem>
struct Dictionary_2_t1504  : public Object_t
{
	// System.Int32[] System.Collections.Generic.Dictionary`2<System.Object,Parse.Internal.ParseJSONCacheItem>::table
	Int32U5BU5D_t257* ___table;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2<System.Object,Parse.Internal.ParseJSONCacheItem>::linkSlots
	LinkU5BU5D_t3908* ___linkSlots;
	// TKey[] System.Collections.Generic.Dictionary`2<System.Object,Parse.Internal.ParseJSONCacheItem>::keySlots
	ObjectU5BU5D_t5* ___keySlots;
	// TValue[] System.Collections.Generic.Dictionary`2<System.Object,Parse.Internal.ParseJSONCacheItem>::valueSlots
	ParseJSONCacheItemU5BU5D_t6515* ___valueSlots;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,Parse.Internal.ParseJSONCacheItem>::touchedSlots
	int32_t ___touchedSlots;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,Parse.Internal.ParseJSONCacheItem>::emptySlot
	int32_t ___emptySlot;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,Parse.Internal.ParseJSONCacheItem>::count
	int32_t ___count;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,Parse.Internal.ParseJSONCacheItem>::threshold
	int32_t ___threshold;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,Parse.Internal.ParseJSONCacheItem>::hcp
	Object_t* ___hcp;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2<System.Object,Parse.Internal.ParseJSONCacheItem>::serialization_info
	SerializationInfo_t2614 * ___serialization_info;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,Parse.Internal.ParseJSONCacheItem>::generation
	int32_t ___generation;
};
struct Dictionary_2_t1504_StaticFields{
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,Parse.Internal.ParseJSONCacheItem>::INITIAL_SIZE
	int32_t ___INITIAL_SIZE;
	// System.Single System.Collections.Generic.Dictionary`2<System.Object,Parse.Internal.ParseJSONCacheItem>::DEFAULT_LOAD_FACTOR
	float ___DEFAULT_LOAD_FACTOR;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,Parse.Internal.ParseJSONCacheItem>::NO_SLOT
	int32_t ___NO_SLOT;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,Parse.Internal.ParseJSONCacheItem>::HASH_FLAG
	int32_t ___HASH_FLAG;
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2<System.Object,Parse.Internal.ParseJSONCacheItem>::<>f__am$cacheB
	Transform_1_t6516 * ___U3CU3Ef__am$cacheB;
};
