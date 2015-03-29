#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.GUILayoutUtility
struct GUILayoutUtility_t420;
// UnityEngine.GUIStyle
struct GUIStyle_t138;
// UnityEngine.GUILayoutUtility/LayoutCache
struct LayoutCache_t2502;
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_t417;
// System.String
struct String_t;
// UnityEngine.GUILayoutGroup
struct GUILayoutGroup_t2501;
// System.Type
struct Type_t;
// UnityEngine.GUIContent
struct GUIContent_t419;
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"

// System.Void UnityEngine.GUILayoutUtility::.cctor()
 void GUILayoutUtility__cctor_m8092 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutUtility/LayoutCache UnityEngine.GUILayoutUtility::SelectIDList(System.Int32,System.Boolean)
 LayoutCache_t2502 * GUILayoutUtility_SelectIDList_m8093 (Object_t * __this/* static, unused */, int32_t ___instanceID, bool ___isWindow, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::Begin(System.Int32)
 void GUILayoutUtility_Begin_m8094 (Object_t * __this/* static, unused */, int32_t ___instanceID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::BeginWindow(System.Int32,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
 void GUILayoutUtility_BeginWindow_m8095 (Object_t * __this/* static, unused */, int32_t ___windowID, GUIStyle_t138 * ___style, GUILayoutOptionU5BU5D_t417* ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::EndGroup(System.String)
 void GUILayoutUtility_EndGroup_m8096 (Object_t * __this/* static, unused */, String_t* ___groupName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::Layout()
 void GUILayoutUtility_Layout_m8097 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::LayoutFromEditorWindow()
 void GUILayoutUtility_LayoutFromEditorWindow_m8098 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::LayoutFreeGroup(UnityEngine.GUILayoutGroup)
 void GUILayoutUtility_LayoutFreeGroup_m8099 (Object_t * __this/* static, unused */, GUILayoutGroup_t2501 * ___toplevel, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::LayoutSingleGroup(UnityEngine.GUILayoutGroup)
 void GUILayoutUtility_LayoutSingleGroup_m8100 (Object_t * __this/* static, unused */, GUILayoutGroup_t2501 * ___i, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUILayoutUtility::Internal_GetWindowRect(System.Int32)
 Rect_t55  GUILayoutUtility_Internal_GetWindowRect_m8101 (Object_t * __this/* static, unused */, int32_t ___windowID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::Internal_MoveWindow(System.Int32,UnityEngine.Rect)
 void GUILayoutUtility_Internal_MoveWindow_m8102 (Object_t * __this/* static, unused */, int32_t ___windowID, Rect_t55  ___r, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::INTERNAL_CALL_Internal_MoveWindow(System.Int32,UnityEngine.Rect&)
 void GUILayoutUtility_INTERNAL_CALL_Internal_MoveWindow_m8103 (Object_t * __this/* static, unused */, int32_t ___windowID, Rect_t55 * ___r, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutGroup UnityEngine.GUILayoutUtility::CreateGUILayoutGroupInstanceOfType(System.Type)
 GUILayoutGroup_t2501 * GUILayoutUtility_CreateGUILayoutGroupInstanceOfType_m8104 (Object_t * __this/* static, unused */, Type_t * ___LayoutType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutGroup UnityEngine.GUILayoutUtility::BeginLayoutGroup(UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[],System.Type)
 GUILayoutGroup_t2501 * GUILayoutUtility_BeginLayoutGroup_m8105 (Object_t * __this/* static, unused */, GUIStyle_t138 * ___style, GUILayoutOptionU5BU5D_t417* ___options, Type_t * ___LayoutType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::EndLayoutGroup()
 void GUILayoutUtility_EndLayoutGroup_m8106 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutGroup UnityEngine.GUILayoutUtility::BeginLayoutArea(UnityEngine.GUIStyle,System.Type)
 GUILayoutGroup_t2501 * GUILayoutUtility_BeginLayoutArea_m8107 (Object_t * __this/* static, unused */, GUIStyle_t138 * ___style, Type_t * ___LayoutType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUILayoutUtility::GetRect(UnityEngine.GUIContent,UnityEngine.GUIStyle)
 Rect_t55  GUILayoutUtility_GetRect_m2074 (Object_t * __this/* static, unused */, GUIContent_t419 * ___content, GUIStyle_t138 * ___style, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUILayoutUtility::GetRect(UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
 Rect_t55  GUILayoutUtility_GetRect_m8108 (Object_t * __this/* static, unused */, GUIContent_t419 * ___content, GUIStyle_t138 * ___style, GUILayoutOptionU5BU5D_t417* ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUILayoutUtility::DoGetRect(UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
 Rect_t55  GUILayoutUtility_DoGetRect_m8109 (Object_t * __this/* static, unused */, GUIContent_t419 * ___content, GUIStyle_t138 * ___style, GUILayoutOptionU5BU5D_t417* ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUILayoutUtility::GetRect(System.Single,System.Single,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
 Rect_t55  GUILayoutUtility_GetRect_m8110 (Object_t * __this/* static, unused */, float ___width, float ___height, GUIStyle_t138 * ___style, GUILayoutOptionU5BU5D_t417* ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUILayoutUtility::DoGetRect(System.Single,System.Single,System.Single,System.Single,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
 Rect_t55  GUILayoutUtility_DoGetRect_m8111 (Object_t * __this/* static, unused */, float ___minWidth, float ___maxWidth, float ___minHeight, float ___maxHeight, GUIStyle_t138 * ___style, GUILayoutOptionU5BU5D_t417* ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUILayoutUtility::get_spaceStyle()
 GUIStyle_t138 * GUILayoutUtility_get_spaceStyle_m8112 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
