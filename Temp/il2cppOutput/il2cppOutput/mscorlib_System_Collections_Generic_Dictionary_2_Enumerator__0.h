#pragma once
#include <stdint.h>
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t122;
// System.ValueType
#include "mscorlib_System_ValueType.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Object>
struct Enumerator_t409 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Object>::dictionary
	Dictionary_2_t122 * ___dictionary;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Object>::next
	int32_t ___next;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Object>::stamp
	int32_t ___stamp;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Object>::current
	KeyValuePair_2_t410  ___current;
};
