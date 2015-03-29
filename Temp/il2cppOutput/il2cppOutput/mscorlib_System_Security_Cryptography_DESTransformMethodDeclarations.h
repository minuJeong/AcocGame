#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.DESTransform
struct DESTransform_t3570;
// System.Security.Cryptography.SymmetricAlgorithm
struct SymmetricAlgorithm_t2426;
// System.Byte[]
struct ByteU5BU5D_t21;
// System.UInt32[]
struct UInt32U5BU5D_t2344;

// System.Void System.Security.Cryptography.DESTransform::.ctor(System.Security.Cryptography.SymmetricAlgorithm,System.Boolean,System.Byte[],System.Byte[])
 void DESTransform__ctor_m13265 (DESTransform_t3570 * __this, SymmetricAlgorithm_t2426 * ___symmAlgo, bool ___encryption, ByteU5BU5D_t21* ___key, ByteU5BU5D_t21* ___iv, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DESTransform::.cctor()
 void DESTransform__cctor_m13266 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Security.Cryptography.DESTransform::CipherFunct(System.UInt32,System.Int32)
 uint32_t DESTransform_CipherFunct_m13267 (DESTransform_t3570 * __this, uint32_t ___r, int32_t ___n, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DESTransform::Permutation(System.Byte[],System.Byte[],System.UInt32[],System.Boolean)
 void DESTransform_Permutation_m13268 (Object_t * __this/* static, unused */, ByteU5BU5D_t21* ___input, ByteU5BU5D_t21* ___output, UInt32U5BU5D_t2344* ___permTab, bool ___preSwap, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DESTransform::BSwap(System.Byte[])
 void DESTransform_BSwap_m13269 (Object_t * __this/* static, unused */, ByteU5BU5D_t21* ___byteBuff, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DESTransform::SetKey(System.Byte[])
 void DESTransform_SetKey_m13270 (DESTransform_t3570 * __this, ByteU5BU5D_t21* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DESTransform::ProcessBlock(System.Byte[],System.Byte[])
 void DESTransform_ProcessBlock_m13271 (DESTransform_t3570 * __this, ByteU5BU5D_t21* ___input, ByteU5BU5D_t21* ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DESTransform::ECB(System.Byte[],System.Byte[])
 void DESTransform_ECB_m13272 (DESTransform_t3570 * __this, ByteU5BU5D_t21* ___input, ByteU5BU5D_t21* ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.DESTransform::GetStrongKey()
 ByteU5BU5D_t21* DESTransform_GetStrongKey_m13273 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
