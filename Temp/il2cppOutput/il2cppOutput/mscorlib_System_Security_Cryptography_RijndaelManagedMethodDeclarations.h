#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RijndaelManaged
struct RijndaelManaged_t2425;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t2428;
// System.Byte[]
struct ByteU5BU5D_t21;

// System.Void System.Security.Cryptography.RijndaelManaged::.ctor()
 void RijndaelManaged__ctor_m7737 (RijndaelManaged_t2425 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelManaged::GenerateIV()
 void RijndaelManaged_GenerateIV_m13430 (RijndaelManaged_t2425 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelManaged::GenerateKey()
 void RijndaelManaged_GenerateKey_m13431 (RijndaelManaged_t2425 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.RijndaelManaged::CreateDecryptor(System.Byte[],System.Byte[])
 Object_t * RijndaelManaged_CreateDecryptor_m13432 (RijndaelManaged_t2425 * __this, ByteU5BU5D_t21* ___rgbKey, ByteU5BU5D_t21* ___rgbIV, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.RijndaelManaged::CreateEncryptor(System.Byte[],System.Byte[])
 Object_t * RijndaelManaged_CreateEncryptor_m13433 (RijndaelManaged_t2425 * __this, ByteU5BU5D_t21* ___rgbKey, ByteU5BU5D_t21* ___rgbIV, MethodInfo* method) IL2CPP_METHOD_ATTR;
