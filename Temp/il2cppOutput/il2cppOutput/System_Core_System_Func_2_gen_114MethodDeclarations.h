﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<Parse.ParseRole,System.Boolean>
struct Func_2_t6934;
// System.Object
struct Object_t;
// Parse.ParseRole
struct ParseRole_t1081;
// System.IAsyncResult
struct IAsyncResult_t34;
// System.AsyncCallback
struct AsyncCallback_t35;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<Parse.ParseRole,System.Boolean>::.ctor(System.Object,System.IntPtr)
 void Func_2__ctor_m36948 (Func_2_t6934 * __this, Object_t * ___object, IntPtr_t39 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TResult System.Func`2<Parse.ParseRole,System.Boolean>::Invoke(T)
 bool Func_2_Invoke_m36949 (Func_2_t6934 * __this, ParseRole_t1081 * ___arg1, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Func`2<Parse.ParseRole,System.Boolean>::BeginInvoke(T,System.AsyncCallback,System.Object)
 Object_t * Func_2_BeginInvoke_m36950 (Func_2_t6934 * __this, ParseRole_t1081 * ___arg1, AsyncCallback_t35 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TResult System.Func`2<Parse.ParseRole,System.Boolean>::EndInvoke(System.IAsyncResult)
 bool Func_2_EndInvoke_m36951 (Func_2_t6934 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;