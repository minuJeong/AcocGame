#pragma once
#include <stdint.h>
// System.Type
struct Type_t;
// System.Object
struct Object_t;
// System.Reflection.MemberInfo
struct MemberInfo_t484;
// System.String
struct String_t;
// System.Reflection.Emit.UnmanagedMarshal
struct UnmanagedMarshal_t3370;
// System.Object
#include "mscorlib_System_Object.h"
// System.Reflection.ParameterAttributes
#include "mscorlib_System_Reflection_ParameterAttributes.h"
// System.Reflection.ParameterInfo
struct ParameterInfo_t290  : public Object_t
{
	// System.Type System.Reflection.ParameterInfo::ClassImpl
	Type_t * ___ClassImpl;
	// System.Object System.Reflection.ParameterInfo::DefaultValueImpl
	Object_t * ___DefaultValueImpl;
	// System.Reflection.MemberInfo System.Reflection.ParameterInfo::MemberImpl
	MemberInfo_t484 * ___MemberImpl;
	// System.String System.Reflection.ParameterInfo::NameImpl
	String_t* ___NameImpl;
	// System.Int32 System.Reflection.ParameterInfo::PositionImpl
	int32_t ___PositionImpl;
	// System.Reflection.ParameterAttributes System.Reflection.ParameterInfo::AttrsImpl
	int32_t ___AttrsImpl;
	// System.Reflection.Emit.UnmanagedMarshal System.Reflection.ParameterInfo::marshalAs
	UnmanagedMarshal_t3370 * ___marshalAs;
};
