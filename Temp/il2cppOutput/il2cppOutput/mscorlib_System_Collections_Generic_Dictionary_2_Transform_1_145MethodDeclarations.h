#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>,System.Object,System.Collections.Generic.KeyValuePair`2<System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>,System.Object>>
struct Transform_1_t6194;
// System.Object
struct Object_t;
// System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>
struct Reference_t6175;
// System.IAsyncResult
struct IAsyncResult_t34;
// System.AsyncCallback
struct AsyncCallback_t35;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_37.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>,System.Object,System.Collections.Generic.KeyValuePair`2<System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>,System.Object>>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m31135 (Transform_1_t6194 * __this, Object_t * ___object, IntPtr_t39 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>,System.Object,System.Collections.Generic.KeyValuePair`2<System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>,System.Object>>::Invoke(TKey,TValue)
 KeyValuePair_2_t6176  Transform_1_Invoke_m31136 (Transform_1_t6194 * __this, Reference_t6175 * ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>,System.Object,System.Collections.Generic.KeyValuePair`2<System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>,System.Object>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m31137 (Transform_1_t6194 * __this, Reference_t6175 * ___key, Object_t * ___value, AsyncCallback_t35 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>,System.Object,System.Collections.Generic.KeyValuePair`2<System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.Object>,System.Object>>::EndInvoke(System.IAsyncResult)
 KeyValuePair_2_t6176  Transform_1_EndInvoke_m31138 (Transform_1_t6194 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
