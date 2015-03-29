#pragma once
#include <stdint.h>
// System.Int32[]
struct Int32U5BU5D_t257;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t3909;
// System.String[]
struct StringU5BU5D_t4;
// Parse.Internal.IParseAuthenticationProvider[]
struct IParseAuthenticationProviderU5BU5D_t7029;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t438;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2615;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,Parse.Internal.IParseAuthenticationProvider,System.Collections.DictionaryEntry>
struct Transform_1_t7030;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseAuthenticationProvider>
struct Dictionary_2_t1596  : public Object_t
{
	// System.Int32[] System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseAuthenticationProvider>::table
	Int32U5BU5D_t257* ___table;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseAuthenticationProvider>::linkSlots
	LinkU5BU5D_t3909* ___linkSlots;
	// TKey[] System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseAuthenticationProvider>::keySlots
	StringU5BU5D_t4* ___keySlots;
	// TValue[] System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseAuthenticationProvider>::valueSlots
	IParseAuthenticationProviderU5BU5D_t7029* ___valueSlots;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseAuthenticationProvider>::touchedSlots
	int32_t ___touchedSlots;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseAuthenticationProvider>::emptySlot
	int32_t ___emptySlot;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseAuthenticationProvider>::count
	int32_t ___count;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseAuthenticationProvider>::threshold
	int32_t ___threshold;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseAuthenticationProvider>::hcp
	Object_t* ___hcp;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseAuthenticationProvider>::serialization_info
	SerializationInfo_t2615 * ___serialization_info;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseAuthenticationProvider>::generation
	int32_t ___generation;
};
struct Dictionary_2_t1596_StaticFields{
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseAuthenticationProvider>::INITIAL_SIZE
	int32_t ___INITIAL_SIZE;
	// System.Single System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseAuthenticationProvider>::DEFAULT_LOAD_FACTOR
	float ___DEFAULT_LOAD_FACTOR;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseAuthenticationProvider>::NO_SLOT
	int32_t ___NO_SLOT;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseAuthenticationProvider>::HASH_FLAG
	int32_t ___HASH_FLAG;
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2<System.String,Parse.Internal.IParseAuthenticationProvider>::<>f__am$cacheB
	Transform_1_t7030 * ___U3CU3Ef__am$cacheB;
};
