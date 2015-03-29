#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.RaycastHit
struct RaycastHit_t397;
// UnityEngine.Collider
struct Collider_t200;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
 Vector3_t31  RaycastHit_get_point_m2707 (RaycastHit_t397 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_normal()
 Vector3_t31  RaycastHit_get_normal_m4135 (RaycastHit_t397 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.RaycastHit::get_distance()
 float RaycastHit_get_distance_m4136 (RaycastHit_t397 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Collider UnityEngine.RaycastHit::get_collider()
 Collider_t200 * RaycastHit_get_collider_m2382 (RaycastHit_t397 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
