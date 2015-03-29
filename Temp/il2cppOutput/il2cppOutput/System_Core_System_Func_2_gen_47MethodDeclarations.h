#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<Parse.ParseFile,System.Boolean>
struct Func_2_t1167;
// System.Object
struct Object_t;
// Parse.ParseFile
struct ParseFile_t1113;
// System.IAsyncResult
struct IAsyncResult_t34;
// System.AsyncCallback
struct AsyncCallback_t35;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<Parse.ParseFile,System.Boolean>::.ctor(System.Object,System.IntPtr)
 void Func_2__ctor_m6707 (Func_2_t1167 * __this, Object_t * ___object, IntPtr_t39 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TResult System.Func`2<Parse.ParseFile,System.Boolean>::Invoke(T)
 bool Func_2_Invoke_m33430 (Func_2_t1167 * __this, ParseFile_t1113 * ___arg1, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Func`2<Parse.ParseFile,System.Boolean>::BeginInvoke(T,System.AsyncCallback,System.Object)
 Object_t * Func_2_BeginInvoke_m33431 (Func_2_t1167 * __this, ParseFile_t1113 * ___arg1, AsyncCallback_t35 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TResult System.Func`2<Parse.ParseFile,System.Boolean>::EndInvoke(System.IAsyncResult)
 bool Func_2_EndInvoke_m33432 (Func_2_t1167 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
