#pragma once
#include <stdint.h>
// System.Int32[]
struct Int32U5BU5D_t257;
// System.Collections.Generic.HashSet`1/Link<Parse.ParseObject>[]
struct LinkU5BU5D_t6583;
// Parse.ParseObject[]
struct ParseObjectU5BU5D_t1405;
// System.Collections.Generic.IEqualityComparer`1<Parse.ParseObject>
struct IEqualityComparer_1_t6585;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2615;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.HashSet`1<Parse.ParseObject>
struct HashSet_1_t1146  : public Object_t
{
	// System.Int32[] System.Collections.Generic.HashSet`1<Parse.ParseObject>::table
	Int32U5BU5D_t257* ___table;
	// System.Collections.Generic.HashSet`1/Link<T>[] System.Collections.Generic.HashSet`1<Parse.ParseObject>::links
	LinkU5BU5D_t6583* ___links;
	// T[] System.Collections.Generic.HashSet`1<Parse.ParseObject>::slots
	ParseObjectU5BU5D_t1405* ___slots;
	// System.Int32 System.Collections.Generic.HashSet`1<Parse.ParseObject>::touched
	int32_t ___touched;
	// System.Int32 System.Collections.Generic.HashSet`1<Parse.ParseObject>::empty_slot
	int32_t ___empty_slot;
	// System.Int32 System.Collections.Generic.HashSet`1<Parse.ParseObject>::count
	int32_t ___count;
	// System.Int32 System.Collections.Generic.HashSet`1<Parse.ParseObject>::threshold
	int32_t ___threshold;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1<Parse.ParseObject>::comparer
	Object_t* ___comparer;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1<Parse.ParseObject>::si
	SerializationInfo_t2615 * ___si;
	// System.Int32 System.Collections.Generic.HashSet`1<Parse.ParseObject>::generation
	int32_t ___generation;
};
