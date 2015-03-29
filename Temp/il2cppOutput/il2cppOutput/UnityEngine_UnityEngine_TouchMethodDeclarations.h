#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Touch
struct Touch_t526;
struct Touch_t526_marshaled;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.TouchPhase
#include "UnityEngine_UnityEngine_TouchPhase.h"

// System.Int32 UnityEngine.Touch::get_fingerId()
 int32_t Touch_get_fingerId_m4081 (Touch_t526 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
 Vector2_t51  Touch_get_position_m2702 (Touch_t526 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
 int32_t Touch_get_phase_m2703 (Touch_t526 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void Touch_t526_marshal(const Touch_t526& unmarshaled, Touch_t526_marshaled& marshaled);
void Touch_t526_marshal_back(const Touch_t526_marshaled& marshaled, Touch_t526& unmarshaled);
void Touch_t526_marshal_cleanup(Touch_t526_marshaled& marshaled);
