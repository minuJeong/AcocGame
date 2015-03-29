#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.GUISkin
struct GUISkin_t137;
// UnityEngine.Font
struct Font_t373;
// UnityEngine.GUIStyle
struct GUIStyle_t138;
// UnityEngine.GUIStyle[]
struct GUIStyleU5BU5D_t456;
// UnityEngine.GUISettings
struct GUISettings_t2513;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t60;

// System.Void UnityEngine.GUISkin::.ctor()
 void GUISkin__ctor_m8180 (GUISkin_t137 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::OnEnable()
 void GUISkin_OnEnable_m8181 (GUISkin_t137 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Font UnityEngine.GUISkin::get_font()
 Font_t373 * GUISkin_get_font_m8182 (GUISkin_t137 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_font(UnityEngine.Font)
 void GUISkin_set_font_m8183 (GUISkin_t137 * __this, Font_t373 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_box()
 GUIStyle_t138 * GUISkin_get_box_m2282 (GUISkin_t137 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_box(UnityEngine.GUIStyle)
 void GUISkin_set_box_m8184 (GUISkin_t137 * __this, GUIStyle_t138 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_label()
 GUIStyle_t138 * GUISkin_get_label_m2232 (GUISkin_t137 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_label(UnityEngine.GUIStyle)
 void GUISkin_set_label_m8185 (GUISkin_t137 * __this, GUIStyle_t138 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_textField()
 GUIStyle_t138 * GUISkin_get_textField_m8186 (GUISkin_t137 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_textField(UnityEngine.GUIStyle)
 void GUISkin_set_textField_m8187 (GUISkin_t137 * __this, GUIStyle_t138 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_textArea()
 GUIStyle_t138 * GUISkin_get_textArea_m2065 (GUISkin_t137 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_textArea(UnityEngine.GUIStyle)
 void GUISkin_set_textArea_m8188 (GUISkin_t137 * __this, GUIStyle_t138 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_button()
 GUIStyle_t138 * GUISkin_get_button_m2056 (GUISkin_t137 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_button(UnityEngine.GUIStyle)
 void GUISkin_set_button_m8189 (GUISkin_t137 * __this, GUIStyle_t138 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_toggle()
 GUIStyle_t138 * GUISkin_get_toggle_m8190 (GUISkin_t137 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_toggle(UnityEngine.GUIStyle)
 void GUISkin_set_toggle_m8191 (GUISkin_t137 * __this, GUIStyle_t138 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_window()
 GUIStyle_t138 * GUISkin_get_window_m2082 (GUISkin_t137 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_window(UnityEngine.GUIStyle)
 void GUISkin_set_window_m8192 (GUISkin_t137 * __this, GUIStyle_t138 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_horizontalSlider()
 GUIStyle_t138 * GUISkin_get_horizontalSlider_m8193 (GUISkin_t137 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_horizontalSlider(UnityEngine.GUIStyle)
 void GUISkin_set_horizontalSlider_m8194 (GUISkin_t137 * __this, GUIStyle_t138 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_horizontalSliderThumb()
 GUIStyle_t138 * GUISkin_get_horizontalSliderThumb_m8195 (GUISkin_t137 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_horizontalSliderThumb(UnityEngine.GUIStyle)
 void GUISkin_set_horizontalSliderThumb_m8196 (GUISkin_t137 * __this, GUIStyle_t138 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_verticalSlider()
 GUIStyle_t138 * GUISkin_get_verticalSlider_m8197 (GUISkin_t137 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_verticalSlider(UnityEngine.GUIStyle)
 void GUISkin_set_verticalSlider_m8198 (GUISkin_t137 * __this, GUIStyle_t138 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_verticalSliderThumb()
 GUIStyle_t138 * GUISkin_get_verticalSliderThumb_m8199 (GUISkin_t137 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_verticalSliderThumb(UnityEngine.GUIStyle)
 void GUISkin_set_verticalSliderThumb_m8200 (GUISkin_t137 * __this, GUIStyle_t138 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_horizontalScrollbar()
 GUIStyle_t138 * GUISkin_get_horizontalScrollbar_m8201 (GUISkin_t137 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_horizontalScrollbar(UnityEngine.GUIStyle)
 void GUISkin_set_horizontalScrollbar_m8202 (GUISkin_t137 * __this, GUIStyle_t138 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_horizontalScrollbarThumb()
 GUIStyle_t138 * GUISkin_get_horizontalScrollbarThumb_m8203 (GUISkin_t137 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_horizontalScrollbarThumb(UnityEngine.GUIStyle)
 void GUISkin_set_horizontalScrollbarThumb_m8204 (GUISkin_t137 * __this, GUIStyle_t138 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_horizontalScrollbarLeftButton()
 GUIStyle_t138 * GUISkin_get_horizontalScrollbarLeftButton_m8205 (GUISkin_t137 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_horizontalScrollbarLeftButton(UnityEngine.GUIStyle)
 void GUISkin_set_horizontalScrollbarLeftButton_m8206 (GUISkin_t137 * __this, GUIStyle_t138 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_horizontalScrollbarRightButton()
 GUIStyle_t138 * GUISkin_get_horizontalScrollbarRightButton_m8207 (GUISkin_t137 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_horizontalScrollbarRightButton(UnityEngine.GUIStyle)
 void GUISkin_set_horizontalScrollbarRightButton_m8208 (GUISkin_t137 * __this, GUIStyle_t138 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_verticalScrollbar()
 GUIStyle_t138 * GUISkin_get_verticalScrollbar_m8209 (GUISkin_t137 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_verticalScrollbar(UnityEngine.GUIStyle)
 void GUISkin_set_verticalScrollbar_m8210 (GUISkin_t137 * __this, GUIStyle_t138 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_verticalScrollbarThumb()
 GUIStyle_t138 * GUISkin_get_verticalScrollbarThumb_m8211 (GUISkin_t137 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_verticalScrollbarThumb(UnityEngine.GUIStyle)
 void GUISkin_set_verticalScrollbarThumb_m8212 (GUISkin_t137 * __this, GUIStyle_t138 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_verticalScrollbarUpButton()
 GUIStyle_t138 * GUISkin_get_verticalScrollbarUpButton_m8213 (GUISkin_t137 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_verticalScrollbarUpButton(UnityEngine.GUIStyle)
 void GUISkin_set_verticalScrollbarUpButton_m8214 (GUISkin_t137 * __this, GUIStyle_t138 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_verticalScrollbarDownButton()
 GUIStyle_t138 * GUISkin_get_verticalScrollbarDownButton_m8215 (GUISkin_t137 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_verticalScrollbarDownButton(UnityEngine.GUIStyle)
 void GUISkin_set_verticalScrollbarDownButton_m8216 (GUISkin_t137 * __this, GUIStyle_t138 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_scrollView()
 GUIStyle_t138 * GUISkin_get_scrollView_m8217 (GUISkin_t137 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_scrollView(UnityEngine.GUIStyle)
 void GUISkin_set_scrollView_m8218 (GUISkin_t137 * __this, GUIStyle_t138 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle[] UnityEngine.GUISkin::get_customStyles()
 GUIStyleU5BU5D_t456* GUISkin_get_customStyles_m2284 (GUISkin_t137 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_customStyles(UnityEngine.GUIStyle[])
 void GUISkin_set_customStyles_m8219 (GUISkin_t137 * __this, GUIStyleU5BU5D_t456* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUISettings UnityEngine.GUISkin::get_settings()
 GUISettings_t2513 * GUISkin_get_settings_m8220 (GUISkin_t137 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_error()
 GUIStyle_t138 * GUISkin_get_error_m8221 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::Apply()
 void GUISkin_Apply_m8222 (GUISkin_t137 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::BuildStyleCache()
 void GUISkin_BuildStyleCache_m8223 (GUISkin_t137 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::GetStyle(System.String)
 GUIStyle_t138 * GUISkin_GetStyle_m2054 (GUISkin_t137 * __this, String_t* ___styleName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::FindStyle(System.String)
 GUIStyle_t138 * GUISkin_FindStyle_m8224 (GUISkin_t137 * __this, String_t* ___styleName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::MakeCurrent()
 void GUISkin_MakeCurrent_m8225 (GUISkin_t137 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.GUISkin::GetEnumerator()
 Object_t * GUISkin_GetEnumerator_m8226 (GUISkin_t137 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
