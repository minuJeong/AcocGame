#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.UnhandledExceptionEventHandler
struct UnhandledExceptionEventHandler_t3680;
// System.Object
struct Object_t;
// System.UnhandledExceptionEventArgs
struct UnhandledExceptionEventArgs_t3743;
// System.IAsyncResult
struct IAsyncResult_t34;
// System.AsyncCallback
struct AsyncCallback_t35;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.UnhandledExceptionEventHandler::.ctor(System.Object,System.IntPtr)
 void UnhandledExceptionEventHandler__ctor_m14834 (UnhandledExceptionEventHandler_t3680 * __this, Object_t * ___object, IntPtr_t39 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnhandledExceptionEventHandler::Invoke(System.Object,System.UnhandledExceptionEventArgs)
 void UnhandledExceptionEventHandler_Invoke_m14835 (UnhandledExceptionEventHandler_t3680 * __this, Object_t * ___sender, UnhandledExceptionEventArgs_t3743 * ___e, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.UnhandledExceptionEventHandler::BeginInvoke(System.Object,System.UnhandledExceptionEventArgs,System.AsyncCallback,System.Object)
 Object_t * UnhandledExceptionEventHandler_BeginInvoke_m14836 (UnhandledExceptionEventHandler_t3680 * __this, Object_t * ___sender, UnhandledExceptionEventArgs_t3743 * ___e, AsyncCallback_t35 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnhandledExceptionEventHandler::EndInvoke(System.IAsyncResult)
 void UnhandledExceptionEventHandler_EndInvoke_m14837 (UnhandledExceptionEventHandler_t3680 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
