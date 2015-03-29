#pragma once
#include <stdint.h>
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression>
struct ReadOnlyCollection_1_t2880;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.MemberInfo>
struct ReadOnlyCollection_1_t2907;
// System.Linq.Expressions.Expression
#include "System_Core_System_Linq_Expressions_Expression.h"
// System.Linq.Expressions.NewExpression
struct NewExpression_t2897  : public Expression_t1562
{
	// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression> System.Linq.Expressions.NewExpression::arguments
	ReadOnlyCollection_1_t2880 * ___arguments;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.MemberInfo> System.Linq.Expressions.NewExpression::members
	ReadOnlyCollection_1_t2907 * ___members;
};
