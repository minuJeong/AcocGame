#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// LitJson.Lexer/StateHandler
struct StateHandler_t922;
// System.Object
struct Object_t;
// LitJson.FsmContext
struct FsmContext_t921;
// System.IAsyncResult
struct IAsyncResult_t34;
// System.AsyncCallback
struct AsyncCallback_t35;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void LitJson.Lexer/StateHandler::.ctor(System.Object,System.IntPtr)
 void StateHandler__ctor_m5042 (StateHandler_t922 * __this, Object_t * ___object, IntPtr_t39 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer/StateHandler::Invoke(LitJson.FsmContext)
 bool StateHandler_Invoke_m5043 (StateHandler_t922 * __this, FsmContext_t921 * ___ctx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult LitJson.Lexer/StateHandler::BeginInvoke(LitJson.FsmContext,System.AsyncCallback,System.Object)
 Object_t * StateHandler_BeginInvoke_m5044 (StateHandler_t922 * __this, FsmContext_t921 * ___ctx, AsyncCallback_t35 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.Lexer/StateHandler::EndInvoke(System.IAsyncResult)
 bool StateHandler_EndInvoke_m5045 (StateHandler_t922 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
