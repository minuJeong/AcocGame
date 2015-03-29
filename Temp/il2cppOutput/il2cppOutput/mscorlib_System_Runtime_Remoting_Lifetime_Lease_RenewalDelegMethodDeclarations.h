#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.Lifetime.Lease/RenewalDelegate
struct RenewalDelegate_t3467;
// System.Object
struct Object_t;
// System.Runtime.Remoting.Lifetime.ILease
struct ILease_t3466;
// System.IAsyncResult
struct IAsyncResult_t34;
// System.AsyncCallback
struct AsyncCallback_t35;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Runtime.Remoting.Lifetime.Lease/RenewalDelegate::.ctor(System.Object,System.IntPtr)
 void RenewalDelegate__ctor_m12865 (RenewalDelegate_t3467 * __this, Object_t * ___object, IntPtr_t39 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.Runtime.Remoting.Lifetime.Lease/RenewalDelegate::Invoke(System.Runtime.Remoting.Lifetime.ILease)
 TimeSpan_t1247  RenewalDelegate_Invoke_m12866 (RenewalDelegate_t3467 * __this, Object_t * ___lease, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Runtime.Remoting.Lifetime.Lease/RenewalDelegate::BeginInvoke(System.Runtime.Remoting.Lifetime.ILease,System.AsyncCallback,System.Object)
 Object_t * RenewalDelegate_BeginInvoke_m12867 (RenewalDelegate_t3467 * __this, Object_t * ___lease, AsyncCallback_t35 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.Runtime.Remoting.Lifetime.Lease/RenewalDelegate::EndInvoke(System.IAsyncResult)
 TimeSpan_t1247  RenewalDelegate_EndInvoke_m12868 (RenewalDelegate_t3467 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
