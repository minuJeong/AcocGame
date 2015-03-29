#pragma once
#include <stdint.h>
// System.AppDomain
struct AppDomain_t2231;
// System.Reflection.MethodInfo
struct MethodInfo_t292;
// System.Security.PermissionSet
struct PermissionSet_t3384;
// System.ValueType
#include "mscorlib_System_ValueType.h"
// System.Security.SecurityFrame
struct SecurityFrame_t3632 
{
	// System.AppDomain System.Security.SecurityFrame::_domain
	AppDomain_t2231 * ____domain;
	// System.Reflection.MethodInfo System.Security.SecurityFrame::_method
	MethodInfo_t292 * ____method;
	// System.Security.PermissionSet System.Security.SecurityFrame::_assert
	PermissionSet_t3384 * ____assert;
	// System.Security.PermissionSet System.Security.SecurityFrame::_deny
	PermissionSet_t3384 * ____deny;
	// System.Security.PermissionSet System.Security.SecurityFrame::_permitonly
	PermissionSet_t3384 * ____permitonly;
};
