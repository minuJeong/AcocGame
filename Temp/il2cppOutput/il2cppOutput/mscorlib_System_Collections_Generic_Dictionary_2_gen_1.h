﻿#pragma once
#include <stdint.h>
// System.Int32[]
struct Int32U5BU5D_t257;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t3908;
// System.Byte[]
struct ByteU5BU5D_t21;
// System.Object[]
struct ObjectU5BU5D_t5;
// System.Collections.Generic.IEqualityComparer`1<System.Byte>
struct IEqualityComparer_1_t4145;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2614;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Byte,System.Object,System.Collections.DictionaryEntry>
struct Transform_1_t4146;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.Dictionary`2<System.Byte,System.Object>
struct Dictionary_2_t72  : public Object_t
{
	// System.Int32[] System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::table
	Int32U5BU5D_t257* ___table;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::linkSlots
	LinkU5BU5D_t3908* ___linkSlots;
	// TKey[] System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::keySlots
	ByteU5BU5D_t21* ___keySlots;
	// TValue[] System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::valueSlots
	ObjectU5BU5D_t5* ___valueSlots;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::touchedSlots
	int32_t ___touchedSlots;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::emptySlot
	int32_t ___emptySlot;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::count
	int32_t ___count;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::threshold
	int32_t ___threshold;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::hcp
	Object_t* ___hcp;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::serialization_info
	SerializationInfo_t2614 * ___serialization_info;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::generation
	int32_t ___generation;
};
struct Dictionary_2_t72_StaticFields{
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::INITIAL_SIZE
	int32_t ___INITIAL_SIZE;
	// System.Single System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::DEFAULT_LOAD_FACTOR
	float ___DEFAULT_LOAD_FACTOR;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::NO_SLOT
	int32_t ___NO_SLOT;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::HASH_FLAG
	int32_t ___HASH_FLAG;
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::<>f__am$cacheB
	Transform_1_t4146 * ___U3CU3Ef__am$cacheB;
};