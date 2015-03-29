#pragma once
#include <stdint.h>
// System.Int32[]
struct Int32U5BU5D_t257;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t3909;
// UnityEngine.Component[]
struct ComponentU5BU5D_t112;
// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_t2451;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Component>
struct IEqualityComparer_1_t4887;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2615;
// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Component,System.Reflection.MethodInfo,System.Collections.DictionaryEntry>
struct Transform_1_t4888;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.Dictionary`2<UnityEngine.Component,System.Reflection.MethodInfo>
struct Dictionary_2_t314  : public Object_t
{
	// System.Int32[] System.Collections.Generic.Dictionary`2<UnityEngine.Component,System.Reflection.MethodInfo>::table
	Int32U5BU5D_t257* ___table;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2<UnityEngine.Component,System.Reflection.MethodInfo>::linkSlots
	LinkU5BU5D_t3909* ___linkSlots;
	// TKey[] System.Collections.Generic.Dictionary`2<UnityEngine.Component,System.Reflection.MethodInfo>::keySlots
	ComponentU5BU5D_t112* ___keySlots;
	// TValue[] System.Collections.Generic.Dictionary`2<UnityEngine.Component,System.Reflection.MethodInfo>::valueSlots
	MethodInfoU5BU5D_t2451* ___valueSlots;
	// System.Int32 System.Collections.Generic.Dictionary`2<UnityEngine.Component,System.Reflection.MethodInfo>::touchedSlots
	int32_t ___touchedSlots;
	// System.Int32 System.Collections.Generic.Dictionary`2<UnityEngine.Component,System.Reflection.MethodInfo>::emptySlot
	int32_t ___emptySlot;
	// System.Int32 System.Collections.Generic.Dictionary`2<UnityEngine.Component,System.Reflection.MethodInfo>::count
	int32_t ___count;
	// System.Int32 System.Collections.Generic.Dictionary`2<UnityEngine.Component,System.Reflection.MethodInfo>::threshold
	int32_t ___threshold;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2<UnityEngine.Component,System.Reflection.MethodInfo>::hcp
	Object_t* ___hcp;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2<UnityEngine.Component,System.Reflection.MethodInfo>::serialization_info
	SerializationInfo_t2615 * ___serialization_info;
	// System.Int32 System.Collections.Generic.Dictionary`2<UnityEngine.Component,System.Reflection.MethodInfo>::generation
	int32_t ___generation;
};
struct Dictionary_2_t314_StaticFields{
	// System.Int32 System.Collections.Generic.Dictionary`2<UnityEngine.Component,System.Reflection.MethodInfo>::INITIAL_SIZE
	int32_t ___INITIAL_SIZE;
	// System.Single System.Collections.Generic.Dictionary`2<UnityEngine.Component,System.Reflection.MethodInfo>::DEFAULT_LOAD_FACTOR
	float ___DEFAULT_LOAD_FACTOR;
	// System.Int32 System.Collections.Generic.Dictionary`2<UnityEngine.Component,System.Reflection.MethodInfo>::NO_SLOT
	int32_t ___NO_SLOT;
	// System.Int32 System.Collections.Generic.Dictionary`2<UnityEngine.Component,System.Reflection.MethodInfo>::HASH_FLAG
	int32_t ___HASH_FLAG;
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2<UnityEngine.Component,System.Reflection.MethodInfo>::<>f__am$cacheB
	Transform_1_t4888 * ___U3CU3Ef__am$cacheB;
};
