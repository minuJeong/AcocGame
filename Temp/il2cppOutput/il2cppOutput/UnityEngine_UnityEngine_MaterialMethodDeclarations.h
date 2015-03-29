#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Material
struct Material_t108;
// UnityEngine.Texture
struct Texture_t455;
// System.String
struct String_t;
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"

// System.Void UnityEngine.Material::.ctor(UnityEngine.Material)
 void Material__ctor_m2398 (Material_t108 * __this, Material_t108 * ___source, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Material::get_color()
 Color_t30  Material_get_color_m503 (Material_t108 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::set_color(UnityEngine.Color)
 void Material_set_color_m510 (Material_t108 * __this, Color_t30  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UnityEngine.Material::get_mainTexture()
 Texture_t455 * Material_get_mainTexture_m4476 (Material_t108 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetColor(System.String,UnityEngine.Color)
 void Material_SetColor_m568 (Material_t108 * __this, String_t* ___propertyName, Color_t30  ___color, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetColor(System.Int32,UnityEngine.Color)
 void Material_SetColor_m8468 (Material_t108 * __this, int32_t ___nameID, Color_t30  ___color, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::INTERNAL_CALL_SetColor(UnityEngine.Material,System.Int32,UnityEngine.Color&)
 void Material_INTERNAL_CALL_SetColor_m8469 (Object_t * __this/* static, unused */, Material_t108 * ___self, int32_t ___nameID, Color_t30 * ___color, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Material::GetColor(System.String)
 Color_t30  Material_GetColor_m544 (Material_t108 * __this, String_t* ___propertyName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Material::GetColor(System.Int32)
 Color_t30  Material_GetColor_m8470 (Material_t108 * __this, int32_t ___nameID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UnityEngine.Material::GetTexture(System.String)
 Texture_t455 * Material_GetTexture_m8471 (Material_t108 * __this, String_t* ___propertyName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UnityEngine.Material::GetTexture(System.Int32)
 Texture_t455 * Material_GetTexture_m8472 (Material_t108 * __this, int32_t ___nameID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetFloat(System.String,System.Single)
 void Material_SetFloat_m8473 (Material_t108 * __this, String_t* ___propertyName, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetFloat(System.Int32,System.Single)
 void Material_SetFloat_m8474 (Material_t108 * __this, int32_t ___nameID, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetInt(System.String,System.Int32)
 void Material_SetInt_m4471 (Material_t108 * __this, String_t* ___propertyName, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Material::HasProperty(System.String)
 bool Material_HasProperty_m4467 (Material_t108 * __this, String_t* ___propertyName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Material::HasProperty(System.Int32)
 bool Material_HasProperty_m8475 (Material_t108 * __this, int32_t ___nameID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::Internal_CreateWithMaterial(UnityEngine.Material,UnityEngine.Material)
 void Material_Internal_CreateWithMaterial_m8476 (Object_t * __this/* static, unused */, Material_t108 * ___mono, Material_t108 * ___source, MethodInfo* method) IL2CPP_METHOD_ATTR;
