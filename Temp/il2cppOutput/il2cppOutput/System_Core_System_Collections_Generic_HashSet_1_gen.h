#pragma once
#include <stdint.h>
// System.Int32[]
struct Int32U5BU5D_t257;
// System.Collections.Generic.HashSet`1/Link<PickupItem>[]
struct LinkU5BU5D_t4497;
// PickupItem[]
struct PickupItemU5BU5D_t528;
// System.Collections.Generic.IEqualityComparer`1<PickupItem>
struct IEqualityComparer_1_t4499;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2615;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.HashSet`1<PickupItem>
struct HashSet_1_t360  : public Object_t
{
	// System.Int32[] System.Collections.Generic.HashSet`1<PickupItem>::table
	Int32U5BU5D_t257* ___table;
	// System.Collections.Generic.HashSet`1/Link<T>[] System.Collections.Generic.HashSet`1<PickupItem>::links
	LinkU5BU5D_t4497* ___links;
	// T[] System.Collections.Generic.HashSet`1<PickupItem>::slots
	PickupItemU5BU5D_t528* ___slots;
	// System.Int32 System.Collections.Generic.HashSet`1<PickupItem>::touched
	int32_t ___touched;
	// System.Int32 System.Collections.Generic.HashSet`1<PickupItem>::empty_slot
	int32_t ___empty_slot;
	// System.Int32 System.Collections.Generic.HashSet`1<PickupItem>::count
	int32_t ___count;
	// System.Int32 System.Collections.Generic.HashSet`1<PickupItem>::threshold
	int32_t ___threshold;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1<PickupItem>::comparer
	Object_t* ___comparer;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1<PickupItem>::si
	SerializationInfo_t2615 * ___si;
	// System.Int32 System.Collections.Generic.HashSet`1<PickupItem>::generation
	int32_t ___generation;
};
