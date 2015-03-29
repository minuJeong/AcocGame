#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.GUILayout/LayoutedWindow
struct LayoutedWindow_t2498;
// UnityEngine.GUI/WindowFunction
struct WindowFunction_t416;
// UnityEngine.GUIContent
struct GUIContent_t419;
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_t417;
// UnityEngine.GUIStyle
struct GUIStyle_t138;
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"

// System.Void UnityEngine.GUILayout/LayoutedWindow::.ctor(UnityEngine.GUI/WindowFunction,UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUILayoutOption[],UnityEngine.GUIStyle)
 void LayoutedWindow__ctor_m8073 (LayoutedWindow_t2498 * __this, WindowFunction_t416 * ___f, Rect_t55  ____screenRect, GUIContent_t419 * ____content, GUILayoutOptionU5BU5D_t417* ____options, GUIStyle_t138 * ____style, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout/LayoutedWindow::DoWindow(System.Int32)
 void LayoutedWindow_DoWindow_m8074 (LayoutedWindow_t2498 * __this, int32_t ___windowID, MethodInfo* method) IL2CPP_METHOD_ATTR;
