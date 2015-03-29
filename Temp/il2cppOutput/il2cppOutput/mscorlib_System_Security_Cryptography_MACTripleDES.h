#pragma once
#include <stdint.h>
// System.Security.Cryptography.TripleDES
struct TripleDES_t3585;
// Mono.Security.Cryptography.MACAlgorithm
struct MACAlgorithm_t3244;
// System.Security.Cryptography.KeyedHashAlgorithm
#include "mscorlib_System_Security_Cryptography_KeyedHashAlgorithm.h"
// System.Security.Cryptography.MACTripleDES
struct MACTripleDES_t3586  : public KeyedHashAlgorithm_t3578
{
	// System.Security.Cryptography.TripleDES System.Security.Cryptography.MACTripleDES::tdes
	TripleDES_t3585 * ___tdes;
	// Mono.Security.Cryptography.MACAlgorithm System.Security.Cryptography.MACTripleDES::mac
	MACAlgorithm_t3244 * ___mac;
	// System.Boolean System.Security.Cryptography.MACTripleDES::m_disposed
	bool ___m_disposed;
};
