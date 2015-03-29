#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.Emit.AssemblyBuilder
struct AssemblyBuilder_t3362;
// System.String
struct String_t;
// System.Reflection.Module[]
struct ModuleU5BU5D_t3363;
// System.Exception
struct Exception_t107;
// System.Reflection.AssemblyName
struct AssemblyName_t1420;

// System.String System.Reflection.Emit.AssemblyBuilder::get_Location()
 String_t* AssemblyBuilder_get_Location_m12304 (AssemblyBuilder_t3362 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module[] System.Reflection.Emit.AssemblyBuilder::GetModulesInternal()
 ModuleU5BU5D_t3363* AssemblyBuilder_GetModulesInternal_m12305 (AssemblyBuilder_t3362 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.AssemblyBuilder::get_IsCompilerContext()
 bool AssemblyBuilder_get_IsCompilerContext_m12306 (AssemblyBuilder_t3362 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Reflection.Emit.AssemblyBuilder::not_supported()
 Exception_t107 * AssemblyBuilder_not_supported_m12307 (AssemblyBuilder_t3362 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.AssemblyName System.Reflection.Emit.AssemblyBuilder::UnprotectedGetName()
 AssemblyName_t1420 * AssemblyBuilder_UnprotectedGetName_m12308 (AssemblyBuilder_t3362 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
