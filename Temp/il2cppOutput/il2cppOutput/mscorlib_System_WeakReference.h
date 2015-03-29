#pragma once
#include <stdint.h>
// System.Object
#include "mscorlib_System_Object.h"
// System.Runtime.InteropServices.GCHandle
#include "mscorlib_System_Runtime_InteropServices_GCHandle.h"
// System.WeakReference
struct WeakReference_t983  : public Object_t
{
	// System.Boolean System.WeakReference::isLongReference
	bool ___isLongReference;
	// System.Runtime.InteropServices.GCHandle System.WeakReference::gcHandle
	GCHandle_t3436  ___gcHandle;
};
