#pragma once
#include <stdint.h>
// Microsoft.Win32.SafeHandles.SafeWaitHandle
struct SafeWaitHandle_t3200;
// System.MarshalByRefObject
#include "mscorlib_System_MarshalByRefObject.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Threading.WaitHandle
struct WaitHandle_t2430  : public MarshalByRefObject_t3194
{
	// Microsoft.Win32.SafeHandles.SafeWaitHandle System.Threading.WaitHandle::safe_wait_handle
	SafeWaitHandle_t3200 * ___safe_wait_handle;
	// System.Boolean System.Threading.WaitHandle::disposed
	bool ___disposed;
};
struct WaitHandle_t2430_StaticFields{
	// System.Int32 System.Threading.WaitHandle::WaitTimeout
	int32_t ___WaitTimeout;
	// System.IntPtr System.Threading.WaitHandle::InvalidHandle
	IntPtr_t39 ___InvalidHandle;
};
