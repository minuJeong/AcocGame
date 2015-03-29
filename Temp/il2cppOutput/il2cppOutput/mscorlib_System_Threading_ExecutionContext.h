#pragma once
#include <stdint.h>
// System.Security.SecurityContext
struct SecurityContext_t3627;
// System.Object
#include "mscorlib_System_Object.h"
// System.Threading.ExecutionContext
struct ExecutionContext_t3472  : public Object_t
{
	// System.Security.SecurityContext System.Threading.ExecutionContext::_sc
	SecurityContext_t3627 * ____sc;
	// System.Boolean System.Threading.ExecutionContext::_suppressFlow
	bool ____suppressFlow;
	// System.Boolean System.Threading.ExecutionContext::_capture
	bool ____capture;
};
