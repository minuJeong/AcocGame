#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.GUI
struct GUI_t415;
// UnityEngine.GUISkin
struct GUISkin_t137;
// System.String
struct String_t;
// UnityEngine.GUIStyle
struct GUIStyle_t138;
// UnityEngine.GUIContent
struct GUIContent_t419;
// UnityEngine.Texture
struct Texture_t455;
// UnityEngine.TextEditor
struct TextEditor_t804;
// UnityEngine.GUIContent[]
struct GUIContentU5BU5D_t2497;
// UnityEngine.Rect[]
struct RectU5BU5D_t54;
// UnityEngine.GUI/WindowFunction
struct WindowFunction_t416;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.FocusType
#include "UnityEngine_UnityEngine_FocusType.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void UnityEngine.GUI::.cctor()
 void GUI__cctor_m8024 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime UnityEngine.GUI::get_nextScrollStepTime()
 DateTime_t126  GUI_get_nextScrollStepTime_m8025 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_nextScrollStepTime(System.DateTime)
 void GUI_set_nextScrollStepTime_m8026 (Object_t * __this/* static, unused */, DateTime_t126  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUI::get_scrollTroughSide()
 int32_t GUI_get_scrollTroughSide_m8027 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_scrollTroughSide(System.Int32)
 void GUI_set_scrollTroughSide_m8028 (Object_t * __this/* static, unused */, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_skin(UnityEngine.GUISkin)
 void GUI_set_skin_m2053 (Object_t * __this/* static, unused */, GUISkin_t137 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUISkin UnityEngine.GUI::get_skin()
 GUISkin_t137 * GUI_get_skin_m2055 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::INTERNAL_set_color(UnityEngine.Color&)
 void GUI_INTERNAL_set_color_m8029 (Object_t * __this/* static, unused */, Color_t30 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_color(UnityEngine.Color)
 void GUI_set_color_m2285 (Object_t * __this/* static, unused */, Color_t30  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::get_changed()
 bool GUI_get_changed_m2372 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_changed(System.Boolean)
 void GUI_set_changed_m8030 (Object_t * __this/* static, unused */, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::get_enabled()
 bool GUI_get_enabled_m8031 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_enabled(System.Boolean)
 void GUI_set_enabled_m2059 (Object_t * __this/* static, unused */, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_tooltip(System.String)
 void GUI_set_tooltip_m8032 (Object_t * __this/* static, unused */, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::Internal_SetTooltip(System.String)
 void GUI_Internal_SetTooltip_m8033 (Object_t * __this/* static, unused */, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::Label(UnityEngine.Rect,System.String)
 void GUI_Label_m2725 (Object_t * __this/* static, unused */, Rect_t55  ___position, String_t* ___text, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::Label(UnityEngine.Rect,System.String,UnityEngine.GUIStyle)
 void GUI_Label_m2294 (Object_t * __this/* static, unused */, Rect_t55  ___position, String_t* ___text, GUIStyle_t138 * ___style, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::Label(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUIStyle)
 void GUI_Label_m8034 (Object_t * __this/* static, unused */, Rect_t55  ___position, GUIContent_t419 * ___content, GUIStyle_t138 * ___style, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DoLabel(UnityEngine.Rect,UnityEngine.GUIContent,System.IntPtr)
 void GUI_DoLabel_m8035 (Object_t * __this/* static, unused */, Rect_t55  ___position, GUIContent_t419 * ___content, IntPtr_t39 ___style, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::INTERNAL_CALL_DoLabel(UnityEngine.Rect&,UnityEngine.GUIContent,System.IntPtr)
 void GUI_INTERNAL_CALL_DoLabel_m8036 (Object_t * __this/* static, unused */, Rect_t55 * ___position, GUIContent_t419 * ___content, IntPtr_t39 ___style, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::Box(UnityEngine.Rect,System.String)
 void GUI_Box_m2371 (Object_t * __this/* static, unused */, Rect_t55  ___position, String_t* ___text, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::Box(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUIStyle)
 void GUI_Box_m8037 (Object_t * __this/* static, unused */, Rect_t55  ___position, GUIContent_t419 * ___content, GUIStyle_t138 * ___style, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::Button(UnityEngine.Rect,UnityEngine.GUIContent)
 bool GUI_Button_m2075 (Object_t * __this/* static, unused */, Rect_t55  ___position, GUIContent_t419 * ___content, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::Button(UnityEngine.Rect,UnityEngine.Texture,UnityEngine.GUIStyle)
 bool GUI_Button_m2277 (Object_t * __this/* static, unused */, Rect_t55  ___position, Texture_t455 * ___image, GUIStyle_t138 * ___style, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::Button(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUIStyle)
 bool GUI_Button_m2079 (Object_t * __this/* static, unused */, Rect_t55  ___position, GUIContent_t419 * ___content, GUIStyle_t138 * ___style, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::DoButton(UnityEngine.Rect,UnityEngine.GUIContent,System.IntPtr)
 bool GUI_DoButton_m8038 (Object_t * __this/* static, unused */, Rect_t55  ___position, GUIContent_t419 * ___content, IntPtr_t39 ___style, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::INTERNAL_CALL_DoButton(UnityEngine.Rect&,UnityEngine.GUIContent,System.IntPtr)
 bool GUI_INTERNAL_CALL_DoButton_m8039 (Object_t * __this/* static, unused */, Rect_t55 * ___position, GUIContent_t419 * ___content, IntPtr_t39 ___style, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::DoRepeatButton(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.FocusType)
 bool GUI_DoRepeatButton_m8040 (Object_t * __this/* static, unused */, Rect_t55  ___position, GUIContent_t419 * ___content, GUIStyle_t138 * ___style, int32_t ___focusType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GUI::PasswordFieldGetStrToShow(System.String,System.Char)
 String_t* GUI_PasswordFieldGetStrToShow_m8041 (Object_t * __this/* static, unused */, String_t* ___password, uint16_t ___maskChar, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DoTextField(UnityEngine.Rect,System.Int32,UnityEngine.GUIContent,System.Boolean,System.Int32,UnityEngine.GUIStyle,System.String,System.Char)
 void GUI_DoTextField_m8042 (Object_t * __this/* static, unused */, Rect_t55  ___position, int32_t ___id, GUIContent_t419 * ___content, bool ___multiline, int32_t ___maxLength, GUIStyle_t138 * ___style, String_t* ___secureText, uint16_t ___maskChar, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::HandleTextFieldEventForTouchscreen(UnityEngine.Rect,System.Int32,UnityEngine.GUIContent,System.Boolean,System.Int32,UnityEngine.GUIStyle,System.String,System.Char,UnityEngine.TextEditor)
 void GUI_HandleTextFieldEventForTouchscreen_m8043 (Object_t * __this/* static, unused */, Rect_t55  ___position, int32_t ___id, GUIContent_t419 * ___content, bool ___multiline, int32_t ___maxLength, GUIStyle_t138 * ___style, String_t* ___secureText, uint16_t ___maskChar, TextEditor_t804 * ___editor, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::SetNextControlName(System.String)
 void GUI_SetNextControlName_m2237 (Object_t * __this/* static, unused */, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GUI::GetNameOfFocusedControl()
 String_t* GUI_GetNameOfFocusedControl_m2235 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::FocusControl(System.String)
 void GUI_FocusControl_m2236 (Object_t * __this/* static, unused */, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::Toggle(UnityEngine.Rect,System.Boolean,UnityEngine.GUIContent,UnityEngine.GUIStyle)
 bool GUI_Toggle_m8044 (Object_t * __this/* static, unused */, Rect_t55  ___position, bool ___value, GUIContent_t419 * ___content, GUIStyle_t138 * ___style, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::DoToggle(UnityEngine.Rect,System.Int32,System.Boolean,UnityEngine.GUIContent,System.IntPtr)
 bool GUI_DoToggle_m8045 (Object_t * __this/* static, unused */, Rect_t55  ___position, int32_t ___id, bool ___value, GUIContent_t419 * ___content, IntPtr_t39 ___style, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::INTERNAL_CALL_DoToggle(UnityEngine.Rect&,System.Int32,System.Boolean,UnityEngine.GUIContent,System.IntPtr)
 bool GUI_INTERNAL_CALL_DoToggle_m8046 (Object_t * __this/* static, unused */, Rect_t55 * ___position, int32_t ___id, bool ___value, GUIContent_t419 * ___content, IntPtr_t39 ___style, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUI::Toolbar(UnityEngine.Rect,System.Int32,UnityEngine.GUIContent[],UnityEngine.GUIStyle)
 int32_t GUI_Toolbar_m8047 (Object_t * __this/* static, unused */, Rect_t55  ___position, int32_t ___selected, GUIContentU5BU5D_t2497* ___contents, GUIStyle_t138 * ___style, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::FindStyles(UnityEngine.GUIStyle&,UnityEngine.GUIStyle&,UnityEngine.GUIStyle&,UnityEngine.GUIStyle&,System.String,System.String,System.String)
 void GUI_FindStyles_m8048 (Object_t * __this/* static, unused */, GUIStyle_t138 ** ___style, GUIStyle_t138 ** ___firstStyle, GUIStyle_t138 ** ___midStyle, GUIStyle_t138 ** ___lastStyle, String_t* ___first, String_t* ___mid, String_t* ___last, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUI::CalcTotalHorizSpacing(System.Int32,UnityEngine.GUIStyle,UnityEngine.GUIStyle,UnityEngine.GUIStyle,UnityEngine.GUIStyle)
 int32_t GUI_CalcTotalHorizSpacing_m8049 (Object_t * __this/* static, unused */, int32_t ___xCount, GUIStyle_t138 * ___style, GUIStyle_t138 * ___firstStyle, GUIStyle_t138 * ___midStyle, GUIStyle_t138 * ___lastStyle, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUI::DoButtonGrid(UnityEngine.Rect,System.Int32,UnityEngine.GUIContent[],System.Int32,UnityEngine.GUIStyle,UnityEngine.GUIStyle,UnityEngine.GUIStyle,UnityEngine.GUIStyle)
 int32_t GUI_DoButtonGrid_m8050 (Object_t * __this/* static, unused */, Rect_t55  ___position, int32_t ___selected, GUIContentU5BU5D_t2497* ___contents, int32_t ___xCount, GUIStyle_t138 * ___style, GUIStyle_t138 * ___firstStyle, GUIStyle_t138 * ___midStyle, GUIStyle_t138 * ___lastStyle, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect[] UnityEngine.GUI::CalcMouseRects(UnityEngine.Rect,System.Int32,System.Int32,System.Single,System.Single,UnityEngine.GUIStyle,UnityEngine.GUIStyle,UnityEngine.GUIStyle,UnityEngine.GUIStyle,System.Boolean)
 RectU5BU5D_t54* GUI_CalcMouseRects_m8051 (Object_t * __this/* static, unused */, Rect_t55  ___position, int32_t ___count, int32_t ___xCount, float ___elemWidth, float ___elemHeight, GUIStyle_t138 * ___style, GUIStyle_t138 * ___firstStyle, GUIStyle_t138 * ___midStyle, GUIStyle_t138 * ___lastStyle, bool ___addBorders, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUI::GetButtonGridMouseSelection(UnityEngine.Rect[],UnityEngine.Vector2,System.Boolean)
 int32_t GUI_GetButtonGridMouseSelection_m8052 (Object_t * __this/* static, unused */, RectU5BU5D_t54* ___buttonRects, Vector2_t51  ___mousePos, bool ___findNearest, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUI::HorizontalSlider(UnityEngine.Rect,System.Single,System.Single,System.Single,UnityEngine.GUIStyle,UnityEngine.GUIStyle)
 float GUI_HorizontalSlider_m8053 (Object_t * __this/* static, unused */, Rect_t55  ___position, float ___value, float ___leftValue, float ___rightValue, GUIStyle_t138 * ___slider, GUIStyle_t138 * ___thumb, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUI::Slider(UnityEngine.Rect,System.Single,System.Single,System.Single,System.Single,UnityEngine.GUIStyle,UnityEngine.GUIStyle,System.Boolean,System.Int32)
 float GUI_Slider_m8054 (Object_t * __this/* static, unused */, Rect_t55  ___position, float ___value, float ___size, float ___start, float ___end, GUIStyle_t138 * ___slider, GUIStyle_t138 * ___thumb, bool ___horiz, int32_t ___id, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::get_usePageScrollbars()
 bool GUI_get_usePageScrollbars_m8055 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUI::HorizontalScrollbar(UnityEngine.Rect,System.Single,System.Single,System.Single,System.Single,UnityEngine.GUIStyle)
 float GUI_HorizontalScrollbar_m8056 (Object_t * __this/* static, unused */, Rect_t55  ___position, float ___value, float ___size, float ___leftValue, float ___rightValue, GUIStyle_t138 * ___style, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::InternalRepaintEditorWindow()
 void GUI_InternalRepaintEditorWindow_m8057 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::ScrollerRepeatButton(System.Int32,UnityEngine.Rect,UnityEngine.GUIStyle)
 bool GUI_ScrollerRepeatButton_m8058 (Object_t * __this/* static, unused */, int32_t ___scrollerID, Rect_t55  ___rect, GUIStyle_t138 * ___style, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUI::VerticalScrollbar(UnityEngine.Rect,System.Single,System.Single,System.Single,System.Single,UnityEngine.GUIStyle)
 float GUI_VerticalScrollbar_m8059 (Object_t * __this/* static, unused */, Rect_t55  ___position, float ___value, float ___size, float ___topValue, float ___bottomValue, GUIStyle_t138 * ___style, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUI::Scroller(UnityEngine.Rect,System.Single,System.Single,System.Single,System.Single,UnityEngine.GUIStyle,UnityEngine.GUIStyle,UnityEngine.GUIStyle,UnityEngine.GUIStyle,System.Boolean)
 float GUI_Scroller_m8060 (Object_t * __this/* static, unused */, Rect_t55  ___position, float ___value, float ___size, float ___leftValue, float ___rightValue, GUIStyle_t138 * ___slider, GUIStyle_t138 * ___thumb, GUIStyle_t138 * ___leftButton, GUIStyle_t138 * ___rightButton, bool ___horiz, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::BeginGroup(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUIStyle)
 void GUI_BeginGroup_m8061 (Object_t * __this/* static, unused */, Rect_t55  ___position, GUIContent_t419 * ___content, GUIStyle_t138 * ___style, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::EndGroup()
 void GUI_EndGroup_m8062 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.GUI::BeginScrollView(UnityEngine.Rect,UnityEngine.Vector2,UnityEngine.Rect,System.Boolean,System.Boolean,UnityEngine.GUIStyle,UnityEngine.GUIStyle,UnityEngine.GUIStyle)
 Vector2_t51  GUI_BeginScrollView_m8063 (Object_t * __this/* static, unused */, Rect_t55  ___position, Vector2_t51  ___scrollPosition, Rect_t55  ___viewRect, bool ___alwaysShowHorizontal, bool ___alwaysShowVertical, GUIStyle_t138 * ___horizontalScrollbar, GUIStyle_t138 * ___verticalScrollbar, GUIStyle_t138 * ___background, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::EndScrollView(System.Boolean)
 void GUI_EndScrollView_m8064 (Object_t * __this/* static, unused */, bool ___handleScrollWheel, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUI::Window(System.Int32,UnityEngine.Rect,UnityEngine.GUI/WindowFunction,UnityEngine.GUIContent,UnityEngine.GUIStyle)
 Rect_t55  GUI_Window_m8065 (Object_t * __this/* static, unused */, int32_t ___id, Rect_t55  ___clientRect, WindowFunction_t416 * ___func, GUIContent_t419 * ___title, GUIStyle_t138 * ___style, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUI::ModalWindow(System.Int32,UnityEngine.Rect,UnityEngine.GUI/WindowFunction,System.String)
 Rect_t55  GUI_ModalWindow_m2058 (Object_t * __this/* static, unused */, int32_t ___id, Rect_t55  ___clientRect, WindowFunction_t416 * ___func, String_t* ___text, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUI::DoModalWindow(System.Int32,UnityEngine.Rect,UnityEngine.GUI/WindowFunction,UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUISkin)
 Rect_t55  GUI_DoModalWindow_m8066 (Object_t * __this/* static, unused */, int32_t ___id, Rect_t55  ___clientRect, WindowFunction_t416 * ___func, GUIContent_t419 * ___content, GUIStyle_t138 * ___style, GUISkin_t137 * ___skin, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUI::INTERNAL_CALL_DoModalWindow(System.Int32,UnityEngine.Rect&,UnityEngine.GUI/WindowFunction,UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUISkin)
 Rect_t55  GUI_INTERNAL_CALL_DoModalWindow_m8067 (Object_t * __this/* static, unused */, int32_t ___id, Rect_t55 * ___clientRect, WindowFunction_t416 * ___func, GUIContent_t419 * ___content, GUIStyle_t138 * ___style, GUISkin_t137 * ___skin, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::CallWindowDelegate(UnityEngine.GUI/WindowFunction,System.Int32,UnityEngine.GUISkin,System.Int32,System.Single,System.Single,UnityEngine.GUIStyle)
 void GUI_CallWindowDelegate_m8068 (Object_t * __this/* static, unused */, WindowFunction_t416 * ___func, int32_t ___id, GUISkin_t137 * ____skin, int32_t ___forceRect, float ___width, float ___height, GUIStyle_t138 * ___style, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUI::DoWindow(System.Int32,UnityEngine.Rect,UnityEngine.GUI/WindowFunction,UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUISkin,System.Boolean)
 Rect_t55  GUI_DoWindow_m8069 (Object_t * __this/* static, unused */, int32_t ___id, Rect_t55  ___clientRect, WindowFunction_t416 * ___func, GUIContent_t419 * ___title, GUIStyle_t138 * ___style, GUISkin_t137 * ___skin, bool ___forceRectOnLayout, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUI::INTERNAL_CALL_DoWindow(System.Int32,UnityEngine.Rect&,UnityEngine.GUI/WindowFunction,UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUISkin,System.Boolean)
 Rect_t55  GUI_INTERNAL_CALL_DoWindow_m8070 (Object_t * __this/* static, unused */, int32_t ___id, Rect_t55 * ___clientRect, WindowFunction_t416 * ___func, GUIContent_t419 * ___title, GUIStyle_t138 * ___style, GUISkin_t137 * ___skin, bool ___forceRectOnLayout, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DragWindow(UnityEngine.Rect)
 void GUI_DragWindow_m8071 (Object_t * __this/* static, unused */, Rect_t55  ___position, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::INTERNAL_CALL_DragWindow(UnityEngine.Rect&)
 void GUI_INTERNAL_CALL_DragWindow_m8072 (Object_t * __this/* static, unused */, Rect_t55 * ___position, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DragWindow()
 void GUI_DragWindow_m2608 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
