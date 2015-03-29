#pragma once
#include <stdint.h>
// System.Threading.CompressedStack
struct CompressedStack_t3627;
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Security.SecurityContext
struct SecurityContext_t3628  : public Object_t
{
	// System.Boolean System.Security.SecurityContext::_capture
	bool ____capture;
	// System.IntPtr System.Security.SecurityContext::_winid
	IntPtr_t39 ____winid;
	// System.Threading.CompressedStack System.Security.SecurityContext::_stack
	CompressedStack_t3627 * ____stack;
	// System.Boolean System.Security.SecurityContext::_suppressFlowWindowsIdentity
	bool ____suppressFlowWindowsIdentity;
	// System.Boolean System.Security.SecurityContext::_suppressFlow
	bool ____suppressFlow;
};
