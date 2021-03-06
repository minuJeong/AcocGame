﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>,System.Tuple`2<System.Type,System.Type>>
struct Transform_1_t6271;
// System.Object
struct Object_t;
// System.Tuple`2<System.Type,System.Type>
struct Tuple_2_t1400;
// System.Func`3<System.Object,System.Object,System.Object>
struct Func_3_t1048;
// System.IAsyncResult
struct IAsyncResult_t34;
// System.AsyncCallback
struct AsyncCallback_t35;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>,System.Tuple`2<System.Type,System.Type>>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_0MethodDeclarations.h"
#define Transform_1__ctor_m31595(__this, ___object, ___method, method) (void)Transform_1__ctor_m15978_gshared((Transform_1_t4105 *)__this, (Object_t *)___object, (IntPtr_t39)___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>,System.Tuple`2<System.Type,System.Type>>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m31596(__this, ___key, ___value, method) (Tuple_2_t1400 *)Transform_1_Invoke_m15979_gshared((Transform_1_t4105 *)__this, (Object_t *)___key, (Object_t *)___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>,System.Tuple`2<System.Type,System.Type>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m31597(__this, ___key, ___value, ___callback, ___object, method) (Object_t *)Transform_1_BeginInvoke_m15980_gshared((Transform_1_t4105 *)__this, (Object_t *)___key, (Object_t *)___value, (AsyncCallback_t35 *)___callback, (Object_t *)___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Tuple`2<System.Type,System.Type>,System.Func`3<System.Object,System.Object,System.Object>,System.Tuple`2<System.Type,System.Type>>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m31598(__this, ___result, method) (Tuple_2_t1400 *)Transform_1_EndInvoke_m15981_gshared((Transform_1_t4105 *)__this, (Object_t *)___result, method)
