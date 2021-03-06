﻿#pragma once
#include <stdint.h>
// System.Type
struct Type_t;
// System.ValueType
#include "mscorlib_System_ValueType.h"
// System.Reflection.MethodAttributes
#include "mscorlib_System_Reflection_MethodAttributes.h"
// System.Reflection.MethodImplAttributes
#include "mscorlib_System_Reflection_MethodImplAttributes.h"
// System.Reflection.CallingConventions
#include "mscorlib_System_Reflection_CallingConventions.h"
// System.Reflection.MonoMethodInfo
struct MonoMethodInfo_t3406 
{
	// System.Type System.Reflection.MonoMethodInfo::parent
	Type_t * ___parent;
	// System.Type System.Reflection.MonoMethodInfo::ret
	Type_t * ___ret;
	// System.Reflection.MethodAttributes System.Reflection.MonoMethodInfo::attrs
	int32_t ___attrs;
	// System.Reflection.MethodImplAttributes System.Reflection.MonoMethodInfo::iattrs
	int32_t ___iattrs;
	// System.Reflection.CallingConventions System.Reflection.MonoMethodInfo::callconv
	int32_t ___callconv;
};
