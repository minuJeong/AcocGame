#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>,System.Collections.DictionaryEntry>
struct Transform_1_t5394;
// System.Object
struct Object_t;
// UnityEngine.Font
struct Font_t373;
// System.Collections.Generic.List`1<UnityEngine.UI.Text>
struct List_1_t785;
// System.IAsyncResult
struct IAsyncResult_t34;
// System.AsyncCallback
struct AsyncCallback_t35;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m25099 (Transform_1_t5394 * __this, Object_t * ___object, IntPtr_t39 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
 DictionaryEntry_t96  Transform_1_Invoke_m25100 (Transform_1_t5394 * __this, Font_t373 * ___key, List_1_t785 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m25101 (Transform_1_t5394 * __this, Font_t373 * ___key, List_1_t785 * ___value, AsyncCallback_t35 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
 DictionaryEntry_t96  Transform_1_EndInvoke_m25102 (Transform_1_t5394 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
