#pragma once
#include <stdint.h>
// System.Int32[]
struct Int32U5BU5D_t257;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t3908;
// System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.IComparable>[]
struct ReferenceU5BU5D_t6209;
// System.IComparable[]
struct IComparableU5BU5D_t6210;
// System.Collections.Generic.IEqualityComparer`1<System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.IComparable>>
struct IEqualityComparer_1_t6211;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2614;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.IComparable>,System.IComparable,System.Collections.DictionaryEntry>
struct Transform_1_t6212;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.Dictionary`2<System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.IComparable>,System.IComparable>
struct Dictionary_2_t6213  : public Object_t
{
	// System.Int32[] System.Collections.Generic.Dictionary`2<System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.IComparable>,System.IComparable>::table
	Int32U5BU5D_t257* ___table;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2<System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.IComparable>,System.IComparable>::linkSlots
	LinkU5BU5D_t3908* ___linkSlots;
	// TKey[] System.Collections.Generic.Dictionary`2<System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.IComparable>,System.IComparable>::keySlots
	ReferenceU5BU5D_t6209* ___keySlots;
	// TValue[] System.Collections.Generic.Dictionary`2<System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.IComparable>,System.IComparable>::valueSlots
	IComparableU5BU5D_t6210* ___valueSlots;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.IComparable>,System.IComparable>::touchedSlots
	int32_t ___touchedSlots;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.IComparable>,System.IComparable>::emptySlot
	int32_t ___emptySlot;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.IComparable>,System.IComparable>::count
	int32_t ___count;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.IComparable>,System.IComparable>::threshold
	int32_t ___threshold;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2<System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.IComparable>,System.IComparable>::hcp
	Object_t* ___hcp;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2<System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.IComparable>,System.IComparable>::serialization_info
	SerializationInfo_t2614 * ___serialization_info;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.IComparable>,System.IComparable>::generation
	int32_t ___generation;
};
struct Dictionary_2_t6213_StaticFields{
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.IComparable>,System.IComparable>::INITIAL_SIZE
	int32_t ___INITIAL_SIZE;
	// System.Single System.Collections.Generic.Dictionary`2<System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.IComparable>,System.IComparable>::DEFAULT_LOAD_FACTOR
	float ___DEFAULT_LOAD_FACTOR;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.IComparable>,System.IComparable>::NO_SLOT
	int32_t ___NO_SLOT;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.IComparable>,System.IComparable>::HASH_FLAG
	int32_t ___HASH_FLAG;
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2<System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.IComparable>,System.IComparable>::<>f__am$cacheB
	Transform_1_t6212 * ___U3CU3Ef__am$cacheB;
};
