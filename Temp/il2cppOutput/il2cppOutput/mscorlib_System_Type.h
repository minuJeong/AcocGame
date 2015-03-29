#pragma once
#include <stdint.h>
// System.Type[]
struct TypeU5BU5D_t291;
// System.Reflection.MemberFilter
struct MemberFilter_t3177;
// System.Object
struct Object_t;
// System.Reflection.MemberInfo
#include "mscorlib_System_Reflection_MemberInfo.h"
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// System.Type
struct Type_t  : public MemberInfo_t484
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t3178  ____impl;
};
struct Type_t_StaticFields{
	// System.Reflection.BindingFlags System.Type::DefaultBindingFlags
	int32_t ___DefaultBindingFlags;
	// System.Char System.Type::Delimiter
	uint16_t ___Delimiter;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t291* ___EmptyTypes;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t3177 * ___FilterAttribute;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t3177 * ___FilterName;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t3177 * ___FilterNameIgnoreCase;
	// System.Object System.Type::Missing
	Object_t * ___Missing;
};
