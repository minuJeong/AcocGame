#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Event
struct Event_t421;
struct Event_t421_marshaled;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.EventType
#include "UnityEngine_UnityEngine_EventType.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.EventModifiers
#include "UnityEngine_UnityEngine_EventModifiers.h"
// UnityEngine.KeyCode
#include "UnityEngine_UnityEngine_KeyCode.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Event::.ctor()
 void Event__ctor_m4334 (Event_t421 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::Init()
 void Event_Init_m8303 (Event_t421 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::Finalize()
 void Event_Finalize_m8304 (Event_t421 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::Cleanup()
 void Event_Cleanup_m8305 (Event_t421 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventType UnityEngine.Event::get_rawType()
 int32_t Event_get_rawType_m4353 (Event_t421 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventType UnityEngine.Event::get_type()
 int32_t Event_get_type_m2081 (Event_t421 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventType UnityEngine.Event::GetTypeForControl(System.Int32)
 int32_t Event_GetTypeForControl_m8306 (Event_t421 * __this, int32_t ___controlID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Event::get_mousePosition()
 Vector2_t51  Event_get_mousePosition_m8307 (Event_t421 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::Internal_GetMousePosition(UnityEngine.Vector2&)
 void Event_Internal_GetMousePosition_m8308 (Event_t421 * __this, Vector2_t51 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Event::get_delta()
 Vector2_t51  Event_get_delta_m8309 (Event_t421 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::Internal_GetMouseDelta(UnityEngine.Vector2&)
 void Event_Internal_GetMouseDelta_m8310 (Event_t421 * __this, Vector2_t51 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventModifiers UnityEngine.Event::get_modifiers()
 int32_t Event_get_modifiers_m4350 (Event_t421 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char UnityEngine.Event::get_character()
 uint16_t Event_get_character_m4351 (Event_t421 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Event::get_commandName()
 String_t* Event_get_commandName_m8311 (Event_t421 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.KeyCode UnityEngine.Event::get_keyCode()
 int32_t Event_get_keyCode_m2234 (Event_t421 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Event UnityEngine.Event::get_current()
 Event_t421 * Event_get_current_m2080 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::Internal_SetNativeEvent(System.IntPtr)
 void Event_Internal_SetNativeEvent_m8312 (Object_t * __this/* static, unused */, IntPtr_t39 ___ptr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::Internal_MakeMasterEventCurrent()
 void Event_Internal_MakeMasterEventCurrent_m8313 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Event::Use()
 void Event_Use_m8314 (Event_t421 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Event::PopEvent(UnityEngine.Event)
 bool Event_PopEvent_m4354 (Object_t * __this/* static, unused */, Event_t421 * ___outEvent, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Event::get_isKey()
 bool Event_get_isKey_m8315 (Event_t421 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Event::get_isMouse()
 bool Event_get_isMouse_m8316 (Event_t421 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Event::GetHashCode()
 int32_t Event_GetHashCode_m8317 (Event_t421 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Event::Equals(System.Object)
 bool Event_Equals_m8318 (Event_t421 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Event::ToString()
 String_t* Event_ToString_m8319 (Event_t421 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void Event_t421_marshal(const Event_t421& unmarshaled, Event_t421_marshaled& marshaled);
void Event_t421_marshal_back(const Event_t421_marshaled& marshaled, Event_t421& unmarshaled);
void Event_t421_marshal_cleanup(Event_t421_marshaled& marshaled);
