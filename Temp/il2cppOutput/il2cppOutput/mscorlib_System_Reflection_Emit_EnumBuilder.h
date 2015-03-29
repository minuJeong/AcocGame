#pragma once
#include <stdint.h>
// System.Reflection.Emit.TypeBuilder
struct TypeBuilder_t3364;
// System.Type
struct Type_t;
// System.Type
#include "mscorlib_System_Type.h"
// System.Reflection.Emit.EnumBuilder
struct EnumBuilder_t3369  : public Type_t
{
	// System.Reflection.Emit.TypeBuilder System.Reflection.Emit.EnumBuilder::_tb
	TypeBuilder_t3364 * ____tb;
	// System.Type System.Reflection.Emit.EnumBuilder::_underlyingType
	Type_t * ____underlyingType;
};
