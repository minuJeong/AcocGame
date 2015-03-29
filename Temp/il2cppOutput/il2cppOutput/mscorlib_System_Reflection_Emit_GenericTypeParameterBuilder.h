#pragma once
#include <stdint.h>
// System.Reflection.Emit.TypeBuilder
struct TypeBuilder_t3364;
// System.Reflection.Emit.MethodBuilder
struct MethodBuilder_t3372;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Type
#include "mscorlib_System_Type.h"
// System.Reflection.Emit.GenericTypeParameterBuilder
struct GenericTypeParameterBuilder_t3373  : public Type_t
{
	// System.Reflection.Emit.TypeBuilder System.Reflection.Emit.GenericTypeParameterBuilder::tbuilder
	TypeBuilder_t3364 * ___tbuilder;
	// System.Reflection.Emit.MethodBuilder System.Reflection.Emit.GenericTypeParameterBuilder::mbuilder
	MethodBuilder_t3372 * ___mbuilder;
	// System.String System.Reflection.Emit.GenericTypeParameterBuilder::name
	String_t* ___name;
	// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::base_type
	Type_t * ___base_type;
};
