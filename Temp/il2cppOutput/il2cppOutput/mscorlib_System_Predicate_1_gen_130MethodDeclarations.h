#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,Parse.ParseFile>>
struct Predicate_1_t9777;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t34;
// System.AsyncCallback
struct AsyncCallback_t35;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,Parse.ParseFile>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_55.h"

// System.Void System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,Parse.ParseFile>>::.ctor(System.Object,System.IntPtr)
 void Predicate_1__ctor_m68726 (Predicate_1_t9777 * __this, Object_t * ___object, IntPtr_t39 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,Parse.ParseFile>>::Invoke(T)
 bool Predicate_1_Invoke_m68727 (Predicate_1_t9777 * __this, KeyValuePair_2_t8522  ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,Parse.ParseFile>>::BeginInvoke(T,System.AsyncCallback,System.Object)
 Object_t * Predicate_1_BeginInvoke_m68728 (Predicate_1_t9777 * __this, KeyValuePair_2_t8522  ___obj, AsyncCallback_t35 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,Parse.ParseFile>>::EndInvoke(System.IAsyncResult)
 bool Predicate_1_EndInvoke_m68729 (Predicate_1_t9777 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
