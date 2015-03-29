#pragma once
#include <stdint.h>
// Photon.SocketServer.Numeric.BigInteger
struct BigInteger_t2345;
// System.Security.Cryptography.Rijndael
struct Rijndael_t2348;
// System.Byte[]
struct ByteU5BU5D_t21;
// System.Object
#include "mscorlib_System_Object.h"
// Photon.SocketServer.Security.DiffieHellmanCryptoProvider
struct DiffieHellmanCryptoProvider_t2349  : public Object_t
{
	// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Security.DiffieHellmanCryptoProvider::prime
	BigInteger_t2345 * ___prime;
	// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Security.DiffieHellmanCryptoProvider::secret
	BigInteger_t2345 * ___secret;
	// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Security.DiffieHellmanCryptoProvider::publicKey
	BigInteger_t2345 * ___publicKey;
	// System.Security.Cryptography.Rijndael Photon.SocketServer.Security.DiffieHellmanCryptoProvider::crypto
	Rijndael_t2348 * ___crypto;
	// System.Byte[] Photon.SocketServer.Security.DiffieHellmanCryptoProvider::sharedKey
	ByteU5BU5D_t21* ___sharedKey;
};
struct DiffieHellmanCryptoProvider_t2349_StaticFields{
	// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Security.DiffieHellmanCryptoProvider::primeRoot
	BigInteger_t2345 * ___primeRoot;
};
