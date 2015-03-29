#pragma once
#include <stdint.h>
// System.Int32[]
struct Int32U5BU5D_t257;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t3908;
// System.Tuple`2<System.Type,System.Type>[]
struct Tuple_2U5BU5D_t6258;
// System.Type[]
struct TypeU5BU5D_t291;
// System.Collections.Generic.IEqualityComparer`1<System.Tuple`2<System.Type,System.Type>>
struct IEqualityComparer_1_t6260;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2614;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Tuple`2<System.Type,System.Type>,System.Type,System.Collections.DictionaryEntry>
struct Transform_1_t6374;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>
struct Dictionary_2_t1091  : public Object_t
{
	// System.Int32[] System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::table
	Int32U5BU5D_t257* ___table;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::linkSlots
	LinkU5BU5D_t3908* ___linkSlots;
	// TKey[] System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::keySlots
	Tuple_2U5BU5D_t6258* ___keySlots;
	// TValue[] System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::valueSlots
	TypeU5BU5D_t291* ___valueSlots;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::touchedSlots
	int32_t ___touchedSlots;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::emptySlot
	int32_t ___emptySlot;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::count
	int32_t ___count;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::threshold
	int32_t ___threshold;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::hcp
	Object_t* ___hcp;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::serialization_info
	SerializationInfo_t2614 * ___serialization_info;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::generation
	int32_t ___generation;
};
struct Dictionary_2_t1091_StaticFields{
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::INITIAL_SIZE
	int32_t ___INITIAL_SIZE;
	// System.Single System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::DEFAULT_LOAD_FACTOR
	float ___DEFAULT_LOAD_FACTOR;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::NO_SLOT
	int32_t ___NO_SLOT;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::HASH_FLAG
	int32_t ___HASH_FLAG;
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2<System.Tuple`2<System.Type,System.Type>,System.Type>::<>f__am$cacheB
	Transform_1_t6374 * ___U3CU3Ef__am$cacheB;
};
