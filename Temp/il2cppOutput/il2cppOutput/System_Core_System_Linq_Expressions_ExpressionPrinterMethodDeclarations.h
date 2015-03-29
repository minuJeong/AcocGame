#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Linq.Expressions.ExpressionPrinter
struct ExpressionPrinter_t2890;
// System.Text.StringBuilder
struct StringBuilder_t531;
// System.String
struct String_t;
// System.Linq.Expressions.Expression
struct Expression_t1562;
// System.Linq.Expressions.ElementInit
struct ElementInit_t2889;
// System.Linq.Expressions.MemberBinding
struct MemberBinding_t2892;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t5;
// System.Linq.Expressions.UnaryExpression
struct UnaryExpression_t2881;
// System.Linq.Expressions.BinaryExpression
struct BinaryExpression_t2887;
// System.Linq.Expressions.TypeBinaryExpression
struct TypeBinaryExpression_t2893;
// System.Linq.Expressions.ConstantExpression
struct ConstantExpression_t1570;
// System.Linq.Expressions.ConditionalExpression
struct ConditionalExpression_t2888;
// System.Linq.Expressions.ParameterExpression
struct ParameterExpression_t1564;
// System.Linq.Expressions.MemberExpression
struct MemberExpression_t1571;
// System.Linq.Expressions.MethodCallExpression
struct MethodCallExpression_t1565;
// System.Linq.Expressions.MemberAssignment
struct MemberAssignment_t2894;
// System.Linq.Expressions.MemberMemberBinding
struct MemberMemberBinding_t2895;
// System.Linq.Expressions.MemberListBinding
struct MemberListBinding_t2896;
// System.Linq.Expressions.LambdaExpression
struct LambdaExpression_t2877;
// System.Linq.Expressions.NewExpression
struct NewExpression_t2897;
// System.Linq.Expressions.MemberInitExpression
struct MemberInitExpression_t2898;
// System.Linq.Expressions.ListInitExpression
struct ListInitExpression_t2899;
// System.Linq.Expressions.NewArrayExpression
struct NewArrayExpression_t2900;
// System.Linq.Expressions.InvocationExpression
struct InvocationExpression_t2901;

