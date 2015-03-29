#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.EventInfo/AddEventAdapter
struct AddEventAdapter_t3390;
// System.Object
struct Object_t;
// System.Delegate
struct Delegate_t793;
// System.IAsyncResult
struct IAsyncResult_t34;
// System.AsyncCallback
struct AsyncCallback_t35;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Reflection.EventInfo/AddEventAdapter::.ctor(System.Object,System.IntPtr)
 void AddEventAdapter__ctor_m12585 (AddEventAdapter_t3390 * __this, Object_t * ___object, IntPtr_t39 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.EventInfo/AddEventAdapter::Invoke(System.Object,System.Delegate)
 void AddEventAdapter_Invoke_m12586 (AddEventAdapter_t3390 * __this, Object_t * ____this, Delegate_t793 * ___dele, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Reflection.EventInfo/AddEventAdapter::BeginInvoke(System.Object,System.Delegate,System.AsyncCallback,System.Object)
 Object_t * AddEventAdapter_BeginInvoke_m12587 (AddEventAdapter_t3390 * __this, Object_t * ____this, Delegate_t793 * ___dele, AsyncCallback_t35 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.EventInfo/AddEventAdapter::EndInvoke(System.IAsyncResult)
 void AddEventAdapter_EndInvoke_m12588 (AddEventAdapter_t3390 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
