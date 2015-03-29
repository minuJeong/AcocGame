#pragma once
#include <stdint.h>
// System.UInt32[]
struct UInt32U5BU5D_t2344;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t3232;
// System.Object
#include "mscorlib_System_Object.h"
// Mono.Math.BigInteger
struct BigInteger_t3224  : public Object_t
{
	// System.UInt32 Mono.Math.BigInteger::length
	uint32_t ___length;
	// System.UInt32[] Mono.Math.BigInteger::data
	UInt32U5BU5D_t2344* ___data;
};
struct BigInteger_t3224_StaticFields{
	// System.UInt32[] Mono.Math.BigInteger::smallPrimes
	UInt32U5BU5D_t2344* ___smallPrimes;
	// System.Security.Cryptography.RandomNumberGenerator Mono.Math.BigInteger::rng
	RandomNumberGenerator_t3232 * ___rng;
};
