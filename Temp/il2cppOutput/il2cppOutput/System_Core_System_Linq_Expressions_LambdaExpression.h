#pragma once
#include <stdint.h>
// System.Linq.Expressions.Expression
struct Expression_t1562;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression>
struct ReadOnlyCollection_1_t2876;
// System.Linq.Expressions.Expression
#include "System_Core_System_Linq_Expressions_Expression.h"
// System.Linq.Expressions.LambdaExpression
struct LambdaExpression_t2877  : public Expression_t1562
{
	// System.Linq.Expressions.Expression System.Linq.Expressions.LambdaExpression::body
	Expression_t1562 * ___body;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression> System.Linq.Expressions.LambdaExpression::parameters
	ReadOnlyCollection_1_t2876 * ___parameters;
};
