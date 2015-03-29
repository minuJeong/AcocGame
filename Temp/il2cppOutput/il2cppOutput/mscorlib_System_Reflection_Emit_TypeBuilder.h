#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t291;
// System.Reflection.Emit.MethodBuilder[]
struct MethodBuilderU5BU5D_t3377;
// System.Reflection.Emit.ConstructorBuilder[]
struct ConstructorBuilderU5BU5D_t3378;
// System.Reflection.Emit.PropertyBuilder[]
struct PropertyBuilderU5BU5D_t3379;
// System.Reflection.Emit.FieldBuilder[]
struct FieldBuilderU5BU5D_t3380;
// System.Reflection.Emit.ModuleBuilder
struct ModuleBuilder_t3362;
// System.Reflection.Emit.GenericTypeParameterBuilder[]
struct GenericTypeParameterBuilderU5BU5D_t3375;
// System.Type
#include "mscorlib_System_Type.h"
// System.Reflection.TypeAttributes
#include "mscorlib_System_Reflection_TypeAttributes.h"
// System.Reflection.Emit.TypeBuilder
struct TypeBuilder_t3365  : public Type_t
{
	// System.String System.Reflection.Emit.TypeBuilder::tname
	String_t* ___tname;
	// System.String System.Reflection.Emit.TypeBuilder::nspace
	String_t* ___nspace;
	// System.Type System.Reflection.Emit.TypeBuilder::parent
	Type_t * ___parent;
	// System.Type System.Reflection.Emit.TypeBuilder::nesting_type
	Type_t * ___nesting_type;
	// System.Type[] System.Reflection.Emit.TypeBuilder::interfaces
	TypeU5BU5D_t291* ___interfaces;
	// System.Reflection.Emit.MethodBuilder[] System.Reflection.Emit.TypeBuilder::methods
	MethodBuilderU5BU5D_t3377* ___methods;
	// System.Reflection.Emit.ConstructorBuilder[] System.Reflection.Emit.TypeBuilder::ctors
	ConstructorBuilderU5BU5D_t3378* ___ctors;
	// System.Reflection.Emit.PropertyBuilder[] System.Reflection.Emit.TypeBuilder::properties
	PropertyBuilderU5BU5D_t3379* ___properties;
	// System.Reflection.Emit.FieldBuilder[] System.Reflection.Emit.TypeBuilder::fields
	FieldBuilderU5BU5D_t3380* ___fields;
	// System.Reflection.TypeAttributes System.Reflection.Emit.TypeBuilder::attrs
	int32_t ___attrs;
	// System.Reflection.Emit.ModuleBuilder System.Reflection.Emit.TypeBuilder::pmodule
	ModuleBuilder_t3362 * ___pmodule;
	// System.Reflection.Emit.GenericTypeParameterBuilder[] System.Reflection.Emit.TypeBuilder::generic_params
	GenericTypeParameterBuilderU5BU5D_t3375* ___generic_params;
	// System.Type System.Reflection.Emit.TypeBuilder::created
	Type_t * ___created;
	// System.String System.Reflection.Emit.TypeBuilder::fullname
	String_t* ___fullname;
	// System.Type System.Reflection.Emit.TypeBuilder::underlying_type
	Type_t * ___underlying_type;
};
