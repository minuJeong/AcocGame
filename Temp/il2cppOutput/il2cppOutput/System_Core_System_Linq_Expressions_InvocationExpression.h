#pragma once
#include <stdint.h>
// System.Linq.Expressions.Expression
struct Expression_t1562;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression>
struct ReadOnlyCollection_1_t2880;
// System.Linq.Expressions.Expression
#include "System_Core_System_Linq_Expressions_Expression.h"
// System.Linq.Expressions.InvocationExpression
struct InvocationExpression_t2901  : public Expression_t1562
{
	// System.Linq.Expressions.Expression System.Linq.Expressions.InvocationExpression::expression
	Expression_t1562 * ___expression;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression> System.Linq.Expressions.InvocationExpression::arguments
	ReadOnlyCollection_1_t2880 * ___arguments;
};
