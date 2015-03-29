#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.Directory
struct Directory_t3329;
// System.IO.DirectoryInfo
struct DirectoryInfo_t3330;
// System.String
struct String_t;

// System.IO.DirectoryInfo System.IO.Directory::CreateDirectory(System.String)
 DirectoryInfo_t3330 * Directory_CreateDirectory_m12024 (Object_t * __this/* static, unused */, String_t* ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.DirectoryInfo System.IO.Directory::CreateDirectoriesInternal(System.String)
 DirectoryInfo_t3330 * Directory_CreateDirectoriesInternal_m12025 (Object_t * __this/* static, unused */, String_t* ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.Directory::Exists(System.String)
 bool Directory_Exists_m12026 (Object_t * __this/* static, unused */, String_t* ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.Directory::GetCurrentDirectory()
 String_t* Directory_GetCurrentDirectory_m12027 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
