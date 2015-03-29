#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.String,Facebook.FacebookDelegate,System.Collections.Generic.KeyValuePair`2<System.String,Facebook.FacebookDelegate>>
struct Transform_1_t5790;
// System.Object
struct Object_t;
// System.String
struct String_t;
// Facebook.FacebookDelegate
struct FacebookDelegate_t115;
// System.IAsyncResult
struct IAsyncResult_t34;
// System.AsyncCallback
struct AsyncCallback_t35;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,Facebook.FacebookDelegate>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_25.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,Facebook.FacebookDelegate,System.Collections.Generic.KeyValuePair`2<System.String,Facebook.FacebookDelegate>>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m27769 (Transform_1_t5790 * __this, Object_t * ___object, IntPtr_t39 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,Facebook.FacebookDelegate,System.Collections.Generic.KeyValuePair`2<System.String,Facebook.FacebookDelegate>>::Invoke(TKey,TValue)
 KeyValuePair_2_t5782  Transform_1_Invoke_m27770 (Transform_1_t5790 * __this, String_t* ___key, FacebookDelegate_t115 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,Facebook.FacebookDelegate,System.Collections.Generic.KeyValuePair`2<System.String,Facebook.FacebookDelegate>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m27771 (Transform_1_t5790 * __this, String_t* ___key, FacebookDelegate_t115 * ___value, AsyncCallback_t35 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,Facebook.FacebookDelegate,System.Collections.Generic.KeyValuePair`2<System.String,Facebook.FacebookDelegate>>::EndInvoke(System.IAsyncResult)
 KeyValuePair_2_t5782  Transform_1_EndInvoke_m27772 (Transform_1_t5790 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
