#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Type,LitJson.ObjectMetadata,System.Collections.Generic.KeyValuePair`2<System.Type,LitJson.ObjectMetadata>>
struct Transform_1_t5914;
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
// System.Collections.Generic.KeyValuePair`2<System.Type,LitJson.ObjectMetadata>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_33.h"
// LitJson.ObjectMetadata
#include "LitJson_LitJson_ObjectMetadata.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Type,LitJson.ObjectMetadata,System.Collections.Generic.KeyValuePair`2<System.Type,LitJson.ObjectMetadata>>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m28854 (Transform_1_t5914 * __this, Object_t * ___object, IntPtr_t39 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Type,LitJson.ObjectMetadata,System.Collections.Generic.KeyValuePair`2<System.Type,LitJson.ObjectMetadata>>::Invoke(TKey,TValue)
 KeyValuePair_2_t5861  Transform_1_Invoke_m28855 (Transform_1_t5914 * __this, Type_t * ___key, ObjectMetadata_t897  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Type,LitJson.ObjectMetadata,System.Collections.Generic.KeyValuePair`2<System.Type,LitJson.ObjectMetadata>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m28856 (Transform_1_t5914 * __this, Type_t * ___key, ObjectMetadata_t897  ___value, AsyncCallback_t35 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Type,LitJson.ObjectMetadata,System.Collections.Generic.KeyValuePair`2<System.Type,LitJson.ObjectMetadata>>::EndInvoke(System.IAsyncResult)
 KeyValuePair_2_t5861  Transform_1_EndInvoke_m28857 (Transform_1_t5914 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
