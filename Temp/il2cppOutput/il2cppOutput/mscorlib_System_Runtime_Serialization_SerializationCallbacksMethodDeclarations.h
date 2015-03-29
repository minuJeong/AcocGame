#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Serialization.SerializationCallbacks/CallbackHandler
struct CallbackHandler_t3550;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t34;
// System.AsyncCallback
struct AsyncCallback_t35;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Runtime.Serialization.SerializationCallbacks/CallbackHandler::.ctor(System.Object,System.IntPtr)
 void CallbackHandler__ctor_m13189 (CallbackHandler_t3550 * __this, Object_t * ___object, IntPtr_t39 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.SerializationCallbacks/CallbackHandler::Invoke(System.Runtime.Serialization.StreamingContext)
 void CallbackHandler_Invoke_m13190 (CallbackHandler_t3550 * __this, StreamingContext_t2615  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Runtime.Serialization.SerializationCallbacks/CallbackHandler::BeginInvoke(System.Runtime.Serialization.StreamingContext,System.AsyncCallback,System.Object)
 Object_t * CallbackHandler_BeginInvoke_m13191 (CallbackHandler_t3550 * __this, StreamingContext_t2615  ___context, AsyncCallback_t35 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.SerializationCallbacks/CallbackHandler::EndInvoke(System.IAsyncResult)
 void CallbackHandler_EndInvoke_m13192 (CallbackHandler_t3550 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
