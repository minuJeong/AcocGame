#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.Messaging.HeaderHandler
struct HeaderHandler_t3527;
// System.Object
struct Object_t;
// System.Runtime.Remoting.Messaging.Header[]
struct HeaderU5BU5D_t3484;
// System.IAsyncResult
struct IAsyncResult_t34;
// System.AsyncCallback
struct AsyncCallback_t35;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Runtime.Remoting.Messaging.HeaderHandler::.ctor(System.Object,System.IntPtr)
 void HeaderHandler__ctor_m14796 (HeaderHandler_t3527 * __this, Object_t * ___object, IntPtr_t39 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Messaging.HeaderHandler::Invoke(System.Runtime.Remoting.Messaging.Header[])
 Object_t * HeaderHandler_Invoke_m14797 (HeaderHandler_t3527 * __this, HeaderU5BU5D_t3484* ___headers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Runtime.Remoting.Messaging.HeaderHandler::BeginInvoke(System.Runtime.Remoting.Messaging.Header[],System.AsyncCallback,System.Object)
 Object_t * HeaderHandler_BeginInvoke_m14798 (HeaderHandler_t3527 * __this, HeaderU5BU5D_t3484* ___headers, AsyncCallback_t35 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Messaging.HeaderHandler::EndInvoke(System.IAsyncResult)
 Object_t * HeaderHandler_EndInvoke_m14799 (HeaderHandler_t3527 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
