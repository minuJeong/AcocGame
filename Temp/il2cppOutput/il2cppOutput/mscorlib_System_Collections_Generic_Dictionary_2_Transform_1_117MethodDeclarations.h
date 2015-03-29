#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Type,LitJson.ExporterFunc,System.Collections.Generic.KeyValuePair`2<System.Type,LitJson.ExporterFunc>>
struct Transform_1_t5949;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// LitJson.ExporterFunc
struct ExporterFunc_t898;
// System.IAsyncResult
struct IAsyncResult_t34;
// System.AsyncCallback
struct AsyncCallback_t35;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Type,LitJson.ExporterFunc>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_27.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Type,LitJson.ExporterFunc,System.Collections.Generic.KeyValuePair`2<System.Type,LitJson.ExporterFunc>>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m29133 (Transform_1_t5949 * __this, Object_t * ___object, IntPtr_t39 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Type,LitJson.ExporterFunc,System.Collections.Generic.KeyValuePair`2<System.Type,LitJson.ExporterFunc>>::Invoke(TKey,TValue)
 KeyValuePair_2_t5845  Transform_1_Invoke_m29134 (Transform_1_t5949 * __this, Type_t * ___key, ExporterFunc_t898 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Type,LitJson.ExporterFunc,System.Collections.Generic.KeyValuePair`2<System.Type,LitJson.ExporterFunc>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m29135 (Transform_1_t5949 * __this, Type_t * ___key, ExporterFunc_t898 * ___value, AsyncCallback_t35 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Type,LitJson.ExporterFunc,System.Collections.Generic.KeyValuePair`2<System.Type,LitJson.ExporterFunc>>::EndInvoke(System.IAsyncResult)
 KeyValuePair_2_t5845  Transform_1_EndInvoke_m29136 (Transform_1_t5949 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
