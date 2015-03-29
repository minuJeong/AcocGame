#pragma once
#include <stdint.h>
// Mono.Math.BigInteger
struct BigInteger_t3224;
// Mono.Security.Cryptography.RSAManaged/KeyGeneratedEventHandler
struct KeyGeneratedEventHandler_t3244;
// System.Security.Cryptography.RSA
#include "mscorlib_System_Security_Cryptography_RSA.h"
// Mono.Security.Cryptography.RSAManaged
struct RSAManaged_t3245  : public RSA_t3234
{
	// System.Boolean Mono.Security.Cryptography.RSAManaged::isCRTpossible
	bool ___isCRTpossible;
	// System.Boolean Mono.Security.Cryptography.RSAManaged::keyBlinding
	bool ___keyBlinding;
	// System.Boolean Mono.Security.Cryptography.RSAManaged::keypairGenerated
	bool ___keypairGenerated;
	// System.Boolean Mono.Security.Cryptography.RSAManaged::m_disposed
	bool ___m_disposed;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::d
	BigInteger_t3224 * ___d;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::p
	BigInteger_t3224 * ___p;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::q
	BigInteger_t3224 * ___q;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::dp
	BigInteger_t3224 * ___dp;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::dq
	BigInteger_t3224 * ___dq;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::qInv
	BigInteger_t3224 * ___qInv;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::n
	BigInteger_t3224 * ___n;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::e
	BigInteger_t3224 * ___e;
	// Mono.Security.Cryptography.RSAManaged/KeyGeneratedEventHandler Mono.Security.Cryptography.RSAManaged::KeyGenerated
	KeyGeneratedEventHandler_t3244 * ___KeyGenerated;
};
