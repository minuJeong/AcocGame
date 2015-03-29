#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Byte,System.Object,System.Object>
struct Transform_1_t4161;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t34;
// System.AsyncCallback
struct AsyncCallback_t35;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Byte,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m16418 (Transform_1_t4161 * __this, Object_t * ___object, IntPtr_t39 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Byte,System.Object,System.Object>::Invoke(TKey,TValue)
 Object_t * Transform_1_Invoke_m16419 (Transform_1_t4161 * __this, uint8_t ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Byte,System.Object,System.Object>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m16420 (Transform_1_t4161 * __this, uint8_t ___key, Object_t * ___value, AsyncCallback_t35 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Byte,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
 Object_t * Transform_1_EndInvoke_m16421 (Transform_1_t4161 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
