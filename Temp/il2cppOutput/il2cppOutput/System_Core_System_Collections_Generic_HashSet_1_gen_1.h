#pragma once
#include <stdint.h>
// System.Int32[]
struct Int32U5BU5D_t257;
// System.Collections.Generic.HashSet`1/Link<UnityEngine.GameObject>[]
struct LinkU5BU5D_t4828;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t197;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.GameObject>
struct IEqualityComparer_1_t4830;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2615;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.HashSet`1<UnityEngine.GameObject>
struct HashSet_1_t303  : public Object_t
{
	// System.Int32[] System.Collections.Generic.HashSet`1<UnityEngine.GameObject>::table
	Int32U5BU5D_t257* ___table;
	// System.Collections.Generic.HashSet`1/Link<T>[] System.Collections.Generic.HashSet`1<UnityEngine.GameObject>::links
	LinkU5BU5D_t4828* ___links;
	// T[] System.Collections.Generic.HashSet`1<UnityEngine.GameObject>::slots
	GameObjectU5BU5D_t197* ___slots;
	// System.Int32 System.Collections.Generic.HashSet`1<UnityEngine.GameObject>::touched
	int32_t ___touched;
	// System.Int32 System.Collections.Generic.HashSet`1<UnityEngine.GameObject>::empty_slot
	int32_t ___empty_slot;
	// System.Int32 System.Collections.Generic.HashSet`1<UnityEngine.GameObject>::count
	int32_t ___count;
	// System.Int32 System.Collections.Generic.HashSet`1<UnityEngine.GameObject>::threshold
	int32_t ___threshold;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1<UnityEngine.GameObject>::comparer
	Object_t* ___comparer;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1<UnityEngine.GameObject>::si
	SerializationInfo_t2615 * ___si;
	// System.Int32 System.Collections.Generic.HashSet`1<UnityEngine.GameObject>::generation
	int32_t ___generation;
};
