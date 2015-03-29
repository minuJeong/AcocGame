#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.IComparable>,System.IComparable,System.Collections.DictionaryEntry>
struct Transform_1_t6212;
// System.Object
struct Object_t;
// System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.IComparable>
struct Reference_t6205;
// System.IComparable
struct IComparable_t78;
// System.IAsyncResult
struct IAsyncResult_t34;
// System.AsyncCallback
struct AsyncCallback_t35;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.IComparable>,System.IComparable,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m31342 (Transform_1_t6212 * __this, Object_t * ___object, IntPtr_t39 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.IComparable>,System.IComparable,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
 DictionaryEntry_t96  Transform_1_Invoke_m31343 (Transform_1_t6212 * __this, Reference_t6205 * ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.IComparable>,System.IComparable,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m31344 (Transform_1_t6212 * __this, Reference_t6205 * ___key, Object_t * ___value, AsyncCallback_t35 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Runtime.CompilerServices.ConditionalWeakTable`2/Reference<System.Object,System.IComparable>,System.IComparable,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
 DictionaryEntry_t96  Transform_1_EndInvoke_m31345 (Transform_1_t6212 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
