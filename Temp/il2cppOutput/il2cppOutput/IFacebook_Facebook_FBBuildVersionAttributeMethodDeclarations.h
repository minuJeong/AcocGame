#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Facebook.FBBuildVersionAttribute
struct FBBuildVersionAttribute_t426;
// System.String
struct String_t;
// System.Type
struct Type_t;
// Facebook.FBBuildVersionAttribute[]
struct FBBuildVersionAttributeU5BU5D_t863;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void Facebook.FBBuildVersionAttribute::.ctor(System.String,System.String)
 void FBBuildVersionAttribute__ctor_m4630 (FBBuildVersionAttribute_t426 * __this, String_t* ___sdkVersion, String_t* ___buildVersion, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Facebook.FBBuildVersionAttribute::get_Date()
 DateTime_t126  FBBuildVersionAttribute_get_Date_m4631 (FBBuildVersionAttribute_t426 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.FBBuildVersionAttribute::get_Hash()
 String_t* FBBuildVersionAttribute_get_Hash_m4632 (FBBuildVersionAttribute_t426 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.FBBuildVersionAttribute::get_SdkVersion()
 String_t* FBBuildVersionAttribute_get_SdkVersion_m2111 (FBBuildVersionAttribute_t426 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.FBBuildVersionAttribute::get_BuildVersion()
 String_t* FBBuildVersionAttribute_get_BuildVersion_m2112 (FBBuildVersionAttribute_t426 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.FBBuildVersionAttribute::ToString()
 String_t* FBBuildVersionAttribute_ToString_m4633 (FBBuildVersionAttribute_t426 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Facebook.FBBuildVersionAttribute Facebook.FBBuildVersionAttribute::GetVersionAttributeOfType(System.Type)
 FBBuildVersionAttribute_t426 * FBBuildVersionAttribute_GetVersionAttributeOfType_m2109 (Object_t * __this/* static, unused */, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Facebook.FBBuildVersionAttribute[] Facebook.FBBuildVersionAttribute::getAttributes(System.Type)
 FBBuildVersionAttributeU5BU5D_t863* FBBuildVersionAttribute_getAttributes_m4634 (Object_t * __this/* static, unused */, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
