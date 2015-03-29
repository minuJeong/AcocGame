#pragma once
#include <stdint.h>
// System.Int32[]
struct Int32U5BU5D_t257;
// System.Collections.Generic.HashSet`1/Link<System.Object>[]
struct LinkU5BU5D_t4492;
// System.Object[]
struct ObjectU5BU5D_t5;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1041;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2614;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t1425  : public Object_t
{
	// System.Int32[] System.Collections.Generic.HashSet`1<System.Object>::table
	Int32U5BU5D_t257* ___table;
	// System.Collections.Generic.HashSet`1/Link<T>[] System.Collections.Generic.HashSet`1<System.Object>::links
	LinkU5BU5D_t4492* ___links;
	// T[] System.Collections.Generic.HashSet`1<System.Object>::slots
	ObjectU5BU5D_t5* ___slots;
	// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::touched
	int32_t ___touched;
	// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::empty_slot
	int32_t ___empty_slot;
	// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::count
	int32_t ___count;
	// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::threshold
	int32_t ___threshold;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1<System.Object>::comparer
	Object_t* ___comparer;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1<System.Object>::si
	SerializationInfo_t2614 * ___si;
	// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::generation
	int32_t ___generation;
};
