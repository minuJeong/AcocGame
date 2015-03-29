#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Cryptography.MACAlgorithm
struct MACAlgorithm_t3244;
// System.Security.Cryptography.SymmetricAlgorithm
struct SymmetricAlgorithm_t2426;
// System.Byte[]
struct ByteU5BU5D_t21;

// System.Void Mono.Security.Cryptography.MACAlgorithm::.ctor(System.Security.Cryptography.SymmetricAlgorithm)
 void MACAlgorithm__ctor_m11442 (MACAlgorithm_t3244 * __this, SymmetricAlgorithm_t2426 * ___algorithm, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.MACAlgorithm::Initialize(System.Byte[])
 void MACAlgorithm_Initialize_m11443 (MACAlgorithm_t3244 * __this, ByteU5BU5D_t21* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.MACAlgorithm::Core(System.Byte[],System.Int32,System.Int32)
 void MACAlgorithm_Core_m11444 (MACAlgorithm_t3244 * __this, ByteU5BU5D_t21* ___rgb, int32_t ___ib, int32_t ___cb, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.MACAlgorithm::Final()
 ByteU5BU5D_t21* MACAlgorithm_Final_m11445 (MACAlgorithm_t3244 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
