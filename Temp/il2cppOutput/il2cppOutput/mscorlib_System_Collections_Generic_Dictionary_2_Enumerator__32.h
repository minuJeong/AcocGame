#pragma once
#include <stdint.h>
// System.Collections.Generic.Dictionary`2<System.Type,System.Reflection.MethodInfo>
struct Dictionary_2_t965;
// System.ValueType
#include "mscorlib_System_ValueType.h"
// System.Collections.Generic.KeyValuePair`2<System.Type,System.Reflection.MethodInfo>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_32.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Type,System.Reflection.MethodInfo>
struct Enumerator_t6001 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Type,System.Reflection.MethodInfo>::dictionary
	Dictionary_2_t965 * ___dictionary;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator<System.Type,System.Reflection.MethodInfo>::next
	int32_t ___next;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator<System.Type,System.Reflection.MethodInfo>::stamp
	int32_t ___stamp;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Type,System.Reflection.MethodInfo>::current
	KeyValuePair_2_t5858  ___current;
};
