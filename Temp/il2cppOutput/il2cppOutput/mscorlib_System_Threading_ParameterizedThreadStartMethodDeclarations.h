#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.ParameterizedThreadStart
struct ParameterizedThreadStart_t2182;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t34;
// System.AsyncCallback
struct AsyncCallback_t35;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Threading.ParameterizedThreadStart::.ctor(System.Object,System.IntPtr)
 void ParameterizedThreadStart__ctor_m6968 (ParameterizedThreadStart_t2182 * __this, Object_t * ___object, IntPtr_t39 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ParameterizedThreadStart::Invoke(System.Object)
 void ParameterizedThreadStart_Invoke_m14803 (ParameterizedThreadStart_t2182 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Threading.ParameterizedThreadStart::BeginInvoke(System.Object,System.AsyncCallback,System.Object)
 Object_t * ParameterizedThreadStart_BeginInvoke_m14804 (ParameterizedThreadStart_t2182 * __this, Object_t * ___obj, AsyncCallback_t35 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ParameterizedThreadStart::EndInvoke(System.IAsyncResult)
 void ParameterizedThreadStart_EndInvoke_m14805 (ParameterizedThreadStart_t2182 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
