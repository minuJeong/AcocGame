#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.String,Facebook.FacebookDelegate,Facebook.FacebookDelegate>
struct Transform_1_t5788;
// System.Object
struct Object_t;
// Facebook.FacebookDelegate
struct FacebookDelegate_t115;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t34;
// System.AsyncCallback
struct AsyncCallback_t35;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,Facebook.FacebookDelegate,Facebook.FacebookDelegate>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_0MethodDeclarations.h"
#define Transform_1__ctor_m27758(__this, ___object, ___method, method) (void)Transform_1__ctor_m15975_gshared((Transform_1_t4104 *)__this, (Object_t *)___object, (IntPtr_t39)___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,Facebook.FacebookDelegate,Facebook.FacebookDelegate>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m27759(__this, ___key, ___value, method) (FacebookDelegate_t115 *)Transform_1_Invoke_m15976_gshared((Transform_1_t4104 *)__this, (Object_t *)___key, (Object_t *)___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,Facebook.FacebookDelegate,Facebook.FacebookDelegate>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m27760(__this, ___key, ___value, ___callback, ___object, method) (Object_t *)Transform_1_BeginInvoke_m15977_gshared((Transform_1_t4104 *)__this, (Object_t *)___key, (Object_t *)___value, (AsyncCallback_t35 *)___callback, (Object_t *)___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,Facebook.FacebookDelegate,Facebook.FacebookDelegate>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m27761(__this, ___result, method) (FacebookDelegate_t115 *)Transform_1_EndInvoke_m15978_gshared((Transform_1_t4104 *)__this, (Object_t *)___result, method)
