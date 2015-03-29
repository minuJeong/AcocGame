#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Photon.SocketServer.Numeric.BigInteger
struct BigInteger_t2345;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t21;
// System.UInt32[]
struct UInt32U5BU5D_t2344;
// System.Object
struct Object_t;
// System.Random
struct Random_t2346;
// Photon.SocketServer.Numeric.BigInteger[]
struct BigIntegerU5BU5D_t2347;
// System.String[]
struct StringU5BU5D_t4;

// System.Void Photon.SocketServer.Numeric.BigInteger::.ctor()
 void BigInteger__ctor_m7169 (BigInteger_t2345 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.SocketServer.Numeric.BigInteger::.ctor(System.Int64)
 void BigInteger__ctor_m7170 (BigInteger_t2345 * __this, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.SocketServer.Numeric.BigInteger::.ctor(System.UInt64)
 void BigInteger__ctor_m7171 (BigInteger_t2345 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.SocketServer.Numeric.BigInteger::.ctor(Photon.SocketServer.Numeric.BigInteger)
 void BigInteger__ctor_m7172 (BigInteger_t2345 * __this, BigInteger_t2345 * ___bi, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.SocketServer.Numeric.BigInteger::.ctor(System.String,System.Int32)
 void BigInteger__ctor_m7173 (BigInteger_t2345 * __this, String_t* ___value, int32_t ___radix, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.SocketServer.Numeric.BigInteger::.ctor(System.Byte[])
 void BigInteger__ctor_m7174 (BigInteger_t2345 * __this, ByteU5BU5D_t21* ___inData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.SocketServer.Numeric.BigInteger::.ctor(System.Byte[],System.Int32)
 void BigInteger__ctor_m7175 (BigInteger_t2345 * __this, ByteU5BU5D_t21* ___inData, int32_t ___inLen, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.SocketServer.Numeric.BigInteger::.ctor(System.UInt32[])
 void BigInteger__ctor_m7176 (BigInteger_t2345 * __this, UInt32U5BU5D_t2344* ___inData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_Implicit(System.Int64)
 BigInteger_t2345 * BigInteger_op_Implicit_m7177 (Object_t * __this/* static, unused */, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_Implicit(System.UInt64)
 BigInteger_t2345 * BigInteger_op_Implicit_m7178 (Object_t * __this/* static, unused */, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_Implicit(System.Int32)
 BigInteger_t2345 * BigInteger_op_Implicit_m7179 (Object_t * __this/* static, unused */, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_Implicit(System.UInt32)
 BigInteger_t2345 * BigInteger_op_Implicit_m7180 (Object_t * __this/* static, unused */, uint32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_Addition(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
 BigInteger_t2345 * BigInteger_op_Addition_m7181 (Object_t * __this/* static, unused */, BigInteger_t2345 * ___bi1, BigInteger_t2345 * ___bi2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_Increment(Photon.SocketServer.Numeric.BigInteger)
 BigInteger_t2345 * BigInteger_op_Increment_m7182 (Object_t * __this/* static, unused */, BigInteger_t2345 * ___bi1, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_Subtraction(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
 BigInteger_t2345 * BigInteger_op_Subtraction_m7183 (Object_t * __this/* static, unused */, BigInteger_t2345 * ___bi1, BigInteger_t2345 * ___bi2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_Decrement(Photon.SocketServer.Numeric.BigInteger)
 BigInteger_t2345 * BigInteger_op_Decrement_m7184 (Object_t * __this/* static, unused */, BigInteger_t2345 * ___bi1, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_Multiply(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
 BigInteger_t2345 * BigInteger_op_Multiply_m7185 (Object_t * __this/* static, unused */, BigInteger_t2345 * ___bi1, BigInteger_t2345 * ___bi2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_LeftShift(Photon.SocketServer.Numeric.BigInteger,System.Int32)
 BigInteger_t2345 * BigInteger_op_LeftShift_m7186 (Object_t * __this/* static, unused */, BigInteger_t2345 * ___bi1, int32_t ___shiftVal, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Photon.SocketServer.Numeric.BigInteger::shiftLeft(System.UInt32[],System.Int32)
 int32_t BigInteger_shiftLeft_m7187 (Object_t * __this/* static, unused */, UInt32U5BU5D_t2344* ___buffer, int32_t ___shiftVal, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_RightShift(Photon.SocketServer.Numeric.BigInteger,System.Int32)
 BigInteger_t2345 * BigInteger_op_RightShift_m7188 (Object_t * __this/* static, unused */, BigInteger_t2345 * ___bi1, int32_t ___shiftVal, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Photon.SocketServer.Numeric.BigInteger::shiftRight(System.UInt32[],System.Int32)
 int32_t BigInteger_shiftRight_m7189 (Object_t * __this/* static, unused */, UInt32U5BU5D_t2344* ___buffer, int32_t ___shiftVal, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_OnesComplement(Photon.SocketServer.Numeric.BigInteger)
 BigInteger_t2345 * BigInteger_op_OnesComplement_m7190 (Object_t * __this/* static, unused */, BigInteger_t2345 * ___bi1, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_UnaryNegation(Photon.SocketServer.Numeric.BigInteger)
 BigInteger_t2345 * BigInteger_op_UnaryNegation_m7191 (Object_t * __this/* static, unused */, BigInteger_t2345 * ___bi1, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Photon.SocketServer.Numeric.BigInteger::op_Equality(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
 bool BigInteger_op_Equality_m7192 (Object_t * __this/* static, unused */, BigInteger_t2345 * ___bi1, BigInteger_t2345 * ___bi2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Photon.SocketServer.Numeric.BigInteger::op_Inequality(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
 bool BigInteger_op_Inequality_m7193 (Object_t * __this/* static, unused */, BigInteger_t2345 * ___bi1, BigInteger_t2345 * ___bi2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Photon.SocketServer.Numeric.BigInteger::Equals(System.Object)
 bool BigInteger_Equals_m7194 (BigInteger_t2345 * __this, Object_t * ___o, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Photon.SocketServer.Numeric.BigInteger::GetHashCode()
 int32_t BigInteger_GetHashCode_m7195 (BigInteger_t2345 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Photon.SocketServer.Numeric.BigInteger::op_GreaterThan(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
 bool BigInteger_op_GreaterThan_m7196 (Object_t * __this/* static, unused */, BigInteger_t2345 * ___bi1, BigInteger_t2345 * ___bi2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Photon.SocketServer.Numeric.BigInteger::op_LessThan(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
 bool BigInteger_op_LessThan_m7197 (Object_t * __this/* static, unused */, BigInteger_t2345 * ___bi1, BigInteger_t2345 * ___bi2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Photon.SocketServer.Numeric.BigInteger::op_GreaterThanOrEqual(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
 bool BigInteger_op_GreaterThanOrEqual_m7198 (Object_t * __this/* static, unused */, BigInteger_t2345 * ___bi1, BigInteger_t2345 * ___bi2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Photon.SocketServer.Numeric.BigInteger::op_LessThanOrEqual(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
 bool BigInteger_op_LessThanOrEqual_m7199 (Object_t * __this/* static, unused */, BigInteger_t2345 * ___bi1, BigInteger_t2345 * ___bi2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.SocketServer.Numeric.BigInteger::multiByteDivide(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
 void BigInteger_multiByteDivide_m7200 (Object_t * __this/* static, unused */, BigInteger_t2345 * ___bi1, BigInteger_t2345 * ___bi2, BigInteger_t2345 * ___outQuotient, BigInteger_t2345 * ___outRemainder, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.SocketServer.Numeric.BigInteger::singleByteDivide(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
 void BigInteger_singleByteDivide_m7201 (Object_t * __this/* static, unused */, BigInteger_t2345 * ___bi1, BigInteger_t2345 * ___bi2, BigInteger_t2345 * ___outQuotient, BigInteger_t2345 * ___outRemainder, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_Division(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
 BigInteger_t2345 * BigInteger_op_Division_m7202 (Object_t * __this/* static, unused */, BigInteger_t2345 * ___bi1, BigInteger_t2345 * ___bi2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_Modulus(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
 BigInteger_t2345 * BigInteger_op_Modulus_m7203 (Object_t * __this/* static, unused */, BigInteger_t2345 * ___bi1, BigInteger_t2345 * ___bi2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_BitwiseAnd(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
 BigInteger_t2345 * BigInteger_op_BitwiseAnd_m7204 (Object_t * __this/* static, unused */, BigInteger_t2345 * ___bi1, BigInteger_t2345 * ___bi2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_BitwiseOr(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
 BigInteger_t2345 * BigInteger_op_BitwiseOr_m7205 (Object_t * __this/* static, unused */, BigInteger_t2345 * ___bi1, BigInteger_t2345 * ___bi2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::op_ExclusiveOr(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
 BigInteger_t2345 * BigInteger_op_ExclusiveOr_m7206 (Object_t * __this/* static, unused */, BigInteger_t2345 * ___bi1, BigInteger_t2345 * ___bi2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::max(Photon.SocketServer.Numeric.BigInteger)
 BigInteger_t2345 * BigInteger_max_m7207 (BigInteger_t2345 * __this, BigInteger_t2345 * ___bi, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::min(Photon.SocketServer.Numeric.BigInteger)
 BigInteger_t2345 * BigInteger_min_m7208 (BigInteger_t2345 * __this, BigInteger_t2345 * ___bi, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::abs()
 BigInteger_t2345 * BigInteger_abs_m7209 (BigInteger_t2345 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Photon.SocketServer.Numeric.BigInteger::ToString()
 String_t* BigInteger_ToString_m7210 (BigInteger_t2345 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Photon.SocketServer.Numeric.BigInteger::ToString(System.Int32)
 String_t* BigInteger_ToString_m7211 (BigInteger_t2345 * __this, int32_t ___radix, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Photon.SocketServer.Numeric.BigInteger::ToHexString()
 String_t* BigInteger_ToHexString_m7212 (BigInteger_t2345 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::ModPow(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
 BigInteger_t2345 * BigInteger_ModPow_m7213 (BigInteger_t2345 * __this, BigInteger_t2345 * ___exp, BigInteger_t2345 * ___n, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::BarrettReduction(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
 BigInteger_t2345 * BigInteger_BarrettReduction_m7214 (BigInteger_t2345 * __this, BigInteger_t2345 * ___x, BigInteger_t2345 * ___n, BigInteger_t2345 * ___constant, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::gcd(Photon.SocketServer.Numeric.BigInteger)
 BigInteger_t2345 * BigInteger_gcd_m7215 (BigInteger_t2345 * __this, BigInteger_t2345 * ___bi, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::GenerateRandom(System.Int32)
 BigInteger_t2345 * BigInteger_GenerateRandom_m7216 (Object_t * __this/* static, unused */, int32_t ___bits, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.SocketServer.Numeric.BigInteger::genRandomBits(System.Int32,System.Random)
 void BigInteger_genRandomBits_m7217 (BigInteger_t2345 * __this, int32_t ___bits, Random_t2346 * ___rand, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Photon.SocketServer.Numeric.BigInteger::bitCount()
 int32_t BigInteger_bitCount_m7218 (BigInteger_t2345 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Photon.SocketServer.Numeric.BigInteger::FermatLittleTest(System.Int32)
 bool BigInteger_FermatLittleTest_m7219 (BigInteger_t2345 * __this, int32_t ___confidence, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Photon.SocketServer.Numeric.BigInteger::RabinMillerTest(System.Int32)
 bool BigInteger_RabinMillerTest_m7220 (BigInteger_t2345 * __this, int32_t ___confidence, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Photon.SocketServer.Numeric.BigInteger::SolovayStrassenTest(System.Int32)
 bool BigInteger_SolovayStrassenTest_m7221 (BigInteger_t2345 * __this, int32_t ___confidence, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Photon.SocketServer.Numeric.BigInteger::LucasStrongTest()
 bool BigInteger_LucasStrongTest_m7222 (BigInteger_t2345 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Photon.SocketServer.Numeric.BigInteger::LucasStrongTestHelper(Photon.SocketServer.Numeric.BigInteger)
 bool BigInteger_LucasStrongTestHelper_m7223 (BigInteger_t2345 * __this, BigInteger_t2345 * ___thisVal, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Photon.SocketServer.Numeric.BigInteger::isProbablePrime(System.Int32)
 bool BigInteger_isProbablePrime_m7224 (BigInteger_t2345 * __this, int32_t ___confidence, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Photon.SocketServer.Numeric.BigInteger::isProbablePrime()
 bool BigInteger_isProbablePrime_m7225 (BigInteger_t2345 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Photon.SocketServer.Numeric.BigInteger::IntValue()
 int32_t BigInteger_IntValue_m7226 (BigInteger_t2345 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Photon.SocketServer.Numeric.BigInteger::LongValue()
 int64_t BigInteger_LongValue_m7227 (BigInteger_t2345 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Photon.SocketServer.Numeric.BigInteger::Jacobi(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
 int32_t BigInteger_Jacobi_m7228 (Object_t * __this/* static, unused */, BigInteger_t2345 * ___a, BigInteger_t2345 * ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::genPseudoPrime(System.Int32,System.Int32,System.Random)
 BigInteger_t2345 * BigInteger_genPseudoPrime_m7229 (Object_t * __this/* static, unused */, int32_t ___bits, int32_t ___confidence, Random_t2346 * ___rand, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::genCoPrime(System.Int32,System.Random)
 BigInteger_t2345 * BigInteger_genCoPrime_m7230 (BigInteger_t2345 * __this, int32_t ___bits, Random_t2346 * ___rand, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::modInverse(Photon.SocketServer.Numeric.BigInteger)
 BigInteger_t2345 * BigInteger_modInverse_m7231 (BigInteger_t2345 * __this, BigInteger_t2345 * ___modulus, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Photon.SocketServer.Numeric.BigInteger::GetBytes()
 ByteU5BU5D_t21* BigInteger_GetBytes_m7232 (BigInteger_t2345 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.SocketServer.Numeric.BigInteger::setBit(System.UInt32)
 void BigInteger_setBit_m7233 (BigInteger_t2345 * __this, uint32_t ___bitNum, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.SocketServer.Numeric.BigInteger::unsetBit(System.UInt32)
 void BigInteger_unsetBit_m7234 (BigInteger_t2345 * __this, uint32_t ___bitNum, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Numeric.BigInteger::sqrt()
 BigInteger_t2345 * BigInteger_sqrt_m7235 (BigInteger_t2345 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Photon.SocketServer.Numeric.BigInteger[] Photon.SocketServer.Numeric.BigInteger::LucasSequence(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger)
 BigIntegerU5BU5D_t2347* BigInteger_LucasSequence_m7236 (Object_t * __this/* static, unused */, BigInteger_t2345 * ___P, BigInteger_t2345 * ___Q, BigInteger_t2345 * ___k, BigInteger_t2345 * ___n, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Photon.SocketServer.Numeric.BigInteger[] Photon.SocketServer.Numeric.BigInteger::LucasSequenceHelper(Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger,Photon.SocketServer.Numeric.BigInteger,System.Int32)
 BigIntegerU5BU5D_t2347* BigInteger_LucasSequenceHelper_m7237 (Object_t * __this/* static, unused */, BigInteger_t2345 * ___P, BigInteger_t2345 * ___Q, BigInteger_t2345 * ___k, BigInteger_t2345 * ___n, BigInteger_t2345 * ___constant, int32_t ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.SocketServer.Numeric.BigInteger::MulDivTest(System.Int32)
 void BigInteger_MulDivTest_m7238 (Object_t * __this/* static, unused */, int32_t ___rounds, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.SocketServer.Numeric.BigInteger::RSATest(System.Int32)
 void BigInteger_RSATest_m7239 (Object_t * __this/* static, unused */, int32_t ___rounds, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.SocketServer.Numeric.BigInteger::RSATest2(System.Int32)
 void BigInteger_RSATest2_m7240 (Object_t * __this/* static, unused */, int32_t ___rounds, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.SocketServer.Numeric.BigInteger::SqrtTest(System.Int32)
 void BigInteger_SqrtTest_m7241 (Object_t * __this/* static, unused */, int32_t ___rounds, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.SocketServer.Numeric.BigInteger::Main(System.String[])
 void BigInteger_Main_m7242 (Object_t * __this/* static, unused */, StringU5BU5D_t4* ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.SocketServer.Numeric.BigInteger::.cctor()
 void BigInteger__cctor_m7243 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
