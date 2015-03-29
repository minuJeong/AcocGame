#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Security
struct Security_t2530;
// System.String
struct String_t;
// System.Reflection.Assembly
struct Assembly_t147;
// System.Byte[]
struct ByteU5BU5D_t21;

// System.Boolean UnityEngine.Security::PrefetchSocketPolicy(System.String,System.Int32,System.Int32)
 bool Security_PrefetchSocketPolicy_m2761 (Object_t * __this/* static, unused */, String_t* ___ip, int32_t ___atPort, int32_t ___timeout, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly UnityEngine.Security::LoadAndVerifyAssembly(System.Byte[],System.String)
 Assembly_t147 * Security_LoadAndVerifyAssembly_m2095 (Object_t * __this/* static, unused */, ByteU5BU5D_t21* ___assemblyData, String_t* ___authorizationKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
