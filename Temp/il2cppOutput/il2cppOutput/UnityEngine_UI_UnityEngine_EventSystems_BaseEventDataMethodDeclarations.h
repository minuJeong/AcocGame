#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t545;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_t544;
// UnityEngine.GameObject
struct GameObject_t47;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t547;

// System.Void UnityEngine.EventSystems.BaseEventData::.ctor(UnityEngine.EventSystems.EventSystem)
 void BaseEventData__ctor_m2913 (BaseEventData_t545 * __this, EventSystem_t547 * ___eventSystem, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.BaseEventData::Reset()
 void BaseEventData_Reset_m2914 (BaseEventData_t545 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.BaseEventData::Use()
 void BaseEventData_Use_m2915 (BaseEventData_t545 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.BaseEventData::get_used()
 bool BaseEventData_get_used_m2916 (BaseEventData_t545 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.BaseInputModule UnityEngine.EventSystems.BaseEventData::get_currentInputModule()
 BaseInputModule_t544 * BaseEventData_get_currentInputModule_m2917 (BaseEventData_t545 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.EventSystems.BaseEventData::get_selectedObject()
 GameObject_t47 * BaseEventData_get_selectedObject_m2918 (BaseEventData_t545 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.BaseEventData::set_selectedObject(UnityEngine.GameObject)
 void BaseEventData_set_selectedObject_m2919 (BaseEventData_t545 * __this, GameObject_t47 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
