#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Math.BigInteger/ModulusRing
struct ModulusRing_t3230;
// Mono.Math.BigInteger
struct BigInteger_t3225;

// System.Void Mono.Math.BigInteger/ModulusRing::.ctor(Mono.Math.BigInteger)
 void ModulusRing__ctor_m11309 (ModulusRing_t3230 * __this, BigInteger_t3225 * ___modulus, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/ModulusRing::BarrettReduction(Mono.Math.BigInteger)
 void ModulusRing_BarrettReduction_m11310 (ModulusRing_t3230 * __this, BigInteger_t3225 * ___x, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Multiply(Mono.Math.BigInteger,Mono.Math.BigInteger)
 BigInteger_t3225 * ModulusRing_Multiply_m11311 (ModulusRing_t3230 * __this, BigInteger_t3225 * ___a, BigInteger_t3225 * ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Difference(Mono.Math.BigInteger,Mono.Math.BigInteger)
 BigInteger_t3225 * ModulusRing_Difference_m11312 (ModulusRing_t3230 * __this, BigInteger_t3225 * ___a, BigInteger_t3225 * ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(Mono.Math.BigInteger,Mono.Math.BigInteger)
 BigInteger_t3225 * ModulusRing_Pow_m11313 (ModulusRing_t3230 * __this, BigInteger_t3225 * ___a, BigInteger_t3225 * ___k, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(System.UInt32,Mono.Math.BigInteger)
 BigInteger_t3225 * ModulusRing_Pow_m11314 (ModulusRing_t3230 * __this, uint32_t ___b, BigInteger_t3225 * ___exp, MethodInfo* method) IL2CPP_METHOD_ATTR;
