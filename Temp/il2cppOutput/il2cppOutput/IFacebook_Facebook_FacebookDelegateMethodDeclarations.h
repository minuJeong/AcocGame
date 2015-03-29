#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Facebook.FacebookDelegate
struct FacebookDelegate_t115;
// System.Object
struct Object_t;
// FBResult
struct FBResult_t134;
// System.IAsyncResult
struct IAsyncResult_t34;
// System.AsyncCallback
struct AsyncCallback_t35;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void Facebook.FacebookDelegate::.ctor(System.Object,System.IntPtr)
 void FacebookDelegate__ctor_m2078 (FacebookDelegate_t115 * __this, Object_t * ___object, IntPtr_t39 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.FacebookDelegate::Invoke(FBResult)
 void FacebookDelegate_Invoke_m2008 (FacebookDelegate_t115 * __this, FBResult_t134 * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Facebook.FacebookDelegate::BeginInvoke(FBResult,System.AsyncCallback,System.Object)
 Object_t * FacebookDelegate_BeginInvoke_m4682 (FacebookDelegate_t115 * __this, FBResult_t134 * ___result, AsyncCallback_t35 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.FacebookDelegate::EndInvoke(System.IAsyncResult)
 void FacebookDelegate_EndInvoke_m4683 (FacebookDelegate_t115 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
