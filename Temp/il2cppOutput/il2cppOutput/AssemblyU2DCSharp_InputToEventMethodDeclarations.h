#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// InputToEvent
struct InputToEvent_t349;
// UnityEngine.GameObject
struct GameObject_t47;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void InputToEvent::.ctor()
 void InputToEvent__ctor_m1794 (InputToEvent_t349 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject InputToEvent::get_goPointedAt()
 GameObject_t47 * InputToEvent_get_goPointedAt_m1795 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InputToEvent::set_goPointedAt(UnityEngine.GameObject)
 void InputToEvent_set_goPointedAt_m1796 (Object_t * __this/* static, unused */, GameObject_t47 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 InputToEvent::get_DragVector()
 Vector2_t51  InputToEvent_get_DragVector_m1797 (InputToEvent_t349 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InputToEvent::Start()
 void InputToEvent_Start_m1798 (InputToEvent_t349 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InputToEvent::Update()
 void InputToEvent_Update_m1799 (InputToEvent_t349 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InputToEvent::Press(UnityEngine.Vector2)
 void InputToEvent_Press_m1800 (InputToEvent_t349 * __this, Vector2_t51  ___screenPos, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InputToEvent::Release(UnityEngine.Vector2)
 void InputToEvent_Release_m1801 (InputToEvent_t349 * __this, Vector2_t51  ___screenPos, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject InputToEvent::RaycastObject(UnityEngine.Vector2)
 GameObject_t47 * InputToEvent_RaycastObject_m1802 (InputToEvent_t349 * __this, Vector2_t51  ___screenPos, MethodInfo* method) IL2CPP_METHOD_ATTR;
