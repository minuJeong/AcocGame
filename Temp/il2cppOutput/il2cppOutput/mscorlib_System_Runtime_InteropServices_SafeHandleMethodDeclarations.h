#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.InteropServices.SafeHandle
struct SafeHandle_t3200;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Runtime.InteropServices.SafeHandle::.ctor(System.IntPtr,System.Boolean)
 void SafeHandle__ctor_m12808 (SafeHandle_t3200 * __this, IntPtr_t39 ___invalidHandleValue, bool ___ownsHandle, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.SafeHandle::Close()
 void SafeHandle_Close_m12809 (SafeHandle_t3200 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.SafeHandle::DangerousAddRef(System.Boolean&)
 void SafeHandle_DangerousAddRef_m12810 (SafeHandle_t3200 * __this, bool* ___success, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Runtime.InteropServices.SafeHandle::DangerousGetHandle()
 IntPtr_t39 SafeHandle_DangerousGetHandle_m12811 (SafeHandle_t3200 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.SafeHandle::DangerousRelease()
 void SafeHandle_DangerousRelease_m12812 (SafeHandle_t3200 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.SafeHandle::Dispose()
 void SafeHandle_Dispose_m12813 (SafeHandle_t3200 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.SafeHandle::Dispose(System.Boolean)
 void SafeHandle_Dispose_m12814 (SafeHandle_t3200 * __this, bool ___disposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.InteropServices.SafeHandle::ReleaseHandle()
// System.Void System.Runtime.InteropServices.SafeHandle::SetHandle(System.IntPtr)
 void SafeHandle_SetHandle_m12815 (SafeHandle_t3200 * __this, IntPtr_t39 ___handle, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.InteropServices.SafeHandle::get_IsInvalid()
// System.Void System.Runtime.InteropServices.SafeHandle::Finalize()
 void SafeHandle_Finalize_m12816 (SafeHandle_t3200 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
