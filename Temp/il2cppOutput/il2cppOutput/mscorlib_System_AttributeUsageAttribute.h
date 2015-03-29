#pragma once
#include <stdint.h>
// System.Attribute
#include "mscorlib_System_Attribute.h"
// System.AttributeTargets
#include "mscorlib_System_AttributeTargets.h"
// System.AttributeUsageAttribute
struct AttributeUsageAttribute_t874  : public Attribute_t862
{
	// System.AttributeTargets System.AttributeUsageAttribute::valid_on
	int32_t ___valid_on;
	// System.Boolean System.AttributeUsageAttribute::allow_multiple
	bool ___allow_multiple;
	// System.Boolean System.AttributeUsageAttribute::inherited
	bool ___inherited;
};
