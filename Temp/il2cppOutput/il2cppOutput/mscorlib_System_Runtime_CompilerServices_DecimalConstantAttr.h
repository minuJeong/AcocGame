#pragma once
#include <stdint.h>
// System.Attribute
#include "mscorlib_System_Attribute.h"
// System.Runtime.CompilerServices.DecimalConstantAttribute
struct DecimalConstantAttribute_t3189  : public Attribute_t862
{
	// System.Byte System.Runtime.CompilerServices.DecimalConstantAttribute::scale
	uint8_t ___scale;
	// System.Boolean System.Runtime.CompilerServices.DecimalConstantAttribute::sign
	bool ___sign;
	// System.Int32 System.Runtime.CompilerServices.DecimalConstantAttribute::hi
	int32_t ___hi;
	// System.Int32 System.Runtime.CompilerServices.DecimalConstantAttribute::mid
	int32_t ___mid;
	// System.Int32 System.Runtime.CompilerServices.DecimalConstantAttribute::low
	int32_t ___low;
};
