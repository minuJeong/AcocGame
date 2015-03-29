#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Cryptography.RSAManaged/KeyGeneratedEventHandler
struct KeyGeneratedEventHandler_t3244;
// System.Object
struct Object_t;
// System.EventArgs
struct EventArgs_t1191;
// System.IAsyncResult
struct IAsyncResult_t34;
// System.AsyncCallback
struct AsyncCallback_t35;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void Mono.Security.Cryptography.RSAManaged/KeyGeneratedEventHandler::.ctor(System.Object,System.IntPtr)
 void KeyGeneratedEventHandler__ctor_m11443 (KeyGeneratedEventHandler_t3244 * __this, Object_t * ___object, IntPtr_t39 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.RSAManaged/KeyGeneratedEventHandler::Invoke(System.Object,System.EventArgs)
 void KeyGeneratedEventHandler_Invoke_m11444 (KeyGeneratedEventHandler_t3244 * __this, Object_t * ___sender, EventArgs_t1191 * ___e, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Mono.Security.Cryptography.RSAManaged/KeyGeneratedEventHandler::BeginInvoke(System.Object,System.EventArgs,System.AsyncCallback,System.Object)
 Object_t * KeyGeneratedEventHandler_BeginInvoke_m11445 (KeyGeneratedEventHandler_t3244 * __this, Object_t * ___sender, EventArgs_t1191 * ___e, AsyncCallback_t35 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.RSAManaged/KeyGeneratedEventHandler::EndInvoke(System.IAsyncResult)
 void KeyGeneratedEventHandler_EndInvoke_m11446 (KeyGeneratedEventHandler_t3244 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
