#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<System.Object>
struct Predicate_1_t4052;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t34;
// System.AsyncCallback
struct AsyncCallback_t35;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<System.Object>::.ctor(System.Object,System.IntPtr)
 void Predicate_1__ctor_m15615_gshared (Predicate_1_t4052 * __this, Object_t * ___object, IntPtr_t39 ___method, MethodInfo* method);
#define Predicate_1__ctor_m15615(__this, ___object, ___method, method) (void)Predicate_1__ctor_m15615_gshared((Predicate_1_t4052 *)__this, (Object_t *)___object, (IntPtr_t39)___method, method)
// System.Boolean System.Predicate`1<System.Object>::Invoke(T)
 bool Predicate_1_Invoke_m15616_gshared (Predicate_1_t4052 * __this, Object_t * ___obj, MethodInfo* method);
#define Predicate_1_Invoke_m15616(__this, ___obj, method) (bool)Predicate_1_Invoke_m15616_gshared((Predicate_1_t4052 *)__this, (Object_t *)___obj, method)
// System.IAsyncResult System.Predicate`1<System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
 Object_t * Predicate_1_BeginInvoke_m15617_gshared (Predicate_1_t4052 * __this, Object_t * ___obj, AsyncCallback_t35 * ___callback, Object_t * ___object, MethodInfo* method);
#define Predicate_1_BeginInvoke_m15617(__this, ___obj, ___callback, ___object, method) (Object_t *)Predicate_1_BeginInvoke_m15617_gshared((Predicate_1_t4052 *)__this, (Object_t *)___obj, (AsyncCallback_t35 *)___callback, (Object_t *)___object, method)
// System.Boolean System.Predicate`1<System.Object>::EndInvoke(System.IAsyncResult)
 bool Predicate_1_EndInvoke_m15618_gshared (Predicate_1_t4052 * __this, Object_t * ___result, MethodInfo* method);
#define Predicate_1_EndInvoke_m15618(__this, ___result, method) (bool)Predicate_1_EndInvoke_m15618_gshared((Predicate_1_t4052 *)__this, (Object_t *)___result, method)
