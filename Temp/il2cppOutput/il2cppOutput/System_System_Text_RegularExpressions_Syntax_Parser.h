#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Collections.ArrayList
struct ArrayList_t94;
// System.Collections.Hashtable
struct Hashtable_t48;
// System.Object
#include "mscorlib_System_Object.h"
// System.Text.RegularExpressions.Syntax.Parser
struct Parser_t2802  : public Object_t
{
	// System.String System.Text.RegularExpressions.Syntax.Parser::pattern
	String_t* ___pattern;
	// System.Int32 System.Text.RegularExpressions.Syntax.Parser::ptr
	int32_t ___ptr;
	// System.Collections.ArrayList System.Text.RegularExpressions.Syntax.Parser::caps
	ArrayList_t94 * ___caps;
	// System.Collections.Hashtable System.Text.RegularExpressions.Syntax.Parser::refs
	Hashtable_t48 * ___refs;
	// System.Int32 System.Text.RegularExpressions.Syntax.Parser::num_groups
	int32_t ___num_groups;
	// System.Int32 System.Text.RegularExpressions.Syntax.Parser::gap
	int32_t ___gap;
};
