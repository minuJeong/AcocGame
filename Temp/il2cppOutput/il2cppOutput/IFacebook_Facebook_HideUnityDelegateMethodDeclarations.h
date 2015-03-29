#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Facebook.HideUnityDelegate
struct HideUnityDelegate_t119;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t34;
// System.AsyncCallback
struct AsyncCallback_t35;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void Facebook.HideUnityDelegate::.ctor(System.Object,System.IntPtr)
 void HideUnityDelegate__ctor_m4684 (HideUnityDelegate_t119 * __this, Object_t * ___object, IntPtr_t39 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.HideUnityDelegate::Invoke(System.Boolean)
 void HideUnityDelegate_Invoke_m4685 (HideUnityDelegate_t119 * __this, bool ___isUnityShown, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Facebook.HideUnityDelegate::BeginInvoke(System.Boolean,System.AsyncCallback,System.Object)
 Object_t * HideUnityDelegate_BeginInvoke_m4686 (HideUnityDelegate_t119 * __this, bool ___isUnityShown, AsyncCallback_t35 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.HideUnityDelegate::EndInvoke(System.IAsyncResult)
 void HideUnityDelegate_EndInvoke_m4687 (HideUnityDelegate_t119 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
