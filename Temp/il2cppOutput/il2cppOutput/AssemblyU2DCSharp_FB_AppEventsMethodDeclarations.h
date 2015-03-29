#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// FB/AppEvents
struct AppEvents_t141;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t122;
// System.Nullable`1<System.Single>
#include "mscorlib_System_Nullable_1_gen_1.h"

// System.Void FB/AppEvents::.ctor()
 void AppEvents__ctor_m734 (AppEvents_t141 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean FB/AppEvents::get_LimitEventUsage()
 bool AppEvents_get_LimitEventUsage_m735 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FB/AppEvents::set_LimitEventUsage(System.Boolean)
 void AppEvents_set_LimitEventUsage_m736 (Object_t * __this/* static, unused */, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FB/AppEvents::LogEvent(System.String,System.Nullable`1<System.Single>,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
 void AppEvents_LogEvent_m737 (Object_t * __this/* static, unused */, String_t* ___logEvent, Nullable_1_t125  ___valueToSum, Dictionary_2_t122 * ___parameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FB/AppEvents::LogPurchase(System.Single,System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
 void AppEvents_LogPurchase_m738 (Object_t * __this/* static, unused */, float ___logPurchase, String_t* ___currency, Dictionary_2_t122 * ___parameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
