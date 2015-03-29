#pragma once
#include <stdint.h>
// System.Linq.Expressions.NewExpression
struct NewExpression_t2897;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ElementInit>
struct ReadOnlyCollection_1_t2904;
// System.Linq.Expressions.Expression
#include "System_Core_System_Linq_Expressions_Expression.h"
// System.Linq.Expressions.ListInitExpression
struct ListInitExpression_t2899  : public Expression_t1562
{
	// System.Linq.Expressions.NewExpression System.Linq.Expressions.ListInitExpression::new_expression
	NewExpression_t2897 * ___new_expression;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ElementInit> System.Linq.Expressions.ListInitExpression::initializers
	ReadOnlyCollection_1_t2904 * ___initializers;
};
