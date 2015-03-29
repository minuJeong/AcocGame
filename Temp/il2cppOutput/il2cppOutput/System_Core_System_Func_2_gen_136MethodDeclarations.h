#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Boolean,System.Boolean>
struct Func_2_t7117;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t34;
// System.AsyncCallback
struct AsyncCallback_t35;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Boolean,System.Boolean>::.ctor(System.Object,System.IntPtr)
 void Func_2__ctor_m38425 (Func_2_t7117 * __this, Object_t * ___object, IntPtr_t39 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TResult System.Func`2<System.Boolean,System.Boolean>::Invoke(T)
 bool Func_2_Invoke_m38426 (Func_2_t7117 * __this, bool ___arg1, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Func`2<System.Boolean,System.Boolean>::BeginInvoke(T,System.AsyncCallback,System.Object)
 Object_t * Func_2_BeginInvoke_m38427 (Func_2_t7117 * __this, bool ___arg1, AsyncCallback_t35 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TResult System.Func`2<System.Boolean,System.Boolean>::EndInvoke(System.IAsyncResult)
 bool Func_2_EndInvoke_m38428 (Func_2_t7117 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
