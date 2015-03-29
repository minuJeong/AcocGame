#pragma once
#include <stdint.h>
// System.Linq.Expressions.Expression
struct Expression_t1562;
// System.Linq.Expressions.Expression
#include "System_Core_System_Linq_Expressions_Expression.h"
// System.Linq.Expressions.ConditionalExpression
struct ConditionalExpression_t2889  : public Expression_t1562
{
	// System.Linq.Expressions.Expression System.Linq.Expressions.ConditionalExpression::test
	Expression_t1562 * ___test;
	// System.Linq.Expressions.Expression System.Linq.Expressions.ConditionalExpression::if_true
	Expression_t1562 * ___if_true;
	// System.Linq.Expressions.Expression System.Linq.Expressions.ConditionalExpression::if_false
	Expression_t1562 * ___if_false;
};
