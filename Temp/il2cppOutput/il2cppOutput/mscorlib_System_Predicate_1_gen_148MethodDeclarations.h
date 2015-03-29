#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Int32>>>
struct Predicate_1_t10195;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t34;
// System.AsyncCallback
struct AsyncCallback_t35;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Int32>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_81.h"

// System.Void System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Int32>>>::.ctor(System.Object,System.IntPtr)
 void Predicate_1__ctor_m73067 (Predicate_1_t10195 * __this, Object_t * ___object, IntPtr_t39 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Int32>>>::Invoke(T)
 bool Predicate_1_Invoke_m73068 (Predicate_1_t10195 * __this, KeyValuePair_2_t10183  ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Int32>>>::BeginInvoke(T,System.AsyncCallback,System.Object)
 Object_t * Predicate_1_BeginInvoke_m73069 (Predicate_1_t10195 * __this, KeyValuePair_2_t10183  ___obj, AsyncCallback_t35 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<System.Int32>>>::EndInvoke(System.IAsyncResult)
 bool Predicate_1_EndInvoke_m73070 (Predicate_1_t10195 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
