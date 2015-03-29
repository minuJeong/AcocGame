#pragma once
#include <stdint.h>
// System.Object
struct Object_t;
// System.Exception
struct Exception_t107;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t2387;
// System.Object
#include "mscorlib_System_Object.h"
// System.IO.StreamAsyncResult
struct StreamAsyncResult_t3353  : public Object_t
{
	// System.Object System.IO.StreamAsyncResult::state
	Object_t * ___state;
	// System.Boolean System.IO.StreamAsyncResult::completed
	bool ___completed;
	// System.Boolean System.IO.StreamAsyncResult::done
	bool ___done;
	// System.Exception System.IO.StreamAsyncResult::exc
	Exception_t107 * ___exc;
	// System.Int32 System.IO.StreamAsyncResult::nbytes
	int32_t ___nbytes;
	// System.Threading.ManualResetEvent System.IO.StreamAsyncResult::wh
	ManualResetEvent_t2387 * ___wh;
};
