#pragma once
#include <stdint.h>
// System.Reflection.Emit.ModuleBuilder[]
struct ModuleBuilderU5BU5D_t3360;
// System.Type
struct Type_t;
// Mono.Security.StrongName
struct StrongName_t3249;
// System.Reflection.Assembly
#include "mscorlib_System_Reflection_Assembly.h"
// System.Reflection.Emit.AssemblyBuilder
struct AssemblyBuilder_t3362  : public Assembly_t147
{
	// System.Reflection.Emit.ModuleBuilder[] System.Reflection.Emit.AssemblyBuilder::modules
	ModuleBuilderU5BU5D_t3360* ___modules;
	// System.Type System.Reflection.Emit.AssemblyBuilder::corlib_value_type
	Type_t * ___corlib_value_type;
	// System.Type System.Reflection.Emit.AssemblyBuilder::corlib_enum_type
	Type_t * ___corlib_enum_type;
	// Mono.Security.StrongName System.Reflection.Emit.AssemblyBuilder::sn
	StrongName_t3249 * ___sn;
	// System.Boolean System.Reflection.Emit.AssemblyBuilder::is_compiler_context
	bool ___is_compiler_context;
};
