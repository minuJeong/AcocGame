#pragma once
#include <stdint.h>
// System.Object
struct Object_t;
// Parse.ParseConfig
struct ParseConfig_t1106;
// Parse.Internal.TaskQueue
struct TaskQueue_t1076;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t432;
// System.Func`2<System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>,Parse.ParseConfig>
struct Func_2_t1107;
// System.Object
#include "mscorlib_System_Object.h"
// Parse.ParseConfig
struct ParseConfig_t1106  : public Object_t
{
	// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseConfig::properties
	Object_t* ___properties;
};
struct ParseConfig_t1106_StaticFields{
	// System.Object Parse.ParseConfig::currentConfigMutex
	Object_t * ___currentConfigMutex;
	// Parse.ParseConfig Parse.ParseConfig::currentConfig
	ParseConfig_t1106 * ___currentConfig;
	// Parse.Internal.TaskQueue Parse.ParseConfig::taskQueue
	TaskQueue_t1076 * ___taskQueue;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>,Parse.ParseConfig> Parse.ParseConfig::CS$<>9__CachedAnonymousMethodDelegate5
	Func_2_t1107 * ___CS$U3CU3E9__CachedAnonymousMethodDelegate5;
};
