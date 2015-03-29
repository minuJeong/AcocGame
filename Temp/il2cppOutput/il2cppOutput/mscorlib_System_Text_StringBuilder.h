#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Object
#include "mscorlib_System_Object.h"
// System.Text.StringBuilder
struct StringBuilder_t531  : public Object_t
{
	// System.Int32 System.Text.StringBuilder::_length
	int32_t ____length;
	// System.String System.Text.StringBuilder::_str
	String_t* ____str;
	// System.String System.Text.StringBuilder::_cached_str
	String_t* ____cached_str;
	// System.Int32 System.Text.StringBuilder::_maxCapacity
	int32_t ____maxCapacity;
};
