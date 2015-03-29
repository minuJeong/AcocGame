#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.CancellationTokenSource
struct CancellationTokenSource_t1226;
// System.Action
struct Action_t1220;
// System.Threading.CancellationToken
#include "Parse_Unity_System_Threading_CancellationToken.h"
// System.Threading.CancellationTokenRegistration
#include "Parse_Unity_System_Threading_CancellationTokenRegistration.h"

// System.Threading.CancellationTokenRegistration System.Threading.CancellationTokenSource::Register(System.Action)
 CancellationTokenRegistration_t1227  CancellationTokenSource_Register_m6036 (CancellationTokenSource_t1226 * __this, Action_t1220 * ___action, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.CancellationTokenSource::Unregister(System.Action)
 void CancellationTokenSource_Unregister_m6037 (CancellationTokenSource_t1226 * __this, Action_t1220 * ___action, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.CancellationTokenSource::get_IsCancellationRequested()
 bool CancellationTokenSource_get_IsCancellationRequested_m6038 (CancellationTokenSource_t1226 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.CancellationToken System.Threading.CancellationTokenSource::get_Token()
 CancellationToken_t992  CancellationTokenSource_get_Token_m6039 (CancellationTokenSource_t1226 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.CancellationTokenSource::Cancel()
 void CancellationTokenSource_Cancel_m6040 (CancellationTokenSource_t1226 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.CancellationTokenSource::Cancel(System.Boolean)
 void CancellationTokenSource_Cancel_m6041 (CancellationTokenSource_t1226 * __this, bool ___throwOnFirstException, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.CancellationTokenSource::.ctor()
 void CancellationTokenSource__ctor_m6042 (CancellationTokenSource_t1226 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
