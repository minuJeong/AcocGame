#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SliderHandler
struct SliderHandler_t2611;
// UnityEngine.GUIStyle
struct GUIStyle_t138;
// UnityEngine.Event
struct Event_t421;
struct Event_t421_marshaled;
// UnityEngine.SliderState
struct SliderState_t2610;
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// UnityEngine.EventType
#include "UnityEngine_UnityEngine_EventType.h"

// System.Void UnityEngine.SliderHandler::.ctor(UnityEngine.Rect,System.Single,System.Single,System.Single,System.Single,UnityEngine.GUIStyle,UnityEngine.GUIStyle,System.Boolean,System.Int32)
 void SliderHandler__ctor_m8919 (SliderHandler_t2611 * __this, Rect_t55  ___position, float ___currentValue, float ___size, float ___start, float ___end, GUIStyle_t138 * ___slider, GUIStyle_t138 * ___thumb, bool ___horiz, int32_t ___id, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.SliderHandler::Handle()
 float SliderHandler_Handle_m8920 (SliderHandler_t2611 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.SliderHandler::OnMouseDown()
 float SliderHandler_OnMouseDown_m8921 (SliderHandler_t2611 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.SliderHandler::OnMouseDrag()
 float SliderHandler_OnMouseDrag_m8922 (SliderHandler_t2611 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.SliderHandler::OnMouseUp()
 float SliderHandler_OnMouseUp_m8923 (SliderHandler_t2611 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.SliderHandler::OnRepaint()
 float SliderHandler_OnRepaint_m8924 (SliderHandler_t2611 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventType UnityEngine.SliderHandler::CurrentEventType()
 int32_t SliderHandler_CurrentEventType_m8925 (SliderHandler_t2611 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.SliderHandler::CurrentScrollTroughSide()
 int32_t SliderHandler_CurrentScrollTroughSide_m8926 (SliderHandler_t2611 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.SliderHandler::IsEmptySlider()
 bool SliderHandler_IsEmptySlider_m8927 (SliderHandler_t2611 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.SliderHandler::SupportsPageMovements()
 bool SliderHandler_SupportsPageMovements_m8928 (SliderHandler_t2611 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.SliderHandler::PageMovementValue()
 float SliderHandler_PageMovementValue_m8929 (SliderHandler_t2611 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.SliderHandler::PageUpMovementBound()
 float SliderHandler_PageUpMovementBound_m8930 (SliderHandler_t2611 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Event UnityEngine.SliderHandler::CurrentEvent()
 Event_t421 * SliderHandler_CurrentEvent_m8931 (SliderHandler_t2611 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.SliderHandler::ValueForCurrentMousePosition()
 float SliderHandler_ValueForCurrentMousePosition_m8932 (SliderHandler_t2611 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.SliderHandler::Clamp(System.Single)
 float SliderHandler_Clamp_m8933 (SliderHandler_t2611 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.SliderHandler::ThumbSelectionRect()
 Rect_t55  SliderHandler_ThumbSelectionRect_m8934 (SliderHandler_t2611 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SliderHandler::StartDraggingWithValue(System.Single)
 void SliderHandler_StartDraggingWithValue_m8935 (SliderHandler_t2611 * __this, float ___dragStartValue, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.SliderState UnityEngine.SliderHandler::SliderState()
 SliderState_t2610 * SliderHandler_SliderState_m8936 (SliderHandler_t2611 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.SliderHandler::ThumbRect()
 Rect_t55  SliderHandler_ThumbRect_m8937 (SliderHandler_t2611 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.SliderHandler::VerticalThumbRect()
 Rect_t55  SliderHandler_VerticalThumbRect_m8938 (SliderHandler_t2611 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.SliderHandler::HorizontalThumbRect()
 Rect_t55  SliderHandler_HorizontalThumbRect_m8939 (SliderHandler_t2611 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.SliderHandler::ClampedCurrentValue()
 float SliderHandler_ClampedCurrentValue_m8940 (SliderHandler_t2611 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.SliderHandler::MousePosition()
 float SliderHandler_MousePosition_m8941 (SliderHandler_t2611 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.SliderHandler::ValuesPerPixel()
 float SliderHandler_ValuesPerPixel_m8942 (SliderHandler_t2611 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.SliderHandler::ThumbSize()
 float SliderHandler_ThumbSize_m8943 (SliderHandler_t2611 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.SliderHandler::MaxValue()
 float SliderHandler_MaxValue_m8944 (SliderHandler_t2611 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.SliderHandler::MinValue()
 float SliderHandler_MinValue_m8945 (SliderHandler_t2611 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
