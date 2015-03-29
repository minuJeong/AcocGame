#pragma once
#include <stdint.h>
// System.Security.SecurityContext
struct SecurityContext_t3628;
// System.Object
#include "mscorlib_System_Object.h"
// System.Threading.ExecutionContext
struct ExecutionContext_t3473  : public Object_t
{
	// System.Security.SecurityContext System.Threading.ExecutionContext::_sc
	SecurityContext_t3628 * ____sc;
	// System.Boolean System.Threading.ExecutionContext::_suppressFlow
	bool ____suppressFlow;
	// System.Boolean System.Threading.ExecutionContext::_capture
	bool ____capture;
};
