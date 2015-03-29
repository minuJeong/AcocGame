#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Renderer
struct Renderer_t102;
// UnityEngine.Material
struct Material_t108;
// UnityEngine.Material[]
struct MaterialU5BU5D_t109;

// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
 void Renderer_set_enabled_m2392 (Renderer_t102 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.Renderer::get_material()
 Material_t108 * Renderer_get_material_m505 (Renderer_t102 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Renderer::set_material(UnityEngine.Material)
 void Renderer_set_material_m2226 (Renderer_t102 * __this, Material_t108 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material[] UnityEngine.Renderer::get_materials()
 MaterialU5BU5D_t109* Renderer_get_materials_m543 (Renderer_t102 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Renderer::get_sortingLayerID()
 int32_t Renderer_get_sortingLayerID_m4128 (Renderer_t102 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Renderer::get_sortingOrder()
 int32_t Renderer_get_sortingOrder_m4129 (Renderer_t102 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
