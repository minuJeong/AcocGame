#pragma once
#include <stdint.h>
// System.UInt16[]
struct UInt16U5BU5D_t2767;
// System.String
struct String_t;
// System.Text.RegularExpressions.QuickSearch
struct QuickSearch_t2797;
// System.Text.RegularExpressions.Interpreter/RepeatContext
struct RepeatContext_t2795;
// System.Text.RegularExpressions.Mark[]
struct MarkU5BU5D_t2798;
// System.Int32[]
struct Int32U5BU5D_t257;
// System.Text.RegularExpressions.BaseMachine
#include "System_System_Text_RegularExpressions_BaseMachine.h"
// System.Text.RegularExpressions.Interpreter/IntStack
#include "System_System_Text_RegularExpressions_Interpreter_IntStack.h"
// System.Text.RegularExpressions.Interpreter
struct Interpreter_t2799  : public BaseMachine_t2770
{
	// System.UInt16[] System.Text.RegularExpressions.Interpreter::program
	UInt16U5BU5D_t2767* ___program;
	// System.Int32 System.Text.RegularExpressions.Interpreter::program_start
	int32_t ___program_start;
	// System.String System.Text.RegularExpressions.Interpreter::text
	String_t* ___text;
	// System.Int32 System.Text.RegularExpressions.Interpreter::text_end
	int32_t ___text_end;
	// System.Int32 System.Text.RegularExpressions.Interpreter::group_count
	int32_t ___group_count;
	// System.Int32 System.Text.RegularExpressions.Interpreter::match_min
	int32_t ___match_min;
	// System.Text.RegularExpressions.QuickSearch System.Text.RegularExpressions.Interpreter::qs
	QuickSearch_t2797 * ___qs;
	// System.Int32 System.Text.RegularExpressions.Interpreter::scan_ptr
	int32_t ___scan_ptr;
	// System.Text.RegularExpressions.Interpreter/RepeatContext System.Text.RegularExpressions.Interpreter::repeat
	RepeatContext_t2795 * ___repeat;
	// System.Text.RegularExpressions.Interpreter/RepeatContext System.Text.RegularExpressions.Interpreter::fast
	RepeatContext_t2795 * ___fast;
	// System.Text.RegularExpressions.Interpreter/IntStack System.Text.RegularExpressions.Interpreter::stack
	IntStack_t2794  ___stack;
	// System.Text.RegularExpressions.Interpreter/RepeatContext System.Text.RegularExpressions.Interpreter::deep
	RepeatContext_t2795 * ___deep;
	// System.Text.RegularExpressions.Mark[] System.Text.RegularExpressions.Interpreter::marks
	MarkU5BU5D_t2798* ___marks;
	// System.Int32 System.Text.RegularExpressions.Interpreter::mark_start
	int32_t ___mark_start;
	// System.Int32 System.Text.RegularExpressions.Interpreter::mark_end
	int32_t ___mark_end;
	// System.Int32[] System.Text.RegularExpressions.Interpreter::groups
	Int32U5BU5D_t257* ___groups;
};
