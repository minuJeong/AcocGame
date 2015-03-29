#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Mask
struct Mask_t746;
// UnityEngine.UI.Graphic
struct Graphic_t648;
// UnityEngine.RectTransform
struct RectTransform_t642;
// UnityEngine.Camera
struct Camera_t204;
// UnityEngine.Material
struct Material_t108;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void UnityEngine.UI.Mask::.ctor()
 void Mask__ctor_m3937 (Mask_t746 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Graphic UnityEngine.UI.Mask::get_graphic()
 Graphic_t648 * Mask_get_graphic_m3938 (Mask_t746 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Mask::get_showMaskGraphic()
 bool Mask_get_showMaskGraphic_m3939 (Mask_t746 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Mask::set_showMaskGraphic(System.Boolean)
 void Mask_set_showMaskGraphic_m3940 (Mask_t746 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectTransform UnityEngine.UI.Mask::get_rectTransform()
 RectTransform_t642 * Mask_get_rectTransform_m3941 (Mask_t746 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Mask::MaskEnabled()
 bool Mask_MaskEnabled_m3942 (Mask_t746 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Mask::OnSiblingGraphicEnabledDisabled()
 void Mask_OnSiblingGraphicEnabledDisabled_m3943 (Mask_t746 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Mask::NotifyMaskStateChanged()
 void Mask_NotifyMaskStateChanged_m3944 (Mask_t746 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Mask::ClearCachedMaterial()
 void Mask_ClearCachedMaterial_m3945 (Mask_t746 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Mask::OnEnable()
 void Mask_OnEnable_m3946 (Mask_t746 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Mask::OnDisable()
 void Mask_OnDisable_m3947 (Mask_t746 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Mask::IsRaycastLocationValid(UnityEngine.Vector2,UnityEngine.Camera)
 bool Mask_IsRaycastLocationValid_m3948 (Mask_t746 * __this, Vector2_t51  ___sp, Camera_t204 * ___eventCamera, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.UI.Mask::GetModifiedMaterial(UnityEngine.Material)
 Material_t108 * Mask_GetModifiedMaterial_m3949 (Mask_t746 * __this, Material_t108 * ___baseMaterial, MethodInfo* method) IL2CPP_METHOD_ATTR;
