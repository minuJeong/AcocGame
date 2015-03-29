﻿#pragma once
#include <stdint.h>
// System.Int32[]
struct Int32U5BU5D_t257;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t3909;
// System.Type[]
struct TypeU5BU5D_t291;
// LitJson.ArrayMetadata[]
struct ArrayMetadataU5BU5D_t5868;
// System.Collections.Generic.IEqualityComparer`1<System.Type>
struct IEqualityComparer_1_t4681;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2615;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Type,LitJson.ArrayMetadata,System.Collections.DictionaryEntry>
struct Transform_1_t5869;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.Dictionary`2<System.Type,LitJson.ArrayMetadata>
struct Dictionary_2_t950  : public Object_t
{
	// System.Int32[] System.Collections.Generic.Dictionary`2<System.Type,LitJson.ArrayMetadata>::table
	Int32U5BU5D_t257* ___table;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2<System.Type,LitJson.ArrayMetadata>::linkSlots
	LinkU5BU5D_t3909* ___linkSlots;
	// TKey[] System.Collections.Generic.Dictionary`2<System.Type,LitJson.ArrayMetadata>::keySlots
	TypeU5BU5D_t291* ___keySlots;
	// TValue[] System.Collections.Generic.Dictionary`2<System.Type,LitJson.ArrayMetadata>::valueSlots
	ArrayMetadataU5BU5D_t5868* ___valueSlots;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Type,LitJson.ArrayMetadata>::touchedSlots
	int32_t ___touchedSlots;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Type,LitJson.ArrayMetadata>::emptySlot
	int32_t ___emptySlot;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Type,LitJson.ArrayMetadata>::count
	int32_t ___count;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Type,LitJson.ArrayMetadata>::threshold
	int32_t ___threshold;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2<System.Type,LitJson.ArrayMetadata>::hcp
	Object_t* ___hcp;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2<System.Type,LitJson.ArrayMetadata>::serialization_info
	SerializationInfo_t2615 * ___serialization_info;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Type,LitJson.ArrayMetadata>::generation
	int32_t ___generation;
};
struct Dictionary_2_t950_StaticFields{
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Type,LitJson.ArrayMetadata>::INITIAL_SIZE
	int32_t ___INITIAL_SIZE;
	// System.Single System.Collections.Generic.Dictionary`2<System.Type,LitJson.ArrayMetadata>::DEFAULT_LOAD_FACTOR
	float ___DEFAULT_LOAD_FACTOR;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Type,LitJson.ArrayMetadata>::NO_SLOT
	int32_t ___NO_SLOT;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Type,LitJson.ArrayMetadata>::HASH_FLAG
	int32_t ___HASH_FLAG;
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2<System.Type,LitJson.ArrayMetadata>::<>f__am$cacheB
	Transform_1_t5869 * ___U3CU3Ef__am$cacheB;
};
