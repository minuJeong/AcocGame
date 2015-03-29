#pragma once
#include <stdint.h>
// System.Threading.Tasks.TaskCompletionSource`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>
struct TaskCompletionSource_1_t1213;
// System.Byte[]
struct ByteU5BU5D_t21;
// System.Collections.Hashtable
struct Hashtable_t48;
// System.IDisposable
struct IDisposable_t89;
// System.Uri
struct Uri_t80;
// System.String
struct String_t;
// System.IProgress`1<Parse.ParseUploadProgressEventArgs>
struct IProgress_1_t1100;
// System.Object
#include "mscorlib_System_Object.h"
// System.Threading.CancellationToken
#include "Parse_Unity_System_Threading_CancellationToken.h"
// Parse.PlatformHooks/<>c__DisplayClass30
struct U3CU3Ec__DisplayClass30_t1211  : public Object_t
{
	// System.Threading.Tasks.TaskCompletionSource`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>> Parse.PlatformHooks/<>c__DisplayClass30::tcs
	TaskCompletionSource_1_t1213 * ___tcs;
	// System.Byte[] Parse.PlatformHooks/<>c__DisplayClass30::bytes
	ByteU5BU5D_t21* ___bytes;
	// System.Collections.Hashtable Parse.PlatformHooks/<>c__DisplayClass30::headerTable
	Hashtable_t48 * ___headerTable;
	// System.IDisposable Parse.PlatformHooks/<>c__DisplayClass30::toDisposeAfterReading
	Object_t * ___toDisposeAfterReading;
	// System.Uri Parse.PlatformHooks/<>c__DisplayClass30::uri
	Uri_t80 * ___uri;
	// System.String Parse.PlatformHooks/<>c__DisplayClass30::method
	String_t* ___method;
	// System.IProgress`1<Parse.ParseUploadProgressEventArgs> Parse.PlatformHooks/<>c__DisplayClass30::progress
	Object_t* ___progress;
	// System.Threading.CancellationToken Parse.PlatformHooks/<>c__DisplayClass30::cancellationToken
	CancellationToken_t992  ___cancellationToken;
};
