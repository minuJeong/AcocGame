#pragma once
#include <stdint.h>
// System.IntPtr[]
struct IntPtrU5BU5D_t2546;
// System.Exception
struct Exception_t107;
// System.String
struct String_t;
// System.Collections.IDictionary
struct IDictionary_t255;
// System.Object
#include "mscorlib_System_Object.h"
// System.Exception
struct Exception_t107  : public Object_t
{
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t2546* ___trace_ips;
	// System.Exception System.Exception::inner_exception
	Exception_t107 * ___inner_exception;
	// System.String System.Exception::message
	String_t* ___message;
	// System.String System.Exception::help_link
	String_t* ___help_link;
	// System.String System.Exception::class_name
	String_t* ___class_name;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult;
	// System.String System.Exception::source
	String_t* ___source;
	// System.Collections.IDictionary System.Exception::_data
	Object_t * ____data;
};
