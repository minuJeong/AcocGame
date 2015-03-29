#pragma once
#include <stdint.h>
// System.Linq.Expressions.NewExpression
struct NewExpression_t2897;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.MemberBinding>
struct ReadOnlyCollection_1_t2903;
// System.Linq.Expressions.Expression
#include "System_Core_System_Linq_Expressions_Expression.h"
// System.Linq.Expressions.MemberInitExpression
struct MemberInitExpression_t2898  : public Expression_t1562
{
	// System.Linq.Expressions.NewExpression System.Linq.Expressions.MemberInitExpression::new_expression
	NewExpression_t2897 * ___new_expression;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.MemberBinding> System.Linq.Expressions.MemberInitExpression::bindings
	ReadOnlyCollection_1_t2903 * ___bindings;
};
