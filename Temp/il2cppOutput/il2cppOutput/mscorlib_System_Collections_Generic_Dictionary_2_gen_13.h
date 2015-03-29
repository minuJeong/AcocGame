#pragma once
#include <stdint.h>
// System.Int32[]
struct Int32U5BU5D_t257;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t3908;
// System.Object[][]
struct ObjectU5BU5DU5BU5D_t4799;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t4638;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2614;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object[],System.Collections.DictionaryEntry>
struct Transform_1_t4800;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>
struct Dictionary_2_t285  : public Object_t
{
	// System.Int32[] System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::table
	Int32U5BU5D_t257* ___table;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::linkSlots
	LinkU5BU5D_t3908* ___linkSlots;
	// TKey[] System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::keySlots
	Int32U5BU5D_t257* ___keySlots;
	// TValue[] System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::valueSlots
	ObjectU5BU5DU5BU5D_t4799* ___valueSlots;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::touchedSlots
	int32_t ___touchedSlots;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::emptySlot
	int32_t ___emptySlot;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::count
	int32_t ___count;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::threshold
	int32_t ___threshold;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::hcp
	Object_t* ___hcp;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::serialization_info
	SerializationInfo_t2614 * ___serialization_info;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::generation
	int32_t ___generation;
};
struct Dictionary_2_t285_StaticFields{
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::INITIAL_SIZE
	int32_t ___INITIAL_SIZE;
	// System.Single System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::DEFAULT_LOAD_FACTOR
	float ___DEFAULT_LOAD_FACTOR;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::NO_SLOT
	int32_t ___NO_SLOT;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::HASH_FLAG
	int32_t ___HASH_FLAG;
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2<System.Int32,System.Object[]>::<>f__am$cacheB
	Transform_1_t4800 * ___U3CU3Ef__am$cacheB;
};
