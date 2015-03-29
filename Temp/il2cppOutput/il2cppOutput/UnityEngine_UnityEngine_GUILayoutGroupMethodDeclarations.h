#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.GUILayoutGroup
struct GUILayoutGroup_t2500;
// UnityEngine.RectOffset
struct RectOffset_t422;
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_t417;
// UnityEngine.GUIStyle
struct GUIStyle_t138;
// UnityEngine.GUILayoutEntry
struct GUILayoutEntry_t2503;
// System.String
struct String_t;

// System.Void UnityEngine.GUILayoutGroup::.ctor()
 void GUILayoutGroup__ctor_m8123 (GUILayoutGroup_t2500 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectOffset UnityEngine.GUILayoutGroup::get_margin()
 RectOffset_t422 * GUILayoutGroup_get_margin_m8124 (GUILayoutGroup_t2500 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutGroup::ApplyOptions(UnityEngine.GUILayoutOption[])
 void GUILayoutGroup_ApplyOptions_m8125 (GUILayoutGroup_t2500 * __this, GUILayoutOptionU5BU5D_t417* ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutGroup::ApplyStyleSettings(UnityEngine.GUIStyle)
 void GUILayoutGroup_ApplyStyleSettings_m8126 (GUILayoutGroup_t2500 * __this, GUIStyle_t138 * ___style, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutGroup::ResetCursor()
 void GUILayoutGroup_ResetCursor_m8127 (GUILayoutGroup_t2500 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutEntry UnityEngine.GUILayoutGroup::GetNext()
 GUILayoutEntry_t2503 * GUILayoutGroup_GetNext_m8128 (GUILayoutGroup_t2500 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutGroup::Add(UnityEngine.GUILayoutEntry)
 void GUILayoutGroup_Add_m8129 (GUILayoutGroup_t2500 * __this, GUILayoutEntry_t2503 * ___e, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutGroup::CalcWidth()
 void GUILayoutGroup_CalcWidth_m8130 (GUILayoutGroup_t2500 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutGroup::SetHorizontal(System.Single,System.Single)
 void GUILayoutGroup_SetHorizontal_m8131 (GUILayoutGroup_t2500 * __this, float ___x, float ___width, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutGroup::CalcHeight()
 void GUILayoutGroup_CalcHeight_m8132 (GUILayoutGroup_t2500 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutGroup::SetVertical(System.Single,System.Single)
 void GUILayoutGroup_SetVertical_m8133 (GUILayoutGroup_t2500 * __this, float ___y, float ___height, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GUILayoutGroup::ToString()
 String_t* GUILayoutGroup_ToString_m8134 (GUILayoutGroup_t2500 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
