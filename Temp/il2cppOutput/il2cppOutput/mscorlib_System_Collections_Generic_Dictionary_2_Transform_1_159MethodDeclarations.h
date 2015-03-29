#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Boolean,System.Boolean>
struct Transform_1_t6487;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t34;
// System.AsyncCallback
struct AsyncCallback_t35;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Boolean,System.Boolean>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m33353 (Transform_1_t6487 * __this, Object_t * ___object, IntPtr_t39 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Boolean,System.Boolean>::Invoke(TKey,TValue)
 bool Transform_1_Invoke_m33354 (Transform_1_t6487 * __this, int64_t ___key, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Boolean,System.Boolean>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m33355 (Transform_1_t6487 * __this, int64_t ___key, bool ___value, AsyncCallback_t35 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int64,System.Boolean,System.Boolean>::EndInvoke(System.IAsyncResult)
 bool Transform_1_EndInvoke_m33356 (Transform_1_t6487 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
