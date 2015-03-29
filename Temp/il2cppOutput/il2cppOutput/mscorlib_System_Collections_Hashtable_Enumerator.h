#pragma once
#include <stdint.h>
// System.Collections.Hashtable
struct Hashtable_t48;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Hashtable/EnumeratorMode
#include "mscorlib_System_Collections_Hashtable_EnumeratorMode.h"
// System.Collections.Hashtable/Enumerator
struct Enumerator_t3290  : public Object_t
{
	// System.Collections.Hashtable System.Collections.Hashtable/Enumerator::host
	Hashtable_t48 * ___host;
	// System.Int32 System.Collections.Hashtable/Enumerator::stamp
	int32_t ___stamp;
	// System.Int32 System.Collections.Hashtable/Enumerator::pos
	int32_t ___pos;
	// System.Int32 System.Collections.Hashtable/Enumerator::size
	int32_t ___size;
	// System.Collections.Hashtable/EnumeratorMode System.Collections.Hashtable/Enumerator::mode
	int32_t ___mode;
	// System.Object System.Collections.Hashtable/Enumerator::currentKey
	Object_t * ___currentKey;
	// System.Object System.Collections.Hashtable/Enumerator::currentValue
	Object_t * ___currentValue;
};
struct Enumerator_t3290_StaticFields{
	// System.String System.Collections.Hashtable/Enumerator::xstr
	String_t* ___xstr;
};
