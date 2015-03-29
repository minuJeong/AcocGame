#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Type,LitJson.ArrayMetadata,System.Collections.Generic.KeyValuePair`2<System.Type,LitJson.ArrayMetadata>>
struct Transform_1_t5880;
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
// System.Collections.Generic.KeyValuePair`2<System.Type,LitJson.ArrayMetadata>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_30.h"
// LitJson.ArrayMetadata
#include "LitJson_LitJson_ArrayMetadata.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Type,LitJson.ArrayMetadata,System.Collections.Generic.KeyValuePair`2<System.Type,LitJson.ArrayMetadata>>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m28578 (Transform_1_t5880 * __this, Object_t * ___object, IntPtr_t39 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Type,LitJson.ArrayMetadata,System.Collections.Generic.KeyValuePair`2<System.Type,LitJson.ArrayMetadata>>::Invoke(TKey,TValue)
 KeyValuePair_2_t5853  Transform_1_Invoke_m28579 (Transform_1_t5880 * __this, Type_t * ___key, ArrayMetadata_t895  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Type,LitJson.ArrayMetadata,System.Collections.Generic.KeyValuePair`2<System.Type,LitJson.ArrayMetadata>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m28580 (Transform_1_t5880 * __this, Type_t * ___key, ArrayMetadata_t895  ___value, AsyncCallback_t35 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Type,LitJson.ArrayMetadata,System.Collections.Generic.KeyValuePair`2<System.Type,LitJson.ArrayMetadata>>::EndInvoke(System.IAsyncResult)
 KeyValuePair_2_t5853  Transform_1_EndInvoke_m28581 (Transform_1_t5880 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
