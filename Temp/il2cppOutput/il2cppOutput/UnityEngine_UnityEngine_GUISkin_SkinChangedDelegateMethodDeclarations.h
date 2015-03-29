#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.GUISkin/SkinChangedDelegate
struct SkinChangedDelegate_t2513;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t34;
// System.AsyncCallback
struct AsyncCallback_t35;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.GUISkin/SkinChangedDelegate::.ctor(System.Object,System.IntPtr)
 void SkinChangedDelegate__ctor_m8173 (SkinChangedDelegate_t2513 * __this, Object_t * ___object, IntPtr_t39 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin/SkinChangedDelegate::Invoke()
 void SkinChangedDelegate_Invoke_m8174 (SkinChangedDelegate_t2513 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult UnityEngine.GUISkin/SkinChangedDelegate::BeginInvoke(System.AsyncCallback,System.Object)
 Object_t * SkinChangedDelegate_BeginInvoke_m8175 (SkinChangedDelegate_t2513 * __this, AsyncCallback_t35 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin/SkinChangedDelegate::EndInvoke(System.IAsyncResult)
 void SkinChangedDelegate_EndInvoke_m8176 (SkinChangedDelegate_t2513 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
