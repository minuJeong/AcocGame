#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Math.BigInteger
struct BigInteger_t3225;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t3233;
// System.Byte[]
struct ByteU5BU5D_t21;
// System.String
struct String_t;
// System.Object
struct Object_t;
// Mono.Math.BigInteger/Sign
#include "mscorlib_Mono_Math_BigInteger_Sign.h"

// System.Void Mono.Math.BigInteger::.ctor(Mono.Math.BigInteger/Sign,System.UInt32)
 void BigInteger__ctor_m11330 (BigInteger_t3225 * __this, int32_t ___sign, uint32_t ___len, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::.ctor(Mono.Math.BigInteger)
 void BigInteger__ctor_m11331 (BigInteger_t3225 * __this, BigInteger_t3225 * ___bi, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::.ctor(Mono.Math.BigInteger,System.UInt32)
 void BigInteger__ctor_m11332 (BigInteger_t3225 * __this, BigInteger_t3225 * ___bi, uint32_t ___len, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::.ctor(System.Byte[])
 void BigInteger__ctor_m11333 (BigInteger_t3225 * __this, ByteU5BU5D_t21* ___inData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::.ctor(System.UInt32)
 void BigInteger__ctor_m11334 (BigInteger_t3225 * __this, uint32_t ___ui, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::.cctor()
 void BigInteger__cctor_m11335 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RandomNumberGenerator Mono.Math.BigInteger::get_Rng()
 RandomNumberGenerator_t3233 * BigInteger_get_Rng_m11336 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::GenerateRandom(System.Int32,System.Security.Cryptography.RandomNumberGenerator)
 BigInteger_t3225 * BigInteger_GenerateRandom_m11337 (Object_t * __this/* static, unused */, int32_t ___bits, RandomNumberGenerator_t3233 * ___rng, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::GenerateRandom(System.Int32)
 BigInteger_t3225 * BigInteger_GenerateRandom_m11338 (Object_t * __this/* static, unused */, int32_t ___bits, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::Randomize(System.Security.Cryptography.RandomNumberGenerator)
 void BigInteger_Randomize_m11339 (BigInteger_t3225 * __this, RandomNumberGenerator_t3233 * ___rng, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::Randomize()
 void BigInteger_Randomize_m11340 (BigInteger_t3225 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Math.BigInteger::BitCount()
 int32_t BigInteger_BitCount_m11341 (BigInteger_t3225 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::TestBit(System.UInt32)
 bool BigInteger_TestBit_m11342 (BigInteger_t3225 * __this, uint32_t ___bitNum, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::TestBit(System.Int32)
 bool BigInteger_TestBit_m11343 (BigInteger_t3225 * __this, int32_t ___bitNum, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::SetBit(System.UInt32)
 void BigInteger_SetBit_m11344 (BigInteger_t3225 * __this, uint32_t ___bitNum, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::SetBit(System.UInt32,System.Boolean)
 void BigInteger_SetBit_m11345 (BigInteger_t3225 * __this, uint32_t ___bitNum, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Math.BigInteger::LowestSetBit()
 int32_t BigInteger_LowestSetBit_m11346 (BigInteger_t3225 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Math.BigInteger::GetBytes()
 ByteU5BU5D_t21* BigInteger_GetBytes_m11347 (BigInteger_t3225 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Math.BigInteger::ToString(System.UInt32)
 String_t* BigInteger_ToString_m11348 (BigInteger_t3225 * __this, uint32_t ___radix, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Math.BigInteger::ToString(System.UInt32,System.String)
 String_t* BigInteger_ToString_m11349 (BigInteger_t3225 * __this, uint32_t ___radix, String_t* ___characterSet, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::Normalize()
 void BigInteger_Normalize_m11350 (BigInteger_t3225 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::Clear()
 void BigInteger_Clear_m11351 (BigInteger_t3225 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Math.BigInteger::GetHashCode()
 int32_t BigInteger_GetHashCode_m11352 (BigInteger_t3225 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Math.BigInteger::ToString()
 String_t* BigInteger_ToString_m11353 (BigInteger_t3225 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::Equals(System.Object)
 bool BigInteger_Equals_m11354 (BigInteger_t3225 * __this, Object_t * ___o, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::ModInverse(Mono.Math.BigInteger)
 BigInteger_t3225 * BigInteger_ModInverse_m11355 (BigInteger_t3225 * __this, BigInteger_t3225 * ___modulus, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::ModPow(Mono.Math.BigInteger,Mono.Math.BigInteger)
 BigInteger_t3225 * BigInteger_ModPow_m11356 (BigInteger_t3225 * __this, BigInteger_t3225 * ___exp, BigInteger_t3225 * ___n, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::IsProbablePrime()
 bool BigInteger_IsProbablePrime_m11357 (BigInteger_t3225 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::GeneratePseudoPrime(System.Int32)
 BigInteger_t3225 * BigInteger_GeneratePseudoPrime_m11358 (Object_t * __this/* static, unused */, int32_t ___bits, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::Incr2()
 void BigInteger_Incr2_m11359 (BigInteger_t3225 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_Implicit(System.UInt32)
 BigInteger_t3225 * BigInteger_op_Implicit_m11360 (Object_t * __this/* static, unused */, uint32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_Implicit(System.Int32)
 BigInteger_t3225 * BigInteger_op_Implicit_m11361 (Object_t * __this/* static, unused */, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_Subtraction(Mono.Math.BigInteger,Mono.Math.BigInteger)
 BigInteger_t3225 * BigInteger_op_Subtraction_m11362 (Object_t * __this/* static, unused */, BigInteger_t3225 * ___bi1, BigInteger_t3225 * ___bi2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Mono.Math.BigInteger::op_Modulus(Mono.Math.BigInteger,System.UInt32)
 uint32_t BigInteger_op_Modulus_m11363 (Object_t * __this/* static, unused */, BigInteger_t3225 * ___bi, uint32_t ___ui, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_Modulus(Mono.Math.BigInteger,Mono.Math.BigInteger)
 BigInteger_t3225 * BigInteger_op_Modulus_m11364 (Object_t * __this/* static, unused */, BigInteger_t3225 * ___bi1, BigInteger_t3225 * ___bi2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_Division(Mono.Math.BigInteger,Mono.Math.BigInteger)
 BigInteger_t3225 * BigInteger_op_Division_m11365 (Object_t * __this/* static, unused */, BigInteger_t3225 * ___bi1, BigInteger_t3225 * ___bi2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_Multiply(Mono.Math.BigInteger,Mono.Math.BigInteger)
 BigInteger_t3225 * BigInteger_op_Multiply_m11366 (Object_t * __this/* static, unused */, BigInteger_t3225 * ___bi1, BigInteger_t3225 * ___bi2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_Multiply(Mono.Math.BigInteger,System.Int32)
 BigInteger_t3225 * BigInteger_op_Multiply_m11367 (Object_t * __this/* static, unused */, BigInteger_t3225 * ___bi, int32_t ___i, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_LeftShift(Mono.Math.BigInteger,System.Int32)
 BigInteger_t3225 * BigInteger_op_LeftShift_m11368 (Object_t * __this/* static, unused */, BigInteger_t3225 * ___bi1, int32_t ___shiftVal, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_RightShift(Mono.Math.BigInteger,System.Int32)
 BigInteger_t3225 * BigInteger_op_RightShift_m11369 (Object_t * __this/* static, unused */, BigInteger_t3225 * ___bi1, int32_t ___shiftVal, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::op_Equality(Mono.Math.BigInteger,System.UInt32)
 bool BigInteger_op_Equality_m11370 (Object_t * __this/* static, unused */, BigInteger_t3225 * ___bi1, uint32_t ___ui, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::op_Inequality(Mono.Math.BigInteger,System.UInt32)
 bool BigInteger_op_Inequality_m11371 (Object_t * __this/* static, unused */, BigInteger_t3225 * ___bi1, uint32_t ___ui, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::op_Equality(Mono.Math.BigInteger,Mono.Math.BigInteger)
 bool BigInteger_op_Equality_m11372 (Object_t * __this/* static, unused */, BigInteger_t3225 * ___bi1, BigInteger_t3225 * ___bi2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::op_Inequality(Mono.Math.BigInteger,Mono.Math.BigInteger)
 bool BigInteger_op_Inequality_m11373 (Object_t * __this/* static, unused */, BigInteger_t3225 * ___bi1, BigInteger_t3225 * ___bi2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::op_GreaterThan(Mono.Math.BigInteger,Mono.Math.BigInteger)
 bool BigInteger_op_GreaterThan_m11374 (Object_t * __this/* static, unused */, BigInteger_t3225 * ___bi1, BigInteger_t3225 * ___bi2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::op_LessThan(Mono.Math.BigInteger,Mono.Math.BigInteger)
 bool BigInteger_op_LessThan_m11375 (Object_t * __this/* static, unused */, BigInteger_t3225 * ___bi1, BigInteger_t3225 * ___bi2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::op_GreaterThanOrEqual(Mono.Math.BigInteger,Mono.Math.BigInteger)
 bool BigInteger_op_GreaterThanOrEqual_m11376 (Object_t * __this/* static, unused */, BigInteger_t3225 * ___bi1, BigInteger_t3225 * ___bi2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::op_LessThanOrEqual(Mono.Math.BigInteger,Mono.Math.BigInteger)
 bool BigInteger_op_LessThanOrEqual_m11377 (Object_t * __this/* static, unused */, BigInteger_t3225 * ___bi1, BigInteger_t3225 * ___bi2, MethodInfo* method) IL2CPP_METHOD_ATTR;
