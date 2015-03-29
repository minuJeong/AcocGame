#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Attribute
#include "mscorlib_System_Attribute.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"
// Facebook.FBBuildVersionAttribute
struct FBBuildVersionAttribute_t426  : public Attribute_t862
{
	// System.DateTime Facebook.FBBuildVersionAttribute::buildDate
	DateTime_t126  ___buildDate;
	// System.String Facebook.FBBuildVersionAttribute::buildHash
	String_t* ___buildHash;
	// System.String Facebook.FBBuildVersionAttribute::buildVersion
	String_t* ___buildVersion;
	// System.String Facebook.FBBuildVersionAttribute::sdkVersion
	String_t* ___sdkVersion;
};
