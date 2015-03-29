#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,Parse.ParseRole>>
struct Predicate_1_t9834;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t34;
// System.AsyncCallback
struct AsyncCallback_t35;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,Parse.ParseRole>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_58.h"

// System.Void System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,Parse.ParseRole>>::.ctor(System.Object,System.IntPtr)
 void Predicate_1__ctor_m69419 (Predicate_1_t9834 * __this, Object_t * ___object, IntPtr_t39 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,Parse.ParseRole>>::Invoke(T)
 bool Predicate_1_Invoke_m69420 (Predicate_1_t9834 * __this, KeyValuePair_2_t8594  ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,Parse.ParseRole>>::BeginInvoke(T,System.AsyncCallback,System.Object)
 Object_t * Predicate_1_BeginInvoke_m69421 (Predicate_1_t9834 * __this, KeyValuePair_2_t8594  ___obj, AsyncCallback_t35 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,Parse.ParseRole>>::EndInvoke(System.IAsyncResult)
 bool Predicate_1_EndInvoke_m69422 (Predicate_1_t9834 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
