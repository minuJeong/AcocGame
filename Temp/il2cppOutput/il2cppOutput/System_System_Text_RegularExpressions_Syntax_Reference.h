#pragma once
#include <stdint.h>
// System.Text.RegularExpressions.Syntax.CapturingGroup
struct CapturingGroup_t2815;
// System.Text.RegularExpressions.Syntax.Expression
#include "System_System_Text_RegularExpressions_Syntax_Expression.h"
// System.Text.RegularExpressions.Syntax.Reference
struct Reference_t2823  : public Expression_t2808
{
	// System.Text.RegularExpressions.Syntax.CapturingGroup System.Text.RegularExpressions.Syntax.Reference::group
	CapturingGroup_t2815 * ___group;
	// System.Boolean System.Text.RegularExpressions.Syntax.Reference::ignore
	bool ___ignore;
};
