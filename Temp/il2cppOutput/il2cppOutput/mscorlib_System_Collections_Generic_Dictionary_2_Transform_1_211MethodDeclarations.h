#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.DateTime,System.DateTime>
struct Transform_1_t8779;
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
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.DateTime,System.DateTime>::.ctor(System.Object,System.IntPtr)
 void Transform_1__ctor_m56819 (Transform_1_t8779 * __this, Object_t * ___object, IntPtr_t39 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.DateTime,System.DateTime>::Invoke(TKey,TValue)
 DateTime_t126  Transform_1_Invoke_m56820 (Transform_1_t8779 * __this, String_t* ___key, DateTime_t126  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.DateTime,System.DateTime>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
 Object_t * Transform_1_BeginInvoke_m56821 (Transform_1_t8779 * __this, String_t* ___key, DateTime_t126  ___value, AsyncCallback_t35 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.DateTime,System.DateTime>::EndInvoke(System.IAsyncResult)
 DateTime_t126  Transform_1_EndInvoke_m56822 (Transform_1_t8779 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
