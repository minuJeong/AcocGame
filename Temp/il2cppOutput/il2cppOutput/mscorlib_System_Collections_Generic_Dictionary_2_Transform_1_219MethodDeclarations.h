﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.String,Parse.ParseFile,Parse.ParseFile>
struct Transform_1_t8869;
// System.Object
struct Object_t;
// Parse.ParseFile
struct ParseFile_t1113;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t34;
// System.AsyncCallback
struct AsyncCallback_t35;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.String,Parse.ParseFile,Parse.ParseFile>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_0MethodDeclarations.h"
#define Transform_1__ctor_m57768(__this, ___object, ___method, method) (void)Transform_1__ctor_m15978_gshared((Transform_1_t4105 *)__this, (Object_t *)___object, (IntPtr_t39)___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,Parse.ParseFile,Parse.ParseFile>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m57769(__this, ___key, ___value, method) (ParseFile_t1113 *)Transform_1_Invoke_m15979_gshared((Transform_1_t4105 *)__this, (Object_t *)___key, (Object_t *)___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.String,Parse.ParseFile,Parse.ParseFile>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m57770(__this, ___key, ___value, ___callback, ___object, method) (Object_t *)Transform_1_BeginInvoke_m15980_gshared((Transform_1_t4105 *)__this, (Object_t *)___key, (Object_t *)___value, (AsyncCallback_t35 *)___callback, (Object_t *)___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.String,Parse.ParseFile,Parse.ParseFile>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m57771(__this, ___result, method) (ParseFile_t1113 *)Transform_1_EndInvoke_m15981_gshared((Transform_1_t4105 *)__this, (Object_t *)___result, method)
