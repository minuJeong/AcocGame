#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Object
struct Object_t;
// System.Security.IPermission
struct IPermission_t3616;
// System.Reflection.MethodInfo
struct MethodInfo_t292;
// System.Security.Policy.Evidence
struct Evidence_t3383;
// System.SystemException
#include "mscorlib_System_SystemException.h"
// System.Security.SecurityException
struct SecurityException_t2449  : public SystemException_t2865
{
	// System.String System.Security.SecurityException::permissionState
	String_t* ___permissionState;
	// System.Type System.Security.SecurityException::permissionType
	Type_t * ___permissionType;
	// System.String System.Security.SecurityException::_granted
	String_t* ____granted;
	// System.String System.Security.SecurityException::_refused
	String_t* ____refused;
	// System.Object System.Security.SecurityException::_demanded
	Object_t * ____demanded;
	// System.Security.IPermission System.Security.SecurityException::_firstperm
	Object_t * ____firstperm;
	// System.Reflection.MethodInfo System.Security.SecurityException::_method
	MethodInfo_t292 * ____method;
	// System.Security.Policy.Evidence System.Security.SecurityException::_evidence
	Evidence_t3383 * ____evidence;
};
