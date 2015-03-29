#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.MemberFilter
struct MemberFilter_t3177;
// System.Object
struct Object_t;
// System.Reflection.MemberInfo
struct MemberInfo_t484;
// System.IAsyncResult
struct IAsyncResult_t34;
// System.AsyncCallback
struct AsyncCallback_t35;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Reflection.MemberFilter::.ctor(System.Object,System.IntPtr)
 void MemberFilter__ctor_m14788 (MemberFilter_t3177 * __this, Object_t * ___object, IntPtr_t39 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MemberFilter::Invoke(System.Reflection.MemberInfo,System.Object)
 bool MemberFilter_Invoke_m14789 (MemberFilter_t3177 * __this, MemberInfo_t484 * ___m, Object_t * ___filterCriteria, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Reflection.MemberFilter::BeginInvoke(System.Reflection.MemberInfo,System.Object,System.AsyncCallback,System.Object)
 Object_t * MemberFilter_BeginInvoke_m14790 (MemberFilter_t3177 * __this, MemberInfo_t484 * ___m, Object_t * ___filterCriteria, AsyncCallback_t35 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MemberFilter::EndInvoke(System.IAsyncResult)
 bool MemberFilter_EndInvoke_m14791 (MemberFilter_t3177 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
