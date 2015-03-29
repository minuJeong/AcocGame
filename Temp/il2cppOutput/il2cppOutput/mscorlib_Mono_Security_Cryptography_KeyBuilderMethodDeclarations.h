﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Cryptography.KeyBuilder
struct KeyBuilder_t3235;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t3232;
// System.Byte[]
struct ByteU5BU5D_t21;

// System.Security.Cryptography.RandomNumberGenerator Mono.Security.Cryptography.KeyBuilder::get_Rng()
 RandomNumberGenerator_t3232 * KeyBuilder_get_Rng_m11383 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.KeyBuilder::Key(System.Int32)
 ByteU5BU5D_t21* KeyBuilder_Key_m11384 (Object_t * __this/* static, unused */, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.KeyBuilder::IV(System.Int32)
 ByteU5BU5D_t21* KeyBuilder_IV_m11385 (Object_t * __this/* static, unused */, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
