#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Int32,System.Int64>
struct Transform_1_t11288;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t34;
// System.AsyncCallback
struct AsyncCallback_t35;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Int32,System.Int64>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m83077 (Transform_1_t11288 * __this, Object_t * ___object, IntPtr_t39 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Int32,System.Int64>::Invoke(TKey,TValue)
 int64_t Transform_1_Invoke_m83078 (Transform_1_t11288 * __this, int64_t ___key, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Int32,System.Int64>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m83079 (Transform_1_t11288 * __this, int64_t ___key, int32_t ___value, AsyncCallback_t35 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Int32,System.Int64>::EndInvoke(System.IAsyncResult)
 int64_t Transform_1_EndInvoke_m83080 (Transform_1_t11288 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
