#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Attribute
#include "mscorlib_System_Attribute.h"
// System.ObsoleteAttribute
struct ObsoleteAttribute_t427  : public Attribute_t862
{
	// System.String System.ObsoleteAttribute::_message
	String_t* ____message;
	// System.Boolean System.ObsoleteAttribute::_error
	bool ____error;
};
