#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.ComponentModel.PropertyChangedEventHandler
struct PropertyChangedEventHandler_t1175;
// System.Object
struct Object_t;
// System.ComponentModel.PropertyChangedEventArgs
struct PropertyChangedEventArgs_t1519;
// System.IAsyncResult
struct IAsyncResult_t34;
// System.AsyncCallback
struct AsyncCallback_t35;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.ComponentModel.PropertyChangedEventHandler::.ctor(System.Object,System.IntPtr)
 void PropertyChangedEventHandler__ctor_m9766 (PropertyChangedEventHandler_t1175 * __this, Object_t * ___object, IntPtr_t39 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.PropertyChangedEventHandler::Invoke(System.Object,System.ComponentModel.PropertyChangedEventArgs)
 void PropertyChangedEventHandler_Invoke_m9767 (PropertyChangedEventHandler_t1175 * __this, Object_t * ___sender, PropertyChangedEventArgs_t1519 * ___e, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.ComponentModel.PropertyChangedEventHandler::BeginInvoke(System.Object,System.ComponentModel.PropertyChangedEventArgs,System.AsyncCallback,System.Object)
 Object_t * PropertyChangedEventHandler_BeginInvoke_m9768 (PropertyChangedEventHandler_t1175 * __this, Object_t * ___sender, PropertyChangedEventArgs_t1519 * ___e, AsyncCallback_t35 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.PropertyChangedEventHandler::EndInvoke(System.IAsyncResult)
 void PropertyChangedEventHandler_EndInvoke_m9769 (PropertyChangedEventHandler_t1175 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
