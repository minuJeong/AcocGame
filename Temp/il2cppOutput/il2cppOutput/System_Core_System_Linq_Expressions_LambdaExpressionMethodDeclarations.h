#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Linq.Expressions.LambdaExpression
struct LambdaExpression_t2878;
// System.Linq.Expressions.Expression
struct Expression_t1562;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression>
struct ReadOnlyCollection_1_t2877;
// System.Type
struct Type_t;

// System.Void System.Linq.Expressions.LambdaExpression::.ctor(System.Type,System.Linq.Expressions.Expression,System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression>)
 void LambdaExpression__ctor_m9996 (LambdaExpression_t2878 * __this, Type_t * ___delegateType, Expression_t1562 * ___body, ReadOnlyCollection_1_t2877 * ___parameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Linq.Expressions.Expression System.Linq.Expressions.LambdaExpression::get_Body()
 Expression_t1562 * LambdaExpression_get_Body_m6833 (LambdaExpression_t2878 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression> System.Linq.Expressions.LambdaExpression::get_Parameters()
 ReadOnlyCollection_1_t2877 * LambdaExpression_get_Parameters_m9997 (LambdaExpression_t2878 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
