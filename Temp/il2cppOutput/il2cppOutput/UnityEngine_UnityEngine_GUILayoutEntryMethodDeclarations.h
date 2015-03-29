﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.GUILayoutEntry
struct GUILayoutEntry_t2504;
// UnityEngine.GUIStyle
struct GUIStyle_t138;
// UnityEngine.RectOffset
struct RectOffset_t422;
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_t417;
// System.String
struct String_t;

// System.Void UnityEngine.GUILayoutEntry::.ctor(System.Single,System.Single,System.Single,System.Single,UnityEngine.GUIStyle)
 void GUILayoutEntry__ctor_m8113 (GUILayoutEntry_t2504 * __this, float ____minWidth, float ____maxWidth, float ____minHeight, float ____maxHeight, GUIStyle_t138 * ____style, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutEntry::.ctor(System.Single,System.Single,System.Single,System.Single,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
 void GUILayoutEntry__ctor_m8114 (GUILayoutEntry_t2504 * __this, float ____minWidth, float ____maxWidth, float ____minHeight, float ____maxHeight, GUIStyle_t138 * ____style, GUILayoutOptionU5BU5D_t417* ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutEntry::.cctor()
 void GUILayoutEntry__cctor_m8115 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUILayoutEntry::get_style()
 GUIStyle_t138 * GUILayoutEntry_get_style_m8116 (GUILayoutEntry_t2504 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutEntry::set_style(UnityEngine.GUIStyle)
 void GUILayoutEntry_set_style_m8117 (GUILayoutEntry_t2504 * __this, GUIStyle_t138 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectOffset UnityEngine.GUILayoutEntry::get_margin()
 RectOffset_t422 * GUILayoutEntry_get_margin_m8118 (GUILayoutEntry_t2504 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutEntry::CalcWidth()
 void GUILayoutEntry_CalcWidth_m8119 (GUILayoutEntry_t2504 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutEntry::CalcHeight()
 void GUILayoutEntry_CalcHeight_m8120 (GUILayoutEntry_t2504 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutEntry::SetHorizontal(System.Single,System.Single)
 void GUILayoutEntry_SetHorizontal_m8121 (GUILayoutEntry_t2504 * __this, float ___x, float ___width, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutEntry::SetVertical(System.Single,System.Single)
 void GUILayoutEntry_SetVertical_m8122 (GUILayoutEntry_t2504 * __this, float ___y, float ___height, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutEntry::ApplyStyleSettings(UnityEngine.GUIStyle)
 void GUILayoutEntry_ApplyStyleSettings_m8123 (GUILayoutEntry_t2504 * __this, GUIStyle_t138 * ___style, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutEntry::ApplyOptions(UnityEngine.GUILayoutOption[])
 void GUILayoutEntry_ApplyOptions_m8124 (GUILayoutEntry_t2504 * __this, GUILayoutOptionU5BU5D_t417* ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GUILayoutEntry::ToString()
 String_t* GUILayoutEntry_ToString_m8125 (GUILayoutEntry_t2504 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
