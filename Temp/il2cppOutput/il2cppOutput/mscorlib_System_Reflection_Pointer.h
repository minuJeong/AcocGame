#pragma once
#include <stdint.h>
// System.Type
struct Type_t;
// System.Object
#include "mscorlib_System_Object.h"
// System.Void
#include "mscorlib_System_Void.h"
// System.Reflection.Pointer
struct Pointer_t3412  : public Object_t
{
	// System.Void* System.Reflection.Pointer::data
	void* ___data;
	// System.Type System.Reflection.Pointer::type
	Type_t * ___type;
};
