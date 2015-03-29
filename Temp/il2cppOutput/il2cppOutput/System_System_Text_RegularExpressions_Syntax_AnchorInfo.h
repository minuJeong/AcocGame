#pragma once
#include <stdint.h>
// System.Text.RegularExpressions.Syntax.Expression
struct Expression_t2806;
// System.String
struct String_t;
// System.Object
#include "mscorlib_System_Object.h"
// System.Text.RegularExpressions.Position
#include "System_System_Text_RegularExpressions_Position.h"
// System.Text.RegularExpressions.Syntax.AnchorInfo
struct AnchorInfo_t2811  : public Object_t
{
	// System.Text.RegularExpressions.Syntax.Expression System.Text.RegularExpressions.Syntax.AnchorInfo::expr
	Expression_t2806 * ___expr;
	// System.Text.RegularExpressions.Position System.Text.RegularExpressions.Syntax.AnchorInfo::pos
	uint16_t ___pos;
	// System.Int32 System.Text.RegularExpressions.Syntax.AnchorInfo::offset
	int32_t ___offset;
	// System.String System.Text.RegularExpressions.Syntax.AnchorInfo::str
	String_t* ___str;
	// System.Int32 System.Text.RegularExpressions.Syntax.AnchorInfo::width
	int32_t ___width;
	// System.Boolean System.Text.RegularExpressions.Syntax.AnchorInfo::ignore
	bool ___ignore;
};
