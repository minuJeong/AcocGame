#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// FB/RemoteFacebookLoader/LoadedDllCallback
struct LoadedDllCallback_t146;
// System.Object
struct Object_t;
// Facebook.IFacebook
struct IFacebook_t129;
// System.IAsyncResult
struct IAsyncResult_t34;
// System.AsyncCallback
struct AsyncCallback_t35;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void FB/RemoteFacebookLoader/LoadedDllCallback::.ctor(System.Object,System.IntPtr)
 void LoadedDllCallback__ctor_m745 (LoadedDllCallback_t146 * __this, Object_t * ___object, IntPtr_t39 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FB/RemoteFacebookLoader/LoadedDllCallback::Invoke(Facebook.IFacebook)
 void LoadedDllCallback_Invoke_m746 (LoadedDllCallback_t146 * __this, Object_t * ___fb, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult FB/RemoteFacebookLoader/LoadedDllCallback::BeginInvoke(Facebook.IFacebook,System.AsyncCallback,System.Object)
 Object_t * LoadedDllCallback_BeginInvoke_m747 (LoadedDllCallback_t146 * __this, Object_t * ___fb, AsyncCallback_t35 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FB/RemoteFacebookLoader/LoadedDllCallback::EndInvoke(System.IAsyncResult)
 void LoadedDllCallback_EndInvoke_m748 (LoadedDllCallback_t146 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
