#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Vector3
struct Vector3_t31;
// System.Object
struct Object_t;
// System.String
struct String_t;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
 void Vector3__ctor_m527 (Vector3_t31 * __this, float ___x, float ___y, float ___z, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single)
 void Vector3__ctor_m2763 (Vector3_t31 * __this, float ___x, float ___y, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
 Vector3_t31  Vector3_Lerp_m2221 (Object_t * __this/* static, unused */, Vector3_t31  ___from, Vector3_t31  ___to, float ___t, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::Slerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
 Vector3_t31  Vector3_Slerp_m2271 (Object_t * __this/* static, unused */, Vector3_t31  ___from, Vector3_t31  ___to, float ___t, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::INTERNAL_CALL_Slerp(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single)
 Vector3_t31  Vector3_INTERNAL_CALL_Slerp_m8333 (Object_t * __this/* static, unused */, Vector3_t31 * ___from, Vector3_t31 * ___to, float ___t, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::MoveTowards(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
 Vector3_t31  Vector3_MoveTowards_m2693 (Object_t * __this/* static, unused */, Vector3_t31  ___current, Vector3_t31  ___target, float ___maxDistanceDelta, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::RotateTowards(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Single)
 Vector3_t31  Vector3_RotateTowards_m2331 (Object_t * __this/* static, unused */, Vector3_t31  ___current, Vector3_t31  ___target, float ___maxRadiansDelta, float ___maxMagnitudeDelta, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::INTERNAL_CALL_RotateTowards(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,System.Single)
 Vector3_t31  Vector3_INTERNAL_CALL_RotateTowards_m8334 (Object_t * __this/* static, unused */, Vector3_t31 * ___current, Vector3_t31 * ___target, float ___maxRadiansDelta, float ___maxMagnitudeDelta, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector3::get_Item(System.Int32)
 float Vector3_get_Item_m4426 (Vector3_t31 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector3::set_Item(System.Int32,System.Single)
 void Vector3_set_Item_m4427 (Vector3_t31 * __this, int32_t ___index, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::Scale(UnityEngine.Vector3,UnityEngine.Vector3)
 Vector3_t31  Vector3_Scale_m558 (Object_t * __this/* static, unused */, Vector3_t31  ___a, Vector3_t31  ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Vector3::GetHashCode()
 int32_t Vector3_GetHashCode_m8335 (Vector3_t31 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Vector3::Equals(System.Object)
 bool Vector3_Equals_m8336 (Vector3_t31 * __this, Object_t * ___other, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
 Vector3_t31  Vector3_Normalize_m8337 (Object_t * __this/* static, unused */, Vector3_t31  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector3::Normalize()
 void Vector3_Normalize_m8338 (Vector3_t31 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
 Vector3_t31  Vector3_get_normalized_m2330 (Vector3_t31 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Vector3::ToString()
 String_t* Vector3_ToString_m8339 (Vector3_t31 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Vector3::ToString(System.String)
 String_t* Vector3_ToString_m8340 (Vector3_t31 * __this, String_t* ___format, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector3::Dot(UnityEngine.Vector3,UnityEngine.Vector3)
 float Vector3_Dot_m2355 (Object_t * __this/* static, unused */, Vector3_t31  ___lhs, Vector3_t31  ___rhs, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector3::Angle(UnityEngine.Vector3,UnityEngine.Vector3)
 float Vector3_Angle_m2316 (Object_t * __this/* static, unused */, Vector3_t31  ___from, Vector3_t31  ___to, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
 float Vector3_Distance_m538 (Object_t * __this/* static, unused */, Vector3_t31  ___a, Vector3_t31  ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
 float Vector3_Magnitude_m8341 (Object_t * __this/* static, unused */, Vector3_t31  ___a, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector3::get_magnitude()
 float Vector3_get_magnitude_m2327 (Vector3_t31 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector3::SqrMagnitude(UnityEngine.Vector3)
 float Vector3_SqrMagnitude_m8342 (Object_t * __this/* static, unused */, Vector3_t31  ___a, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector3::get_sqrMagnitude()
 float Vector3_get_sqrMagnitude_m2365 (Vector3_t31 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::Min(UnityEngine.Vector3,UnityEngine.Vector3)
 Vector3_t31  Vector3_Min_m4435 (Object_t * __this/* static, unused */, Vector3_t31  ___lhs, Vector3_t31  ___rhs, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::Max(UnityEngine.Vector3,UnityEngine.Vector3)
 Vector3_t31  Vector3_Max_m4436 (Object_t * __this/* static, unused */, Vector3_t31  ___lhs, Vector3_t31  ___rhs, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
 Vector3_t31  Vector3_get_zero_m484 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
 Vector3_t31  Vector3_get_one_m2428 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
 Vector3_t31  Vector3_get_forward_m2310 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_back()
 Vector3_t31  Vector3_get_back_m2307 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
 Vector3_t31  Vector3_get_up_m459 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_down()
 Vector3_t31  Vector3_get_down_m2311 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_left()
 Vector3_t31  Vector3_get_left_m2712 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
 Vector3_t31  Vector3_get_right_m2713 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
 Vector3_t31  Vector3_op_Addition_m465 (Object_t * __this/* static, unused */, Vector3_t31  ___a, Vector3_t31  ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
 Vector3_t31  Vector3_op_Subtraction_m466 (Object_t * __this/* static, unused */, Vector3_t31  ___a, Vector3_t31  ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
 Vector3_t31  Vector3_op_UnaryNegation_m463 (Object_t * __this/* static, unused */, Vector3_t31  ___a, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
 Vector3_t31  Vector3_op_Multiply_m467 (Object_t * __this/* static, unused */, Vector3_t31  ___a, float ___d, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(System.Single,UnityEngine.Vector3)
 Vector3_t31  Vector3_op_Multiply_m464 (Object_t * __this/* static, unused */, float ___d, Vector3_t31  ___a, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
 Vector3_t31  Vector3_op_Division_m2361 (Object_t * __this/* static, unused */, Vector3_t31  ___a, float ___d, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
 bool Vector3_op_Equality_m556 (Object_t * __this/* static, unused */, Vector3_t31  ___lhs, Vector3_t31  ___rhs, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Vector3::op_Inequality(UnityEngine.Vector3,UnityEngine.Vector3)
 bool Vector3_op_Inequality_m529 (Object_t * __this/* static, unused */, Vector3_t31  ___lhs, Vector3_t31  ___rhs, MethodInfo* method) IL2CPP_METHOD_ATTR;
