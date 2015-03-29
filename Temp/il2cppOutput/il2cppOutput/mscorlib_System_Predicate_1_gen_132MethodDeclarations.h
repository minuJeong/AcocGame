#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,Parse.ParseUser>>
struct Predicate_1_t9815;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t34;
// System.AsyncCallback
struct AsyncCallback_t35;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,Parse.ParseUser>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_57.h"

// System.Void System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,Parse.ParseUser>>::.ctor(System.Object,System.IntPtr)
 void Predicate_1__ctor_m69188 (Predicate_1_t9815 * __this, Object_t * ___object, IntPtr_t39 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,Parse.ParseUser>>::Invoke(T)
 bool Predicate_1_Invoke_m69189 (Predicate_1_t9815 * __this, KeyValuePair_2_t8570  ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,Parse.ParseUser>>::BeginInvoke(T,System.AsyncCallback,System.Object)
 Object_t * Predicate_1_BeginInvoke_m69190 (Predicate_1_t9815 * __this, KeyValuePair_2_t8570  ___obj, AsyncCallback_t35 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,Parse.ParseUser>>::EndInvoke(System.IAsyncResult)
 bool Predicate_1_EndInvoke_m69191 (Predicate_1_t9815 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
