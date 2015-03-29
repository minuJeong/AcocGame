#pragma once
#include <stdint.h>
// System.Int32[]
struct Int32U5BU5D_t257;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t3908;
// System.String[]
struct StringU5BU5D_t4;
// System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>[]
struct Tuple_2U5BU5D_t6667;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t438;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2614;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>,System.Collections.DictionaryEntry>
struct Transform_1_t6668;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.Dictionary`2<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>
struct Dictionary_2_t1521  : public Object_t
{
	// System.Int32[] System.Collections.Generic.Dictionary`2<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>::table
	Int32U5BU5D_t257* ___table;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>::linkSlots
	LinkU5BU5D_t3908* ___linkSlots;
	// TKey[] System.Collections.Generic.Dictionary`2<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>::keySlots
	StringU5BU5D_t4* ___keySlots;
	// TValue[] System.Collections.Generic.Dictionary`2<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>::valueSlots
	Tuple_2U5BU5D_t6667* ___valueSlots;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>::touchedSlots
	int32_t ___touchedSlots;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>::emptySlot
	int32_t ___emptySlot;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>::count
	int32_t ___count;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>::threshold
	int32_t ___threshold;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>::hcp
	Object_t* ___hcp;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>::serialization_info
	SerializationInfo_t2614 * ___serialization_info;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>::generation
	int32_t ___generation;
};
struct Dictionary_2_t1521_StaticFields{
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>::INITIAL_SIZE
	int32_t ___INITIAL_SIZE;
	// System.Single System.Collections.Generic.Dictionary`2<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>::DEFAULT_LOAD_FACTOR
	float ___DEFAULT_LOAD_FACTOR;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>::NO_SLOT
	int32_t ___NO_SLOT;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>::HASH_FLAG
	int32_t ___HASH_FLAG;
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2<System.String,System.Tuple`2<System.Func`1<Parse.ParseObject>,System.Type>>::<>f__am$cacheB
	Transform_1_t6668 * ___U3CU3Ef__am$cacheB;
};
