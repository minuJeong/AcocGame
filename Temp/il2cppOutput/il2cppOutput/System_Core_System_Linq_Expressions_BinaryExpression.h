#pragma once
#include <stdint.h>
// System.Linq.Expressions.Expression
struct Expression_t1562;
// System.Linq.Expressions.LambdaExpression
struct LambdaExpression_t2878;
// System.Linq.Expressions.Expression
#include "System_Core_System_Linq_Expressions_Expression.h"
// System.Linq.Expressions.BinaryExpression
struct BinaryExpression_t2888  : public Expression_t1562
{
	// System.Linq.Expressions.Expression System.Linq.Expressions.BinaryExpression::left
	Expression_t1562 * ___left;
	// System.Linq.Expressions.Expression System.Linq.Expressions.BinaryExpression::right
	Expression_t1562 * ___right;
	// System.Linq.Expressions.LambdaExpression System.Linq.Expressions.BinaryExpression::conversion
	LambdaExpression_t2878 * ___conversion;
};
