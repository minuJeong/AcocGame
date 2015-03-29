#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Cryptography.DSAManaged
struct DSAManaged_t3238;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t3232;
// Mono.Security.Cryptography.DSAManaged/KeyGeneratedEventHandler
struct KeyGeneratedEventHandler_t3237;
// System.Byte[]
struct ByteU5BU5D_t21;
// System.Security.Cryptography.DSAParameters
#include "mscorlib_System_Security_Cryptography_DSAParameters.h"

// System.Void Mono.Security.Cryptography.DSAManaged::.ctor(System.Int32)
 void DSAManaged__ctor_m11396 (DSAManaged_t3238 * __this, int32_t ___dwKeySize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.DSAManaged::add_KeyGenerated(Mono.Security.Cryptography.DSAManaged/KeyGeneratedEventHandler)
 void DSAManaged_add_KeyGenerated_m11397 (DSAManaged_t3238 * __this, KeyGeneratedEventHandler_t3237 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.DSAManaged::remove_KeyGenerated(Mono.Security.Cryptography.DSAManaged/KeyGeneratedEventHandler)
 void DSAManaged_remove_KeyGenerated_m11398 (DSAManaged_t3238 * __this, KeyGeneratedEventHandler_t3237 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.DSAManaged::Finalize()
 void DSAManaged_Finalize_m11399 (DSAManaged_t3238 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.DSAManaged::Generate()
 void DSAManaged_Generate_m11400 (DSAManaged_t3238 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.DSAManaged::GenerateKeyPair()
 void DSAManaged_GenerateKeyPair_m11401 (DSAManaged_t3238 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.DSAManaged::add(System.Byte[],System.Byte[],System.Int32)
 void DSAManaged_add_m11402 (DSAManaged_t3238 * __this, ByteU5BU5D_t21* ___a, ByteU5BU5D_t21* ___b, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.DSAManaged::GenerateParams(System.Int32)
 void DSAManaged_GenerateParams_m11403 (DSAManaged_t3238 * __this, int32_t ___keyLength, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RandomNumberGenerator Mono.Security.Cryptography.DSAManaged::get_Random()
 RandomNumberGenerator_t3232 * DSAManaged_get_Random_m11404 (DSAManaged_t3238 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Cryptography.DSAManaged::get_KeySize()
 int32_t DSAManaged_get_KeySize_m11405 (DSAManaged_t3238 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.DSAManaged::get_PublicOnly()
 bool DSAManaged_get_PublicOnly_m11406 (DSAManaged_t3238 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.DSAManaged::NormalizeArray(System.Byte[])
 ByteU5BU5D_t21* DSAManaged_NormalizeArray_m11407 (DSAManaged_t3238 * __this, ByteU5BU5D_t21* ___array, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSAParameters Mono.Security.Cryptography.DSAManaged::ExportParameters(System.Boolean)
 DSAParameters_t3240  DSAManaged_ExportParameters_m11408 (DSAManaged_t3238 * __this, bool ___includePrivateParameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.DSAManaged::ImportParameters(System.Security.Cryptography.DSAParameters)
 void DSAManaged_ImportParameters_m11409 (DSAManaged_t3238 * __this, DSAParameters_t3240  ___parameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.DSAManaged::Dispose(System.Boolean)
 void DSAManaged_Dispose_m11410 (DSAManaged_t3238 * __this, bool ___disposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
