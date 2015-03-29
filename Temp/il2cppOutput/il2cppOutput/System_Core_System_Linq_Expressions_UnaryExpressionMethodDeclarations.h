#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Linq.Expressions.UnaryExpression
struct UnaryExpression_t2881;
// System.Linq.Expressions.Expression
struct Expression_t1562;
// System.Type
struct Type_t;
// System.Linq.Expressions.ExpressionType
#include "System_Core_System_Linq_Expressions_ExpressionType.h"

// System.Void System.Linq.Expressions.UnaryExpression::.ctor(System.Linq.Expressions.ExpressionType,System.Linq.Expressions.Expression,System.Type)
 void UnaryExpression__ctor_m10106 (UnaryExpression_t2881 * __this, int32_t ___node_type, Expression_t1562 * ___operand, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Linq.Expressions.Expression System.Linq.Expressions.UnaryExpression::get_Operand()
 Expression_t1562 * UnaryExpression_get_Operand_m10107 (UnaryExpression_t2881 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
