#pragma once
#include <stdint.h>
// System.Security.Cryptography.TripleDES
struct TripleDES_t3584;
// Mono.Security.Cryptography.MACAlgorithm
struct MACAlgorithm_t3243;
// System.Security.Cryptography.KeyedHashAlgorithm
#include "mscorlib_System_Security_Cryptography_KeyedHashAlgorithm.h"
// System.Security.Cryptography.MACTripleDES
struct MACTripleDES_t3585  : public KeyedHashAlgorithm_t3577
{
	// System.Security.Cryptography.TripleDES System.Security.Cryptography.MACTripleDES::tdes
	TripleDES_t3584 * ___tdes;
	// Mono.Security.Cryptography.MACAlgorithm System.Security.Cryptography.MACTripleDES::mac
	MACAlgorithm_t3243 * ___mac;
	// System.Boolean System.Security.Cryptography.MACTripleDES::m_disposed
	bool ___m_disposed;
};
