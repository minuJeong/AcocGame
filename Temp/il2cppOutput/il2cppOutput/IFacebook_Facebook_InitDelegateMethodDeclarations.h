#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Facebook.InitDelegate
struct InitDelegate_t116;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t34;
// System.AsyncCallback
struct AsyncCallback_t35;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void Facebook.InitDelegate::.ctor(System.Object,System.IntPtr)
 void InitDelegate__ctor_m2780 (InitDelegate_t116 * __this, Object_t * ___object, IntPtr_t39 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.InitDelegate::Invoke()
 void InitDelegate_Invoke_m1975 (InitDelegate_t116 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Facebook.InitDelegate::BeginInvoke(System.AsyncCallback,System.Object)
 Object_t * InitDelegate_BeginInvoke_m4680 (InitDelegate_t116 * __this, AsyncCallback_t35 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.InitDelegate::EndInvoke(System.IAsyncResult)
 void InitDelegate_EndInvoke_m4681 (InitDelegate_t116 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
