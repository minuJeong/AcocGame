﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Math.Prime.PrimalityTests
struct PrimalityTests_t3227;
// Mono.Math.BigInteger
struct BigInteger_t3224;
// Mono.Math.Prime.ConfidenceFactor
#include "mscorlib_Mono_Math_Prime_ConfidenceFactor.h"

// System.Int32 Mono.Math.Prime.PrimalityTests::GetSPPRounds(Mono.Math.BigInteger,Mono.Math.Prime.ConfidenceFactor)
 int32_t PrimalityTests_GetSPPRounds_m11302 (Object_t * __this/* static, unused */, BigInteger_t3224 * ___bi, int32_t ___confidence, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.Prime.PrimalityTests::Test(Mono.Math.BigInteger,Mono.Math.Prime.ConfidenceFactor)
 bool PrimalityTests_Test_m11303 (Object_t * __this/* static, unused */, BigInteger_t3224 * ___n, int32_t ___confidence, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.Prime.PrimalityTests::RabinMillerTest(Mono.Math.BigInteger,Mono.Math.Prime.ConfidenceFactor)
 bool PrimalityTests_RabinMillerTest_m11304 (Object_t * __this/* static, unused */, BigInteger_t3224 * ___n, int32_t ___confidence, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.Prime.PrimalityTests::SmallPrimeSppTest(Mono.Math.BigInteger,Mono.Math.Prime.ConfidenceFactor)
 bool PrimalityTests_SmallPrimeSppTest_m11305 (Object_t * __this/* static, unused */, BigInteger_t3224 * ___bi, int32_t ___confidence, MethodInfo* method) IL2CPP_METHOD_ATTR;
