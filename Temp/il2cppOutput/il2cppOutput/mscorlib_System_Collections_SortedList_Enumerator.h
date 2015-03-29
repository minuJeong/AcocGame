#pragma once
#include <stdint.h>
// System.Collections.SortedList
struct SortedList_t3299;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.SortedList/EnumeratorMode
#include "mscorlib_System_Collections_SortedList_EnumeratorMode.h"
// System.Collections.SortedList/Enumerator
struct Enumerator_t3300  : public Object_t
{
	// System.Collections.SortedList System.Collections.SortedList/Enumerator::host
	SortedList_t3299 * ___host;
	// System.Int32 System.Collections.SortedList/Enumerator::stamp
	int32_t ___stamp;
	// System.Int32 System.Collections.SortedList/Enumerator::pos
	int32_t ___pos;
	// System.Int32 System.Collections.SortedList/Enumerator::size
	int32_t ___size;
	// System.Collections.SortedList/EnumeratorMode System.Collections.SortedList/Enumerator::mode
	int32_t ___mode;
	// System.Object System.Collections.SortedList/Enumerator::currentKey
	Object_t * ___currentKey;
	// System.Object System.Collections.SortedList/Enumerator::currentValue
	Object_t * ___currentValue;
	// System.Boolean System.Collections.SortedList/Enumerator::invalid
	bool ___invalid;
};
struct Enumerator_t3300_StaticFields{
	// System.String System.Collections.SortedList/Enumerator::xstr
	String_t* ___xstr;
};
