#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.WaitHandle
struct WaitHandle_t2430;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Threading.WaitHandle::.ctor()
 void WaitHandle__ctor_m13963 (WaitHandle_t2430 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.WaitHandle::.cctor()
 void WaitHandle__cctor_m13964 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.WaitHandle::System.IDisposable.Dispose()
 void WaitHandle_System_IDisposable_Dispose_m13965 (WaitHandle_t2430 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Threading.WaitHandle::get_Handle()
 IntPtr_t39 WaitHandle_get_Handle_m13966 (WaitHandle_t2430 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.WaitHandle::set_Handle(System.IntPtr)
 void WaitHandle_set_Handle_m13967 (WaitHandle_t2430 * __this, IntPtr_t39 ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.WaitHandle::WaitOne_internal(System.IntPtr,System.Int32,System.Boolean)
 bool WaitHandle_WaitOne_internal_m13968 (WaitHandle_t2430 * __this, IntPtr_t39 ___handle, int32_t ___ms, bool ___exitContext, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.WaitHandle::Dispose(System.Boolean)
 void WaitHandle_Dispose_m13969 (WaitHandle_t2430 * __this, bool ___explicitDisposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.WaitHandle::WaitOne()
 bool WaitHandle_WaitOne_m7770 (WaitHandle_t2430 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.WaitHandle::WaitOne(System.Int32,System.Boolean)
 bool WaitHandle_WaitOne_m10394 (WaitHandle_t2430 * __this, int32_t ___millisecondsTimeout, bool ___exitContext, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.WaitHandle::CheckDisposed()
 void WaitHandle_CheckDisposed_m13970 (WaitHandle_t2430 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.WaitHandle::Finalize()
 void WaitHandle_Finalize_m13971 (WaitHandle_t2430 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
