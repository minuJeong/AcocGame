#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<Parse.ParseGeoPoint>
struct Predicate_1_t7709;
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

// System.Void System.Predicate`1<Parse.ParseGeoPoint>::.ctor(System.Object,System.IntPtr)
 void Predicate_1__ctor_m45617 (Predicate_1_t7709 * __this, Object_t * ___object, IntPtr_t39 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Predicate`1<Parse.ParseGeoPoint>::Invoke(T)
 bool Predicate_1_Invoke_m45618 (Predicate_1_t7709 * __this, ParseGeoPoint_t1117  ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Predicate`1<Parse.ParseGeoPoint>::BeginInvoke(T,System.AsyncCallback,System.Object)
 Object_t * Predicate_1_BeginInvoke_m45619 (Predicate_1_t7709 * __this, ParseGeoPoint_t1117  ___obj, AsyncCallback_t35 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Predicate`1<Parse.ParseGeoPoint>::EndInvoke(System.IAsyncResult)
 bool Predicate_1_EndInvoke_m45620 (Predicate_1_t7709 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
