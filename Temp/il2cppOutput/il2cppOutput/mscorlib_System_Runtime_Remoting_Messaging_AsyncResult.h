#pragma once
#include <stdint.h>
// System.Object
struct Object_t;
// System.Threading.WaitHandle
struct WaitHandle_t2430;
// System.Threading.ExecutionContext
struct ExecutionContext_t3473;
// System.Runtime.Remoting.Messaging.MonoMethodMessage
struct MonoMethodMessage_t3474;
// System.Runtime.Remoting.Messaging.IMessageCtrl
struct IMessageCtrl_t3475;
// System.Runtime.Remoting.Messaging.IMessage
struct IMessage_t3476;
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Runtime.Remoting.Messaging.AsyncResult
struct AsyncResult_t3477  : public Object_t
{
	// System.Object System.Runtime.Remoting.Messaging.AsyncResult::async_state
	Object_t * ___async_state;
	// System.Threading.WaitHandle System.Runtime.Remoting.Messaging.AsyncResult::handle
	WaitHandle_t2430 * ___handle;
	// System.Object System.Runtime.Remoting.Messaging.AsyncResult::async_delegate
	Object_t * ___async_delegate;
	// System.IntPtr System.Runtime.Remoting.Messaging.AsyncResult::data
	IntPtr_t39 ___data;
	// System.Object System.Runtime.Remoting.Messaging.AsyncResult::object_data
	Object_t * ___object_data;
	// System.Boolean System.Runtime.Remoting.Messaging.AsyncResult::sync_completed
	bool ___sync_completed;
	// System.Boolean System.Runtime.Remoting.Messaging.AsyncResult::completed
	bool ___completed;
	// System.Boolean System.Runtime.Remoting.Messaging.AsyncResult::endinvoke_called
	bool ___endinvoke_called;
	// System.Object System.Runtime.Remoting.Messaging.AsyncResult::async_callback
	Object_t * ___async_callback;
	// System.Threading.ExecutionContext System.Runtime.Remoting.Messaging.AsyncResult::current
	ExecutionContext_t3473 * ___current;
	// System.Threading.ExecutionContext System.Runtime.Remoting.Messaging.AsyncResult::original
	ExecutionContext_t3473 * ___original;
	// System.Runtime.Remoting.Messaging.MonoMethodMessage System.Runtime.Remoting.Messaging.AsyncResult::call_message
	MonoMethodMessage_t3474 * ___call_message;
	// System.Runtime.Remoting.Messaging.IMessageCtrl System.Runtime.Remoting.Messaging.AsyncResult::message_ctrl
	Object_t * ___message_ctrl;
	// System.Runtime.Remoting.Messaging.IMessage System.Runtime.Remoting.Messaging.AsyncResult::reply_message
	Object_t * ___reply_message;
};
