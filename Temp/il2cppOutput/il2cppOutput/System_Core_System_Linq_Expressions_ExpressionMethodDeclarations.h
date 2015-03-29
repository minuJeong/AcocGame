#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Linq.Expressions.Expression
struct Expression_t1562;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Reflection.ParameterInfo
struct ParameterInfo_t290;
// System.Linq.Expressions.MethodCallExpression
struct MethodCallExpression_t1565;
// System.Reflection.MethodInfo
struct MethodInfo_t292;
// System.Linq.Expressions.Expression[]
struct ExpressionU5BU5D_t1561;
// System.Collections.Generic.IEnumerable`1<System.Linq.Expressions.Expression>
struct IEnumerable_1_t2879;
// System.Linq.Expressions.ConstantExpression
struct ConstantExpression_t1570;
// System.Object
struct Object_t;
// System.Linq.Expressions.MemberExpression
struct MemberExpression_t1571;
// System.Reflection.FieldInfo
struct FieldInfo_t961;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression>
struct ReadOnlyCollection_1_t2877;
// System.Collections.Generic.IList`1<System.Linq.Expressions.Expression>
struct IList_1_t2880;
// System.Reflection.MethodBase
struct MethodBase_t424;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression>
struct ReadOnlyCollection_1_t2881;
// System.Linq.Expressions.UnaryExpression
struct UnaryExpression_t2882;
// System.Linq.Expressions.ExpressionType
#include "System_Core_System_Linq_Expressions_ExpressionType.h"

// System.Void System.Linq.Expressions.Expression::.ctor(System.Linq.Expressions.ExpressionType,System.Type)
 void Expression__ctor_m9998 (Expression_t1562 * __this, int32_t ___node_type, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Linq.Expressions.ExpressionType System.Linq.Expressions.Expression::get_NodeType()
 int32_t Expression_get_NodeType_m9999 (Expression_t1562 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Linq.Expressions.Expression::get_Type()
 Type_t * Expression_get_Type_m10000 (Expression_t1562 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Linq.Expressions.Expression::ToString()
 String_t* Expression_ToString_m10001 (Expression_t1562 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Linq.Expressions.Expression::IsAssignableToParameterType(System.Type,System.Reflection.ParameterInfo)
 bool Expression_IsAssignableToParameterType_m10002 (Object_t * __this/* static, unused */, Type_t * ___type, ParameterInfo_t290 * ___param, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Linq.Expressions.MethodCallExpression System.Linq.Expressions.Expression::Call(System.Linq.Expressions.Expression,System.Reflection.MethodInfo,System.Linq.Expressions.Expression[])
 MethodCallExpression_t1565 * Expression_Call_m6831 (Object_t * __this/* static, unused */, Expression_t1562 * ___instance, MethodInfo_t292 * ___method, ExpressionU5BU5D_t1561* ___arguments, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Linq.Expressions.MethodCallExpression System.Linq.Expressions.Expression::Call(System.Linq.Expressions.Expression,System.Reflection.MethodInfo,System.Collections.Generic.IEnumerable`1<System.Linq.Expressions.Expression>)
 MethodCallExpression_t1565 * Expression_Call_m10003 (Object_t * __this/* static, unused */, Expression_t1562 * ___instance, MethodInfo_t292 * ___method, Object_t* ___arguments, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Linq.Expressions.ConstantExpression System.Linq.Expressions.Expression::Constant(System.Object)
 ConstantExpression_t1570 * Expression_Constant_m6828 (Object_t * __this/* static, unused */, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Linq.Expressions.ConstantExpression System.Linq.Expressions.Expression::Constant(System.Object,System.Type)
 ConstantExpression_t1570 * Expression_Constant_m10004 (Object_t * __this/* static, unused */, Object_t * ___value, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Linq.Expressions.MemberExpression System.Linq.Expressions.Expression::Field(System.Linq.Expressions.Expression,System.Reflection.FieldInfo)
 MemberExpression_t1571 * Expression_Field_m6830 (Object_t * __this/* static, unused */, Expression_t1562 * ___expression, FieldInfo_t961 * ___field, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Linq.Expressions.Expression::CanAssign(System.Type,System.Type)
 bool Expression_CanAssign_m10005 (Object_t * __this/* static, unused */, Type_t * ___target, Type_t * ___source, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Linq.Expressions.Expression System.Linq.Expressions.Expression::CheckLambda(System.Type,System.Linq.Expressions.Expression,System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression>)
 Expression_t1562 * Expression_CheckLambda_m10006 (Object_t * __this/* static, unused */, Type_t * ___delegateType, Expression_t1562 * ___body, ReadOnlyCollection_1_t2877 * ___parameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Linq.Expressions.Expression> System.Linq.Expressions.Expression::CreateArgumentList(System.Collections.Generic.IEnumerable`1<System.Linq.Expressions.Expression>)
 Object_t* Expression_CreateArgumentList_m10007 (Object_t * __this/* static, unused */, Object_t* ___arguments, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.Expression::CheckNonGenericMethod(System.Reflection.MethodBase)
 void Expression_CheckNonGenericMethod_m10008 (Object_t * __this/* static, unused */, MethodBase_t424 * ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression> System.Linq.Expressions.Expression::CheckMethodArguments(System.Reflection.MethodBase,System.Collections.Generic.IEnumerable`1<System.Linq.Expressions.Expression>)
 ReadOnlyCollection_1_t2881 * Expression_CheckMethodArguments_m10009 (Object_t * __this/* static, unused */, MethodBase_t424 * ___method, Object_t* ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Linq.Expressions.UnaryExpression System.Linq.Expressions.Expression::Quote(System.Linq.Expressions.Expression)
 UnaryExpression_t2882 * Expression_Quote_m10010 (Object_t * __this/* static, unused */, Expression_t1562 * ___expression, MethodInfo* method) IL2CPP_METHOD_ATTR;
