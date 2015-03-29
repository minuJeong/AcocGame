﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Linq.IGrouping`2<System.String,System.String>,System.Boolean>
struct Func_2_t1500;
// System.Object
struct Object_t;
// System.Linq.IGrouping`2<System.String,System.String>
struct IGrouping_2_t1151;
// System.IAsyncResult
struct IAsyncResult_t34;
// System.AsyncCallback
struct AsyncCallback_t35;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Linq.IGrouping`2<System.String,System.String>,System.Boolean>::.ctor(System.Object,System.IntPtr)
 void Func_2__ctor_m35331 (Func_2_t1500 * __this, Object_t * ___object, IntPtr_t39 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TResult System.Func`2<System.Linq.IGrouping`2<System.String,System.String>,System.Boolean>::Invoke(T)
 bool Func_2_Invoke_m35332 (Func_2_t1500 * __this, Object_t* ___arg1, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Func`2<System.Linq.IGrouping`2<System.String,System.String>,System.Boolean>::BeginInvoke(T,System.AsyncCallback,System.Object)
 Object_t * Func_2_BeginInvoke_m35333 (Func_2_t1500 * __this, Object_t* ___arg1, AsyncCallback_t35 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TResult System.Func`2<System.Linq.IGrouping`2<System.String,System.String>,System.Boolean>::EndInvoke(System.IAsyncResult)
 bool Func_2_EndInvoke_m35334 (Func_2_t1500 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
