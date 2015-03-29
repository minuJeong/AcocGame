#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.DESCryptoServiceProvider
struct DESCryptoServiceProvider_t3572;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t2428;
// System.Byte[]
struct ByteU5BU5D_t21;

// System.Void System.Security.Cryptography.DESCryptoServiceProvider::.ctor()
 void DESCryptoServiceProvider__ctor_m13277 (DESCryptoServiceProvider_t3572 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.DESCryptoServiceProvider::CreateDecryptor(System.Byte[],System.Byte[])
 Object_t * DESCryptoServiceProvider_CreateDecryptor_m13278 (DESCryptoServiceProvider_t3572 * __this, ByteU5BU5D_t21* ___rgbKey, ByteU5BU5D_t21* ___rgbIV, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.DESCryptoServiceProvider::CreateEncryptor(System.Byte[],System.Byte[])
 Object_t * DESCryptoServiceProvider_CreateEncryptor_m13279 (DESCryptoServiceProvider_t3572 * __this, ByteU5BU5D_t21* ___rgbKey, ByteU5BU5D_t21* ___rgbIV, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DESCryptoServiceProvider::GenerateIV()
 void DESCryptoServiceProvider_GenerateIV_m13280 (DESCryptoServiceProvider_t3572 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DESCryptoServiceProvider::GenerateKey()
 void DESCryptoServiceProvider_GenerateKey_m13281 (DESCryptoServiceProvider_t3572 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
