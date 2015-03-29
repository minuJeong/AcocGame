#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t3576;
// Mono.Security.Cryptography.BlockProcessor
struct BlockProcessor_t3237;
// System.Security.Cryptography.KeyedHashAlgorithm
#include "mscorlib_System_Security_Cryptography_KeyedHashAlgorithm.h"
// System.Security.Cryptography.HMAC
struct HMAC_t3577  : public KeyedHashAlgorithm_t3578
{
	// System.Boolean System.Security.Cryptography.HMAC::_disposed
	bool ____disposed;
	// System.String System.Security.Cryptography.HMAC::_hashName
	String_t* ____hashName;
	// System.Security.Cryptography.HashAlgorithm System.Security.Cryptography.HMAC::_algo
	HashAlgorithm_t3576 * ____algo;
	// Mono.Security.Cryptography.BlockProcessor System.Security.Cryptography.HMAC::_block
	BlockProcessor_t3237 * ____block;
	// System.Int32 System.Security.Cryptography.HMAC::_blockSizeValue
	int32_t ____blockSizeValue;
};
