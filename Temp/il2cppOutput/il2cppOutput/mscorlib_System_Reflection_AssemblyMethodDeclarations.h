#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.Assembly
struct Assembly_t147;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Object[]
struct ObjectU5BU5D_t5;
// System.Reflection.Module
struct Module_t3180;
// System.Reflection.AssemblyName
struct AssemblyName_t1420;
// System.Reflection.Module[]
struct ModuleU5BU5D_t3364;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Reflection.Assembly::.ctor()
 void Assembly__ctor_m12532 (Assembly_t147 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Assembly::get_fullname()
 String_t* Assembly_get_fullname_m12533 (Assembly_t147 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Assembly::get_location()
 String_t* Assembly_get_location_m12534 (Assembly_t147 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Assembly::get_FullName()
 String_t* Assembly_get_FullName_m6457 (Assembly_t147 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Assembly::get_Location()
 String_t* Assembly_get_Location_m12535 (Assembly_t147 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Assembly::IsDefined(System.Type,System.Boolean)
 bool Assembly_IsDefined_m12536 (Assembly_t147 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Assembly::GetCustomAttributes(System.Type,System.Boolean)
 ObjectU5BU5D_t5* Assembly_GetCustomAttributes_m4729 (Assembly_t147 * __this, Type_t * ___attributeType, bool ___inherit, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Reflection.Assembly::GetManifestResourceInternal(System.String,System.Int32&,System.Reflection.Module&)
 IntPtr_t39 Assembly_GetManifestResourceInternal_m12537 (Assembly_t147 * __this, String_t* ___name, int32_t* ___size, Module_t3180 ** ___module, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Assembly::GetType(System.String,System.Boolean)
 Type_t * Assembly_GetType_m12538 (Assembly_t147 * __this, String_t* ___name, bool ___throwOnError, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Assembly::GetType(System.String)
 Type_t * Assembly_GetType_m2096 (Assembly_t147 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Assembly::InternalGetType(System.Reflection.Module,System.String,System.Boolean,System.Boolean)
 Type_t * Assembly_InternalGetType_m12539 (Assembly_t147 * __this, Module_t3180 * ___module, String_t* ___name, bool ___throwOnError, bool ___ignoreCase, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Assembly::GetType(System.String,System.Boolean,System.Boolean)
 Type_t * Assembly_GetType_m12540 (Assembly_t147 * __this, String_t* ___name, bool ___throwOnError, bool ___ignoreCase, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Assembly::FillName(System.Reflection.Assembly,System.Reflection.AssemblyName)
 void Assembly_FillName_m12541 (Object_t * __this/* static, unused */, Assembly_t147 * ___ass, AssemblyName_t1420 * ___aname, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.AssemblyName System.Reflection.Assembly::UnprotectedGetName()
 AssemblyName_t1420 * Assembly_UnprotectedGetName_m12542 (Assembly_t147 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Assembly::ToString()
 String_t* Assembly_ToString_m12543 (Assembly_t147 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Reflection.Assembly::Load(System.String)
 Assembly_t147 * Assembly_Load_m12544 (Object_t * __this/* static, unused */, String_t* ___assemblyString, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.Assembly::GetModule(System.String)
 Module_t3180 * Assembly_GetModule_m12545 (Assembly_t147 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module[] System.Reflection.Assembly::GetModulesInternal()
 ModuleU5BU5D_t3364* Assembly_GetModulesInternal_m12546 (Assembly_t147 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module[] System.Reflection.Assembly::GetModules(System.Boolean)
 ModuleU5BU5D_t3364* Assembly_GetModules_m12547 (Assembly_t147 * __this, bool ___getResourceModules, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Reflection.Assembly::GetExecutingAssembly()
 Assembly_t147 * Assembly_GetExecutingAssembly_m12548 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
