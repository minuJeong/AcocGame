#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<System.DateTime>
struct Predicate_1_t7688;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t34;
// System.AsyncCallback
struct AsyncCallback_t35;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Predicate`1<System.DateTime>::.ctor(System.Object,System.IntPtr)
 void Predicate_1__ctor_m45348 (Predicate_1_t7688 * __this, Object_t * ___object, IntPtr_t39 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Predicate`1<System.DateTime>::Invoke(T)
 bool Predicate_1_Invoke_m45349 (Predicate_1_t7688 * __this, DateTime_t126  ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Predicate`1<System.DateTime>::BeginInvoke(T,System.AsyncCallback,System.Object)
 Object_t * Predicate_1_BeginInvoke_m45350 (Predicate_1_t7688 * __this, DateTime_t126  ___obj, AsyncCallback_t35 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Predicate`1<System.DateTime>::EndInvoke(System.IAsyncResult)
 bool Predicate_1_EndInvoke_m45351 (Predicate_1_t7688 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
