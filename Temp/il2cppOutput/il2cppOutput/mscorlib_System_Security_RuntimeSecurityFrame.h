#pragma once
#include <stdint.h>
// System.AppDomain
struct AppDomain_t2231;
// System.Reflection.MethodInfo
struct MethodInfo_t292;
// System.Object
#include "mscorlib_System_Object.h"
// System.Security.RuntimeDeclSecurityEntry
#include "mscorlib_System_Security_RuntimeDeclSecurityEntry.h"
// System.Security.RuntimeSecurityFrame
struct RuntimeSecurityFrame_t3630  : public Object_t
{
	// System.AppDomain System.Security.RuntimeSecurityFrame::domain
	AppDomain_t2231 * ___domain;
	// System.Reflection.MethodInfo System.Security.RuntimeSecurityFrame::method
	MethodInfo_t292 * ___method;
	// System.Security.RuntimeDeclSecurityEntry System.Security.RuntimeSecurityFrame::assert
	RuntimeDeclSecurityEntry_t3629  ___assert;
	// System.Security.RuntimeDeclSecurityEntry System.Security.RuntimeSecurityFrame::deny
	RuntimeDeclSecurityEntry_t3629  ___deny;
	// System.Security.RuntimeDeclSecurityEntry System.Security.RuntimeSecurityFrame::permitonly
	RuntimeDeclSecurityEntry_t3629  ___permitonly;
};
