#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Graphic
struct Graphic_t648;
// UnityEngine.Material
struct Material_t108;
// UnityEngine.RectTransform
struct RectTransform_t642;
// UnityEngine.Canvas
struct Canvas_t644;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_t643;
// UnityEngine.Texture
struct Texture_t455;
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t649;
// UnityEngine.Camera
struct Camera_t204;
// UnityEngine.Events.UnityAction
struct UnityAction_t645;
// UnityEngine.Transform
struct Transform_t56;
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UnityEngine.UI.CanvasUpdate
#include "UnityEngine_UI_UnityEngine_UI_CanvasUpdate.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"

// System.Void UnityEngine.UI.Graphic::.ctor()
 void Graphic__ctor_m3166 (Graphic_t648 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::.cctor()
 void Graphic__cctor_m3167 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.UI.Graphic::get_defaultGraphicMaterial()
 Material_t108 * Graphic_get_defaultGraphicMaterial_m3168 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.UI.Graphic::get_color()
 Color_t30  Graphic_get_color_m3169 (Graphic_t648 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color)
 void Graphic_set_color_m3170 (Graphic_t648 * __this, Color_t30  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::SetAllDirty()
 void Graphic_SetAllDirty_m3171 (Graphic_t648 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::SetLayoutDirty()
 void Graphic_SetLayoutDirty_m3172 (Graphic_t648 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::SetVerticesDirty()
 void Graphic_SetVerticesDirty_m3173 (Graphic_t648 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::SetMaterialDirty()
 void Graphic_SetMaterialDirty_m3174 (Graphic_t648 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::OnRectTransformDimensionsChange()
 void Graphic_OnRectTransformDimensionsChange_m3175 (Graphic_t648 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::OnBeforeTransformParentChanged()
 void Graphic_OnBeforeTransformParentChanged_m3176 (Graphic_t648 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::OnTransformParentChanged()
 void Graphic_OnTransformParentChanged_m3177 (Graphic_t648 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.Graphic::get_depth()
 int32_t Graphic_get_depth_m3178 (Graphic_t648 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectTransform UnityEngine.UI.Graphic::get_rectTransform()
 RectTransform_t642 * Graphic_get_rectTransform_m3179 (Graphic_t648 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Canvas UnityEngine.UI.Graphic::get_canvas()
 Canvas_t644 * Graphic_get_canvas_m3180 (Graphic_t648 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::CacheCanvas()
 void Graphic_CacheCanvas_m3181 (Graphic_t648 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::get_canvasRenderer()
 CanvasRenderer_t643 * Graphic_get_canvasRenderer_m3182 (Graphic_t648 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.UI.Graphic::get_defaultMaterial()
 Material_t108 * Graphic_get_defaultMaterial_m3183 (Graphic_t648 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.UI.Graphic::get_material()
 Material_t108 * Graphic_get_material_m3184 (Graphic_t648 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material)
 void Graphic_set_material_m3185 (Graphic_t648 * __this, Material_t108 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.UI.Graphic::get_materialForRendering()
 Material_t108 * Graphic_get_materialForRendering_m3186 (Graphic_t648 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UnityEngine.UI.Graphic::get_mainTexture()
 Texture_t455 * Graphic_get_mainTexture_m3187 (Graphic_t648 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::OnEnable()
 void Graphic_OnEnable_m3188 (Graphic_t648 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::OnDisable()
 void Graphic_OnDisable_m3189 (Graphic_t648 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::SendGraphicEnabledDisabled()
 void Graphic_SendGraphicEnabledDisabled_m3190 (Graphic_t648 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::Rebuild(UnityEngine.UI.CanvasUpdate)
 void Graphic_Rebuild_m3191 (Graphic_t648 * __this, int32_t ___update, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::UpdateGeometry()
 void Graphic_UpdateGeometry_m3192 (Graphic_t648 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::UpdateMaterial()
 void Graphic_UpdateMaterial_m3193 (Graphic_t648 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::OnFillVBO(System.Collections.Generic.List`1<UnityEngine.UIVertex>)
 void Graphic_OnFillVBO_m3194 (Graphic_t648 * __this, List_1_t649 * ___vbo, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::OnDidApplyAnimationProperties()
 void Graphic_OnDidApplyAnimationProperties_m3195 (Graphic_t648 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::SetNativeSize()
 void Graphic_SetNativeSize_m3196 (Graphic_t648 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Graphic::Raycast(UnityEngine.Vector2,UnityEngine.Camera)
 bool Graphic_Raycast_m3197 (Graphic_t648 * __this, Vector2_t51  ___sp, Camera_t204 * ___eventCamera, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.UI.Graphic::PixelAdjustPoint(UnityEngine.Vector2)
 Vector2_t51  Graphic_PixelAdjustPoint_m3198 (Graphic_t648 * __this, Vector2_t51  ___point, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.UI.Graphic::GetPixelAdjustedRect()
 Rect_t55  Graphic_GetPixelAdjustedRect_m3199 (Graphic_t648 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::CrossFadeColor(UnityEngine.Color,System.Single,System.Boolean,System.Boolean)
 void Graphic_CrossFadeColor_m3200 (Graphic_t648 * __this, Color_t30  ___targetColor, float ___duration, bool ___ignoreTimeScale, bool ___useAlpha, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::CrossFadeColor(UnityEngine.Color,System.Single,System.Boolean,System.Boolean,System.Boolean)
 void Graphic_CrossFadeColor_m3201 (Graphic_t648 * __this, Color_t30  ___targetColor, float ___duration, bool ___ignoreTimeScale, bool ___useAlpha, bool ___useRGB, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.UI.Graphic::CreateColorFromAlpha(System.Single)
 Color_t30  Graphic_CreateColorFromAlpha_m3202 (Object_t * __this/* static, unused */, float ___alpha, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::CrossFadeAlpha(System.Single,System.Single,System.Boolean)
 void Graphic_CrossFadeAlpha_m3203 (Graphic_t648 * __this, float ___alpha, float ___duration, bool ___ignoreTimeScale, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::RegisterDirtyLayoutCallback(UnityEngine.Events.UnityAction)
 void Graphic_RegisterDirtyLayoutCallback_m3204 (Graphic_t648 * __this, UnityAction_t645 * ___action, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::UnregisterDirtyLayoutCallback(UnityEngine.Events.UnityAction)
 void Graphic_UnregisterDirtyLayoutCallback_m3205 (Graphic_t648 * __this, UnityAction_t645 * ___action, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::RegisterDirtyVerticesCallback(UnityEngine.Events.UnityAction)
 void Graphic_RegisterDirtyVerticesCallback_m3206 (Graphic_t648 * __this, UnityAction_t645 * ___action, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::UnregisterDirtyVerticesCallback(UnityEngine.Events.UnityAction)
 void Graphic_UnregisterDirtyVerticesCallback_m3207 (Graphic_t648 * __this, UnityAction_t645 * ___action, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::RegisterDirtyMaterialCallback(UnityEngine.Events.UnityAction)
 void Graphic_RegisterDirtyMaterialCallback_m3208 (Graphic_t648 * __this, UnityAction_t645 * ___action, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::UnregisterDirtyMaterialCallback(UnityEngine.Events.UnityAction)
 void Graphic_UnregisterDirtyMaterialCallback_m3209 (Graphic_t648 * __this, UnityAction_t645 * ___action, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::<s_VboPool>m__4(System.Collections.Generic.List`1<UnityEngine.UIVertex>)
 void Graphic_U3Cs_VboPoolU3Em__4_m3210 (Object_t * __this/* static, unused */, List_1_t649 * ___x, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::<s_VboPool>m__5(System.Collections.Generic.List`1<UnityEngine.UIVertex>)
 void Graphic_U3Cs_VboPoolU3Em__5_m3211 (Object_t * __this/* static, unused */, List_1_t649 * ___l, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Graphic::UnityEngine.UI.ICanvasElement.IsDestroyed()
 bool Graphic_UnityEngine_UI_ICanvasElement_IsDestroyed_m3212 (Graphic_t648 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.UI.Graphic::UnityEngine.UI.ICanvasElement.get_transform()
 Transform_t56 * Graphic_UnityEngine_UI_ICanvasElement_get_transform_m3213 (Graphic_t648 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
