#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.GUILayout
struct GUILayout_t2499;
// System.String
struct String_t;
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_t417;
// UnityEngine.GUIStyle
struct GUIStyle_t138;
// UnityEngine.GUIContent
struct GUIContent_t419;
// System.String[]
struct StringU5BU5D_t4;
// UnityEngine.GUIContent[]
struct GUIContentU5BU5D_t2497;
// UnityEngine.GUI/WindowFunction
struct WindowFunction_t416;
// UnityEngine.GUILayoutOption
struct GUILayoutOption_t418;
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void UnityEngine.GUILayout::Label(System.String,UnityEngine.GUILayoutOption[])
 void GUILayout_Label_m2063 (Object_t * __this/* static, unused */, String_t* ___text, GUILayoutOptionU5BU5D_t417* ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::Label(System.String,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
 void GUILayout_Label_m2268 (Object_t * __this/* static, unused */, String_t* ___text, GUIStyle_t138 * ___style, GUILayoutOptionU5BU5D_t417* ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::DoLabel(UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
 void GUILayout_DoLabel_m8075 (Object_t * __this/* static, unused */, GUIContent_t419 * ___content, GUIStyle_t138 * ___style, GUILayoutOptionU5BU5D_t417* ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUILayout::Button(System.String,UnityEngine.GUILayoutOption[])
 bool GUILayout_Button_m2069 (Object_t * __this/* static, unused */, String_t* ___text, GUILayoutOptionU5BU5D_t417* ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUILayout::DoButton(UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
 bool GUILayout_DoButton_m8076 (Object_t * __this/* static, unused */, GUIContent_t419 * ___content, GUIStyle_t138 * ___style, GUILayoutOptionU5BU5D_t417* ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GUILayout::TextField(System.String,UnityEngine.GUILayoutOption[])
 String_t* GUILayout_TextField_m2248 (Object_t * __this/* static, unused */, String_t* ___text, GUILayoutOptionU5BU5D_t417* ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GUILayout::TextField(System.String,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
 String_t* GUILayout_TextField_m2067 (Object_t * __this/* static, unused */, String_t* ___text, GUIStyle_t138 * ___style, GUILayoutOptionU5BU5D_t417* ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GUILayout::DoTextField(System.String,System.Int32,System.Boolean,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
 String_t* GUILayout_DoTextField_m8077 (Object_t * __this/* static, unused */, String_t* ___text, int32_t ___maxLength, bool ___multiline, GUIStyle_t138 * ___style, GUILayoutOptionU5BU5D_t417* ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUILayout::Toggle(System.Boolean,System.String,UnityEngine.GUILayoutOption[])
 bool GUILayout_Toggle_m2596 (Object_t * __this/* static, unused */, bool ___value, String_t* ___text, GUILayoutOptionU5BU5D_t417* ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUILayout::DoToggle(System.Boolean,UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
 bool GUILayout_DoToggle_m8078 (Object_t * __this/* static, unused */, bool ___value, GUIContent_t419 * ___content, GUIStyle_t138 * ___style, GUILayoutOptionU5BU5D_t417* ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUILayout::Toolbar(System.Int32,System.String[],UnityEngine.GUILayoutOption[])
 int32_t GUILayout_Toolbar_m2244 (Object_t * __this/* static, unused */, int32_t ___selected, StringU5BU5D_t4* ___texts, GUILayoutOptionU5BU5D_t417* ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUILayout::Toolbar(System.Int32,UnityEngine.GUIContent[],UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
 int32_t GUILayout_Toolbar_m8079 (Object_t * __this/* static, unused */, int32_t ___selected, GUIContentU5BU5D_t2497* ___contents, GUIStyle_t138 * ___style, GUILayoutOptionU5BU5D_t417* ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUILayout::HorizontalSlider(System.Single,System.Single,System.Single,UnityEngine.GUILayoutOption[])
 float GUILayout_HorizontalSlider_m2599 (Object_t * __this/* static, unused */, float ___value, float ___leftValue, float ___rightValue, GUILayoutOptionU5BU5D_t417* ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUILayout::DoHorizontalSlider(System.Single,System.Single,System.Single,UnityEngine.GUIStyle,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
 float GUILayout_DoHorizontalSlider_m8080 (Object_t * __this/* static, unused */, float ___value, float ___leftValue, float ___rightValue, GUIStyle_t138 * ___slider, GUIStyle_t138 * ___thumb, GUILayoutOptionU5BU5D_t417* ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::Space(System.Single)
 void GUILayout_Space_m2060 (Object_t * __this/* static, unused */, float ___pixels, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::FlexibleSpace()
 void GUILayout_FlexibleSpace_m2072 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::BeginHorizontal(UnityEngine.GUILayoutOption[])
 void GUILayout_BeginHorizontal_m2061 (Object_t * __this/* static, unused */, GUILayoutOptionU5BU5D_t417* ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::BeginHorizontal(UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
 void GUILayout_BeginHorizontal_m8081 (Object_t * __this/* static, unused */, GUIContent_t419 * ___content, GUIStyle_t138 * ___style, GUILayoutOptionU5BU5D_t417* ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::EndHorizontal()
 void GUILayout_EndHorizontal_m2068 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::BeginVertical(UnityEngine.GUILayoutOption[])
 void GUILayout_BeginVertical_m2062 (Object_t * __this/* static, unused */, GUILayoutOptionU5BU5D_t417* ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::BeginVertical(UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
 void GUILayout_BeginVertical_m8082 (Object_t * __this/* static, unused */, GUIContent_t419 * ___content, GUIStyle_t138 * ___style, GUILayoutOptionU5BU5D_t417* ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::EndVertical()
 void GUILayout_EndVertical_m2064 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::BeginArea(UnityEngine.Rect)
 void GUILayout_BeginArea_m2223 (Object_t * __this/* static, unused */, Rect_t55  ___screenRect, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::BeginArea(UnityEngine.Rect,UnityEngine.GUIStyle)
 void GUILayout_BeginArea_m2283 (Object_t * __this/* static, unused */, Rect_t55  ___screenRect, GUIStyle_t138 * ___style, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::BeginArea(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUIStyle)
 void GUILayout_BeginArea_m8083 (Object_t * __this/* static, unused */, Rect_t55  ___screenRect, GUIContent_t419 * ___content, GUIStyle_t138 * ___style, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::EndArea()
 void GUILayout_EndArea_m2224 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.GUILayout::BeginScrollView(UnityEngine.Vector2,UnityEngine.GUILayoutOption[])
 Vector2_t51  GUILayout_BeginScrollView_m2245 (Object_t * __this/* static, unused */, Vector2_t51  ___scrollPosition, GUILayoutOptionU5BU5D_t417* ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.GUILayout::BeginScrollView(UnityEngine.Vector2,System.Boolean,System.Boolean,UnityEngine.GUIStyle,UnityEngine.GUIStyle,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
 Vector2_t51  GUILayout_BeginScrollView_m8084 (Object_t * __this/* static, unused */, Vector2_t51  ___scrollPosition, bool ___alwaysShowHorizontal, bool ___alwaysShowVertical, GUIStyle_t138 * ___horizontalScrollbar, GUIStyle_t138 * ___verticalScrollbar, GUIStyle_t138 * ___background, GUILayoutOptionU5BU5D_t417* ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::EndScrollView()
 void GUILayout_EndScrollView_m2247 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::EndScrollView(System.Boolean)
 void GUILayout_EndScrollView_m8085 (Object_t * __this/* static, unused */, bool ___handleScrollWheel, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUILayout::Window(System.Int32,UnityEngine.Rect,UnityEngine.GUI/WindowFunction,System.String,UnityEngine.GUILayoutOption[])
 Rect_t55  GUILayout_Window_m2593 (Object_t * __this/* static, unused */, int32_t ___id, Rect_t55  ___screenRect, WindowFunction_t416 * ___func, String_t* ___text, GUILayoutOptionU5BU5D_t417* ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUILayout::DoWindow(System.Int32,UnityEngine.Rect,UnityEngine.GUI/WindowFunction,UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
 Rect_t55  GUILayout_DoWindow_m8086 (Object_t * __this/* static, unused */, int32_t ___id, Rect_t55  ___screenRect, WindowFunction_t416 * ___func, GUIContent_t419 * ___content, GUIStyle_t138 * ___style, GUILayoutOptionU5BU5D_t417* ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::Width(System.Single)
 GUILayoutOption_t418 * GUILayout_Width_m2256 (Object_t * __this/* static, unused */, float ___width, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::MinWidth(System.Single)
 GUILayoutOption_t418 * GUILayout_MinWidth_m2066 (Object_t * __this/* static, unused */, float ___minWidth, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::Height(System.Single)
 GUILayoutOption_t418 * GUILayout_Height_m2295 (Object_t * __this/* static, unused */, float ___height, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::ExpandWidth(System.Boolean)
 GUILayoutOption_t418 * GUILayout_ExpandWidth_m2243 (Object_t * __this/* static, unused */, bool ___expand, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::ExpandHeight(System.Boolean)
 GUILayoutOption_t418 * GUILayout_ExpandHeight_m8087 (Object_t * __this/* static, unused */, bool ___expand, MethodInfo* method) IL2CPP_METHOD_ATTR;
