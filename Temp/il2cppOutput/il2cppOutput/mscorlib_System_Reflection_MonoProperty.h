#pragma once
#include <stdint.h>
// System.Reflection.MonoProperty/GetterAdapter
struct GetterAdapter_t3409;
// System.Reflection.PropertyInfo
#include "mscorlib_System_Reflection_PropertyInfo.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Reflection.MonoPropertyInfo
#include "mscorlib_System_Reflection_MonoPropertyInfo.h"
// System.Reflection.PInfo
#include "mscorlib_System_Reflection_PInfo.h"
// System.Reflection.MonoProperty
struct MonoProperty_t3407  : public PropertyInfo_t958
{
	// System.IntPtr System.Reflection.MonoProperty::klass
	IntPtr_t39 ___klass;
	// System.IntPtr System.Reflection.MonoProperty::prop
	IntPtr_t39 ___prop;
	// System.Reflection.MonoPropertyInfo System.Reflection.MonoProperty::info
	MonoPropertyInfo_t3406  ___info;
	// System.Reflection.PInfo System.Reflection.MonoProperty::cached
	int32_t ___cached;
	// System.Reflection.MonoProperty/GetterAdapter System.Reflection.MonoProperty::cached_getter
	GetterAdapter_t3409 * ___cached_getter;
};
