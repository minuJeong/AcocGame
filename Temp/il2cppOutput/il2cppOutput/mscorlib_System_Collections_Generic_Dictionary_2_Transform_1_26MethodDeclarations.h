#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.String[],System.Collections.Generic.KeyValuePair`2<System.String,System.String[]>>
struct Transform_1_t4262;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t4;
// System.IAsyncResult
struct IAsyncResult_t34;
// System.AsyncCallback
struct AsyncCallback_t35;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.String[]>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.String[],System.Collections.Generic.KeyValuePair`2<System.String,System.String[]>>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m17182 (Transform_1_t4262 * __this, Object_t * ___object, IntPtr_t39 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.String[],System.Collections.Generic.KeyValuePair`2<System.String,System.String[]>>::Invoke(TKey,TValue)
 KeyValuePair_2_t407  Transform_1_Invoke_m17183 (Transform_1_t4262 * __this, String_t* ___key, StringU5BU5D_t4* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.String[],System.Collections.Generic.KeyValuePair`2<System.String,System.String[]>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m17184 (Transform_1_t4262 * __this, String_t* ___key, StringU5BU5D_t4* ___value, AsyncCallback_t35 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.String[],System.Collections.Generic.KeyValuePair`2<System.String,System.String[]>>::EndInvoke(System.IAsyncResult)
 KeyValuePair_2_t407  Transform_1_EndInvoke_m17185 (Transform_1_t4262 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
