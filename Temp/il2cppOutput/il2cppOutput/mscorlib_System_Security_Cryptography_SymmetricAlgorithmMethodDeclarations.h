#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.SymmetricAlgorithm
struct SymmetricAlgorithm_t2426;
// System.Byte[]
struct ByteU5BU5D_t21;
// System.Security.Cryptography.KeySizes[]
struct KeySizesU5BU5D_t3557;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t2428;
// System.Security.Cryptography.CipherMode
#include "mscorlib_System_Security_Cryptography_CipherMode.h"
// System.Security.Cryptography.PaddingMode
#include "mscorlib_System_Security_Cryptography_PaddingMode.h"

// System.Void System.Security.Cryptography.SymmetricAlgorithm::.ctor()
 void SymmetricAlgorithm__ctor_m13518 (SymmetricAlgorithm_t2426 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SymmetricAlgorithm::System.IDisposable.Dispose()
 void SymmetricAlgorithm_System_IDisposable_Dispose_m13519 (SymmetricAlgorithm_t2426 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SymmetricAlgorithm::Finalize()
 void SymmetricAlgorithm_Finalize_m13520 (SymmetricAlgorithm_t2426 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SymmetricAlgorithm::Clear()
 void SymmetricAlgorithm_Clear_m13521 (SymmetricAlgorithm_t2426 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SymmetricAlgorithm::Dispose(System.Boolean)
 void SymmetricAlgorithm_Dispose_m13522 (SymmetricAlgorithm_t2426 * __this, bool ___disposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::get_BlockSize()
 int32_t SymmetricAlgorithm_get_BlockSize_m13523 (SymmetricAlgorithm_t2426 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::get_FeedbackSize()
 int32_t SymmetricAlgorithm_get_FeedbackSize_m13524 (SymmetricAlgorithm_t2426 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::get_IV()
 ByteU5BU5D_t21* SymmetricAlgorithm_get_IV_m13525 (SymmetricAlgorithm_t2426 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SymmetricAlgorithm::set_IV(System.Byte[])
 void SymmetricAlgorithm_set_IV_m7739 (SymmetricAlgorithm_t2426 * __this, ByteU5BU5D_t21* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::get_Key()
 ByteU5BU5D_t21* SymmetricAlgorithm_get_Key_m13526 (SymmetricAlgorithm_t2426 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SymmetricAlgorithm::set_Key(System.Byte[])
 void SymmetricAlgorithm_set_Key_m7738 (SymmetricAlgorithm_t2426 * __this, ByteU5BU5D_t21* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::get_KeySize()
 int32_t SymmetricAlgorithm_get_KeySize_m13527 (SymmetricAlgorithm_t2426 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.SymmetricAlgorithm::get_LegalKeySizes()
 KeySizesU5BU5D_t3557* SymmetricAlgorithm_get_LegalKeySizes_m13528 (SymmetricAlgorithm_t2426 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.CipherMode System.Security.Cryptography.SymmetricAlgorithm::get_Mode()
 int32_t SymmetricAlgorithm_get_Mode_m13529 (SymmetricAlgorithm_t2426 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SymmetricAlgorithm::set_Mode(System.Security.Cryptography.CipherMode)
 void SymmetricAlgorithm_set_Mode_m13530 (SymmetricAlgorithm_t2426 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.PaddingMode System.Security.Cryptography.SymmetricAlgorithm::get_Padding()
 int32_t SymmetricAlgorithm_get_Padding_m13531 (SymmetricAlgorithm_t2426 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SymmetricAlgorithm::set_Padding(System.Security.Cryptography.PaddingMode)
 void SymmetricAlgorithm_set_Padding_m7740 (SymmetricAlgorithm_t2426 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.SymmetricAlgorithm::CreateDecryptor()
 Object_t * SymmetricAlgorithm_CreateDecryptor_m7743 (SymmetricAlgorithm_t2426 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.SymmetricAlgorithm::CreateDecryptor(System.Byte[],System.Byte[])
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.SymmetricAlgorithm::CreateEncryptor()
 Object_t * SymmetricAlgorithm_CreateEncryptor_m7741 (SymmetricAlgorithm_t2426 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.SymmetricAlgorithm::CreateEncryptor(System.Byte[],System.Byte[])
// System.Void System.Security.Cryptography.SymmetricAlgorithm::GenerateIV()
// System.Void System.Security.Cryptography.SymmetricAlgorithm::GenerateKey()
