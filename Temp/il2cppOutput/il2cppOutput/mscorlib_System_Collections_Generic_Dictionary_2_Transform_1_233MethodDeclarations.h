﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.String,Parse.ParseRole,System.Collections.Generic.KeyValuePair`2<System.String,Parse.ParseRole>>
struct Transform_1_t8972;
// System.Object
struct Object_t;
// System.String
struct String_t;
// Parse.ParseRole
struct ParseRole_t1081;
// System.IAsyncResult
struct IAsyncResult_t34;
// System.AsyncCallback
struct AsyncCallback_t35;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,Parse.ParseRole>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_58.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,Parse.ParseRole,System.Collections.Generic.KeyValuePair`2<System.String,Parse.ParseRole>>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m58856 (Transform_1_t8972 * __this, Object_t * ___object, IntPtr_t39 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,Parse.ParseRole,System.Collections.Generic.KeyValuePair`2<System.String,Parse.ParseRole>>::Invoke(TKey,TValue)
 KeyValuePair_2_t8595  Transform_1_Invoke_m58857 (Transform_1_t8972 * __this, String_t* ___key, ParseRole_t1081 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,Parse.ParseRole,System.Collections.Generic.KeyValuePair`2<System.String,Parse.ParseRole>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m58858 (Transform_1_t8972 * __this, String_t* ___key, ParseRole_t1081 * ___value, AsyncCallback_t35 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,Parse.ParseRole,System.Collections.Generic.KeyValuePair`2<System.String,Parse.ParseRole>>::EndInvoke(System.IAsyncResult)
 KeyValuePair_2_t8595  Transform_1_EndInvoke_m58859 (Transform_1_t8972 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
