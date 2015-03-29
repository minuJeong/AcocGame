#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Type,System.Collections.Generic.List`1<System.Reflection.MethodInfo>,System.Collections.Generic.List`1<System.Reflection.MethodInfo>>
struct Transform_1_t4716;
// System.Object
struct Object_t;
// System.Collections.Generic.List`1<System.Reflection.MethodInfo>
struct List_1_t483;
// System.Type
struct Type_t;
// System.IAsyncResult
struct IAsyncResult_t34;
// System.AsyncCallback
struct AsyncCallback_t35;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Type,System.Collections.Generic.List`1<System.Reflection.MethodInfo>,System.Collections.Generic.List`1<System.Reflection.MethodInfo>>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_0MethodDeclarations.h"
#define Transform_1__ctor_m19788(__this, ___object, ___method, method) (void)Transform_1__ctor_m15978_gshared((Transform_1_t4105 *)__this, (Object_t *)___object, (IntPtr_t39)___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Type,System.Collections.Generic.List`1<System.Reflection.MethodInfo>,System.Collections.Generic.List`1<System.Reflection.MethodInfo>>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m19789(__this, ___key, ___value, method) (List_1_t483 *)Transform_1_Invoke_m15979_gshared((Transform_1_t4105 *)__this, (Object_t *)___key, (Object_t *)___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Type,System.Collections.Generic.List`1<System.Reflection.MethodInfo>,System.Collections.Generic.List`1<System.Reflection.MethodInfo>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m19790(__this, ___key, ___value, ___callback, ___object, method) (Object_t *)Transform_1_BeginInvoke_m15980_gshared((Transform_1_t4105 *)__this, (Object_t *)___key, (Object_t *)___value, (AsyncCallback_t35 *)___callback, (Object_t *)___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Type,System.Collections.Generic.List`1<System.Reflection.MethodInfo>,System.Collections.Generic.List`1<System.Reflection.MethodInfo>>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m19791(__this, ___result, method) (List_1_t483 *)Transform_1_EndInvoke_m15981_gshared((Transform_1_t4105 *)__this, (Object_t *)___result, method)
