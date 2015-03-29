#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Matrix4x4
struct Matrix4x4_t815;
// System.Object
struct Object_t;
// System.String
struct String_t;
// UnityEngine.Matrix4x4
#include "UnityEngine_UnityEngine_Matrix4x4.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"

// System.Single UnityEngine.Matrix4x4::get_Item(System.Int32,System.Int32)
 float Matrix4x4_get_Item_m8368 (Matrix4x4_t815 * __this, int32_t ___row, int32_t ___column, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Matrix4x4::set_Item(System.Int32,System.Int32,System.Single)
 void Matrix4x4_set_Item_m8369 (Matrix4x4_t815 * __this, int32_t ___row, int32_t ___column, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Matrix4x4::get_Item(System.Int32)
 float Matrix4x4_get_Item_m8370 (Matrix4x4_t815 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Matrix4x4::set_Item(System.Int32,System.Single)
 void Matrix4x4_set_Item_m8371 (Matrix4x4_t815 * __this, int32_t ___index, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Matrix4x4::GetHashCode()
 int32_t Matrix4x4_GetHashCode_m8372 (Matrix4x4_t815 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Matrix4x4::Equals(System.Object)
 bool Matrix4x4_Equals_m8373 (Matrix4x4_t815 * __this, Object_t * ___other, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::Inverse(UnityEngine.Matrix4x4)
 Matrix4x4_t815  Matrix4x4_Inverse_m8374 (Object_t * __this/* static, unused */, Matrix4x4_t815  ___m, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::INTERNAL_CALL_Inverse(UnityEngine.Matrix4x4&)
 Matrix4x4_t815  Matrix4x4_INTERNAL_CALL_Inverse_m8375 (Object_t * __this/* static, unused */, Matrix4x4_t815 * ___m, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::Transpose(UnityEngine.Matrix4x4)
 Matrix4x4_t815  Matrix4x4_Transpose_m8376 (Object_t * __this/* static, unused */, Matrix4x4_t815  ___m, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::INTERNAL_CALL_Transpose(UnityEngine.Matrix4x4&)
 Matrix4x4_t815  Matrix4x4_INTERNAL_CALL_Transpose_m8377 (Object_t * __this/* static, unused */, Matrix4x4_t815 * ___m, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Matrix4x4::Invert(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4&)
 bool Matrix4x4_Invert_m8378 (Object_t * __this/* static, unused */, Matrix4x4_t815  ___inMatrix, Matrix4x4_t815 * ___dest, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Matrix4x4::INTERNAL_CALL_Invert(UnityEngine.Matrix4x4&,UnityEngine.Matrix4x4&)
 bool Matrix4x4_INTERNAL_CALL_Invert_m8379 (Object_t * __this/* static, unused */, Matrix4x4_t815 * ___inMatrix, Matrix4x4_t815 * ___dest, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_inverse()
 Matrix4x4_t815  Matrix4x4_get_inverse_m8380 (Matrix4x4_t815 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_transpose()
 Matrix4x4_t815  Matrix4x4_get_transpose_m8381 (Matrix4x4_t815 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Matrix4x4::get_isIdentity()
 bool Matrix4x4_get_isIdentity_m8382 (Matrix4x4_t815 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityEngine.Matrix4x4::GetColumn(System.Int32)
 Vector4_t667  Matrix4x4_GetColumn_m8383 (Matrix4x4_t815 * __this, int32_t ___i, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityEngine.Matrix4x4::GetRow(System.Int32)
 Vector4_t667  Matrix4x4_GetRow_m8384 (Matrix4x4_t815 * __this, int32_t ___i, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Matrix4x4::SetColumn(System.Int32,UnityEngine.Vector4)
 void Matrix4x4_SetColumn_m8385 (Matrix4x4_t815 * __this, int32_t ___i, Vector4_t667  ___v, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Matrix4x4::SetRow(System.Int32,UnityEngine.Vector4)
 void Matrix4x4_SetRow_m8386 (Matrix4x4_t815 * __this, int32_t ___i, Vector4_t667  ___v, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Matrix4x4::MultiplyPoint(UnityEngine.Vector3)
 Vector3_t31  Matrix4x4_MultiplyPoint_m8387 (Matrix4x4_t815 * __this, Vector3_t31  ___v, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Matrix4x4::MultiplyPoint3x4(UnityEngine.Vector3)
 Vector3_t31  Matrix4x4_MultiplyPoint3x4_m4434 (Matrix4x4_t815 * __this, Vector3_t31  ___v, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Matrix4x4::MultiplyVector(UnityEngine.Vector3)
 Vector3_t31  Matrix4x4_MultiplyVector_m8388 (Matrix4x4_t815 * __this, Vector3_t31  ___v, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::Scale(UnityEngine.Vector3)
 Matrix4x4_t815  Matrix4x4_Scale_m8389 (Object_t * __this/* static, unused */, Vector3_t31  ___v, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_zero()
 Matrix4x4_t815  Matrix4x4_get_zero_m8390 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_identity()
 Matrix4x4_t815  Matrix4x4_get_identity_m8391 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Matrix4x4::SetTRS(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
 void Matrix4x4_SetTRS_m8392 (Matrix4x4_t815 * __this, Vector3_t31  ___pos, Quaternion_t110  ___q, Vector3_t31  ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::TRS(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
 Matrix4x4_t815  Matrix4x4_TRS_m8393 (Object_t * __this/* static, unused */, Vector3_t31  ___pos, Quaternion_t110  ___q, Vector3_t31  ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::INTERNAL_CALL_TRS(UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.Vector3&)
 Matrix4x4_t815  Matrix4x4_INTERNAL_CALL_TRS_m8394 (Object_t * __this/* static, unused */, Vector3_t31 * ___pos, Quaternion_t110 * ___q, Vector3_t31 * ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Matrix4x4::ToString()
 String_t* Matrix4x4_ToString_m8395 (Matrix4x4_t815 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Matrix4x4::ToString(System.String)
 String_t* Matrix4x4_ToString_m8396 (Matrix4x4_t815 * __this, String_t* ___format, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::Ortho(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single)
 Matrix4x4_t815  Matrix4x4_Ortho_m8397 (Object_t * __this/* static, unused */, float ___left, float ___right, float ___bottom, float ___top, float ___zNear, float ___zFar, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::Perspective(System.Single,System.Single,System.Single,System.Single)
 Matrix4x4_t815  Matrix4x4_Perspective_m8398 (Object_t * __this/* static, unused */, float ___fov, float ___aspect, float ___zNear, float ___zFar, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::op_Multiply(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4)
 Matrix4x4_t815  Matrix4x4_op_Multiply_m8399 (Object_t * __this/* static, unused */, Matrix4x4_t815  ___lhs, Matrix4x4_t815  ___rhs, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityEngine.Matrix4x4::op_Multiply(UnityEngine.Matrix4x4,UnityEngine.Vector4)
 Vector4_t667  Matrix4x4_op_Multiply_m8400 (Object_t * __this/* static, unused */, Matrix4x4_t815  ___lhs, Vector4_t667  ___v, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Matrix4x4::op_Equality(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4)
 bool Matrix4x4_op_Equality_m8401 (Object_t * __this/* static, unused */, Matrix4x4_t815  ___lhs, Matrix4x4_t815  ___rhs, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Matrix4x4::op_Inequality(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4)
 bool Matrix4x4_op_Inequality_m8402 (Object_t * __this/* static, unused */, Matrix4x4_t815  ___lhs, Matrix4x4_t815  ___rhs, MethodInfo* method) IL2CPP_METHOD_ATTR;
