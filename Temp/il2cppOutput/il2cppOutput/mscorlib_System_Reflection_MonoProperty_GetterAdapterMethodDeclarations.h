﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.MonoProperty/GetterAdapter
struct GetterAdapter_t3409;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t34;
// System.AsyncCallback
struct AsyncCallback_t35;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Reflection.MonoProperty/GetterAdapter::.ctor(System.Object,System.IntPtr)
 void GetterAdapter__ctor_m12726 (GetterAdapter_t3409 * __this, Object_t * ___object, IntPtr_t39 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.MonoProperty/GetterAdapter::Invoke(System.Object)
 Object_t * GetterAdapter_Invoke_m12727 (GetterAdapter_t3409 * __this, Object_t * ____this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Reflection.MonoProperty/GetterAdapter::BeginInvoke(System.Object,System.AsyncCallback,System.Object)
 Object_t * GetterAdapter_BeginInvoke_m12728 (GetterAdapter_t3409 * __this, Object_t * ____this, AsyncCallback_t35 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.MonoProperty/GetterAdapter::EndInvoke(System.IAsyncResult)
 Object_t * GetterAdapter_EndInvoke_m12729 (GetterAdapter_t3409 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
