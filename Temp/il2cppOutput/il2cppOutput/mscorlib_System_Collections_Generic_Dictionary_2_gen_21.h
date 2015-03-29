#pragma once
#include <stdint.h>
// System.Int32[]
struct Int32U5BU5D_t257;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t3909;
// System.String[]
struct StringU5BU5D_t4;
// Facebook.FacebookDelegate[]
struct FacebookDelegateU5BU5D_t5763;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t438;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2615;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,Facebook.FacebookDelegate,System.Collections.DictionaryEntry>
struct Transform_1_t5777;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.Dictionary`2<System.String,Facebook.FacebookDelegate>
struct Dictionary_2_t856  : public Object_t
{
	// System.Int32[] System.Collections.Generic.Dictionary`2<System.String,Facebook.FacebookDelegate>::table
	Int32U5BU5D_t257* ___table;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2<System.String,Facebook.FacebookDelegate>::linkSlots
	LinkU5BU5D_t3909* ___linkSlots;
	// TKey[] System.Collections.Generic.Dictionary`2<System.String,Facebook.FacebookDelegate>::keySlots
	StringU5BU5D_t4* ___keySlots;
	// TValue[] System.Collections.Generic.Dictionary`2<System.String,Facebook.FacebookDelegate>::valueSlots
	FacebookDelegateU5BU5D_t5763* ___valueSlots;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,Facebook.FacebookDelegate>::touchedSlots
	int32_t ___touchedSlots;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,Facebook.FacebookDelegate>::emptySlot
	int32_t ___emptySlot;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,Facebook.FacebookDelegate>::count
	int32_t ___count;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,Facebook.FacebookDelegate>::threshold
	int32_t ___threshold;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2<System.String,Facebook.FacebookDelegate>::hcp
	Object_t* ___hcp;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2<System.String,Facebook.FacebookDelegate>::serialization_info
	SerializationInfo_t2615 * ___serialization_info;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,Facebook.FacebookDelegate>::generation
	int32_t ___generation;
};
struct Dictionary_2_t856_StaticFields{
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,Facebook.FacebookDelegate>::INITIAL_SIZE
	int32_t ___INITIAL_SIZE;
	// System.Single System.Collections.Generic.Dictionary`2<System.String,Facebook.FacebookDelegate>::DEFAULT_LOAD_FACTOR
	float ___DEFAULT_LOAD_FACTOR;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,Facebook.FacebookDelegate>::NO_SLOT
	int32_t ___NO_SLOT;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,Facebook.FacebookDelegate>::HASH_FLAG
	int32_t ___HASH_FLAG;
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2<System.String,Facebook.FacebookDelegate>::<>f__am$cacheB
	Transform_1_t5777 * ___U3CU3Ef__am$cacheB;
};
