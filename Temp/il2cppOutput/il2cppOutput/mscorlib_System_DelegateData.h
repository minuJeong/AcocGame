﻿#pragma once
#include <stdint.h>
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Object
#include "mscorlib_System_Object.h"
// System.DelegateData
struct DelegateData_t3171  : public Object_t
{
	// System.Type System.DelegateData::target_type
	Type_t * ___target_type;
	// System.String System.DelegateData::method_name
	String_t* ___method_name;
};
