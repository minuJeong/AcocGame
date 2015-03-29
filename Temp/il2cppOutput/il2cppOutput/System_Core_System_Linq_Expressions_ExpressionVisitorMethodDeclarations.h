#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Linq.Expressions.ExpressionVisitor
struct ExpressionVisitor_t2892;
// System.Linq.Expressions.Expression
struct Expression_t1562;
// System.Linq.Expressions.MemberBinding
struct MemberBinding_t2893;
// System.Linq.Expressions.ElementInit
struct ElementInit_t2890;
// System.Linq.Expressions.UnaryExpression
struct UnaryExpression_t2882;
// System.Linq.Expressions.BinaryExpression
struct BinaryExpression_t2888;
// System.Linq.Expressions.TypeBinaryExpression
struct TypeBinaryExpression_t2894;
// System.Linq.Expressions.ConstantExpression
struct ConstantExpression_t1570;
// System.Linq.Expressions.ConditionalExpression
struct ConditionalExpression_t2889;
// System.Linq.Expressions.ParameterExpression
struct ParameterExpression_t1564;
// System.Linq.Expressions.MemberExpression
struct MemberExpression_t1571;
// System.Linq.Expressions.MethodCallExpression
struct MethodCallExpression_t1565;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression>
struct ReadOnlyCollection_1_t2881;
// System.Linq.Expressions.MemberAssignment
struct MemberAssignment_t2895;
// System.Linq.Expressions.MemberMemberBinding
struct MemberMemberBinding_t2896;
// System.Linq.Expressions.MemberListBinding
struct MemberListBinding_t2897;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.MemberBinding>
struct ReadOnlyCollection_1_t2904;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ElementInit>
struct ReadOnlyCollection_1_t2905;
// System.Linq.Expressions.LambdaExpression
struct LambdaExpression_t2878;
// System.Linq.Expressions.NewExpression
struct NewExpression_t2898;
// System.Linq.Expressions.MemberInitExpression
struct MemberInitExpression_t2899;
// System.Linq.Expressions.ListInitExpression
struct ListInitExpression_t2900;
// System.Linq.Expressions.NewArrayExpression
struct NewArrayExpression_t2901;
// System.Linq.Expressions.InvocationExpression
struct InvocationExpression_t2902;

// System.Void System.Linq.Expressions.ExpressionVisitor::.ctor()
 void ExpressionVisitor__ctor_m10053 (ExpressionVisitor_t2892 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::Visit(System.Linq.Expressions.Expression)
 void ExpressionVisitor_Visit_m10054 (ExpressionVisitor_t2892 * __this, Expression_t1562 * ___expression, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitBinding(System.Linq.Expressions.MemberBinding)
 void ExpressionVisitor_VisitBinding_m10055 (ExpressionVisitor_t2892 * __this, MemberBinding_t2893 * ___binding, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitElementInitializer(System.Linq.Expressions.ElementInit)
 void ExpressionVisitor_VisitElementInitializer_m10056 (ExpressionVisitor_t2892 * __this, ElementInit_t2890 * ___initializer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitUnary(System.Linq.Expressions.UnaryExpression)
 void ExpressionVisitor_VisitUnary_m10057 (ExpressionVisitor_t2892 * __this, UnaryExpression_t2882 * ___unary, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitBinary(System.Linq.Expressions.BinaryExpression)
 void ExpressionVisitor_VisitBinary_m10058 (ExpressionVisitor_t2892 * __this, BinaryExpression_t2888 * ___binary, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitTypeIs(System.Linq.Expressions.TypeBinaryExpression)
 void ExpressionVisitor_VisitTypeIs_m10059 (ExpressionVisitor_t2892 * __this, TypeBinaryExpression_t2894 * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitConstant(System.Linq.Expressions.ConstantExpression)
 void ExpressionVisitor_VisitConstant_m10060 (ExpressionVisitor_t2892 * __this, ConstantExpression_t1570 * ___constant, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitConditional(System.Linq.Expressions.ConditionalExpression)
 void ExpressionVisitor_VisitConditional_m10061 (ExpressionVisitor_t2892 * __this, ConditionalExpression_t2889 * ___conditional, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitParameter(System.Linq.Expressions.ParameterExpression)
 void ExpressionVisitor_VisitParameter_m10062 (ExpressionVisitor_t2892 * __this, ParameterExpression_t1564 * ___parameter, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitMemberAccess(System.Linq.Expressions.MemberExpression)
 void ExpressionVisitor_VisitMemberAccess_m10063 (ExpressionVisitor_t2892 * __this, MemberExpression_t1571 * ___member, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitMethodCall(System.Linq.Expressions.MethodCallExpression)
 void ExpressionVisitor_VisitMethodCall_m10064 (ExpressionVisitor_t2892 * __this, MethodCallExpression_t1565 * ___methodCall, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitExpressionList(System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression>)
 void ExpressionVisitor_VisitExpressionList_m10065 (ExpressionVisitor_t2892 * __this, ReadOnlyCollection_1_t2881 * ___list, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitMemberAssignment(System.Linq.Expressions.MemberAssignment)
 void ExpressionVisitor_VisitMemberAssignment_m10066 (ExpressionVisitor_t2892 * __this, MemberAssignment_t2895 * ___assignment, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitMemberMemberBinding(System.Linq.Expressions.MemberMemberBinding)
 void ExpressionVisitor_VisitMemberMemberBinding_m10067 (ExpressionVisitor_t2892 * __this, MemberMemberBinding_t2896 * ___binding, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitMemberListBinding(System.Linq.Expressions.MemberListBinding)
 void ExpressionVisitor_VisitMemberListBinding_m10068 (ExpressionVisitor_t2892 * __this, MemberListBinding_t2897 * ___binding, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitBindingList(System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.MemberBinding>)
 void ExpressionVisitor_VisitBindingList_m10069 (ExpressionVisitor_t2892 * __this, ReadOnlyCollection_1_t2904 * ___list, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitElementInitializerList(System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ElementInit>)
 void ExpressionVisitor_VisitElementInitializerList_m10070 (ExpressionVisitor_t2892 * __this, ReadOnlyCollection_1_t2905 * ___list, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitLambda(System.Linq.Expressions.LambdaExpression)
 void ExpressionVisitor_VisitLambda_m10071 (ExpressionVisitor_t2892 * __this, LambdaExpression_t2878 * ___lambda, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitNew(System.Linq.Expressions.NewExpression)
 void ExpressionVisitor_VisitNew_m10072 (ExpressionVisitor_t2892 * __this, NewExpression_t2898 * ___nex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitMemberInit(System.Linq.Expressions.MemberInitExpression)
 void ExpressionVisitor_VisitMemberInit_m10073 (ExpressionVisitor_t2892 * __this, MemberInitExpression_t2899 * ___init, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitListInit(System.Linq.Expressions.ListInitExpression)
 void ExpressionVisitor_VisitListInit_m10074 (ExpressionVisitor_t2892 * __this, ListInitExpression_t2900 * ___init, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitNewArray(System.Linq.Expressions.NewArrayExpression)
 void ExpressionVisitor_VisitNewArray_m10075 (ExpressionVisitor_t2892 * __this, NewArrayExpression_t2901 * ___newArray, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Linq.Expressions.ExpressionVisitor::VisitInvocation(System.Linq.Expressions.InvocationExpression)
 void ExpressionVisitor_VisitInvocation_m10076 (ExpressionVisitor_t2892 * __this, InvocationExpression_t2902 * ___invocation, MethodInfo* method) IL2CPP_METHOD_ATTR;
