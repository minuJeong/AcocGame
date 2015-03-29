#pragma once
#include <stdint.h>
// Mono.Math.BigInteger
struct BigInteger_t3224;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t3232;
// Mono.Security.Cryptography.DSAManaged/KeyGeneratedEventHandler
struct KeyGeneratedEventHandler_t3237;
// System.Security.Cryptography.DSA
#include "mscorlib_System_Security_Cryptography_DSA.h"
// Mono.Security.Cryptography.DSAManaged
struct DSAManaged_t3238  : public DSA_t3239
{
	// System.Boolean Mono.Security.Cryptography.DSAManaged::keypairGenerated
	bool ___keypairGenerated;
	// System.Boolean Mono.Security.Cryptography.DSAManaged::m_disposed
	bool ___m_disposed;
	// Mono.Math.BigInteger Mono.Security.Cryptography.DSAManaged::p
	BigInteger_t3224 * ___p;
	// Mono.Math.BigInteger Mono.Security.Cryptography.DSAManaged::q
	BigInteger_t3224 * ___q;
	// Mono.Math.BigInteger Mono.Security.Cryptography.DSAManaged::g
	BigInteger_t3224 * ___g;
	// Mono.Math.BigInteger Mono.Security.Cryptography.DSAManaged::x
	BigInteger_t3224 * ___x;
	// Mono.Math.BigInteger Mono.Security.Cryptography.DSAManaged::y
	BigInteger_t3224 * ___y;
	// Mono.Math.BigInteger Mono.Security.Cryptography.DSAManaged::j
	BigInteger_t3224 * ___j;
	// Mono.Math.BigInteger Mono.Security.Cryptography.DSAManaged::seed
	BigInteger_t3224 * ___seed;
	// System.Int32 Mono.Security.Cryptography.DSAManaged::counter
	int32_t ___counter;
	// System.Boolean Mono.Security.Cryptography.DSAManaged::j_missing
	bool ___j_missing;
	// System.Security.Cryptography.RandomNumberGenerator Mono.Security.Cryptography.DSAManaged::rng
	RandomNumberGenerator_t3232 * ___rng;
	// Mono.Security.Cryptography.DSAManaged/KeyGeneratedEventHandler Mono.Security.Cryptography.DSAManaged::KeyGenerated
	KeyGeneratedEventHandler_t3237 * ___KeyGenerated;
};
