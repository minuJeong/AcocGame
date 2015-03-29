#pragma once
#include <stdint.h>
// System.Reflection.MethodBase
struct MethodBase_t424;
// System.String
struct String_t;
// System.Object
#include "mscorlib_System_Object.h"
// System.Diagnostics.StackFrame
struct StackFrame_t2704  : public Object_t
{
	// System.Int32 System.Diagnostics.StackFrame::ilOffset
	int32_t ___ilOffset;
	// System.Int32 System.Diagnostics.StackFrame::nativeOffset
	int32_t ___nativeOffset;
	// System.Reflection.MethodBase System.Diagnostics.StackFrame::methodBase
	MethodBase_t424 * ___methodBase;
	// System.String System.Diagnostics.StackFrame::fileName
	String_t* ___fileName;
	// System.Int32 System.Diagnostics.StackFrame::lineNumber
	int32_t ___lineNumber;
	// System.Int32 System.Diagnostics.StackFrame::columnNumber
	int32_t ___columnNumber;
	// System.String System.Diagnostics.StackFrame::internalMethodName
	String_t* ___internalMethodName;
};
