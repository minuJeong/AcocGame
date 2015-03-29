#pragma once
#include <stdint.h>
// System.Object
struct Object_t;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t2387;
// System.AsyncCallback
struct AsyncCallback_t35;
// System.Object
#include "mscorlib_System_Object.h"
// System.IO.FileStreamAsyncResult
struct FileStreamAsyncResult_t3346  : public Object_t
{
	// System.Object System.IO.FileStreamAsyncResult::state
	Object_t * ___state;
	// System.Threading.ManualResetEvent System.IO.FileStreamAsyncResult::wh
	ManualResetEvent_t2387 * ___wh;
	// System.AsyncCallback System.IO.FileStreamAsyncResult::cb
	AsyncCallback_t35 * ___cb;
	// System.Int32 System.IO.FileStreamAsyncResult::Count
	int32_t ___Count;
	// System.Int32 System.IO.FileStreamAsyncResult::OriginalCount
	int32_t ___OriginalCount;
	// System.Int32 System.IO.FileStreamAsyncResult::BytesRead
	int32_t ___BytesRead;
	// System.AsyncCallback System.IO.FileStreamAsyncResult::realcb
	AsyncCallback_t35 * ___realcb;
};
