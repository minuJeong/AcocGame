#pragma once
#include <stdint.h>
// System.Text.RegularExpressions.Syntax.ExpressionAssertion
struct ExpressionAssertion_t2807;
// System.Text.RegularExpressions.Syntax.CapturingGroup
struct CapturingGroup_t2813;
// System.Text.RegularExpressions.Syntax.Literal
struct Literal_t2817;
// System.Text.RegularExpressions.Syntax.Assertion
#include "System_System_Text_RegularExpressions_Syntax_Assertion.h"
// System.Text.RegularExpressions.Syntax.CaptureAssertion
struct CaptureAssertion_t2818  : public Assertion_t2805
{
	// System.Text.RegularExpressions.Syntax.ExpressionAssertion System.Text.RegularExpressions.Syntax.CaptureAssertion::alternate
	ExpressionAssertion_t2807 * ___alternate;
	// System.Text.RegularExpressions.Syntax.CapturingGroup System.Text.RegularExpressions.Syntax.CaptureAssertion::group
	CapturingGroup_t2813 * ___group;
	// System.Text.RegularExpressions.Syntax.Literal System.Text.RegularExpressions.Syntax.CaptureAssertion::literal
	Literal_t2817 * ___literal;
};
