#pragma once
#include <stdint.h>
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Reflection.MethodInfo
struct MethodInfo_t292;
// System.ValueType
#include "mscorlib_System_ValueType.h"
// System.Reflection.PropertyAttributes
#include "mscorlib_System_Reflection_PropertyAttributes.h"
// System.Reflection.MonoPropertyInfo
struct MonoPropertyInfo_t3407 
{
	// System.Type System.Reflection.MonoPropertyInfo::parent
	Type_t * ___parent;
	// System.String System.Reflection.MonoPropertyInfo::name
	String_t* ___name;
	// System.Reflection.MethodInfo System.Reflection.MonoPropertyInfo::get_method
	MethodInfo_t292 * ___get_method;
	// System.Reflection.MethodInfo System.Reflection.MonoPropertyInfo::set_method
	MethodInfo_t292 * ___set_method;
	// System.Reflection.PropertyAttributes System.Reflection.MonoPropertyInfo::attrs
	int32_t ___attrs;
};
