﻿#pragma once
#include <stdint.h>
// System.Byte[,]
struct ByteU5BU2CU5D_t3568;
// System.Security.Cryptography.SymmetricAlgorithm
#include "mscorlib_System_Security_Cryptography_SymmetricAlgorithm.h"
// System.Security.Cryptography.DES
struct DES_t3569  : public SymmetricAlgorithm_t2426
{
};
struct DES_t3569_StaticFields{
	// System.Byte[,] System.Security.Cryptography.DES::weakKeys
	ByteU5BU2CU5D_t3568* ___weakKeys;
	// System.Byte[,] System.Security.Cryptography.DES::semiWeakKeys
	ByteU5BU2CU5D_t3568* ___semiWeakKeys;
};