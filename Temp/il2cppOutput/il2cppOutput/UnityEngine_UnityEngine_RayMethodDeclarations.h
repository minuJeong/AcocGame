#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Ray
struct Ray_t396;
// System.String
struct String_t;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void UnityEngine.Ray::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
 void Ray__ctor_m8437 (Ray_t396 * __this, Vector3_t31  ___origin, Vector3_t31  ___direction, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Ray::get_origin()
 Vector3_t31  Ray_get_origin_m4122 (Ray_t396 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Ray::get_direction()
 Vector3_t31  Ray_get_direction_m2315 (Ray_t396 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Ray::GetPoint(System.Single)
 Vector3_t31  Ray_GetPoint_m2314 (Ray_t396 * __this, float ___distance, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Ray::ToString()
 String_t* Ray_ToString_m8438 (Ray_t396 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
