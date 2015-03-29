﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Boolean,System.String>
struct Transform_1_t6510;
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

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Boolean,System.String>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m33517 (Transform_1_t6510 * __this, Object_t * ___object, IntPtr_t39 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Boolean,System.String>::Invoke(TKey,TValue)
 String_t* Transform_1_Invoke_m33518 (Transform_1_t6510 * __this, String_t* ___key, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Boolean,System.String>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m33519 (Transform_1_t6510 * __this, String_t* ___key, bool ___value, AsyncCallback_t35 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Boolean,System.String>::EndInvoke(System.IAsyncResult)
 String_t* Transform_1_EndInvoke_m33520 (Transform_1_t6510 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;