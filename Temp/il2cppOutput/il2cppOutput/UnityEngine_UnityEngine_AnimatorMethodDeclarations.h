#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Animator
struct Animator_t168;
// UnityEngine.RuntimeAnimatorController
struct RuntimeAnimatorController_t817;
// System.String
struct String_t;
// UnityEngine.AnimatorStateInfo
#include "UnityEngine_UnityEngine_AnimatorStateInfo.h"

// System.Single UnityEngine.Animator::GetFloat(System.String)
 float Animator_GetFloat_m2290 (Animator_t168 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetFloat(System.String,System.Single)
 void Animator_SetFloat_m2358 (Animator_t168 * __this, String_t* ___name, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetFloat(System.String,System.Single,System.Single,System.Single)
 void Animator_SetFloat_m2389 (Animator_t168 * __this, String_t* ___name, float ___value, float ___dampTime, float ___deltaTime, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Animator::GetBool(System.String)
 bool Animator_GetBool_m2287 (Animator_t168 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetBool(System.String,System.Boolean)
 void Animator_SetBool_m2210 (Animator_t168 * __this, String_t* ___name, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Animator::GetInteger(System.String)
 int32_t Animator_GetInteger_m2289 (Animator_t168 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetInteger(System.String,System.Int32)
 void Animator_SetInteger_m2686 (Animator_t168 * __this, String_t* ___name, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetTrigger(System.String)
 void Animator_SetTrigger_m2205 (Animator_t168 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::ResetTrigger(System.String)
 void Animator_ResetTrigger_m4458 (Animator_t168 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::set_applyRootMotion(System.Boolean)
 void Animator_set_applyRootMotion_m2676 (Animator_t168 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Animator::get_layerCount()
 int32_t Animator_get_layerCount_m2385 (Animator_t168 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Animator::GetLayerWeight(System.Int32)
 float Animator_GetLayerWeight_m2684 (Animator_t168 * __this, int32_t ___layerIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetLayerWeight(System.Int32,System.Single)
 void Animator_SetLayerWeight_m2386 (Animator_t168 * __this, int32_t ___layerIndex, float ___weight, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AnimatorStateInfo UnityEngine.Animator::GetCurrentAnimatorStateInfo(System.Int32)
 AnimatorStateInfo_t467  Animator_GetCurrentAnimatorStateInfo_m2387 (Animator_t168 * __this, int32_t ___layerIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RuntimeAnimatorController UnityEngine.Animator::get_runtimeAnimatorController()
 RuntimeAnimatorController_t817 * Animator_get_runtimeAnimatorController_m4457 (Animator_t168 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Animator::StringToHash(System.String)
 int32_t Animator_StringToHash_m8760 (Object_t * __this/* static, unused */, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetFloatString(System.String,System.Single)
 void Animator_SetFloatString_m8761 (Animator_t168 * __this, String_t* ___name, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Animator::GetFloatString(System.String)
 float Animator_GetFloatString_m8762 (Animator_t168 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetBoolString(System.String,System.Boolean)
 void Animator_SetBoolString_m8763 (Animator_t168 * __this, String_t* ___name, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Animator::GetBoolString(System.String)
 bool Animator_GetBoolString_m8764 (Animator_t168 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetIntegerString(System.String,System.Int32)
 void Animator_SetIntegerString_m8765 (Animator_t168 * __this, String_t* ___name, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Animator::GetIntegerString(System.String)
 int32_t Animator_GetIntegerString_m8766 (Animator_t168 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetTriggerString(System.String)
 void Animator_SetTriggerString_m8767 (Animator_t168 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::ResetTriggerString(System.String)
 void Animator_ResetTriggerString_m8768 (Animator_t168 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetFloatStringDamp(System.String,System.Single,System.Single,System.Single)
 void Animator_SetFloatStringDamp_m8769 (Animator_t168 * __this, String_t* ___name, float ___value, float ___dampTime, float ___deltaTime, MethodInfo* method) IL2CPP_METHOD_ATTR;
