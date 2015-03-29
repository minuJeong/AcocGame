#pragma once
#include <stdint.h>
// System.Collections.Generic.List`1<System.Collections.Generic.Dictionary`2<System.String,System.String>>
struct List_1_t8739;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t123;
// System.ValueType
#include "mscorlib_System_ValueType.h"
// System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.Dictionary`2<System.String,System.String>>
struct Enumerator_t8744 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.Dictionary`2<System.String,System.String>>::l
	List_1_t8739 * ___l;
	// System.Int32 System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.Dictionary`2<System.String,System.String>>::next
	int32_t ___next;
	// System.Int32 System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.Dictionary`2<System.String,System.String>>::ver
	int32_t ___ver;
	// T System.Collections.Generic.List`1/Enumerator<System.Collections.Generic.Dictionary`2<System.String,System.String>>::current
	Dictionary_2_t123 * ___current;
};
