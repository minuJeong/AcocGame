#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Thread
struct Thread_t1419;
// System.Runtime.Remoting.Contexts.Context
struct Context_t3453;
// System.Globalization.CultureInfo
struct CultureInfo_t872;
// System.String
struct String_t;
// System.Threading.ExecutionContext
struct ExecutionContext_t3473;
// System.Threading.ThreadStart
struct ThreadStart_t2442;
// System.Threading.ParameterizedThreadStart
struct ParameterizedThreadStart_t2182;
// System.MulticastDelegate
struct MulticastDelegate_t38;
// System.Byte[]
struct ByteU5BU5D_t21;
// System.Object
struct Object_t;
// System.Threading.CompressedStack
struct CompressedStack_t3627;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Threading.ThreadState
#include "mscorlib_System_Threading_ThreadState.h"

// System.Void System.Threading.Thread::.ctor(System.Threading.ThreadStart)
 void Thread__ctor_m7835 (Thread_t1419 * __this, ThreadStart_t2442 * ___start, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::.ctor(System.Threading.ParameterizedThreadStart)
 void Thread__ctor_m6969 (Thread_t1419 * __this, ParameterizedThreadStart_t2182 * ___start, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::.cctor()
 void Thread__cctor_m13918 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Contexts.Context System.Threading.Thread::get_CurrentContext()
 Context_t3453 * Thread_get_CurrentContext_m13919 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Thread System.Threading.Thread::CurrentThread_internal()
 Thread_t1419 * Thread_CurrentThread_internal_m13920 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Thread System.Threading.Thread::get_CurrentThread()
 Thread_t1419 * Thread_get_CurrentThread_m6449 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Threading.Thread::GetDomainID()
 int32_t Thread_GetDomainID_m13921 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::Sleep_internal(System.Int32)
 void Thread_Sleep_internal_m13922 (Object_t * __this/* static, unused */, int32_t ___ms, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::Sleep(System.Int32)
 void Thread_Sleep_m7772 (Object_t * __this/* static, unused */, int32_t ___millisecondsTimeout, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Threading.Thread::Thread_internal(System.MulticastDelegate)
 IntPtr_t39 Thread_Thread_internal_m13923 (Thread_t1419 * __this, MulticastDelegate_t38 * ___start, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::Thread_init()
 void Thread_Thread_init_m13924 (Thread_t1419 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Threading.Thread::GetCachedCurrentCulture()
 CultureInfo_t872 * Thread_GetCachedCurrentCulture_m13925 (Thread_t1419 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Threading.Thread::GetSerializedCurrentCulture()
 ByteU5BU5D_t21* Thread_GetSerializedCurrentCulture_m13926 (Thread_t1419 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::SetCachedCurrentCulture(System.Globalization.CultureInfo)
 void Thread_SetCachedCurrentCulture_m13927 (Thread_t1419 * __this, CultureInfo_t872 * ___culture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Threading.Thread::get_CurrentCulture()
 CultureInfo_t872 * Thread_get_CurrentCulture_m13928 (Thread_t1419 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::set_IsBackground(System.Boolean)
 void Thread_set_IsBackground_m7836 (Thread_t1419 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::SetName_internal(System.String)
 void Thread_SetName_internal_m13929 (Thread_t1419 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::set_Name(System.String)
 void Thread_set_Name_m7837 (Thread_t1419 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::Abort_internal(System.Object)
 void Thread_Abort_internal_m13930 (Thread_t1419 * __this, Object_t * ___stateInfo, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::Abort()
 void Thread_Abort_m9864 (Thread_t1419 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::SpinWait_nop()
 void Thread_SpinWait_nop_m13931 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::SpinWait(System.Int32)
 void Thread_SpinWait_m10392 (Object_t * __this/* static, unused */, int32_t ___iterations, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::Start()
 void Thread_Start_m6970 (Thread_t1419 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::Thread_free_internal(System.IntPtr)
 void Thread_Thread_free_internal_m13932 (Thread_t1419 * __this, IntPtr_t39 ___handle, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::Finalize()
 void Thread_Finalize_m13933 (Thread_t1419 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::SetState(System.Threading.ThreadState)
 void Thread_SetState_m13934 (Thread_t1419 * __this, int32_t ___set, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::ClrState(System.Threading.ThreadState)
 void Thread_ClrState_m13935 (Thread_t1419 * __this, int32_t ___clr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Threading.Thread::GetNewManagedId()
 int32_t Thread_GetNewManagedId_m13936 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Threading.Thread::GetNewManagedId_internal()
 int32_t Thread_GetNewManagedId_internal_m13937 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.ExecutionContext System.Threading.Thread::get_ExecutionContext()
 ExecutionContext_t3473 * Thread_get_ExecutionContext_m13938 (Thread_t1419 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Threading.Thread::get_ManagedThreadId()
 int32_t Thread_get_ManagedThreadId_m6450 (Thread_t1419 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Threading.Thread::GetHashCode()
 int32_t Thread_GetHashCode_m13939 (Thread_t1419 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.CompressedStack System.Threading.Thread::GetCompressedStack()
 CompressedStack_t3627 * Thread_GetCompressedStack_m13940 (Thread_t1419 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
