#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Reflection.Emit.MethodBuilder
struct MethodBuilder_t3373;
// System.Reflection.Emit.TypeBuilder
struct TypeBuilder_t3365;
// System.Reflection.PropertyInfo
#include "mscorlib_System_Reflection_PropertyInfo.h"
// System.Reflection.PropertyAttributes
#include "mscorlib_System_Reflection_PropertyAttributes.h"
// System.Reflection.Emit.PropertyBuilder
struct PropertyBuilder_t3376  : public PropertyInfo_t958
{
	// System.Reflection.PropertyAttributes System.Reflection.Emit.PropertyBuilder::attrs
	int32_t ___attrs;
	// System.String System.Reflection.Emit.PropertyBuilder::name
	String_t* ___name;
	// System.Type System.Reflection.Emit.PropertyBuilder::type
	Type_t * ___type;
	// System.Reflection.Emit.MethodBuilder System.Reflection.Emit.PropertyBuilder::set_method
	MethodBuilder_t3373 * ___set_method;
	// System.Reflection.Emit.MethodBuilder System.Reflection.Emit.PropertyBuilder::get_method
	MethodBuilder_t3373 * ___get_method;
	// System.Reflection.Emit.TypeBuilder System.Reflection.Emit.PropertyBuilder::typeb
	TypeBuilder_t3365 * ___typeb;
};
