#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.GUIUtility
struct GUIUtility_t2511;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// UnityEngine.GUISkin
struct GUISkin_t137;
// System.Exception
struct Exception_t107;
// UnityEngine.FocusType
#include "UnityEngine_UnityEngine_FocusType.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"

// System.Void UnityEngine.GUIUtility::.cctor()
 void GUIUtility__cctor_m8147 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUIUtility::GetControlID(UnityEngine.FocusType)
 int32_t GUIUtility_GetControlID_m8148 (Object_t * __this/* static, unused */, int32_t ___focus, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUIUtility::GetControlID(System.Int32,UnityEngine.FocusType)
 int32_t GUIUtility_GetControlID_m8149 (Object_t * __this/* static, unused */, int32_t ___hint, int32_t ___focus, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUIUtility::GetControlID(System.Int32,UnityEngine.FocusType,UnityEngine.Rect)
 int32_t GUIUtility_GetControlID_m8150 (Object_t * __this/* static, unused */, int32_t ___hint, int32_t ___focus, Rect_t55  ___position, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUIUtility::Internal_GetNextControlID2(System.Int32,UnityEngine.FocusType,UnityEngine.Rect)
 int32_t GUIUtility_Internal_GetNextControlID2_m8151 (Object_t * __this/* static, unused */, int32_t ___hint, int32_t ___focusType, Rect_t55  ___rect, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUIUtility::INTERNAL_CALL_Internal_GetNextControlID2(System.Int32,UnityEngine.FocusType,UnityEngine.Rect&)
 int32_t GUIUtility_INTERNAL_CALL_Internal_GetNextControlID2_m8152 (Object_t * __this/* static, unused */, int32_t ___hint, int32_t ___focusType, Rect_t55 * ___rect, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object UnityEngine.GUIUtility::GetStateObject(System.Type,System.Int32)
 Object_t * GUIUtility_GetStateObject_m8153 (Object_t * __this/* static, unused */, Type_t * ___t, int32_t ___controlID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUIUtility::get_hotControl()
 int32_t GUIUtility_get_hotControl_m8154 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIUtility::set_hotControl(System.Int32)
 void GUIUtility_set_hotControl_m8155 (Object_t * __this/* static, unused */, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUIUtility::Internal_GetHotControl()
 int32_t GUIUtility_Internal_GetHotControl_m8156 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIUtility::Internal_SetHotControl(System.Int32)
 void GUIUtility_Internal_SetHotControl_m8157 (Object_t * __this/* static, unused */, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUIUtility::get_keyboardControl()
 int32_t GUIUtility_get_keyboardControl_m8158 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIUtility::set_keyboardControl(System.Int32)
 void GUIUtility_set_keyboardControl_m8159 (Object_t * __this/* static, unused */, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GUIUtility::get_systemCopyBuffer()
 String_t* GUIUtility_get_systemCopyBuffer_m8160 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIUtility::set_systemCopyBuffer(System.String)
 void GUIUtility_set_systemCopyBuffer_m8161 (Object_t * __this/* static, unused */, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUISkin UnityEngine.GUIUtility::GetDefaultSkin()
 GUISkin_t137 * GUIUtility_GetDefaultSkin_m8162 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUISkin UnityEngine.GUIUtility::Internal_GetDefaultSkin(System.Int32)
 GUISkin_t137 * GUIUtility_Internal_GetDefaultSkin_m8163 (Object_t * __this/* static, unused */, int32_t ___skinMode, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIUtility::BeginGUI(System.Int32,System.Int32,System.Int32)
 void GUIUtility_BeginGUI_m8164 (Object_t * __this/* static, unused */, int32_t ___skinMode, int32_t ___instanceID, int32_t ___useGUILayout, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIUtility::Internal_ExitGUI()
 void GUIUtility_Internal_ExitGUI_m8165 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIUtility::EndGUI(System.Int32)
 void GUIUtility_EndGUI_m8166 (Object_t * __this/* static, unused */, int32_t ___layoutType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUIUtility::EndGUIFromException(System.Exception)
 bool GUIUtility_EndGUIFromException_m8167 (Object_t * __this/* static, unused */, Exception_t107 * ___exception, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIUtility::CheckOnGUI()
 void GUIUtility_CheckOnGUI_m8168 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUIUtility::Internal_GetGUIDepth()
 int32_t GUIUtility_Internal_GetGUIDepth_m8169 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUIUtility::get_mouseUsed()
 bool GUIUtility_get_mouseUsed_m8170 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIUtility::set_mouseUsed(System.Boolean)
 void GUIUtility_set_mouseUsed_m8171 (Object_t * __this/* static, unused */, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
