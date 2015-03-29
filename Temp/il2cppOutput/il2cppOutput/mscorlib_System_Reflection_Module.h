#pragma once
#include <stdint.h>
// System.Reflection.TypeFilter
struct TypeFilter_t3398;
// System.Reflection.Assembly
struct Assembly_t147;
// System.String
struct String_t;
// System.Object
#include "mscorlib_System_Object.h"
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Reflection.Module
struct Module_t3180  : public Object_t
{
	// System.IntPtr System.Reflection.Module::_impl
	IntPtr_t39 ____impl;
	// System.Reflection.Assembly System.Reflection.Module::assembly
	Assembly_t147 * ___assembly;
	// System.String System.Reflection.Module::fqname
	String_t* ___fqname;
	// System.String System.Reflection.Module::name
	String_t* ___name;
	// System.String System.Reflection.Module::scopename
	String_t* ___scopename;
	// System.Boolean System.Reflection.Module::is_resource
	bool ___is_resource;
	// System.Int32 System.Reflection.Module::token
	int32_t ___token;
};
struct Module_t3180_StaticFields{
	// System.Reflection.BindingFlags System.Reflection.Module::defaultBindingFlags
	int32_t ___defaultBindingFlags;
	// System.Reflection.TypeFilter System.Reflection.Module::FilterTypeName
	TypeFilter_t3398 * ___FilterTypeName;
	// System.Reflection.TypeFilter System.Reflection.Module::FilterTypeNameIgnoreCase
	TypeFilter_t3398 * ___FilterTypeNameIgnoreCase;
};
