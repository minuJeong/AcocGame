#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RC2CryptoServiceProvider
struct RC2CryptoServiceProvider_t3589;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t2428;
// System.Byte[]
struct ByteU5BU5D_t21;

// System.Void System.Security.Cryptography.RC2CryptoServiceProvider::.ctor()
 void RC2CryptoServiceProvider__ctor_m13366 (RC2CryptoServiceProvider_t3589 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.RC2CryptoServiceProvider::get_EffectiveKeySize()
 int32_t RC2CryptoServiceProvider_get_EffectiveKeySize_m13367 (RC2CryptoServiceProvider_t3589 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.RC2CryptoServiceProvider::CreateDecryptor(System.Byte[],System.Byte[])
 Object_t * RC2CryptoServiceProvider_CreateDecryptor_m13368 (RC2CryptoServiceProvider_t3589 * __this, ByteU5BU5D_t21* ___rgbKey, ByteU5BU5D_t21* ___rgbIV, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.RC2CryptoServiceProvider::CreateEncryptor(System.Byte[],System.Byte[])
 Object_t * RC2CryptoServiceProvider_CreateEncryptor_m13369 (RC2CryptoServiceProvider_t3589 * __this, ByteU5BU5D_t21* ___rgbKey, ByteU5BU5D_t21* ___rgbIV, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RC2CryptoServiceProvider::GenerateIV()
 void RC2CryptoServiceProvider_GenerateIV_m13370 (RC2CryptoServiceProvider_t3589 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RC2CryptoServiceProvider::GenerateKey()
 void RC2CryptoServiceProvider_GenerateKey_m13371 (RC2CryptoServiceProvider_t3589 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
