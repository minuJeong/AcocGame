#pragma once
#include <stdint.h>
// System.Int32[]
struct Int32U5BU5D_t257;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t3908;
// System.String[]
struct StringU5BU5D_t4;
// LitJson.JsonData[]
struct JsonDataU5BU5D_t5808;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t438;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2614;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,LitJson.JsonData,System.Collections.DictionaryEntry>
struct Transform_1_t5821;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.Dictionary`2<System.String,LitJson.JsonData>
struct Dictionary_2_t936  : public Object_t
{
	// System.Int32[] System.Collections.Generic.Dictionary`2<System.String,LitJson.JsonData>::table
	Int32U5BU5D_t257* ___table;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2<System.String,LitJson.JsonData>::linkSlots
	LinkU5BU5D_t3908* ___linkSlots;
	// TKey[] System.Collections.Generic.Dictionary`2<System.String,LitJson.JsonData>::keySlots
	StringU5BU5D_t4* ___keySlots;
	// TValue[] System.Collections.Generic.Dictionary`2<System.String,LitJson.JsonData>::valueSlots
	JsonDataU5BU5D_t5808* ___valueSlots;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,LitJson.JsonData>::touchedSlots
	int32_t ___touchedSlots;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,LitJson.JsonData>::emptySlot
	int32_t ___emptySlot;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,LitJson.JsonData>::count
	int32_t ___count;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,LitJson.JsonData>::threshold
	int32_t ___threshold;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2<System.String,LitJson.JsonData>::hcp
	Object_t* ___hcp;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2<System.String,LitJson.JsonData>::serialization_info
	SerializationInfo_t2614 * ___serialization_info;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,LitJson.JsonData>::generation
	int32_t ___generation;
};
struct Dictionary_2_t936_StaticFields{
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,LitJson.JsonData>::INITIAL_SIZE
	int32_t ___INITIAL_SIZE;
	// System.Single System.Collections.Generic.Dictionary`2<System.String,LitJson.JsonData>::DEFAULT_LOAD_FACTOR
	float ___DEFAULT_LOAD_FACTOR;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,LitJson.JsonData>::NO_SLOT
	int32_t ___NO_SLOT;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,LitJson.JsonData>::HASH_FLAG
	int32_t ___HASH_FLAG;
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2<System.String,LitJson.JsonData>::<>f__am$cacheB
	Transform_1_t5821 * ___U3CU3Ef__am$cacheB;
};
