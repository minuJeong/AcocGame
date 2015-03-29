#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.CancellationToken
struct CancellationToken_t992;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_t1226;
// System.Action
struct Action_t1220;
// System.Threading.CancellationToken
#include "Parse_Unity_System_Threading_CancellationToken.h"
// System.Threading.CancellationTokenRegistration
#include "Parse_Unity_System_Threading_CancellationTokenRegistration.h"

// System.Void System.Threading.CancellationToken::.ctor(System.Threading.CancellationTokenSource)
 void CancellationToken__ctor_m6029 (CancellationToken_t992 * __this, CancellationTokenSource_t1226 * ___source, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.CancellationToken System.Threading.CancellationToken::get_None()
 CancellationToken_t992  CancellationToken_get_None_m6030 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.CancellationToken::get_IsCancellationRequested()
 bool CancellationToken_get_IsCancellationRequested_m6031 (CancellationToken_t992 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.CancellationTokenRegistration System.Threading.CancellationToken::Register(System.Action)
 CancellationTokenRegistration_t1227  CancellationToken_Register_m6032 (CancellationToken_t992 * __this, Action_t1220 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.CancellationToken::ThrowIfCancellationRequested()
 void CancellationToken_ThrowIfCancellationRequested_m6033 (CancellationToken_t992 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
