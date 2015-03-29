#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.DSACryptoServiceProvider
struct DSACryptoServiceProvider_t3573;
// System.Security.Cryptography.CspParameters
struct CspParameters_t3242;
// System.Object
struct Object_t;
// System.EventArgs
struct EventArgs_t1191;
// System.Security.Cryptography.DSAParameters
#include "mscorlib_System_Security_Cryptography_DSAParameters.h"

// System.Void System.Security.Cryptography.DSACryptoServiceProvider::.ctor()
 void DSACryptoServiceProvider__ctor_m13286 (DSACryptoServiceProvider_t3573 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSACryptoServiceProvider::.ctor(System.Int32,System.Security.Cryptography.CspParameters)
 void DSACryptoServiceProvider__ctor_m13287 (DSACryptoServiceProvider_t3573 * __this, int32_t ___dwKeySize, CspParameters_t3242 * ___parameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSACryptoServiceProvider::.cctor()
 void DSACryptoServiceProvider__cctor_m13288 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSACryptoServiceProvider::Finalize()
 void DSACryptoServiceProvider_Finalize_m13289 (DSACryptoServiceProvider_t3573 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.DSACryptoServiceProvider::get_KeySize()
 int32_t DSACryptoServiceProvider_get_KeySize_m13290 (DSACryptoServiceProvider_t3573 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSAParameters System.Security.Cryptography.DSACryptoServiceProvider::ExportParameters(System.Boolean)
 DSAParameters_t3241  DSACryptoServiceProvider_ExportParameters_m13291 (DSACryptoServiceProvider_t3573 * __this, bool ___includePrivateParameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSACryptoServiceProvider::ImportParameters(System.Security.Cryptography.DSAParameters)
 void DSACryptoServiceProvider_ImportParameters_m13292 (DSACryptoServiceProvider_t3573 * __this, DSAParameters_t3241  ___parameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSACryptoServiceProvider::Dispose(System.Boolean)
 void DSACryptoServiceProvider_Dispose_m13293 (DSACryptoServiceProvider_t3573 * __this, bool ___disposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSACryptoServiceProvider::OnKeyGenerated(System.Object,System.EventArgs)
 void DSACryptoServiceProvider_OnKeyGenerated_m13294 (DSACryptoServiceProvider_t3573 * __this, Object_t * ___sender, EventArgs_t1191 * ___e, MethodInfo* method) IL2CPP_METHOD_ATTR;
