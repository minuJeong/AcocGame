#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Linq.Expressions.LambdaExpression
struct LambdaExpression_t2877;
// System.Linq.Expressions.Expression
struct Expression_t1562;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression>
struct ReadOnlyCollection_1_t2876;
// System.Type
struct Type_t;

// System.Void System.Linq.Expressions.LambdaExpression::.ctor(System.Type,System.Linq.Expressions.Expression,System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression>)
 void LambdaExpression__ctor_m9993 (LambdaExpression_t2877 * __this, Type_t * ___delegateType, Expression_t1562 * ___body, ReadOnlyCollection_1_t2876 * ___parameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Linq.Expressions.Expression System.Linq.Expressions.LambdaExpression::get_Body()
 Expression_t1562 * LambdaExpression_get_Body_m6831 (LambdaExpression_t2877 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression> System.Linq.Expressions.LambdaExpression::get_Parameters()
 ReadOnlyCollection_1_t2876 * LambdaExpression_get_Parameters_m9994 (LambdaExpression_t2877 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
