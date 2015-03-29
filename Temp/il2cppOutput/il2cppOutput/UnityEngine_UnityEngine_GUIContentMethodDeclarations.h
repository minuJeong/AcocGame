#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.GUIContent
struct GUIContent_t419;
// System.String
struct String_t;
// UnityEngine.Texture
struct Texture_t455;
// UnityEngine.GUIContent[]
struct GUIContentU5BU5D_t2497;
// System.String[]
struct StringU5BU5D_t4;

// System.Void UnityEngine.GUIContent::.ctor()
 void GUIContent__ctor_m8224 (GUIContent_t419 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIContent::.ctor(System.String)
 void GUIContent__ctor_m2073 (GUIContent_t419 * __this, String_t* ___text, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIContent::.ctor(UnityEngine.GUIContent)
 void GUIContent__ctor_m8225 (GUIContent_t419 * __this, GUIContent_t419 * ___src, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIContent::.cctor()
 void GUIContent__cctor_m8226 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GUIContent::get_text()
 String_t* GUIContent_get_text_m4330 (GUIContent_t419 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIContent::set_text(System.String)
 void GUIContent_set_text_m8227 (GUIContent_t419 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GUIContent::get_tooltip()
 String_t* GUIContent_get_tooltip_m8228 (GUIContent_t419 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIContent UnityEngine.GUIContent::Temp(System.String)
 GUIContent_t419 * GUIContent_Temp_m8229 (Object_t * __this/* static, unused */, String_t* ___t, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIContent UnityEngine.GUIContent::Temp(UnityEngine.Texture)
 GUIContent_t419 * GUIContent_Temp_m8230 (Object_t * __this/* static, unused */, Texture_t455 * ___i, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIContent::ClearStaticCache()
 void GUIContent_ClearStaticCache_m8231 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIContent[] UnityEngine.GUIContent::Temp(System.String[])
 GUIContentU5BU5D_t2497* GUIContent_Temp_m8232 (Object_t * __this/* static, unused */, StringU5BU5D_t4* ___texts, MethodInfo* method) IL2CPP_METHOD_ATTR;
