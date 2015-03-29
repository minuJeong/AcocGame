﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_t544;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t547;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t550;
// UnityEngine.GameObject
struct GameObject_t47;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t549;
// UnityEngine.EventSystems.AxisEventData
struct AxisEventData_t557;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t545;
// UnityEngine.EventSystems.RaycastResult
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResult.h"
// UnityEngine.EventSystems.MoveDirection
#include "UnityEngine_UI_UnityEngine_EventSystems_MoveDirection.h"

// System.Void UnityEngine.EventSystems.BaseInputModule::.ctor()
 void BaseInputModule__ctor_m2964 (BaseInputModule_t544 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseInputModule::get_eventSystem()
 EventSystem_t547 * BaseInputModule_get_eventSystem_m2965 (BaseInputModule_t544 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.BaseInputModule::OnEnable()
 void BaseInputModule_OnEnable_m2966 (BaseInputModule_t544 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.BaseInputModule::OnDisable()
 void BaseInputModule_OnDisable_m2967 (BaseInputModule_t544 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.BaseInputModule::Process()
// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.BaseInputModule::FindFirstRaycast(System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>)
 RaycastResult_t551  BaseInputModule_FindFirstRaycast_m2968 (Object_t * __this/* static, unused */, List_1_t550 * ___candidates, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.MoveDirection UnityEngine.EventSystems.BaseInputModule::DetermineMoveDirection(System.Single,System.Single)
 int32_t BaseInputModule_DetermineMoveDirection_m2969 (Object_t * __this/* static, unused */, float ___x, float ___y, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.MoveDirection UnityEngine.EventSystems.BaseInputModule::DetermineMoveDirection(System.Single,System.Single,System.Single)
 int32_t BaseInputModule_DetermineMoveDirection_m2970 (Object_t * __this/* static, unused */, float ___x, float ___y, float ___deadZone, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.EventSystems.BaseInputModule::FindCommonRoot(UnityEngine.GameObject,UnityEngine.GameObject)
 GameObject_t47 * BaseInputModule_FindCommonRoot_m2971 (Object_t * __this/* static, unused */, GameObject_t47 * ___g1, GameObject_t47 * ___g2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.BaseInputModule::HandlePointerExitAndEnter(UnityEngine.EventSystems.PointerEventData,UnityEngine.GameObject)
 void BaseInputModule_HandlePointerExitAndEnter_m2972 (BaseInputModule_t544 * __this, PointerEventData_t549 * ___currentPointerData, GameObject_t47 * ___newEnterTarget, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.AxisEventData UnityEngine.EventSystems.BaseInputModule::GetAxisEventData(System.Single,System.Single,System.Single)
 AxisEventData_t557 * BaseInputModule_GetAxisEventData_m2973 (BaseInputModule_t544 * __this, float ___x, float ___y, float ___moveDeadZone, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.BaseInputModule::GetBaseEventData()
 BaseEventData_t545 * BaseInputModule_GetBaseEventData_m2974 (BaseInputModule_t544 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.BaseInputModule::IsPointerOverGameObject(System.Int32)
 bool BaseInputModule_IsPointerOverGameObject_m2975 (BaseInputModule_t544 * __this, int32_t ___pointerId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.BaseInputModule::ShouldActivateModule()
 bool BaseInputModule_ShouldActivateModule_m2976 (BaseInputModule_t544 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.BaseInputModule::DeactivateModule()
 void BaseInputModule_DeactivateModule_m2977 (BaseInputModule_t544 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.BaseInputModule::ActivateModule()
 void BaseInputModule_ActivateModule_m2978 (BaseInputModule_t544 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.BaseInputModule::UpdateModule()
 void BaseInputModule_UpdateModule_m2979 (BaseInputModule_t544 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.BaseInputModule::IsModuleSupported()
 bool BaseInputModule_IsModuleSupported_m2980 (BaseInputModule_t544 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
