#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// FBResult
struct FBResult_t134;
// UnityEngine.Texture2D
struct Texture2D_t62;
// System.String
struct String_t;
// UnityEngine.WWW
struct WWW_t135;

// System.Void FBResult::.ctor(UnityEngine.WWW)
 void FBResult__ctor_m4639 (FBResult_t134 * __this, WWW_t135 * ___www, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBResult::.ctor(System.String,System.String)
 void FBResult__ctor_m1981 (FBResult_t134 * __this, String_t* ___data, String_t* ___error, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D FBResult::get_Texture()
 Texture2D_t62 * FBResult_get_Texture_m4640 (FBResult_t134 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String FBResult::get_Text()
 String_t* FBResult_get_Text_m2041 (FBResult_t134 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String FBResult::get_Error()
 String_t* FBResult_get_Error_m2040 (FBResult_t134 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBResult::Dispose()
 void FBResult_Dispose_m4641 (FBResult_t134 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FBResult::Finalize()
 void FBResult_Finalize_m4642 (FBResult_t134 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
