#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Double,System.Collections.Generic.KeyValuePair`2<System.String,System.Double>>
struct Transform_1_t8706;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t34;
// System.AsyncCallback
struct AsyncCallback_t35;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Double>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_52.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Double,System.Collections.Generic.KeyValuePair`2<System.String,System.Double>>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m56020 (Transform_1_t8706 * __this, Object_t * ___object, IntPtr_t39 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Double,System.Collections.Generic.KeyValuePair`2<System.String,System.Double>>::Invoke(TKey,TValue)
 KeyValuePair_2_t8406  Transform_1_Invoke_m56021 (Transform_1_t8706 * __this, String_t* ___key, double ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Double,System.Collections.Generic.KeyValuePair`2<System.String,System.Double>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m56022 (Transform_1_t8706 * __this, String_t* ___key, double ___value, AsyncCallback_t35 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Double,System.Collections.Generic.KeyValuePair`2<System.String,System.Double>>::EndInvoke(System.IAsyncResult)
 KeyValuePair_2_t8406  Transform_1_EndInvoke_m56023 (Transform_1_t8706 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
