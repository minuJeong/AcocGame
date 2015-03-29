#pragma once
#include <stdint.h>
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Object
#include "mscorlib_System_Object.h"
// FBResult
struct FBResult_t134  : public Object_t
{
	// System.Boolean FBResult::isWWWWrapper
	bool ___isWWWWrapper;
	// System.Object FBResult::data
	Object_t * ___data;
	// System.String FBResult::error
	String_t* ___error;
};
