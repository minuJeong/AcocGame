#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>,System.Collections.Generic.KeyValuePair`2<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>>>
struct Transform_1_t5931;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.Collections.Generic.IList`1<LitJson.PropertyMetadata>
struct IList_1_t964;
// System.IAsyncResult
struct IAsyncResult_t34;
// System.AsyncCallback
struct AsyncCallback_t35;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_34.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>,System.Collections.Generic.KeyValuePair`2<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>>>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m28992 (Transform_1_t5931 * __this, Object_t * ___object, IntPtr_t39 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>,System.Collections.Generic.KeyValuePair`2<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>>>::Invoke(TKey,TValue)
 KeyValuePair_2_t5864  Transform_1_Invoke_m28993 (Transform_1_t5931 * __this, Type_t * ___key, Object_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>,System.Collections.Generic.KeyValuePair`2<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m28994 (Transform_1_t5931 * __this, Type_t * ___key, Object_t* ___value, AsyncCallback_t35 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>,System.Collections.Generic.KeyValuePair`2<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>>>::EndInvoke(System.IAsyncResult)
 KeyValuePair_2_t5864  Transform_1_EndInvoke_m28995 (Transform_1_t5931 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
