#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Photon.SocketServer.Security.DiffieHellmanCryptoProvider
struct DiffieHellmanCryptoProvider_t2349;
// System.Byte[]
struct ByteU5BU5D_t21;
// Photon.SocketServer.Numeric.BigInteger
struct BigInteger_t2345;

// System.Void Photon.SocketServer.Security.DiffieHellmanCryptoProvider::.ctor()
 void DiffieHellmanCryptoProvider__ctor_m7246 (DiffieHellmanCryptoProvider_t2349 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Photon.SocketServer.Security.DiffieHellmanCryptoProvider::get_IsInitialized()
 bool DiffieHellmanCryptoProvider_get_IsInitialized_m7247 (DiffieHellmanCryptoProvider_t2349 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Photon.SocketServer.Security.DiffieHellmanCryptoProvider::get_PublicKey()
 ByteU5BU5D_t21* DiffieHellmanCryptoProvider_get_PublicKey_m7248 (DiffieHellmanCryptoProvider_t2349 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Photon.SocketServer.Security.DiffieHellmanCryptoProvider::get_SharedKey()
 ByteU5BU5D_t21* DiffieHellmanCryptoProvider_get_SharedKey_m7249 (DiffieHellmanCryptoProvider_t2349 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.SocketServer.Security.DiffieHellmanCryptoProvider::DeriveSharedKey(System.Byte[])
 void DiffieHellmanCryptoProvider_DeriveSharedKey_m7250 (DiffieHellmanCryptoProvider_t2349 * __this, ByteU5BU5D_t21* ___otherPartyPublicKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Photon.SocketServer.Security.DiffieHellmanCryptoProvider::Encrypt(System.Byte[])
 ByteU5BU5D_t21* DiffieHellmanCryptoProvider_Encrypt_m7251 (DiffieHellmanCryptoProvider_t2349 * __this, ByteU5BU5D_t21* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Photon.SocketServer.Security.DiffieHellmanCryptoProvider::Encrypt(System.Byte[],System.Int32,System.Int32)
 ByteU5BU5D_t21* DiffieHellmanCryptoProvider_Encrypt_m7252 (DiffieHellmanCryptoProvider_t2349 * __this, ByteU5BU5D_t21* ___data, int32_t ___offset, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Photon.SocketServer.Security.DiffieHellmanCryptoProvider::Decrypt(System.Byte[])
 ByteU5BU5D_t21* DiffieHellmanCryptoProvider_Decrypt_m7253 (DiffieHellmanCryptoProvider_t2349 * __this, ByteU5BU5D_t21* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Photon.SocketServer.Security.DiffieHellmanCryptoProvider::Decrypt(System.Byte[],System.Int32,System.Int32)
 ByteU5BU5D_t21* DiffieHellmanCryptoProvider_Decrypt_m7254 (DiffieHellmanCryptoProvider_t2349 * __this, ByteU5BU5D_t21* ___data, int32_t ___offset, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.SocketServer.Security.DiffieHellmanCryptoProvider::Dispose()
 void DiffieHellmanCryptoProvider_Dispose_m7255 (DiffieHellmanCryptoProvider_t2349 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.SocketServer.Security.DiffieHellmanCryptoProvider::Dispose(System.Boolean)
 void DiffieHellmanCryptoProvider_Dispose_m7256 (DiffieHellmanCryptoProvider_t2349 * __this, bool ___disposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Security.DiffieHellmanCryptoProvider::CalculatePublicKey()
 BigInteger_t2345 * DiffieHellmanCryptoProvider_CalculatePublicKey_m7257 (DiffieHellmanCryptoProvider_t2349 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Security.DiffieHellmanCryptoProvider::CalculateSharedKey(Photon.SocketServer.Numeric.BigInteger)
 BigInteger_t2345 * DiffieHellmanCryptoProvider_CalculateSharedKey_m7258 (DiffieHellmanCryptoProvider_t2349 * __this, BigInteger_t2345 * ___otherPartyPublicKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Photon.SocketServer.Numeric.BigInteger Photon.SocketServer.Security.DiffieHellmanCryptoProvider::GenerateRandomSecret(System.Int32)
 BigInteger_t2345 * DiffieHellmanCryptoProvider_GenerateRandomSecret_m7259 (DiffieHellmanCryptoProvider_t2349 * __this, int32_t ___secretLength, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Photon.SocketServer.Security.DiffieHellmanCryptoProvider::.cctor()
 void DiffieHellmanCryptoProvider__cctor_m7260 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
