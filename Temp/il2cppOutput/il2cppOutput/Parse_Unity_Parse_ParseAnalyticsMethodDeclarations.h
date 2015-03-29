#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.ParseAnalytics
struct ParseAnalytics_t1082;
// System.Threading.Tasks.Task
struct Task_t390;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.String>
struct IDictionary_2_t1003;

// System.Threading.Tasks.Task Parse.ParseAnalytics::TrackAppOpenedAsync()
 Task_t390 * ParseAnalytics_TrackAppOpenedAsync_m5560 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseAnalytics::TrackEventAsync(System.String)
 Task_t390 * ParseAnalytics_TrackEventAsync_m5561 (Object_t * __this/* static, unused */, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseAnalytics::TrackEventAsync(System.String,System.Collections.Generic.IDictionary`2<System.String,System.String>)
 Task_t390 * ParseAnalytics_TrackEventAsync_m5562 (Object_t * __this/* static, unused */, String_t* ___name, Object_t* ___dimensions, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseAnalytics::TrackAppOpenedWithPushHashAsync(System.String)
 Task_t390 * ParseAnalytics_TrackAppOpenedWithPushHashAsync_m5563 (Object_t * __this/* static, unused */, String_t* ___pushHash, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseAnalytics::.ctor()
 void ParseAnalytics__ctor_m5564 (ParseAnalytics_t1082 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
