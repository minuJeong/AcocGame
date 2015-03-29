#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Linq.Expressions.Extensions
struct Extensions_t2905;
// System.Type
struct Type_t;
// System.Reflection.MethodInfo
struct MethodInfo_t292;

// System.Boolean System.Linq.Expressions.Extensions::IsGenericInstanceOf(System.Type,System.Type)
 bool Extensions_IsGenericInstanceOf_m10074 (Object_t * __this/* static, unused */, Type_t * ___self, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Linq.Expressions.Extensions::IsNullable(System.Type)
 bool Extensions_IsNullable_m10075 (Object_t * __this/* static, unused */, Type_t * ___self, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Linq.Expressions.Extensions::IsExpression(System.Type)
 bool Extensions_IsExpression_m10076 (Object_t * __this/* static, unused */, Type_t * ___self, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Linq.Expressions.Extensions::IsAssignableTo(System.Type,System.Type)
 bool Extensions_IsAssignableTo_m10077 (Object_t * __this/* static, unused */, Type_t * ___self, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Linq.Expressions.Extensions::GetFirstGenericArgument(System.Type)
 Type_t * Extensions_GetFirstGenericArgument_m10078 (Object_t * __this/* static, unused */, Type_t * ___self, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Linq.Expressions.Extensions::GetNotNullableType(System.Type)
 Type_t * Extensions_GetNotNullableType_m10079 (Object_t * __this/* static, unused */, Type_t * ___self, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Linq.Expressions.Extensions::GetInvokeMethod(System.Type)
 MethodInfo_t292 * Extensions_GetInvokeMethod_m10080 (Object_t * __this/* static, unused */, Type_t * ___self, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Linq.Expressions.Extensions::ArrayTypeIsAssignableTo(System.Type,System.Type)
 bool Extensions_ArrayTypeIsAssignableTo_m10081 (Object_t * __this/* static, unused */, Type_t * ___type, Type_t * ___candidate, MethodInfo* method) IL2CPP_METHOD_ATTR;
