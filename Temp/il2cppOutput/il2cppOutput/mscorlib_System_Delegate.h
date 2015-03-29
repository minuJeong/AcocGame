#pragma once
#include <stdint.h>
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t292;
// System.DelegateData
struct DelegateData_t3171;
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Delegate
struct Delegate_t793  : public Object_t
{
	// System.IntPtr System.Delegate::method_ptr
	void (*___method_ptr)();
	// System.IntPtr System.Delegate::invoke_impl
	IntPtr_t39 ___invoke_impl;
	// System.Object System.Delegate::m_target
	Object_t * ___m_target;
	// System.IntPtr System.Delegate::method
	IntPtr_t39 ___method;
	// System.IntPtr System.Delegate::delegate_trampoline
	IntPtr_t39 ___delegate_trampoline;
	// System.IntPtr System.Delegate::method_code
	IntPtr_t39 ___method_code;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t292 * ___method_info;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t292 * ___original_method_info;
	// System.DelegateData System.Delegate::data
	DelegateData_t3171 * ___data;
};
