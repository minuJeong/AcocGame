#pragma once
#include <stdint.h>
// System.Array
struct Array_t;
// System.Object
#include "mscorlib_System_Object.h"
// System.Array/SimpleEnumerator
struct SimpleEnumerator_t3172  : public Object_t
{
	// System.Array System.Array/SimpleEnumerator::enumeratee
	Array_t * ___enumeratee;
	// System.Int32 System.Array/SimpleEnumerator::currentpos
	int32_t ___currentpos;
	// System.Int32 System.Array/SimpleEnumerator::length
	int32_t ___length;
};
