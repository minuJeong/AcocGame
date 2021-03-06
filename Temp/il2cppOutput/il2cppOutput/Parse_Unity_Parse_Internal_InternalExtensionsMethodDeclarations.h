﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.InternalExtensions
struct InternalExtensions_t1026;
// System.Threading.Tasks.Task
struct Task_t390;
// System.Object
struct Object_t;
// Parse.Internal.InternalExtensions/PartialAccessor`1<System.Threading.Tasks.Task>
struct PartialAccessor_1_t1027;
// System.Action`1<System.Threading.Tasks.Task>
struct Action_1_t1021;
// System.Func`1<System.Threading.Tasks.Task`1<System.Boolean>>
struct Func_1_t1024;
// System.Func`1<System.Threading.Tasks.Task>
struct Func_1_t1023;

// System.Threading.Tasks.Task Parse.Internal.InternalExtensions::Safe(System.Threading.Tasks.Task)
 Task_t390 * InternalExtensions_Safe_m5363 (Object_t * __this/* static, unused */, Task_t390 * ___task, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.Internal.InternalExtensions::PartialAsync(System.Object,Parse.Internal.InternalExtensions/PartialAccessor`1<System.Threading.Tasks.Task>)
 Task_t390 * InternalExtensions_PartialAsync_m5364 (Object_t * __this/* static, unused */, Object_t * ___self, PartialAccessor_1_t1027 * ___partial, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.Internal.InternalExtensions::PartialAsync(Parse.Internal.InternalExtensions/PartialAccessor`1<System.Threading.Tasks.Task>)
 Task_t390 * InternalExtensions_PartialAsync_m5365 (Object_t * __this/* static, unused */, PartialAccessor_1_t1027 * ___partial, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.Internal.InternalExtensions::OnSuccess(System.Threading.Tasks.Task,System.Action`1<System.Threading.Tasks.Task>)
 Task_t390 * InternalExtensions_OnSuccess_m5366 (Object_t * __this/* static, unused */, Task_t390 * ___task, Action_1_t1021 * ___continuation, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.Internal.InternalExtensions::WhileAsync(System.Func`1<System.Threading.Tasks.Task`1<System.Boolean>>,System.Func`1<System.Threading.Tasks.Task>)
 Task_t390 * InternalExtensions_WhileAsync_m5367 (Object_t * __this/* static, unused */, Func_1_t1024 * ___predicate, Func_1_t1023 * ___body, MethodInfo* method) IL2CPP_METHOD_ATTR;
