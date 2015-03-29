#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Type,LitJson.ObjectMetadata,System.Type>
struct Transform_1_t5910;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.IAsyncResult
struct IAsyncResult_t34;
// System.AsyncCallback
struct AsyncCallback_t35;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// LitJson.ObjectMetadata
#include "LitJson_LitJson_ObjectMetadata.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Type,LitJson.ObjectMetadata,System.Type>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m28822 (Transform_1_t5910 * __this, Object_t * ___object, IntPtr_t39 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Type,LitJson.ObjectMetadata,System.Type>::Invoke(TKey,TValue)
 Type_t * Transform_1_Invoke_m28823 (Transform_1_t5910 * __this, Type_t * ___key, ObjectMetadata_t897  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Type,LitJson.ObjectMetadata,System.Type>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m28824 (Transform_1_t5910 * __this, Type_t * ___key, ObjectMetadata_t897  ___value, AsyncCallback_t35 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Type,LitJson.ObjectMetadata,System.Type>::EndInvoke(System.IAsyncResult)
 Type_t * Transform_1_EndInvoke_m28825 (Transform_1_t5910 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
