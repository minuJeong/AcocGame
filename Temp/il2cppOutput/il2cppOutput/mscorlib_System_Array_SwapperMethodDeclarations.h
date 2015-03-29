#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array/Swapper
struct Swapper_t3175;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t34;
// System.AsyncCallback
struct AsyncCallback_t35;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Array/Swapper::.ctor(System.Object,System.IntPtr)
 void Swapper__ctor_m11003 (Swapper_t3175 * __this, Object_t * ___object, IntPtr_t39 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array/Swapper::Invoke(System.Int32,System.Int32)
 void Swapper_Invoke_m11004 (Swapper_t3175 * __this, int32_t ___i, int32_t ___j, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Array/Swapper::BeginInvoke(System.Int32,System.Int32,System.AsyncCallback,System.Object)
 Object_t * Swapper_BeginInvoke_m11005 (Swapper_t3175 * __this, int32_t ___i, int32_t ___j, AsyncCallback_t35 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array/Swapper::EndInvoke(System.IAsyncResult)
 void Swapper_EndInvoke_m11006 (Swapper_t3175 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
