#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>
struct Comparison_1_t9143;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t34;
// System.AsyncCallback
struct AsyncCallback_t35;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_59.h"

// System.Void System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::.ctor(System.Object,System.IntPtr)
 void Comparison_1__ctor_m60666 (Comparison_1_t9143 * __this, Object_t * ___object, IntPtr_t39 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::Invoke(T,T)
 int32_t Comparison_1_Invoke_m60667 (Comparison_1_t9143 * __this, KeyValuePair_2_t9011  ___x, KeyValuePair_2_t9011  ___y, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
 Object_t * Comparison_1_BeginInvoke_m60668 (Comparison_1_t9143 * __this, KeyValuePair_2_t9011  ___x, KeyValuePair_2_t9011  ___y, AsyncCallback_t35 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Byte>>::EndInvoke(System.IAsyncResult)
 int32_t Comparison_1_EndInvoke_m60669 (Comparison_1_t9143 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
