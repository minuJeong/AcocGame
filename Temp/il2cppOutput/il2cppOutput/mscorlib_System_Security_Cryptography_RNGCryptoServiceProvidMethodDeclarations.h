#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RNGCryptoServiceProvider
struct RNGCryptoServiceProvider_t3593;
// System.Byte[]
struct ByteU5BU5D_t21;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Security.Cryptography.RNGCryptoServiceProvider::.ctor()
 void RNGCryptoServiceProvider__ctor_m13400 (RNGCryptoServiceProvider_t3593 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RNGCryptoServiceProvider::.cctor()
 void RNGCryptoServiceProvider__cctor_m13401 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RNGCryptoServiceProvider::Check()
 void RNGCryptoServiceProvider_Check_m13402 (RNGCryptoServiceProvider_t3593 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.RNGCryptoServiceProvider::RngOpen()
 bool RNGCryptoServiceProvider_RngOpen_m13403 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Security.Cryptography.RNGCryptoServiceProvider::RngInitialize(System.Byte[])
 IntPtr_t39 RNGCryptoServiceProvider_RngInitialize_m13404 (Object_t * __this/* static, unused */, ByteU5BU5D_t21* ___seed, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Security.Cryptography.RNGCryptoServiceProvider::RngGetBytes(System.IntPtr,System.Byte[])
 IntPtr_t39 RNGCryptoServiceProvider_RngGetBytes_m13405 (Object_t * __this/* static, unused */, IntPtr_t39 ___handle, ByteU5BU5D_t21* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RNGCryptoServiceProvider::RngClose(System.IntPtr)
 void RNGCryptoServiceProvider_RngClose_m13406 (Object_t * __this/* static, unused */, IntPtr_t39 ___handle, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RNGCryptoServiceProvider::GetBytes(System.Byte[])
 void RNGCryptoServiceProvider_GetBytes_m13407 (RNGCryptoServiceProvider_t3593 * __this, ByteU5BU5D_t21* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RNGCryptoServiceProvider::Finalize()
 void RNGCryptoServiceProvider_Finalize_m13408 (RNGCryptoServiceProvider_t3593 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
