#pragma once
#include <stdint.h>
// System.Linq.Expressions.Expression
struct Expression_t1562;
// System.Reflection.MethodInfo
struct MethodInfo_t292;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression>
struct ReadOnlyCollection_1_t2880;
// System.Linq.Expressions.Expression
#include "System_Core_System_Linq_Expressions_Expression.h"
// System.Linq.Expressions.MethodCallExpression
struct MethodCallExpression_t1565  : public Expression_t1562
{
	// System.Linq.Expressions.Expression System.Linq.Expressions.MethodCallExpression::obj
	Expression_t1562 * ___obj;
	// System.Reflection.MethodInfo System.Linq.Expressions.MethodCallExpression::method
	MethodInfo_t292 * ___method;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression> System.Linq.Expressions.MethodCallExpression::arguments
	ReadOnlyCollection_1_t2880 * ___arguments;
};
