#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// LitJson.WrapperFactory
struct WrapperFactory_t902;
// System.Object
struct Object_t;
// LitJson.IJsonWrapper
struct IJsonWrapper_t889;
// System.IAsyncResult
struct IAsyncResult_t34;
// System.AsyncCallback
struct AsyncCallback_t35;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void LitJson.WrapperFactory::.ctor(System.Object,System.IntPtr)
 void WrapperFactory__ctor_m4934 (WrapperFactory_t902 * __this, Object_t * ___object, IntPtr_t39 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.IJsonWrapper LitJson.WrapperFactory::Invoke()
 Object_t * WrapperFactory_Invoke_m4935 (WrapperFactory_t902 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult LitJson.WrapperFactory::BeginInvoke(System.AsyncCallback,System.Object)
 Object_t * WrapperFactory_BeginInvoke_m4936 (WrapperFactory_t902 * __this, AsyncCallback_t35 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.IJsonWrapper LitJson.WrapperFactory::EndInvoke(System.IAsyncResult)
 Object_t * WrapperFactory_EndInvoke_m4937 (WrapperFactory_t902 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
