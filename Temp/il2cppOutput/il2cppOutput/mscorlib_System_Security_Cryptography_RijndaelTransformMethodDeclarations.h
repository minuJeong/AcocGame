#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RijndaelTransform
struct RijndaelTransform_t3598;
// System.Security.Cryptography.Rijndael
struct Rijndael_t2348;
// System.Byte[]
struct ByteU5BU5D_t21;
// System.UInt32[]
struct UInt32U5BU5D_t2344;

// System.Void System.Security.Cryptography.RijndaelTransform::.ctor(System.Security.Cryptography.Rijndael,System.Boolean,System.Byte[],System.Byte[])
 void RijndaelTransform__ctor_m13437 (RijndaelTransform_t3598 * __this, Rijndael_t2348 * ___algo, bool ___encryption, ByteU5BU5D_t21* ___key, ByteU5BU5D_t21* ___iv, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::.cctor()
 void RijndaelTransform__cctor_m13438 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Clear()
 void RijndaelTransform_Clear_m13439 (RijndaelTransform_t3598 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::ECB(System.Byte[],System.Byte[])
 void RijndaelTransform_ECB_m13440 (RijndaelTransform_t3598 * __this, ByteU5BU5D_t21* ___input, ByteU5BU5D_t21* ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Security.Cryptography.RijndaelTransform::SubByte(System.UInt32)
 uint32_t RijndaelTransform_SubByte_m13441 (RijndaelTransform_t3598 * __this, uint32_t ___a, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Encrypt128(System.Byte[],System.Byte[],System.UInt32[])
 void RijndaelTransform_Encrypt128_m13442 (RijndaelTransform_t3598 * __this, ByteU5BU5D_t21* ___indata, ByteU5BU5D_t21* ___outdata, UInt32U5BU5D_t2344* ___ekey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Encrypt192(System.Byte[],System.Byte[],System.UInt32[])
 void RijndaelTransform_Encrypt192_m13443 (RijndaelTransform_t3598 * __this, ByteU5BU5D_t21* ___indata, ByteU5BU5D_t21* ___outdata, UInt32U5BU5D_t2344* ___ekey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Encrypt256(System.Byte[],System.Byte[],System.UInt32[])
 void RijndaelTransform_Encrypt256_m13444 (RijndaelTransform_t3598 * __this, ByteU5BU5D_t21* ___indata, ByteU5BU5D_t21* ___outdata, UInt32U5BU5D_t2344* ___ekey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Decrypt128(System.Byte[],System.Byte[],System.UInt32[])
 void RijndaelTransform_Decrypt128_m13445 (RijndaelTransform_t3598 * __this, ByteU5BU5D_t21* ___indata, ByteU5BU5D_t21* ___outdata, UInt32U5BU5D_t2344* ___ekey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Decrypt192(System.Byte[],System.Byte[],System.UInt32[])
 void RijndaelTransform_Decrypt192_m13446 (RijndaelTransform_t3598 * __this, ByteU5BU5D_t21* ___indata, ByteU5BU5D_t21* ___outdata, UInt32U5BU5D_t2344* ___ekey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelTransform::Decrypt256(System.Byte[],System.Byte[],System.UInt32[])
 void RijndaelTransform_Decrypt256_m13447 (RijndaelTransform_t3598 * __this, ByteU5BU5D_t21* ___indata, ByteU5BU5D_t21* ___outdata, UInt32U5BU5D_t2344* ___ekey, MethodInfo* method) IL2CPP_METHOD_ATTR;
