﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.ExceptionServices.ExceptionDispatchInfo
struct ExceptionDispatchInfo_t986;
// System.Exception
struct Exception_t107;

// System.Runtime.ExceptionServices.ExceptionDispatchInfo System.Runtime.ExceptionServices.ExceptionDispatchInfo::Capture(System.Exception)
 ExceptionDispatchInfo_t986 * ExceptionDispatchInfo_Capture_m5311 (Object_t * __this/* static, unused */, Exception_t107 * ___ex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.ExceptionServices.ExceptionDispatchInfo::.ctor(System.Exception)
 void ExceptionDispatchInfo__ctor_m5312 (ExceptionDispatchInfo_t986 * __this, Exception_t107 * ___ex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Runtime.ExceptionServices.ExceptionDispatchInfo::get_SourceException()
 Exception_t107 * ExceptionDispatchInfo_get_SourceException_m5313 (ExceptionDispatchInfo_t986 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.ExceptionServices.ExceptionDispatchInfo::set_SourceException(System.Exception)
 void ExceptionDispatchInfo_set_SourceException_m5314 (ExceptionDispatchInfo_t986 * __this, Exception_t107 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.ExceptionServices.ExceptionDispatchInfo::Throw()
 void ExceptionDispatchInfo_Throw_m5315 (ExceptionDispatchInfo_t986 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
