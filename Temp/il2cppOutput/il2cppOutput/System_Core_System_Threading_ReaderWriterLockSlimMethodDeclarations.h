#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.ReaderWriterLockSlim
struct ReaderWriterLockSlim_t1158;
// System.Threading.EventWaitHandle
struct EventWaitHandle_t2936;
// System.Threading.ReaderWriterLockSlim/LockDetails
struct LockDetails_t2935;

// System.Void System.Threading.ReaderWriterLockSlim::.ctor()
 void ReaderWriterLockSlim__ctor_m6730 (ReaderWriterLockSlim_t1158 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ReaderWriterLockSlim::.cctor()
 void ReaderWriterLockSlim__cctor_m10131 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ReaderWriterLockSlim::EnterReadLock()
 void ReaderWriterLockSlim_EnterReadLock_m6625 (ReaderWriterLockSlim_t1158 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.ReaderWriterLockSlim::TryEnterReadLock(System.Int32)
 bool ReaderWriterLockSlim_TryEnterReadLock_m10132 (ReaderWriterLockSlim_t1158 * __this, int32_t ___millisecondsTimeout, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ReaderWriterLockSlim::ExitReadLock()
 void ReaderWriterLockSlim_ExitReadLock_m6627 (ReaderWriterLockSlim_t1158 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ReaderWriterLockSlim::EnterWriteLock()
 void ReaderWriterLockSlim_EnterWriteLock_m6631 (ReaderWriterLockSlim_t1158 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.ReaderWriterLockSlim::TryEnterWriteLock(System.Int32)
 bool ReaderWriterLockSlim_TryEnterWriteLock_m10133 (ReaderWriterLockSlim_t1158 * __this, int32_t ___millisecondsTimeout, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ReaderWriterLockSlim::ExitWriteLock()
 void ReaderWriterLockSlim_ExitWriteLock_m6633 (ReaderWriterLockSlim_t1158 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ReaderWriterLockSlim::EnterUpgradeableReadLock()
 void ReaderWriterLockSlim_EnterUpgradeableReadLock_m6628 (ReaderWriterLockSlim_t1158 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.ReaderWriterLockSlim::TryEnterUpgradeableReadLock(System.Int32)
 bool ReaderWriterLockSlim_TryEnterUpgradeableReadLock_m10134 (ReaderWriterLockSlim_t1158 * __this, int32_t ___millisecondsTimeout, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ReaderWriterLockSlim::ExitUpgradeableReadLock()
 void ReaderWriterLockSlim_ExitUpgradeableReadLock_m6634 (ReaderWriterLockSlim_t1158 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ReaderWriterLockSlim::Dispose()
 void ReaderWriterLockSlim_Dispose_m10135 (ReaderWriterLockSlim_t1158 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.ReaderWriterLockSlim::get_IsWriteLockHeld()
 bool ReaderWriterLockSlim_get_IsWriteLockHeld_m6949 (ReaderWriterLockSlim_t1158 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.ReaderWriterLockSlim::get_IsUpgradeableReadLockHeld()
 bool ReaderWriterLockSlim_get_IsUpgradeableReadLockHeld_m10136 (ReaderWriterLockSlim_t1158 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Threading.ReaderWriterLockSlim::get_RecursiveUpgradeCount()
 int32_t ReaderWriterLockSlim_get_RecursiveUpgradeCount_m10137 (ReaderWriterLockSlim_t1158 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Threading.ReaderWriterLockSlim::get_RecursiveWriteCount()
 int32_t ReaderWriterLockSlim_get_RecursiveWriteCount_m10138 (ReaderWriterLockSlim_t1158 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ReaderWriterLockSlim::EnterMyLock()
 void ReaderWriterLockSlim_EnterMyLock_m10139 (ReaderWriterLockSlim_t1158 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ReaderWriterLockSlim::EnterMyLockSpin()
 void ReaderWriterLockSlim_EnterMyLockSpin_m10140 (ReaderWriterLockSlim_t1158 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ReaderWriterLockSlim::ExitMyLock()
 void ReaderWriterLockSlim_ExitMyLock_m10141 (ReaderWriterLockSlim_t1158 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ReaderWriterLockSlim::ExitAndWakeUpAppropriateWaiters()
 void ReaderWriterLockSlim_ExitAndWakeUpAppropriateWaiters_m10142 (ReaderWriterLockSlim_t1158 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ReaderWriterLockSlim::LazyCreateEvent(System.Threading.EventWaitHandle&,System.Boolean)
 void ReaderWriterLockSlim_LazyCreateEvent_m10143 (ReaderWriterLockSlim_t1158 * __this, EventWaitHandle_t2936 ** ___waitEvent, bool ___makeAutoResetEvent, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.ReaderWriterLockSlim::WaitOnEvent(System.Threading.EventWaitHandle,System.UInt32&,System.Int32)
 bool ReaderWriterLockSlim_WaitOnEvent_m10144 (ReaderWriterLockSlim_t1158 * __this, EventWaitHandle_t2936 * ___waitEvent, uint32_t* ___numWaiters, int32_t ___millisecondsTimeout, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.ReaderWriterLockSlim/LockDetails System.Threading.ReaderWriterLockSlim::GetReadLockDetails(System.Int32,System.Boolean)
 LockDetails_t2935 * ReaderWriterLockSlim_GetReadLockDetails_m10145 (ReaderWriterLockSlim_t1158 * __this, int32_t ___threadId, bool ___create, MethodInfo* method) IL2CPP_METHOD_ATTR;
