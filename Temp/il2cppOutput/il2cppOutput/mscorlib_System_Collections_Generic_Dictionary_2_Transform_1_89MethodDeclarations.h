#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>,System.Collections.Generic.KeyValuePair`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>>
struct Transform_1_t5526;
// System.Object
struct Object_t;
// UnityEngine.Canvas
struct Canvas_t644;
// UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>
struct IndexedSet_1_t797;
// System.IAsyncResult
struct IAsyncResult_t34;
// System.AsyncCallback
struct AsyncCallback_t35;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_23.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>,System.Collections.Generic.KeyValuePair`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m25945 (Transform_1_t5526 * __this, Object_t * ___object, IntPtr_t39 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>,System.Collections.Generic.KeyValuePair`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>>::Invoke(TKey,TValue)
 KeyValuePair_2_t5500  Transform_1_Invoke_m25946 (Transform_1_t5526 * __this, Canvas_t644 * ___key, IndexedSet_1_t797 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>,System.Collections.Generic.KeyValuePair`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m25947 (Transform_1_t5526 * __this, Canvas_t644 * ___key, IndexedSet_1_t797 * ___value, AsyncCallback_t35 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>,System.Collections.Generic.KeyValuePair`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>>::EndInvoke(System.IAsyncResult)
 KeyValuePair_2_t5500  Transform_1_EndInvoke_m25948 (Transform_1_t5526 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
