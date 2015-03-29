#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Object
#include "mscorlib_System_Object.h"
// System.Reflection.ParameterAttributes
#include "mscorlib_System_Reflection_ParameterAttributes.h"
// System.Reflection.Emit.ParameterBuilder
struct ParameterBuilder_t3367  : public Object_t
{
	// System.String System.Reflection.Emit.ParameterBuilder::name
	String_t* ___name;
	// System.Reflection.ParameterAttributes System.Reflection.Emit.ParameterBuilder::attrs
	int32_t ___attrs;
	// System.Int32 System.Reflection.Emit.ParameterBuilder::position
	int32_t ___position;
};
