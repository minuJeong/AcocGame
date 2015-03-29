#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.ResolveEventHandler
struct ResolveEventHandler_t3677;
// System.Object
struct Object_t;
// System.Reflection.Assembly
struct Assembly_t147;
// System.ResolveEventArgs
struct ResolveEventArgs_t3733;
// System.IAsyncResult
struct IAsyncResult_t34;
// System.AsyncCallback
struct AsyncCallback_t35;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.ResolveEventHandler::.ctor(System.Object,System.IntPtr)
 void ResolveEventHandler__ctor_m14827 (ResolveEventHandler_t3677 * __this, Object_t * ___object, IntPtr_t39 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.ResolveEventHandler::Invoke(System.Object,System.ResolveEventArgs)
 Assembly_t147 * ResolveEventHandler_Invoke_m14828 (ResolveEventHandler_t3677 * __this, Object_t * ___sender, ResolveEventArgs_t3733 * ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.ResolveEventHandler::BeginInvoke(System.Object,System.ResolveEventArgs,System.AsyncCallback,System.Object)
 Object_t * ResolveEventHandler_BeginInvoke_m14829 (ResolveEventHandler_t3677 * __this, Object_t * ___sender, ResolveEventArgs_t3733 * ___args, AsyncCallback_t35 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.ResolveEventHandler::EndInvoke(System.IAsyncResult)
 Assembly_t147 * ResolveEventHandler_EndInvoke_m14830 (ResolveEventHandler_t3677 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
