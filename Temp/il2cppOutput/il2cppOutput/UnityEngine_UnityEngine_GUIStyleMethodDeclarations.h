#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.GUIStyle
struct GUIStyle_t138;
// System.String
struct String_t;
// UnityEngine.GUIStyleState
struct GUIStyleState_t2516;
// UnityEngine.RectOffset
struct RectOffset_t422;
// UnityEngine.GUIContent
struct GUIContent_t419;
// UnityEngine.Font
struct Font_t373;
// UnityEngine.ImagePosition
#include "UnityEngine_UnityEngine_ImagePosition.h"
// UnityEngine.TextAnchor
#include "UnityEngine_UnityEngine_TextAnchor.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// UnityEngine.Internal_DrawArguments
#include "UnityEngine_UnityEngine_Internal_DrawArguments.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void UnityEngine.GUIStyle::.ctor()
 void GUIStyle__ctor_m8258 (GUIStyle_t138 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::.ctor(UnityEngine.GUIStyle)
 void GUIStyle__ctor_m2265 (GUIStyle_t138 * __this, GUIStyle_t138 * ___other, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::.cctor()
 void GUIStyle__cctor_m8259 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Finalize()
 void GUIStyle_Finalize_m8260 (GUIStyle_t138 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Init()
 void GUIStyle_Init_m8261 (GUIStyle_t138 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::InitCopy(UnityEngine.GUIStyle)
 void GUIStyle_InitCopy_m8262 (GUIStyle_t138 * __this, GUIStyle_t138 * ___other, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Cleanup()
 void GUIStyle_Cleanup_m8263 (GUIStyle_t138 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GUIStyle::get_name()
 String_t* GUIStyle_get_name_m8264 (GUIStyle_t138 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_name(System.String)
 void GUIStyle_set_name_m8265 (GUIStyle_t138 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyleState UnityEngine.GUIStyle::get_normal()
 GUIStyleState_t2516 * GUIStyle_get_normal_m8266 (GUIStyle_t138 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.GUIStyle::GetStyleStatePtr(System.Int32)
 IntPtr_t39 GUIStyle_GetStyleStatePtr_m8267 (GUIStyle_t138 * __this, int32_t ___idx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectOffset UnityEngine.GUIStyle::get_margin()
 RectOffset_t422 * GUIStyle_get_margin_m8268 (GUIStyle_t138 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectOffset UnityEngine.GUIStyle::get_padding()
 RectOffset_t422 * GUIStyle_get_padding_m2083 (GUIStyle_t138 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_padding(UnityEngine.RectOffset)
 void GUIStyle_set_padding_m2267 (GUIStyle_t138 * __this, RectOffset_t422 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.GUIStyle::GetRectOffsetPtr(System.Int32)
 IntPtr_t39 GUIStyle_GetRectOffsetPtr_m8269 (GUIStyle_t138 * __this, int32_t ___idx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::AssignRectOffset(System.Int32,System.IntPtr)
 void GUIStyle_AssignRectOffset_m8270 (GUIStyle_t138 * __this, int32_t ___idx, IntPtr_t39 ___srcRectOffset, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ImagePosition UnityEngine.GUIStyle::get_imagePosition()
 int32_t GUIStyle_get_imagePosition_m8271 (GUIStyle_t138 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_alignment(UnityEngine.TextAnchor)
 void GUIStyle_set_alignment_m2293 (GUIStyle_t138 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUIStyle::get_wordWrap()
 bool GUIStyle_get_wordWrap_m8272 (GUIStyle_t138 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_wordWrap(System.Boolean)
 void GUIStyle_set_wordWrap_m2233 (GUIStyle_t138 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUIStyle::get_fixedWidth()
 float GUIStyle_get_fixedWidth_m8273 (GUIStyle_t138 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUIStyle::get_fixedHeight()
 float GUIStyle_get_fixedHeight_m8274 (GUIStyle_t138 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUIStyle::get_stretchWidth()
 bool GUIStyle_get_stretchWidth_m8275 (GUIStyle_t138 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_stretchWidth(System.Boolean)
 void GUIStyle_set_stretchWidth_m8276 (GUIStyle_t138 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUIStyle::get_stretchHeight()
 bool GUIStyle_get_stretchHeight_m8277 (GUIStyle_t138 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_stretchHeight(System.Boolean)
 void GUIStyle_set_stretchHeight_m8278 (GUIStyle_t138 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUIStyle::Internal_GetLineHeight(System.IntPtr)
 float GUIStyle_Internal_GetLineHeight_m8279 (Object_t * __this/* static, unused */, IntPtr_t39 ___target, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUIStyle::get_lineHeight()
 float GUIStyle_get_lineHeight_m8280 (GUIStyle_t138 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Internal_Draw(System.IntPtr,UnityEngine.Rect,UnityEngine.GUIContent,System.Boolean,System.Boolean,System.Boolean,System.Boolean)
 void GUIStyle_Internal_Draw_m8281 (Object_t * __this/* static, unused */, IntPtr_t39 ___target, Rect_t55  ___position, GUIContent_t419 * ___content, bool ___isHover, bool ___isActive, bool ___on, bool ___hasKeyboardFocus, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Internal_Draw(UnityEngine.GUIContent,UnityEngine.Internal_DrawArguments&)
 void GUIStyle_Internal_Draw_m8282 (Object_t * __this/* static, unused */, GUIContent_t419 * ___content, Internal_DrawArguments_t2517 * ___arguments, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Draw(UnityEngine.Rect,System.Boolean,System.Boolean,System.Boolean,System.Boolean)
 void GUIStyle_Draw_m8283 (GUIStyle_t138 * __this, Rect_t55  ___position, bool ___isHover, bool ___isActive, bool ___on, bool ___hasKeyboardFocus, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Draw(UnityEngine.Rect,UnityEngine.GUIContent,System.Boolean,System.Boolean,System.Boolean,System.Boolean)
 void GUIStyle_Draw_m8284 (GUIStyle_t138 * __this, Rect_t55  ___position, GUIContent_t419 * ___content, bool ___isHover, bool ___isActive, bool ___on, bool ___hasKeyboardFocus, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Draw(UnityEngine.Rect,UnityEngine.GUIContent,System.Int32)
 void GUIStyle_Draw_m8285 (GUIStyle_t138 * __this, Rect_t55  ___position, GUIContent_t419 * ___content, int32_t ___controlID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Draw(UnityEngine.Rect,UnityEngine.GUIContent,System.Int32,System.Boolean)
 void GUIStyle_Draw_m8286 (GUIStyle_t138 * __this, Rect_t55  ___position, GUIContent_t419 * ___content, int32_t ___controlID, bool ___on, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Internal_Draw2(System.IntPtr,UnityEngine.Rect,UnityEngine.GUIContent,System.Int32,System.Boolean)
 void GUIStyle_Internal_Draw2_m8287 (Object_t * __this/* static, unused */, IntPtr_t39 ___style, Rect_t55  ___position, GUIContent_t419 * ___content, int32_t ___controlID, bool ___on, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::INTERNAL_CALL_Internal_Draw2(System.IntPtr,UnityEngine.Rect&,UnityEngine.GUIContent,System.Int32,System.Boolean)
 void GUIStyle_INTERNAL_CALL_Internal_Draw2_m8288 (Object_t * __this/* static, unused */, IntPtr_t39 ___style, Rect_t55 * ___position, GUIContent_t419 * ___content, int32_t ___controlID, bool ___on, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::SetDefaultFont(UnityEngine.Font)
 void GUIStyle_SetDefaultFont_m8289 (Object_t * __this/* static, unused */, Font_t373 * ___font, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUIStyle::get_none()
 GUIStyle_t138 * GUIStyle_get_none_m2276 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.GUIStyle::GetCursorPixelPosition(UnityEngine.Rect,UnityEngine.GUIContent,System.Int32)
 Vector2_t51  GUIStyle_GetCursorPixelPosition_m8290 (GUIStyle_t138 * __this, Rect_t55  ___position, GUIContent_t419 * ___content, int32_t ___cursorStringIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Internal_GetCursorPixelPosition(System.IntPtr,UnityEngine.Rect,UnityEngine.GUIContent,System.Int32,UnityEngine.Vector2&)
 void GUIStyle_Internal_GetCursorPixelPosition_m8291 (Object_t * __this/* static, unused */, IntPtr_t39 ___target, Rect_t55  ___position, GUIContent_t419 * ___content, int32_t ___cursorStringIndex, Vector2_t51 * ___ret, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::INTERNAL_CALL_Internal_GetCursorPixelPosition(System.IntPtr,UnityEngine.Rect&,UnityEngine.GUIContent,System.Int32,UnityEngine.Vector2&)
 void GUIStyle_INTERNAL_CALL_Internal_GetCursorPixelPosition_m8292 (Object_t * __this/* static, unused */, IntPtr_t39 ___target, Rect_t55 * ___position, GUIContent_t419 * ___content, int32_t ___cursorStringIndex, Vector2_t51 * ___ret, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.GUIStyle::CalcSize(UnityEngine.GUIContent)
 Vector2_t51  GUIStyle_CalcSize_m8293 (GUIStyle_t138 * __this, GUIContent_t419 * ___content, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Internal_CalcSize(System.IntPtr,UnityEngine.GUIContent,UnityEngine.Vector2&)
 void GUIStyle_Internal_CalcSize_m8294 (Object_t * __this/* static, unused */, IntPtr_t39 ___target, GUIContent_t419 * ___content, Vector2_t51 * ___ret, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUIStyle::CalcHeight(UnityEngine.GUIContent,System.Single)
 float GUIStyle_CalcHeight_m8295 (GUIStyle_t138 * __this, GUIContent_t419 * ___content, float ___width, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUIStyle::Internal_CalcHeight(System.IntPtr,UnityEngine.GUIContent,System.Single)
 float GUIStyle_Internal_CalcHeight_m8296 (Object_t * __this/* static, unused */, IntPtr_t39 ___target, GUIContent_t419 * ___content, float ___width, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUIStyle::get_isHeightDependantOnWidth()
 bool GUIStyle_get_isHeightDependantOnWidth_m8297 (GUIStyle_t138 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::CalcMinMaxWidth(UnityEngine.GUIContent,System.Single&,System.Single&)
 void GUIStyle_CalcMinMaxWidth_m8298 (GUIStyle_t138 * __this, GUIContent_t419 * ___content, float* ___minWidth, float* ___maxWidth, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Internal_CalcMinMaxWidth(System.IntPtr,UnityEngine.GUIContent,System.Single&,System.Single&)
 void GUIStyle_Internal_CalcMinMaxWidth_m8299 (Object_t * __this/* static, unused */, IntPtr_t39 ___target, GUIContent_t419 * ___content, float* ___minWidth, float* ___maxWidth, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GUIStyle::ToString()
 String_t* GUIStyle_ToString_m8300 (GUIStyle_t138 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
