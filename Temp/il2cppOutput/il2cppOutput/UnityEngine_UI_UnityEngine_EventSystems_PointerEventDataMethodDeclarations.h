#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t549;
// UnityEngine.GameObject
struct GameObject_t47;
// UnityEngine.Camera
struct Camera_t204;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t547;
// System.String
struct String_t;
// UnityEngine.EventSystems.RaycastResult
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResult.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.EventSystems.PointerEventData/InputButton
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerEventData_Inp.h"

// System.Void UnityEngine.EventSystems.PointerEventData::.ctor(UnityEngine.EventSystems.EventSystem)
 void PointerEventData__ctor_m2920 (PointerEventData_t549 * __this, EventSystem_t547 * ___eventSystem, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::get_pointerEnter()
 GameObject_t47 * PointerEventData_get_pointerEnter_m2921 (PointerEventData_t549 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_pointerEnter(UnityEngine.GameObject)
 void PointerEventData_set_pointerEnter_m2922 (PointerEventData_t549 * __this, GameObject_t47 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::get_lastPress()
 GameObject_t47 * PointerEventData_get_lastPress_m2923 (PointerEventData_t549 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_lastPress(UnityEngine.GameObject)
 void PointerEventData_set_lastPress_m2924 (PointerEventData_t549 * __this, GameObject_t47 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::get_rawPointerPress()
 GameObject_t47 * PointerEventData_get_rawPointerPress_m2925 (PointerEventData_t549 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_rawPointerPress(UnityEngine.GameObject)
 void PointerEventData_set_rawPointerPress_m2926 (PointerEventData_t549 * __this, GameObject_t47 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::get_pointerDrag()
 GameObject_t47 * PointerEventData_get_pointerDrag_m2927 (PointerEventData_t549 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_pointerDrag(UnityEngine.GameObject)
 void PointerEventData_set_pointerDrag_m2928 (PointerEventData_t549 * __this, GameObject_t47 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::get_pointerCurrentRaycast()
 RaycastResult_t551  PointerEventData_get_pointerCurrentRaycast_m2929 (PointerEventData_t549 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_pointerCurrentRaycast(UnityEngine.EventSystems.RaycastResult)
 void PointerEventData_set_pointerCurrentRaycast_m2930 (PointerEventData_t549 * __this, RaycastResult_t551  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::get_pointerPressRaycast()
 RaycastResult_t551  PointerEventData_get_pointerPressRaycast_m2931 (PointerEventData_t549 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_pointerPressRaycast(UnityEngine.EventSystems.RaycastResult)
 void PointerEventData_set_pointerPressRaycast_m2932 (PointerEventData_t549 * __this, RaycastResult_t551  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.PointerEventData::get_eligibleForClick()
 bool PointerEventData_get_eligibleForClick_m2933 (PointerEventData_t549 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_eligibleForClick(System.Boolean)
 void PointerEventData_set_eligibleForClick_m2934 (PointerEventData_t549 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.EventSystems.PointerEventData::get_pointerId()
 int32_t PointerEventData_get_pointerId_m2935 (PointerEventData_t549 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_pointerId(System.Int32)
 void PointerEventData_set_pointerId_m2936 (PointerEventData_t549 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_position()
 Vector2_t51  PointerEventData_get_position_m2937 (PointerEventData_t549 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_position(UnityEngine.Vector2)
 void PointerEventData_set_position_m2938 (PointerEventData_t549 * __this, Vector2_t51  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_delta()
 Vector2_t51  PointerEventData_get_delta_m2939 (PointerEventData_t549 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_delta(UnityEngine.Vector2)
 void PointerEventData_set_delta_m2940 (PointerEventData_t549 * __this, Vector2_t51  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_pressPosition()
 Vector2_t51  PointerEventData_get_pressPosition_m2941 (PointerEventData_t549 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_pressPosition(UnityEngine.Vector2)
 void PointerEventData_set_pressPosition_m2942 (PointerEventData_t549 * __this, Vector2_t51  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::get_worldPosition()
 Vector3_t31  PointerEventData_get_worldPosition_m2943 (PointerEventData_t549 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_worldPosition(UnityEngine.Vector3)
 void PointerEventData_set_worldPosition_m2944 (PointerEventData_t549 * __this, Vector3_t31  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::get_worldNormal()
 Vector3_t31  PointerEventData_get_worldNormal_m2945 (PointerEventData_t549 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_worldNormal(UnityEngine.Vector3)
 void PointerEventData_set_worldNormal_m2946 (PointerEventData_t549 * __this, Vector3_t31  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.EventSystems.PointerEventData::get_clickTime()
 float PointerEventData_get_clickTime_m2947 (PointerEventData_t549 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_clickTime(System.Single)
 void PointerEventData_set_clickTime_m2948 (PointerEventData_t549 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.EventSystems.PointerEventData::get_clickCount()
 int32_t PointerEventData_get_clickCount_m2949 (PointerEventData_t549 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_clickCount(System.Int32)
 void PointerEventData_set_clickCount_m2950 (PointerEventData_t549 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_scrollDelta()
 Vector2_t51  PointerEventData_get_scrollDelta_m2951 (PointerEventData_t549 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_scrollDelta(UnityEngine.Vector2)
 void PointerEventData_set_scrollDelta_m2952 (PointerEventData_t549 * __this, Vector2_t51  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.PointerEventData::get_useDragThreshold()
 bool PointerEventData_get_useDragThreshold_m2953 (PointerEventData_t549 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_useDragThreshold(System.Boolean)
 void PointerEventData_set_useDragThreshold_m2954 (PointerEventData_t549 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.PointerEventData::get_dragging()
 bool PointerEventData_get_dragging_m2955 (PointerEventData_t549 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_dragging(System.Boolean)
 void PointerEventData_set_dragging_m2956 (PointerEventData_t549 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::get_button()
 int32_t PointerEventData_get_button_m2957 (PointerEventData_t549 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_button(UnityEngine.EventSystems.PointerEventData/InputButton)
 void PointerEventData_set_button_m2958 (PointerEventData_t549 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.PointerEventData::IsPointerMoving()
 bool PointerEventData_IsPointerMoving_m2959 (PointerEventData_t549 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.PointerEventData::IsScrolling()
 bool PointerEventData_IsScrolling_m2960 (PointerEventData_t549 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UnityEngine.EventSystems.PointerEventData::get_enterEventCamera()
 Camera_t204 * PointerEventData_get_enterEventCamera_m2961 (PointerEventData_t549 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UnityEngine.EventSystems.PointerEventData::get_pressEventCamera()
 Camera_t204 * PointerEventData_get_pressEventCamera_m2962 (PointerEventData_t549 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::get_pointerPress()
 GameObject_t47 * PointerEventData_get_pointerPress_m2963 (PointerEventData_t549 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerEventData::set_pointerPress(UnityEngine.GameObject)
 void PointerEventData_set_pointerPress_m2964 (PointerEventData_t549 * __this, GameObject_t47 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.EventSystems.PointerEventData::ToString()
 String_t* PointerEventData_ToString_m2965 (PointerEventData_t549 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
