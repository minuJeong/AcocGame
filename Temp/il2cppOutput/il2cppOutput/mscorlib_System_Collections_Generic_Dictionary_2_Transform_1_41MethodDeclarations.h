#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Type,System.Collections.Generic.List`1<System.Reflection.MethodInfo>,System.Collections.Generic.KeyValuePair`2<System.Type,System.Collections.Generic.List`1<System.Reflection.MethodInfo>>>
struct Transform_1_t4716;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.Collections.Generic.List`1<System.Reflection.MethodInfo>
struct List_1_t483;
// System.IAsyncResult
struct IAsyncResult_t34;
// System.AsyncCallback
struct AsyncCallback_t35;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Type,System.Collections.Generic.List`1<System.Reflection.MethodInfo>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_15.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Type,System.Collections.Generic.List`1<System.Reflection.MethodInfo>,System.Collections.Generic.KeyValuePair`2<System.Type,System.Collections.Generic.List`1<System.Reflection.MethodInfo>>>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m19793 (Transform_1_t4716 * __this, Object_t * ___object, IntPtr_t39 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Type,System.Collections.Generic.List`1<System.Reflection.MethodInfo>,System.Collections.Generic.KeyValuePair`2<System.Type,System.Collections.Generic.List`1<System.Reflection.MethodInfo>>>::Invoke(TKey,TValue)
 KeyValuePair_2_t4688  Transform_1_Invoke_m19794 (Transform_1_t4716 * __this, Type_t * ___key, List_1_t483 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Type,System.Collections.Generic.List`1<System.Reflection.MethodInfo>,System.Collections.Generic.KeyValuePair`2<System.Type,System.Collections.Generic.List`1<System.Reflection.MethodInfo>>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m19795 (Transform_1_t4716 * __this, Type_t * ___key, List_1_t483 * ___value, AsyncCallback_t35 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Type,System.Collections.Generic.List`1<System.Reflection.MethodInfo>,System.Collections.Generic.KeyValuePair`2<System.Type,System.Collections.Generic.List`1<System.Reflection.MethodInfo>>>::EndInvoke(System.IAsyncResult)
 KeyValuePair_2_t4688  Transform_1_EndInvoke_m19796 (Transform_1_t4716 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
