#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.AssemblyLoadEventHandler
struct AssemblyLoadEventHandler_t3676;
// System.Object
struct Object_t;
// System.AssemblyLoadEventArgs
struct AssemblyLoadEventArgs_t3683;
// System.IAsyncResult
struct IAsyncResult_t34;
// System.AsyncCallback
struct AsyncCallback_t35;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.AssemblyLoadEventHandler::.ctor(System.Object,System.IntPtr)
 void AssemblyLoadEventHandler__ctor_m14819 (AssemblyLoadEventHandler_t3676 * __this, Object_t * ___object, IntPtr_t39 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.AssemblyLoadEventHandler::Invoke(System.Object,System.AssemblyLoadEventArgs)
 void AssemblyLoadEventHandler_Invoke_m14820 (AssemblyLoadEventHandler_t3676 * __this, Object_t * ___sender, AssemblyLoadEventArgs_t3683 * ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.AssemblyLoadEventHandler::BeginInvoke(System.Object,System.AssemblyLoadEventArgs,System.AsyncCallback,System.Object)
 Object_t * AssemblyLoadEventHandler_BeginInvoke_m14821 (AssemblyLoadEventHandler_t3676 * __this, Object_t * ___sender, AssemblyLoadEventArgs_t3683 * ___args, AsyncCallback_t35 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.AssemblyLoadEventHandler::EndInvoke(System.IAsyncResult)
 void AssemblyLoadEventHandler_EndInvoke_m14822 (AssemblyLoadEventHandler_t3676 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
