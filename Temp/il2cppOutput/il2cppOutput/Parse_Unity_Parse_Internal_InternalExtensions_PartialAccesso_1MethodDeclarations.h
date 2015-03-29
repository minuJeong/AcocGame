#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.InternalExtensions/PartialAccessor`1<System.Object>
struct PartialAccessor_1_t6158;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t34;
// System.AsyncCallback
struct AsyncCallback_t35;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void Parse.Internal.InternalExtensions/PartialAccessor`1<System.Object>::.ctor(System.Object,System.IntPtr)
 void PartialAccessor_1__ctor_m30906_gshared (PartialAccessor_1_t6158 * __this, Object_t * ___object, IntPtr_t39 ___method, MethodInfo* method);
#define PartialAccessor_1__ctor_m30906(__this, ___object, ___method, method) (void)PartialAccessor_1__ctor_m30906_gshared((PartialAccessor_1_t6158 *)__this, (Object_t *)___object, (IntPtr_t39)___method, method)
// System.Void Parse.Internal.InternalExtensions/PartialAccessor`1<System.Object>::Invoke(T&)
 void PartialAccessor_1_Invoke_m30907_gshared (PartialAccessor_1_t6158 * __this, Object_t ** ___arg, MethodInfo* method);
#define PartialAccessor_1_Invoke_m30907(__this, ___arg, method) (void)PartialAccessor_1_Invoke_m30907_gshared((PartialAccessor_1_t6158 *)__this, (Object_t **)___arg, method)
// System.IAsyncResult Parse.Internal.InternalExtensions/PartialAccessor`1<System.Object>::BeginInvoke(T&,System.AsyncCallback,System.Object)
 Object_t * PartialAccessor_1_BeginInvoke_m30909_gshared (PartialAccessor_1_t6158 * __this, Object_t ** ___arg, AsyncCallback_t35 * ___callback, Object_t * ___object, MethodInfo* method);
#define PartialAccessor_1_BeginInvoke_m30909(__this, ___arg, ___callback, ___object, method) (Object_t *)PartialAccessor_1_BeginInvoke_m30909_gshared((PartialAccessor_1_t6158 *)__this, (Object_t **)___arg, (AsyncCallback_t35 *)___callback, (Object_t *)___object, method)
// System.Void Parse.Internal.InternalExtensions/PartialAccessor`1<System.Object>::EndInvoke(T&,System.IAsyncResult)
 void PartialAccessor_1_EndInvoke_m30911_gshared (PartialAccessor_1_t6158 * __this, Object_t ** ___arg, Object_t * ___result, MethodInfo* method);
#define PartialAccessor_1_EndInvoke_m30911(__this, ___arg, ___result, method) (void)PartialAccessor_1_EndInvoke_m30911_gshared((PartialAccessor_1_t6158 *)__this, (Object_t **)___arg, (Object_t *)___result, method)
