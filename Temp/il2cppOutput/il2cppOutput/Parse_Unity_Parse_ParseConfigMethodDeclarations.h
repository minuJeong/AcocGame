#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.ParseConfig
struct ParseConfig_t1106;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t122;
// System.Threading.Tasks.Task`1<Parse.ParseConfig>
struct Task_1_t1104;
// System.Threading.Tasks.Task
struct Task_t390;
// System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>
struct Task_1_t1099;
// System.Threading.CancellationToken
#include "Parse_Unity_System_Threading_CancellationToken.h"

// Parse.ParseConfig Parse.ParseConfig::get_CurrentConfig()
 ParseConfig_t1106 * ParseConfig_get_CurrentConfig_m5623 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseConfig::set_CurrentConfig(Parse.ParseConfig)
 void ParseConfig_set_CurrentConfig_m5624 (Object_t * __this/* static, unused */, ParseConfig_t1106 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseConfig::ClearCurrentConfig()
 void ParseConfig_ClearCurrentConfig_m5625 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseConfig::ClearCurrentConfigInMemory()
 void ParseConfig_ClearCurrentConfigInMemory_m5626 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseConfig::.ctor()
 void ParseConfig__ctor_m5627 (ParseConfig_t1106 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseConfig::.ctor(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
 void ParseConfig__ctor_m5628 (ParseConfig_t1106 * __this, Dictionary_2_t122 * ___fetchedConfig, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<Parse.ParseConfig> Parse.ParseConfig::GetAsync()
 Task_1_t1104 * ParseConfig_GetAsync_m5629 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<Parse.ParseConfig> Parse.ParseConfig::GetAsync(System.Threading.CancellationToken)
 Task_1_t1104 * ParseConfig_GetAsync_m5630 (Object_t * __this/* static, unused */, CancellationToken_t992  ___cancellationToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<Parse.ParseConfig> Parse.ParseConfig::GetAsync(System.Threading.Tasks.Task,System.Threading.CancellationToken)
 Task_1_t1104 * ParseConfig_GetAsync_m5631 (Object_t * __this/* static, unused */, Task_t390 * ___toAwait, CancellationToken_t992  ___cancellationToken, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseConfig Parse.ParseConfig::HandleFetchResult(System.Object)
 ParseConfig_t1106 * ParseConfig_HandleFetchResult_m5632 (Object_t * __this/* static, unused */, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseConfig::SaveCurrentConfigFromFetchedConfig(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
 void ParseConfig_SaveCurrentConfigFromFetchedConfig_m5633 (Object_t * __this/* static, unused */, Dictionary_2_t122 * ___fetchedConfig, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Parse.ParseConfig::get_Item(System.String)
 Object_t * ParseConfig_get_Item_m5634 (ParseConfig_t1106 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseConfig Parse.ParseConfig::<GetAsync>b__4(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
 ParseConfig_t1106 * ParseConfig_U3CGetAsyncU3Eb__4_m5635 (Object_t * __this/* static, unused */, Task_1_t1099 * ___task, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseConfig::.cctor()
 void ParseConfig__cctor_m5636 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
