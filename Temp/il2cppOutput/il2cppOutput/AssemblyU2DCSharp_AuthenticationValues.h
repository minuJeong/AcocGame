#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Object
#include "mscorlib_System_Object.h"
// CustomAuthenticationType
#include "AssemblyU2DCSharp_CustomAuthenticationType.h"
// AuthenticationValues
struct AuthenticationValues_t265  : public Object_t
{
	// CustomAuthenticationType AuthenticationValues::AuthType
	uint8_t ___AuthType;
	// System.String AuthenticationValues::AuthParameters
	String_t* ___AuthParameters;
	// System.String AuthenticationValues::Secret
	String_t* ___Secret;
	// System.Object AuthenticationValues::<AuthPostData>k__BackingField
	Object_t * ___U3CAuthPostDataU3Ek__BackingField;
};
