﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Rect
struct Rect_t55;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
 void Rect__ctor_m582 (Rect_t55 * __this, float ___left, float ___top, float ___width, float ___height, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rect::.ctor(UnityEngine.Rect)
 void Rect__ctor_m8362 (Rect_t55 * __this, Rect_t55  ___source, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.Rect::MinMaxRect(System.Single,System.Single,System.Single,System.Single)
 Rect_t55  Rect_MinMaxRect_m8363 (Object_t * __this/* static, unused */, float ___left, float ___top, float ___right, float ___bottom, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Rect::get_x()
 float Rect_get_x_m559 (Rect_t55 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rect::set_x(System.Single)
 void Rect_set_x_m560 (Rect_t55 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Rect::get_y()
 float Rect_get_y_m561 (Rect_t55 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rect::set_y(System.Single)
 void Rect_set_y_m562 (Rect_t55 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Rect::get_position()
 Vector2_t51  Rect_get_position_m4290 (Rect_t55 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Rect::get_center()
 Vector2_t51  Rect_get_center_m4410 (Rect_t55 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Rect::get_width()
 float Rect_get_width_m563 (Rect_t55 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rect::set_width(System.Single)
 void Rect_set_width_m564 (Rect_t55 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Rect::get_height()
 float Rect_get_height_m565 (Rect_t55 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rect::set_height(System.Single)
 void Rect_set_height_m566 (Rect_t55 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Rect::get_size()
 Vector2_t51  Rect_get_size_m4278 (Rect_t55 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Rect::get_xMin()
 float Rect_get_xMin_m4312 (Rect_t55 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Rect::get_yMin()
 float Rect_get_yMin_m4311 (Rect_t55 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Rect::get_xMax()
 float Rect_get_xMax_m4296 (Rect_t55 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Rect::get_yMax()
 float Rect_get_yMax_m4297 (Rect_t55 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Rect::ToString()
 String_t* Rect_ToString_m8364 (Rect_t55 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Rect::Contains(UnityEngine.Vector2)
 bool Rect_Contains_m8365 (Rect_t55 * __this, Vector2_t51  ___point, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Rect::Contains(UnityEngine.Vector3)
 bool Rect_Contains_m2796 (Rect_t55 * __this, Vector3_t31  ___point, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Rect::GetHashCode()
 int32_t Rect_GetHashCode_m8366 (Rect_t55 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Rect::Equals(System.Object)
 bool Rect_Equals_m8367 (Rect_t55 * __this, Object_t * ___other, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Rect::op_Equality(UnityEngine.Rect,UnityEngine.Rect)
 bool Rect_op_Equality_m4398 (Object_t * __this/* static, unused */, Rect_t55  ___lhs, Rect_t55  ___rhs, MethodInfo* method) IL2CPP_METHOD_ATTR;
