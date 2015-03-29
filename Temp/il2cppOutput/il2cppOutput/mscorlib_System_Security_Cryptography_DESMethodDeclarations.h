#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.DES
struct DES_t3570;
// System.Byte[]
struct ByteU5BU5D_t21;

// System.Void System.Security.Cryptography.DES::.ctor()
 void DES__ctor_m13262 (DES_t3570 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DES::.cctor()
 void DES__cctor_m13263 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.DES::IsWeakKey(System.Byte[])
 bool DES_IsWeakKey_m13264 (Object_t * __this/* static, unused */, ByteU5BU5D_t21* ___rgbKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.DES::IsSemiWeakKey(System.Byte[])
 bool DES_IsSemiWeakKey_m13265 (Object_t * __this/* static, unused */, ByteU5BU5D_t21* ___rgbKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.DES::get_Key()
 ByteU5BU5D_t21* DES_get_Key_m13266 (DES_t3570 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DES::set_Key(System.Byte[])
 void DES_set_Key_m13267 (DES_t3570 * __this, ByteU5BU5D_t21* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
