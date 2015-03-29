#pragma once
#include <stdint.h>
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Reflection.MethodInfo
struct MethodInfo_t292;
// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_t2451;
// System.ValueType
#include "mscorlib_System_ValueType.h"
// System.Reflection.EventAttributes
#include "mscorlib_System_Reflection_EventAttributes.h"
// System.Reflection.MonoEventInfo
struct MonoEventInfo_t3398 
{
	// System.Type System.Reflection.MonoEventInfo::declaring_type
	Type_t * ___declaring_type;
	// System.Type System.Reflection.MonoEventInfo::reflected_type
	Type_t * ___reflected_type;
	// System.String System.Reflection.MonoEventInfo::name
	String_t* ___name;
	// System.Reflection.MethodInfo System.Reflection.MonoEventInfo::add_method
	MethodInfo_t292 * ___add_method;
	// System.Reflection.MethodInfo System.Reflection.MonoEventInfo::remove_method
	MethodInfo_t292 * ___remove_method;
	// System.Reflection.MethodInfo System.Reflection.MonoEventInfo::raise_method
	MethodInfo_t292 * ___raise_method;
	// System.Reflection.EventAttributes System.Reflection.MonoEventInfo::attrs
	int32_t ___attrs;
	// System.Reflection.MethodInfo[] System.Reflection.MonoEventInfo::other_methods
	MethodInfoU5BU5D_t2451* ___other_methods;
};
