#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.TripleDES
struct TripleDES_t3584;
// System.Byte[]
struct ByteU5BU5D_t21;
// System.String
struct String_t;

// System.Byte[] System.Security.Cryptography.TripleDES::get_Key()
 ByteU5BU5D_t21* TripleDES_get_Key_m13542 (TripleDES_t3584 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.TripleDES::set_Key(System.Byte[])
 void TripleDES_set_Key_m13543 (TripleDES_t3584 * __this, ByteU5BU5D_t21* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.TripleDES::IsWeakKey(System.Byte[])
 bool TripleDES_IsWeakKey_m13544 (Object_t * __this/* static, unused */, ByteU5BU5D_t21* ___rgbKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.TripleDES System.Security.Cryptography.TripleDES::Create(System.String)
 TripleDES_t3584 * TripleDES_Create_m13545 (Object_t * __this/* static, unused */, String_t* ___str, MethodInfo* method) IL2CPP_METHOD_ATTR;
