#pragma once
#include <stdint.h>
// System.Object
struct Object_t;
// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile)
struct Int32_t63;
// System.Threading.ExecutionContext
struct ExecutionContext_t3473;
// System.Object[]
struct ObjectU5BU5D_t5;
// System.MulticastDelegate
struct MulticastDelegate_t38;
// System.Security.Principal.IPrincipal
struct IPrincipal_t3664;
// System.Collections.Hashtable
struct Hashtable_t48;
// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
#include "mscorlib_System_Runtime_ConstrainedExecution_CriticalFinaliz.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Threading.ThreadState
#include "mscorlib_System_Threading_ThreadState.h"
// System.UIntPtr
#include "mscorlib_System_UIntPtr.h"
// System.Threading.Thread
struct Thread_t1419  : public CriticalFinalizerObject_t3426
{
	// System.Int32 System.Threading.Thread::lock_thread_id
	int32_t ___lock_thread_id;
	// System.IntPtr System.Threading.Thread::system_thread_handle
	IntPtr_t39 ___system_thread_handle;
	// System.Object System.Threading.Thread::cached_culture_info
	Object_t * ___cached_culture_info;
	// System.IntPtr System.Threading.Thread::unused0
	IntPtr_t39 ___unused0;
	// System.Boolean System.Threading.Thread::threadpool_thread
	bool ___threadpool_thread;
	// System.IntPtr System.Threading.Thread::name
	IntPtr_t39 ___name;
	// System.Int32 System.Threading.Thread::name_len
	int32_t ___name_len;
	// System.Threading.ThreadState System.Threading.Thread::state
	int32_t ___state;
	// System.Object System.Threading.Thread::abort_exc
	Object_t * ___abort_exc;
	// System.Int32 System.Threading.Thread::abort_state_handle
	int32_t ___abort_state_handle;
	// System.Int64 System.Threading.Thread::thread_id
	int64_t ___thread_id;
	// System.IntPtr System.Threading.Thread::start_notify
	IntPtr_t39 ___start_notify;
	// System.IntPtr System.Threading.Thread::stack_ptr
	IntPtr_t39 ___stack_ptr;
	// System.UIntPtr System.Threading.Thread::static_data
	UIntPtr_t3170  ___static_data;
	// System.IntPtr System.Threading.Thread::jit_data
	IntPtr_t39 ___jit_data;
	// System.IntPtr System.Threading.Thread::lock_data
	IntPtr_t39 ___lock_data;
	// System.Object System.Threading.Thread::current_appcontext
	Object_t * ___current_appcontext;
	// System.Int32 System.Threading.Thread::stack_size
	int32_t ___stack_size;
	// System.Object System.Threading.Thread::start_obj
	Object_t * ___start_obj;
	// System.IntPtr System.Threading.Thread::appdomain_refs
	IntPtr_t39 ___appdomain_refs;
	// System.Int32 System.Threading.Thread::interruption_requested
	int32_t ___interruption_requested;
	// System.IntPtr System.Threading.Thread::suspend_event
	IntPtr_t39 ___suspend_event;
	// System.IntPtr System.Threading.Thread::suspended_event
	IntPtr_t39 ___suspended_event;
	// System.IntPtr System.Threading.Thread::resume_event
	IntPtr_t39 ___resume_event;
	// System.IntPtr System.Threading.Thread::synch_cs
	IntPtr_t39 ___synch_cs;
	// System.IntPtr System.Threading.Thread::serialized_culture_info
	IntPtr_t39 ___serialized_culture_info;
	// System.Int32 System.Threading.Thread::serialized_culture_info_len
	int32_t ___serialized_culture_info_len;
	// System.IntPtr System.Threading.Thread::serialized_ui_culture_info
	IntPtr_t39 ___serialized_ui_culture_info;
	// System.Int32 System.Threading.Thread::serialized_ui_culture_info_len
	int32_t ___serialized_ui_culture_info_len;
	// System.Boolean System.Threading.Thread::thread_dump_requested
	bool ___thread_dump_requested;
	// System.IntPtr System.Threading.Thread::end_stack
	IntPtr_t39 ___end_stack;
	// System.Boolean System.Threading.Thread::thread_interrupt_requested
	bool ___thread_interrupt_requested;
	// System.Byte System.Threading.Thread::apartment_state
	uint8_t ___apartment_state;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Thread::critical_region_level
	int32_t ___critical_region_level;
	// System.Int32 System.Threading.Thread::small_id
	int32_t ___small_id;
	// System.IntPtr System.Threading.Thread::manage_callback
	IntPtr_t39 ___manage_callback;
	// System.Object System.Threading.Thread::pending_exception
	Object_t * ___pending_exception;
	// System.Threading.ExecutionContext System.Threading.Thread::ec_to_set
	ExecutionContext_t3473 * ___ec_to_set;
	// System.IntPtr System.Threading.Thread::interrupt_on_stop
	IntPtr_t39 ___interrupt_on_stop;
	// System.IntPtr System.Threading.Thread::unused3
	IntPtr_t39 ___unused3;
	// System.IntPtr System.Threading.Thread::unused4
	IntPtr_t39 ___unused4;
	// System.IntPtr System.Threading.Thread::unused5
	IntPtr_t39 ___unused5;
	// System.IntPtr System.Threading.Thread::unused6
	IntPtr_t39 ___unused6;
	// System.MulticastDelegate System.Threading.Thread::threadstart
	MulticastDelegate_t38 * ___threadstart;
	// System.Int32 System.Threading.Thread::managed_id
	int32_t ___managed_id;
	// System.Security.Principal.IPrincipal System.Threading.Thread::_principal
	Object_t * ____principal;
	// System.Boolean System.Threading.Thread::in_currentculture
	bool ___in_currentculture;
};
struct Thread_t1419_StaticFields{
	// System.Collections.Hashtable System.Threading.Thread::datastorehash
	Hashtable_t48 * ___datastorehash;
	// System.Object System.Threading.Thread::datastore_lock
	Object_t * ___datastore_lock;
	// System.Object System.Threading.Thread::culture_lock
	Object_t * ___culture_lock;
};
struct Thread_t1419_ThreadStaticFields{
	// System.Object[] System.Threading.Thread::local_slots
	ObjectU5BU5D_t5* ___local_slots;
	// System.Threading.ExecutionContext System.Threading.Thread::_ec
	ExecutionContext_t3473 * ____ec;
};
