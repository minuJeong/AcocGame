#pragma once
#include <stdint.h>
// System.Threading.Thread
struct Thread_t1419;
// System.Threading.EventWaitHandle
struct EventWaitHandle_t2935;
// System.Threading.ReaderWriterLockSlim/LockDetails[]
struct LockDetailsU5BU5D_t2936;
// System.Object
#include "mscorlib_System_Object.h"
// System.Threading.ReaderWriterLockSlim
struct ReaderWriterLockSlim_t1158  : public Object_t
{
	// System.Int32 System.Threading.ReaderWriterLockSlim::myLock
	int32_t ___myLock;
	// System.Int32 System.Threading.ReaderWriterLockSlim::owners
	int32_t ___owners;
	// System.Threading.Thread System.Threading.ReaderWriterLockSlim::upgradable_thread
	Thread_t1419 * ___upgradable_thread;
	// System.Threading.Thread System.Threading.ReaderWriterLockSlim::write_thread
	Thread_t1419 * ___write_thread;
	// System.UInt32 System.Threading.ReaderWriterLockSlim::numWriteWaiters
	uint32_t ___numWriteWaiters;
	// System.UInt32 System.Threading.ReaderWriterLockSlim::numReadWaiters
	uint32_t ___numReadWaiters;
	// System.UInt32 System.Threading.ReaderWriterLockSlim::numUpgradeWaiters
	uint32_t ___numUpgradeWaiters;
	// System.Threading.EventWaitHandle System.Threading.ReaderWriterLockSlim::writeEvent
	EventWaitHandle_t2935 * ___writeEvent;
	// System.Threading.EventWaitHandle System.Threading.ReaderWriterLockSlim::readEvent
	EventWaitHandle_t2935 * ___readEvent;
	// System.Threading.EventWaitHandle System.Threading.ReaderWriterLockSlim::upgradeEvent
	EventWaitHandle_t2935 * ___upgradeEvent;
	// System.Threading.ReaderWriterLockSlim/LockDetails[] System.Threading.ReaderWriterLockSlim::read_locks
	LockDetailsU5BU5D_t2936* ___read_locks;
};
struct ReaderWriterLockSlim_t1158_StaticFields{
	// System.Boolean System.Threading.ReaderWriterLockSlim::smp
	bool ___smp;
};
