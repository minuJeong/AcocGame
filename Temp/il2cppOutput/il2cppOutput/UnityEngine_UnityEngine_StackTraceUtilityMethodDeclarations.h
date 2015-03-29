#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.StackTraceUtility
struct StackTraceUtility_t2612;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Diagnostics.StackTrace
struct StackTrace_t2613;

// System.Void UnityEngine.StackTraceUtility::.ctor()
 void StackTraceUtility__ctor_m8946 (StackTraceUtility_t2612 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.StackTraceUtility::.cctor()
 void StackTraceUtility__cctor_m8947 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.StackTraceUtility::SetProjectFolder(System.String)
 void StackTraceUtility_SetProjectFolder_m8948 (Object_t * __this/* static, unused */, String_t* ___folder, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.StackTraceUtility::ExtractStackTrace()
 String_t* StackTraceUtility_ExtractStackTrace_m8949 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.StackTraceUtility::IsSystemStacktraceType(System.Object)
 bool StackTraceUtility_IsSystemStacktraceType_m8950 (Object_t * __this/* static, unused */, Object_t * ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.StackTraceUtility::ExtractStringFromException(System.Object)
 String_t* StackTraceUtility_ExtractStringFromException_m8951 (Object_t * __this/* static, unused */, Object_t * ___exception, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.StackTraceUtility::ExtractStringFromExceptionInternal(System.Object,System.String&,System.String&)
 void StackTraceUtility_ExtractStringFromExceptionInternal_m8952 (Object_t * __this/* static, unused */, Object_t * ___exceptiono, String_t** ___message, String_t** ___stackTrace, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.StackTraceUtility::PostprocessStacktrace(System.String,System.Boolean)
 String_t* StackTraceUtility_PostprocessStacktrace_m8953 (Object_t * __this/* static, unused */, String_t* ___oldString, bool ___stripEngineInternalInformation, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.StackTraceUtility::ExtractFormattedStackTrace(System.Diagnostics.StackTrace)
 String_t* StackTraceUtility_ExtractFormattedStackTrace_m8954 (Object_t * __this/* static, unused */, StackTrace_t2613 * ___stackTrace, MethodInfo* method) IL2CPP_METHOD_ATTR;
