﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.TypeFilter
struct TypeFilter_t3397;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.IAsyncResult
struct IAsyncResult_t34;
// System.AsyncCallback
struct AsyncCallback_t35;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Reflection.TypeFilter::.ctor(System.Object,System.IntPtr)
 void TypeFilter__ctor_m14792 (TypeFilter_t3397 * __this, Object_t * ___object, IntPtr_t39 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.TypeFilter::Invoke(System.Type,System.Object)
 bool TypeFilter_Invoke_m14793 (TypeFilter_t3397 * __this, Type_t * ___m, Object_t * ___filterCriteria, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Reflection.TypeFilter::BeginInvoke(System.Type,System.Object,System.AsyncCallback,System.Object)
 Object_t * TypeFilter_BeginInvoke_m14794 (TypeFilter_t3397 * __this, Type_t * ___m, Object_t * ___filterCriteria, AsyncCallback_t35 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.TypeFilter::EndInvoke(System.IAsyncResult)
 bool TypeFilter_EndInvoke_m14795 (TypeFilter_t3397 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
