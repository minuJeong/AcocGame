﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<UnityEngine.Transform>
struct Predicate_1_t5259;
// System.Object
struct Object_t;
// UnityEngine.Transform
struct Transform_t56;
// System.IAsyncResult
struct IAsyncResult_t34;
// System.AsyncCallback
struct AsyncCallback_t35;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<UnityEngine.Transform>::.ctor(System.Object,System.IntPtr)
// System.Predicate`1<System.Object>
#include "mscorlib_System_Predicate_1_gen_5MethodDeclarations.h"
#define Predicate_1__ctor_m23812(__this, ___object, ___method, method) (void)Predicate_1__ctor_m15612_gshared((Predicate_1_t4051 *)__this, (Object_t *)___object, (IntPtr_t39)___method, method)
// System.Boolean System.Predicate`1<UnityEngine.Transform>::Invoke(T)
#define Predicate_1_Invoke_m23813(__this, ___obj, method) (bool)Predicate_1_Invoke_m15613_gshared((Predicate_1_t4051 *)__this, (Object_t *)___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.Transform>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Predicate_1_BeginInvoke_m23814(__this, ___obj, ___callback, ___object, method) (Object_t *)Predicate_1_BeginInvoke_m15614_gshared((Predicate_1_t4051 *)__this, (Object_t *)___obj, (AsyncCallback_t35 *)___callback, (Object_t *)___object, method)
// System.Boolean System.Predicate`1<UnityEngine.Transform>::EndInvoke(System.IAsyncResult)
#define Predicate_1_EndInvoke_m23815(__this, ___result, method) (bool)Predicate_1_EndInvoke_m15615_gshared((Predicate_1_t4051 *)__this, (Object_t *)___result, method)