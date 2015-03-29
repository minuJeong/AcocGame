#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>,System.Int32>
struct Transform_1_t6059;
// System.Object
struct Object_t;
// System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>
struct IDictionary_2_t977;
// System.IAsyncResult
struct IAsyncResult_t34;
// System.AsyncCallback
struct AsyncCallback_t35;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>,System.Int32>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m30111 (Transform_1_t6059 * __this, Object_t * ___object, IntPtr_t39 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>,System.Int32>::Invoke(TKey,TValue)
 int32_t Transform_1_Invoke_m30112 (Transform_1_t6059 * __this, int32_t ___key, Object_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>,System.Int32>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m30113 (Transform_1_t6059 * __this, int32_t ___key, Object_t* ___value, AsyncCallback_t35 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>,System.Int32>::EndInvoke(System.IAsyncResult)
 int32_t Transform_1_EndInvoke_m30114 (Transform_1_t6059 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
