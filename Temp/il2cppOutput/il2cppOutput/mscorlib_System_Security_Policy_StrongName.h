#pragma once
#include <stdint.h>
// System.Security.Permissions.StrongNamePublicKeyBlob
struct StrongNamePublicKeyBlob_t3617;
// System.String
struct String_t;
// System.Version
struct Version_t1097;
// System.Object
#include "mscorlib_System_Object.h"
// System.Security.Policy.StrongName
struct StrongName_t3622  : public Object_t
{
	// System.Security.Permissions.StrongNamePublicKeyBlob System.Security.Policy.StrongName::publickey
	StrongNamePublicKeyBlob_t3617 * ___publickey;
	// System.String System.Security.Policy.StrongName::name
	String_t* ___name;
	// System.Version System.Security.Policy.StrongName::version
	Version_t1097 * ___version;
};
