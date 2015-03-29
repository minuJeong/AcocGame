#pragma once
#include <stdint.h>
// Mono.Security.Cryptography.KeyPairPersistence
struct KeyPairPersistence_t3242;
// Mono.Security.Cryptography.RSAManaged
struct RSAManaged_t3245;
// System.Security.Cryptography.RSA
#include "mscorlib_System_Security_Cryptography_RSA.h"
// System.Security.Cryptography.RSACryptoServiceProvider
struct RSACryptoServiceProvider_t3594  : public RSA_t3234
{
	// Mono.Security.Cryptography.KeyPairPersistence System.Security.Cryptography.RSACryptoServiceProvider::store
	KeyPairPersistence_t3242 * ___store;
	// System.Boolean System.Security.Cryptography.RSACryptoServiceProvider::persistKey
	bool ___persistKey;
	// System.Boolean System.Security.Cryptography.RSACryptoServiceProvider::persisted
	bool ___persisted;
	// System.Boolean System.Security.Cryptography.RSACryptoServiceProvider::privateKeyExportable
	bool ___privateKeyExportable;
	// System.Boolean System.Security.Cryptography.RSACryptoServiceProvider::m_disposed
	bool ___m_disposed;
	// Mono.Security.Cryptography.RSAManaged System.Security.Cryptography.RSACryptoServiceProvider::rsa
	RSAManaged_t3245 * ___rsa;
};
struct RSACryptoServiceProvider_t3594_StaticFields{
	// System.Boolean System.Security.Cryptography.RSACryptoServiceProvider::useMachineKeyStore
	bool ___useMachineKeyStore;
};
