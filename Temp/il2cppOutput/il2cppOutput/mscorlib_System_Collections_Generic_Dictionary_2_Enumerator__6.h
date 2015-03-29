#pragma once
#include <stdint.h>
// System.Collections.Generic.Dictionary`2<System.Byte,System.Object>
struct Dictionary_2_t72;
// System.ValueType
#include "mscorlib_System_ValueType.h"
// System.Collections.Generic.KeyValuePair`2<System.Byte,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_8.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Byte,System.Object>
struct Enumerator_t2444 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Byte,System.Object>::dictionary
	Dictionary_2_t72 * ___dictionary;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator<System.Byte,System.Object>::next
	int32_t ___next;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator<System.Byte,System.Object>::stamp
	int32_t ___stamp;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Byte,System.Object>::current
	KeyValuePair_2_t2445  ___current;
};
