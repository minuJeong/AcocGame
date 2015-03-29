﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Object,Parse.ParseGeoPoint>
struct Func_2_t7704;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t34;
// System.AsyncCallback
struct AsyncCallback_t35;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// Parse.ParseGeoPoint
#include "Parse_Unity_Parse_ParseGeoPoint.h"

// System.Void System.Func`2<System.Object,Parse.ParseGeoPoint>::.ctor(System.Object,System.IntPtr)
 void Func_2__ctor_m45466 (Func_2_t7704 * __this, Object_t * ___object, IntPtr_t39 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TResult System.Func`2<System.Object,Parse.ParseGeoPoint>::Invoke(T)
 ParseGeoPoint_t1117  Func_2_Invoke_m45467 (Func_2_t7704 * __this, Object_t * ___arg1, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Func`2<System.Object,Parse.ParseGeoPoint>::BeginInvoke(T,System.AsyncCallback,System.Object)
 Object_t * Func_2_BeginInvoke_m45468 (Func_2_t7704 * __this, Object_t * ___arg1, AsyncCallback_t35 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TResult System.Func`2<System.Object,Parse.ParseGeoPoint>::EndInvoke(System.IAsyncResult)
 ParseGeoPoint_t1117  Func_2_EndInvoke_m45469 (Func_2_t7704 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;