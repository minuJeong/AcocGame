#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.String,System.Boolean>
struct Func_2_t6295;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t34;
// System.AsyncCallback
struct AsyncCallback_t35;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.String,System.Boolean>::.ctor(System.Object,System.IntPtr)
 void Func_2__ctor_m31839 (Func_2_t6295 * __this, Object_t * ___object, IntPtr_t39 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TResult System.Func`2<System.String,System.Boolean>::Invoke(T)
 bool Func_2_Invoke_m31840 (Func_2_t6295 * __this, String_t* ___arg1, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Func`2<System.String,System.Boolean>::BeginInvoke(T,System.AsyncCallback,System.Object)
 Object_t * Func_2_BeginInvoke_m31841 (Func_2_t6295 * __this, String_t* ___arg1, AsyncCallback_t35 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TResult System.Func`2<System.String,System.Boolean>::EndInvoke(System.IAsyncResult)
 bool Func_2_EndInvoke_m31842 (Func_2_t6295 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