// System.Void System.Linq.Expressions.ExpressionPrinter::.ctor(System.Text.StringBuilder)
 void ExpressionPrinter__ctor_m10020 (ExpressionPrinter_t2890 * __this, StringBuilder_t531 * ___builder, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::.ctor()
 void ExpressionPrinter__ctor_m10021 (ExpressionPrinter_t2890 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Linq.Expressions.ExpressionPrinter::ToString(System.Linq.Expressions.Expression)
 String_t* ExpressionPrinter_ToString_m10022 (Object_t * __this/* static, unused */, Expression_t1562 * ___expression, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Linq.Expressions.ExpressionPrinter::ToString(System.Linq.Expressions.ElementInit)
 String_t* ExpressionPrinter_ToString_m10023 (Object_t * __this/* static, unused */, ElementInit_t2889 * ___init, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Linq.Expressions.ExpressionPrinter::ToString(System.Linq.Expressions.MemberBinding)
 String_t* ExpressionPrinter_ToString_m10024 (Object_t * __this/* static, unused */, MemberBinding_t2892 * ___binding, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::Print(System.String)
 void ExpressionPrinter_Print_m10025 (ExpressionPrinter_t2890 * __this, String_t* ___str, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::Print(System.Object)
 void ExpressionPrinter_Print_m10026 (ExpressionPrinter_t2890 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::Print(System.String,System.Object[])
 void ExpressionPrinter_Print_m10027 (ExpressionPrinter_t2890 * __this, String_t* ___str, ObjectU5BU5D_t5* ___objs, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitElementInitializer(System.Linq.Expressions.ElementInit)
 void ExpressionPrinter_VisitElementInitializer_m10028 (ExpressionPrinter_t2890 * __this, ElementInit_t2889 * ___initializer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitUnary(System.Linq.Expressions.UnaryExpression)
 void ExpressionPrinter_VisitUnary_m10029 (ExpressionPrinter_t2890 * __this, UnaryExpression_t2881 * ___unary, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Linq.Expressions.ExpressionPrinter::OperatorToString(System.Linq.Expressions.BinaryExpression)
 String_t* ExpressionPrinter_OperatorToString_m10030 (Object_t * __this/* static, unused */, BinaryExpression_t2887 * ___binary, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Linq.Expressions.ExpressionPrinter::IsBoolean(System.Linq.Expressions.Expression)
 bool ExpressionPrinter_IsBoolean_m10031 (Object_t * __this/* static, unused */, Expression_t1562 * ___expression, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::PrintArrayIndex(System.Linq.Expressions.BinaryExpression)
 void ExpressionPrinter_PrintArrayIndex_m10032 (ExpressionPrinter_t2890 * __this, BinaryExpression_t2887 * ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitBinary(System.Linq.Expressions.BinaryExpression)
 void ExpressionPrinter_VisitBinary_m10033 (ExpressionPrinter_t2890 * __this, BinaryExpression_t2887 * ___binary, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitTypeIs(System.Linq.Expressions.TypeBinaryExpression)
 void ExpressionPrinter_VisitTypeIs_m10034 (ExpressionPrinter_t2890 * __this, TypeBinaryExpression_t2893 * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitConstant(System.Linq.Expressions.ConstantExpression)
 void ExpressionPrinter_VisitConstant_m10035 (ExpressionPrinter_t2890 * __this, ConstantExpression_t1570 * ___constant, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Linq.Expressions.ExpressionPrinter::HasStringRepresentation(System.Object)
 bool ExpressionPrinter_HasStringRepresentation_m10036 (Object_t * __this/* static, unused */, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitConditional(System.Linq.Expressions.ConditionalExpression)
 void ExpressionPrinter_VisitConditional_m10037 (ExpressionPrinter_t2890 * __this, ConditionalExpression_t2888 * ___conditional, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitParameter(System.Linq.Expressions.ParameterExpression)
 void ExpressionPrinter_VisitParameter_m10038 (ExpressionPrinter_t2890 * __this, ParameterExpression_t1564 * ___parameter, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitMemberAccess(System.Linq.Expressions.MemberExpression)
 void ExpressionPrinter_VisitMemberAccess_m10039 (ExpressionPrinter_t2890 * __this, MemberExpression_t1571 * ___access, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitMethodCall(System.Linq.Expressions.MethodCallExpression)
 void ExpressionPrinter_VisitMethodCall_m10040 (ExpressionPrinter_t2890 * __this, MethodCallExpression_t1565 * ___call, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitMemberAssignment(System.Linq.Expressions.MemberAssignment)
 void ExpressionPrinter_VisitMemberAssignment_m10041 (ExpressionPrinter_t2890 * __this, MemberAssignment_t2894 * ___assignment, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitMemberMemberBinding(System.Linq.Expressions.MemberMemberBinding)
 void ExpressionPrinter_VisitMemberMemberBinding_m10042 (ExpressionPrinter_t2890 * __this, MemberMemberBinding_t2895 * ___binding, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitMemberListBinding(System.Linq.Expressions.MemberListBinding)
 void ExpressionPrinter_VisitMemberListBinding_m10043 (ExpressionPrinter_t2890 * __this, MemberListBinding_t2896 * ___binding, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitLambda(System.Linq.Expressions.LambdaExpression)
 void ExpressionPrinter_VisitLambda_m10044 (ExpressionPrinter_t2890 * __this, LambdaExpression_t2877 * ___lambda, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitNew(System.Linq.Expressions.NewExpression)
 void ExpressionPrinter_VisitNew_m10045 (ExpressionPrinter_t2890 * __this, NewExpression_t2897 * ___nex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitMemberInit(System.Linq.Expressions.MemberInitExpression)
 void ExpressionPrinter_VisitMemberInit_m10046 (ExpressionPrinter_t2890 * __this, MemberInitExpression_t2898 * ___init, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitListInit(System.Linq.Expressions.ListInitExpression)
 void ExpressionPrinter_VisitListInit_m10047 (ExpressionPrinter_t2890 * __this, ListInitExpression_t2899 * ___init, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitNewArray(System.Linq.Expressions.NewArrayExpression)
 void ExpressionPrinter_VisitNewArray_m10048 (ExpressionPrinter_t2890 * __this, NewArrayExpression_t2900 * ___newArray, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionPrinter::VisitInvocation(System.Linq.Expressions.InvocationExpression)
 void ExpressionPrinter_VisitInvocation_m10049 (ExpressionPrinter_t2890 * __this, InvocationExpression_t2901 * ___invocation, MethodInfo* method) IL2CPP_METHOD_ATTR;
