#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PlayerVariables
struct PlayerVariables_t240;
// System.String
struct String_t;
// UnityEngine.Material
struct Material_t108;
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"

// System.Void PlayerVariables::.ctor()
 void PlayerVariables__ctor_m1157 (PlayerVariables_t240 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerVariables::.cctor()
 void PlayerVariables__cctor_m1158 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color PlayerVariables::GetColor(System.Int32)
 Color_t30  PlayerVariables_GetColor_m1159 (Object_t * __this/* static, unused */, int32_t ___playerId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PlayerVariables::GetColorName(System.Int32)
 String_t* PlayerVariables_GetColorName_m1160 (Object_t * __this/* static, unused */, int32_t ___playerId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material PlayerVariables::GetMaterial(UnityEngine.Material,System.Int32)
 Material_t108 * PlayerVariables_GetMaterial_m1161 (Object_t * __this/* static, unused */, Material_t108 * ___original, int32_t ___playerId, MethodInfo* method) IL2CPP_METHOD_ATTR;
