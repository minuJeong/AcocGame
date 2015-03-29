#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>
struct Transform_1_t6062;
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

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m30135 (Transform_1_t6062 * __this, Object_t * ___object, IntPtr_t39 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>::Invoke(TKey,TValue)
 Object_t* Transform_1_Invoke_m30136 (Transform_1_t6062 * __this, int32_t ___key, Object_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m30137 (Transform_1_t6062 * __this, int32_t ___key, Object_t* ___value, AsyncCallback_t35 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>::EndInvoke(System.IAsyncResult)
 Object_t* Transform_1_EndInvoke_m30138 (Transform_1_t6062 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
