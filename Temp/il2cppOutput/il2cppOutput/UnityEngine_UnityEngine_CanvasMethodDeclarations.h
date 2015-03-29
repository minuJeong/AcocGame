#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Canvas
struct Canvas_t644;
// UnityEngine.Camera
struct Camera_t204;
// UnityEngine.Canvas/WillRenderCanvases
struct WillRenderCanvases_t779;
// UnityEngine.Material
struct Material_t108;
// UnityEngine.RenderMode
#include "UnityEngine_UnityEngine_RenderMode.h"

// System.Void UnityEngine.Canvas::add_willRenderCanvases(UnityEngine.Canvas/WillRenderCanvases)
 void Canvas_add_willRenderCanvases_m4168 (Object_t * __this/* static, unused */, WillRenderCanvases_t779 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Canvas::remove_willRenderCanvases(UnityEngine.Canvas/WillRenderCanvases)
 void Canvas_remove_willRenderCanvases_m8820 (Object_t * __this/* static, unused */, WillRenderCanvases_t779 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RenderMode UnityEngine.Canvas::get_renderMode()
 int32_t Canvas_get_renderMode_m4238 (Canvas_t644 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Canvas::get_isRootCanvas()
 bool Canvas_get_isRootCanvas_m4502 (Canvas_t644 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UnityEngine.Canvas::get_worldCamera()
 Camera_t204 * Canvas_get_worldCamera_m4242 (Canvas_t644 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Canvas::get_scaleFactor()
 float Canvas_get_scaleFactor_m4476 (Canvas_t644 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Canvas::set_scaleFactor(System.Single)
 void Canvas_set_scaleFactor_m4505 (Canvas_t644 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Canvas::get_referencePixelsPerUnit()
 float Canvas_get_referencePixelsPerUnit_m4273 (Canvas_t644 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Canvas::set_referencePixelsPerUnit(System.Single)
 void Canvas_set_referencePixelsPerUnit_m4506 (Canvas_t644 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Canvas::get_pixelPerfect()
 bool Canvas_get_pixelPerfect_m4222 (Canvas_t644 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Canvas::get_renderOrder()
 int32_t Canvas_get_renderOrder_m4240 (Canvas_t644 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Canvas::get_sortingOrder()
 int32_t Canvas_get_sortingOrder_m4239 (Canvas_t644 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Canvas::get_sortingLayerID()
 int32_t Canvas_get_sortingLayerID_m4249 (Canvas_t644 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.Canvas::GetDefaultCanvasMaterial()
 Material_t108 * Canvas_GetDefaultCanvasMaterial_m4193 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.Canvas::GetDefaultCanvasTextMaterial()
 Material_t108 * Canvas_GetDefaultCanvasTextMaterial_m4473 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Canvas::SendWillRenderCanvases()
 void Canvas_SendWillRenderCanvases_m8821 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Canvas::ForceUpdateCanvases()
 void Canvas_ForceUpdateCanvases_m4420 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
