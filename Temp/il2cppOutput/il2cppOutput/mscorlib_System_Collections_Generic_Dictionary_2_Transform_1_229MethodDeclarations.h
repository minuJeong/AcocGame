#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.String,Parse.ParseUser,System.Collections.Generic.KeyValuePair`2<System.String,Parse.ParseUser>>
struct Transform_1_t8938;
// System.Object
struct Object_t;
// System.String
struct String_t;
// Parse.ParseUser
struct ParseUser_t391;
// System.IAsyncResult
struct IAsyncResult_t34;
// System.AsyncCallback
struct AsyncCallback_t35;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,Parse.ParseUser>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_57.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,Parse.ParseUser,System.Collections.Generic.KeyValuePair`2<System.String,Parse.ParseUser>>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m58496 (Transform_1_t8938 * __this, Object_t * ___object, IntPtr_t39 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,Parse.ParseUser,System.Collections.Generic.KeyValuePair`2<System.String,Parse.ParseUser>>::Invoke(TKey,TValue)
 KeyValuePair_2_t8571  Transform_1_Invoke_m58497 (Transform_1_t8938 * __this, String_t* ___key, ParseUser_t391 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,Parse.ParseUser,System.Collections.Generic.KeyValuePair`2<System.String,Parse.ParseUser>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m58498 (Transform_1_t8938 * __this, String_t* ___key, ParseUser_t391 * ___value, AsyncCallback_t35 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,Parse.ParseUser,System.Collections.Generic.KeyValuePair`2<System.String,Parse.ParseUser>>::EndInvoke(System.IAsyncResult)
 KeyValuePair_2_t8571  Transform_1_EndInvoke_m58499 (Transform_1_t8938 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
