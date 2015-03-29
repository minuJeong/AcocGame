#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.String,Parse.Internal.IParseAuthenticationProvider,System.Collections.Generic.KeyValuePair`2<System.String,Parse.Internal.IParseAuthenticationProvider>>
struct Transform_1_t7039;
// System.Object
struct Object_t;
// System.String
struct String_t;
// Parse.Internal.IParseAuthenticationProvider
struct IParseAuthenticationProvider_t1207;
// System.IAsyncResult
struct IAsyncResult_t34;
// System.AsyncCallback
struct AsyncCallback_t35;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,Parse.Internal.IParseAuthenticationProvider>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_50.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,Parse.Internal.IParseAuthenticationProvider,System.Collections.Generic.KeyValuePair`2<System.String,Parse.Internal.IParseAuthenticationProvider>>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m37721 (Transform_1_t7039 * __this, Object_t * ___object, IntPtr_t39 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,Parse.Internal.IParseAuthenticationProvider,System.Collections.Generic.KeyValuePair`2<System.String,Parse.Internal.IParseAuthenticationProvider>>::Invoke(TKey,TValue)
 KeyValuePair_2_t7001  Transform_1_Invoke_m37722 (Transform_1_t7039 * __this, String_t* ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,Parse.Internal.IParseAuthenticationProvider,System.Collections.Generic.KeyValuePair`2<System.String,Parse.Internal.IParseAuthenticationProvider>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m37723 (Transform_1_t7039 * __this, String_t* ___key, Object_t * ___value, AsyncCallback_t35 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,Parse.Internal.IParseAuthenticationProvider,System.Collections.Generic.KeyValuePair`2<System.String,Parse.Internal.IParseAuthenticationProvider>>::EndInvoke(System.IAsyncResult)
 KeyValuePair_2_t7001  Transform_1_EndInvoke_m37724 (Transform_1_t7039 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
