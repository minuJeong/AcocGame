#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<Parse.ParseGeoPoint>
struct Comparison_1_t7710;
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

// System.Void System.Comparison`1<Parse.ParseGeoPoint>::.ctor(System.Object,System.IntPtr)
 void Comparison_1__ctor_m45627 (Comparison_1_t7710 * __this, Object_t * ___object, IntPtr_t39 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Comparison`1<Parse.ParseGeoPoint>::Invoke(T,T)
 int32_t Comparison_1_Invoke_m45628 (Comparison_1_t7710 * __this, ParseGeoPoint_t1117  ___x, ParseGeoPoint_t1117  ___y, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Comparison`1<Parse.ParseGeoPoint>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
 Object_t * Comparison_1_BeginInvoke_m45629 (Comparison_1_t7710 * __this, ParseGeoPoint_t1117  ___x, ParseGeoPoint_t1117  ___y, AsyncCallback_t35 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Comparison`1<Parse.ParseGeoPoint>::EndInvoke(System.IAsyncResult)
 int32_t Comparison_1_EndInvoke_m45630 (Comparison_1_t7710 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
