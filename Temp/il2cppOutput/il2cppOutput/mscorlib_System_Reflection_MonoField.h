#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Reflection.FieldInfo
#include "mscorlib_System_Reflection_FieldInfo.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.RuntimeFieldHandle
#include "mscorlib_System_RuntimeFieldHandle.h"
// System.Reflection.FieldAttributes
#include "mscorlib_System_Reflection_FieldAttributes.h"
// System.Reflection.MonoField
struct MonoField_t3400  : public FieldInfo_t961
{
	// System.IntPtr System.Reflection.MonoField::klass
	IntPtr_t39 ___klass;
	// System.RuntimeFieldHandle System.Reflection.MonoField::fhandle
	RuntimeFieldHandle_t3181  ___fhandle;
	// System.String System.Reflection.MonoField::name
	String_t* ___name;
	// System.Type System.Reflection.MonoField::type
	Type_t * ___type;
	// System.Reflection.FieldAttributes System.Reflection.MonoField::attrs
	int32_t ___attrs;
};
