#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2615;
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Security.Principal.WindowsAccountType
#include "mscorlib_System_Security_Principal_WindowsAccountType.h"
// System.Security.Principal.WindowsIdentity
struct WindowsIdentity_t3626  : public Object_t
{
	// System.IntPtr System.Security.Principal.WindowsIdentity::_token
	IntPtr_t39 ____token;
	// System.String System.Security.Principal.WindowsIdentity::_type
	String_t* ____type;
	// System.Security.Principal.WindowsAccountType System.Security.Principal.WindowsIdentity::_account
	int32_t ____account;
	// System.Boolean System.Security.Principal.WindowsIdentity::_authenticated
	bool ____authenticated;
	// System.String System.Security.Principal.WindowsIdentity::_name
	String_t* ____name;
	// System.Runtime.Serialization.SerializationInfo System.Security.Principal.WindowsIdentity::_info
	SerializationInfo_t2615 * ____info;
};
struct WindowsIdentity_t3626_StaticFields{
	// System.IntPtr System.Security.Principal.WindowsIdentity::invalidWindows
	IntPtr_t39 ___invalidWindows;
};
