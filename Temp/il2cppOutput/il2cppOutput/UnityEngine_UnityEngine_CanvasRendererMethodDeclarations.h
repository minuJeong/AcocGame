#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.CanvasRenderer
struct CanvasRenderer_t643;
// UnityEngine.Material
struct Material_t108;
// UnityEngine.Texture
struct Texture_t455;
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t649;
// System.Object
struct Object_t;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t681;
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"

// System.Void UnityEngine.CanvasRenderer::SetColor(UnityEngine.Color)
 void CanvasRenderer_SetColor_m4227 (CanvasRenderer_t643 * __this, Color_t30  ___color, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::INTERNAL_CALL_SetColor(UnityEngine.CanvasRenderer,UnityEngine.Color&)
 void CanvasRenderer_INTERNAL_CALL_SetColor_m8825 (Object_t * __this/* static, unused */, CanvasRenderer_t643 * ___self, Color_t30 * ___color, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.CanvasRenderer::GetColor()
 Color_t30  CanvasRenderer_GetColor_m4225 (CanvasRenderer_t643 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::set_isMask(System.Boolean)
 void CanvasRenderer_set_isMask_m4556 (CanvasRenderer_t643 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::SetMaterial(UnityEngine.Material,UnityEngine.Texture)
 void CanvasRenderer_SetMaterial_m4215 (CanvasRenderer_t643 * __this, Material_t108 * ___material, Texture_t455 * ___texture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::SetVertices(System.Collections.Generic.List`1<UnityEngine.UIVertex>)
 void CanvasRenderer_SetVertices_m4213 (CanvasRenderer_t643 * __this, List_1_t649 * ___vertices, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::SetVerticesInternal(System.Object)
 void CanvasRenderer_SetVerticesInternal_m8826 (CanvasRenderer_t643 * __this, Object_t * ___vertices, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::SetVertices(UnityEngine.UIVertex[],System.Int32)
 void CanvasRenderer_SetVertices_m4336 (CanvasRenderer_t643 * __this, UIVertexU5BU5D_t681* ___vertices, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::SetVerticesInternalArray(UnityEngine.UIVertex[],System.Int32)
 void CanvasRenderer_SetVerticesInternalArray_m8827 (CanvasRenderer_t643 * __this, UIVertexU5BU5D_t681* ___vertices, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasRenderer::Clear()
 void CanvasRenderer_Clear_m4208 (CanvasRenderer_t643 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.CanvasRenderer::get_absoluteDepth()
 int32_t CanvasRenderer_get_absoluteDepth_m4194 (CanvasRenderer_t643 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
