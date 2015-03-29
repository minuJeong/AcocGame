#pragma once
#include <stdint.h>
// System.Reflection.Assembly/ResolveEventHolder
struct ResolveEventHolder_t3382;
// System.Security.Policy.Evidence
struct Evidence_t3383;
// System.Security.PermissionSet
struct PermissionSet_t3384;
// System.String
struct String_t;
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Reflection.Assembly
struct Assembly_t147  : public Object_t
{
	// System.IntPtr System.Reflection.Assembly::_mono_assembly
	IntPtr_t39 ____mono_assembly;
	// System.Reflection.Assembly/ResolveEventHolder System.Reflection.Assembly::resolve_event_holder
	ResolveEventHolder_t3382 * ___resolve_event_holder;
	// System.Security.Policy.Evidence System.Reflection.Assembly::_evidence
	Evidence_t3383 * ____evidence;
	// System.Security.PermissionSet System.Reflection.Assembly::_minimum
	PermissionSet_t3384 * ____minimum;
	// System.Security.PermissionSet System.Reflection.Assembly::_optional
	PermissionSet_t3384 * ____optional;
	// System.Security.PermissionSet System.Reflection.Assembly::_refuse
	PermissionSet_t3384 * ____refuse;
	// System.Security.PermissionSet System.Reflection.Assembly::_granted
	PermissionSet_t3384 * ____granted;
	// System.Security.PermissionSet System.Reflection.Assembly::_denied
	PermissionSet_t3384 * ____denied;
	// System.Boolean System.Reflection.Assembly::fromByteArray
	bool ___fromByteArray;
	// System.String System.Reflection.Assembly::assemblyName
	String_t* ___assemblyName;
};
