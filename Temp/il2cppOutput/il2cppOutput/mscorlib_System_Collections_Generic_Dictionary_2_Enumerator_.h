#pragma once
#include <stdint.h>
// System.Collections.Generic.Dictionary`2<System.String,System.String[]>
struct Dictionary_2_t121;
// System.ValueType
#include "mscorlib_System_ValueType.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.String[]>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String[]>
struct Enumerator_t406 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String[]>::dictionary
	Dictionary_2_t121 * ___dictionary;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String[]>::next
	int32_t ___next;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String[]>::stamp
	int32_t ___stamp;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String[]>::current
	KeyValuePair_2_t407  ___current;
};
