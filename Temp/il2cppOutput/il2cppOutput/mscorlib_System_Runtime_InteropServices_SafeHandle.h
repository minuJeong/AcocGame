#pragma once
#include <stdint.h>
// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
#include "mscorlib_System_Runtime_ConstrainedExecution_CriticalFinaliz.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Runtime.InteropServices.SafeHandle
struct SafeHandle_t3200  : public CriticalFinalizerObject_t3426
{
	// System.IntPtr System.Runtime.InteropServices.SafeHandle::handle
	IntPtr_t39 ___handle;
	// System.IntPtr System.Runtime.InteropServices.SafeHandle::invalid_handle_value
	IntPtr_t39 ___invalid_handle_value;
	// System.Int32 System.Runtime.InteropServices.SafeHandle::refcount
	int32_t ___refcount;
	// System.Boolean System.Runtime.InteropServices.SafeHandle::owns_handle
	bool ___owns_handle;
};
