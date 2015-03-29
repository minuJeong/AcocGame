#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Debug
struct Debug_t2541;
// System.String
struct String_t;
// UnityEngine.Object
struct Object_t111;
struct Object_t111_marshaled;
// System.Exception
struct Exception_t107;
// System.Object
struct Object_t;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"

// System.Void UnityEngine.Debug::DrawLine(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Color,System.Single)
 void Debug_DrawLine_m2687 (Object_t * __this/* static, unused */, Vector3_t31  ___start, Vector3_t31  ___end, Color_t30  ___color, float ___duration, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::DrawLine(UnityEngine.Vector3,UnityEngine.Vector3)
 void Debug_DrawLine_m2302 (Object_t * __this/* static, unused */, Vector3_t31  ___start, Vector3_t31  ___end, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::INTERNAL_CALL_DrawLine(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Color&,System.Single,System.Boolean)
 void Debug_INTERNAL_CALL_DrawLine_m8550 (Object_t * __this/* static, unused */, Vector3_t31 * ___start, Vector3_t31 * ___end, Color_t30 * ___color, float ___duration, bool ___depthTest, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::Internal_Log(System.Int32,System.String,UnityEngine.Object)
 void Debug_Internal_Log_m8551 (Object_t * __this/* static, unused */, int32_t ___level, String_t* ___msg, Object_t111 * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::Internal_LogException(System.Exception,UnityEngine.Object)
 void Debug_Internal_LogException_m8552 (Object_t * __this/* static, unused */, Exception_t107 * ___exception, Object_t111 * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::Log(System.Object)
 void Debug_Log_m384 (Object_t * __this/* static, unused */, Object_t * ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogError(System.Object)
 void Debug_LogError_m486 (Object_t * __this/* static, unused */, Object_t * ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogError(System.Object,UnityEngine.Object)
 void Debug_LogError_m4297 (Object_t * __this/* static, unused */, Object_t * ___message, Object_t111 * ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogException(System.Exception)
 void Debug_LogException_m6932 (Object_t * __this/* static, unused */, Exception_t107 * ___exception, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogException(System.Exception,UnityEngine.Object)
 void Debug_LogException_m4174 (Object_t * __this/* static, unused */, Exception_t107 * ___exception, Object_t111 * ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
 void Debug_LogWarning_m422 (Object_t * __this/* static, unused */, Object_t * ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogWarning(System.Object,UnityEngine.Object)
 void Debug_LogWarning_m4466 (Object_t * __this/* static, unused */, Object_t * ___message, Object_t111 * ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Debug::get_isDebugBuild()
 bool Debug_get_isDebugBuild_m4719 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
