#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<System.UInt16>
struct Predicate_1_t7299;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t34;
// System.AsyncCallback
struct AsyncCallback_t35;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<System.UInt16>::.ctor(System.Object,System.IntPtr)
 void Predicate_1__ctor_m40676 (Predicate_1_t7299 * __this, Object_t * ___object, IntPtr_t39 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Predicate`1<System.UInt16>::Invoke(T)
 bool Predicate_1_Invoke_m40677 (Predicate_1_t7299 * __this, uint16_t ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Predicate`1<System.UInt16>::BeginInvoke(T,System.AsyncCallback,System.Object)
 Object_t * Predicate_1_BeginInvoke_m40678 (Predicate_1_t7299 * __this, uint16_t ___obj, AsyncCallback_t35 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Predicate`1<System.UInt16>::EndInvoke(System.IAsyncResult)
 bool Predicate_1_EndInvoke_m40679 (Predicate_1_t7299 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
