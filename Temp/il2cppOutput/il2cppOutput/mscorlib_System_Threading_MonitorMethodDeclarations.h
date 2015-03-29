#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Monitor
struct Monitor_t3662;
// System.Object
struct Object_t;

// System.Void System.Threading.Monitor::Enter(System.Object)
 void Monitor_Enter_m2402 (Object_t * __this/* static, unused */, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Monitor::Exit(System.Object)
 void Monitor_Exit_m2405 (Object_t * __this/* static, unused */, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Monitor::Monitor_pulse(System.Object)
 void Monitor_Monitor_pulse_m13901 (Object_t * __this/* static, unused */, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Monitor::Monitor_test_synchronised(System.Object)
 bool Monitor_Monitor_test_synchronised_m13902 (Object_t * __this/* static, unused */, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Monitor::Pulse(System.Object)
 void Monitor_Pulse_m13903 (Object_t * __this/* static, unused */, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Monitor::Monitor_pulse_all(System.Object)
 void Monitor_Monitor_pulse_all_m13904 (Object_t * __this/* static, unused */, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Monitor::PulseAll(System.Object)
 void Monitor_PulseAll_m13905 (Object_t * __this/* static, unused */, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Monitor::Monitor_wait(System.Object,System.Int32)
 bool Monitor_Monitor_wait_m13906 (Object_t * __this/* static, unused */, Object_t * ___obj, int32_t ___ms, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Monitor::Wait(System.Object)
 bool Monitor_Wait_m7007 (Object_t * __this/* static, unused */, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Monitor::Wait(System.Object,System.Int32)
 bool Monitor_Wait_m13907 (Object_t * __this/* static, unused */, Object_t * ___obj, int32_t ___millisecondsTimeout, MethodInfo* method) IL2CPP_METHOD_ATTR;
