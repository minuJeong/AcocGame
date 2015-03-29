#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Math.BigInteger/ModulusRing
struct ModulusRing_t3229;
// Mono.Math.BigInteger
struct BigInteger_t3224;

// System.Void Mono.Math.BigInteger/ModulusRing::.ctor(Mono.Math.BigInteger)
 void ModulusRing__ctor_m11306 (ModulusRing_t3229 * __this, BigInteger_t3224 * ___modulus, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/ModulusRing::BarrettReduction(Mono.Math.BigInteger)
 void ModulusRing_BarrettReduction_m11307 (ModulusRing_t3229 * __this, BigInteger_t3224 * ___x, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Multiply(Mono.Math.BigInteger,Mono.Math.BigInteger)
 BigInteger_t3224 * ModulusRing_Multiply_m11308 (ModulusRing_t3229 * __this, BigInteger_t3224 * ___a, BigInteger_t3224 * ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Difference(Mono.Math.BigInteger,Mono.Math.BigInteger)
 BigInteger_t3224 * ModulusRing_Difference_m11309 (ModulusRing_t3229 * __this, BigInteger_t3224 * ___a, BigInteger_t3224 * ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(Mono.Math.BigInteger,Mono.Math.BigInteger)
 BigInteger_t3224 * ModulusRing_Pow_m11310 (ModulusRing_t3229 * __this, BigInteger_t3224 * ___a, BigInteger_t3224 * ___k, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(System.UInt32,Mono.Math.BigInteger)
 BigInteger_t3224 * ModulusRing_Pow_m11311 (ModulusRing_t3229 * __this, uint32_t ___b, BigInteger_t3224 * ___exp, MethodInfo* method) IL2CPP_METHOD_ATTR;
