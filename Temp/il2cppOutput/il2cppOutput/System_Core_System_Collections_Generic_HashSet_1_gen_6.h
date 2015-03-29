#pragma once
#include <stdint.h>
// System.Int32[]
struct Int32U5BU5D_t257;
// System.Collections.Generic.HashSet`1/Link<System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.IComparable>>[]
struct LinkU5BU5D_t6235;
// System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.IComparable>[]
struct ReferenceU5BU5D_t6209;
// System.Collections.Generic.IEqualityComparer`1<System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.IComparable>>
struct IEqualityComparer_1_t6211;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2614;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.HashSet`1<System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.IComparable>>
struct HashSet_1_t6233  : public Object_t
{
	// System.Int32[] System.Collections.Generic.HashSet`1<System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.IComparable>>::table
	Int32U5BU5D_t257* ___table;
	// System.Collections.Generic.HashSet`1/Link<T>[] System.Collections.Generic.HashSet`1<System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.IComparable>>::links
	LinkU5BU5D_t6235* ___links;
	// T[] System.Collections.Generic.HashSet`1<System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.IComparable>>::slots
	ReferenceU5BU5D_t6209* ___slots;
	// System.Int32 System.Collections.Generic.HashSet`1<System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.IComparable>>::touched
	int32_t ___touched;
	// System.Int32 System.Collections.Generic.HashSet`1<System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.IComparable>>::empty_slot
	int32_t ___empty_slot;
	// System.Int32 System.Collections.Generic.HashSet`1<System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.IComparable>>::count
	int32_t ___count;
	// System.Int32 System.Collections.Generic.HashSet`1<System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.IComparable>>::threshold
	int32_t ___threshold;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1<System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.IComparable>>::comparer
	Object_t* ___comparer;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1<System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.IComparable>>::si
	SerializationInfo_t2614 * ___si;
	// System.Int32 System.Collections.Generic.HashSet`1<System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.IComparable>>::generation
	int32_t ___generation;
};
