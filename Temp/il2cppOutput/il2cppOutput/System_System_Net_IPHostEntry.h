#pragma once
#include <stdint.h>
// System.Net.IPAddress[]
struct IPAddressU5BU5D_t520;
// System.String[]
struct StringU5BU5D_t4;
// System.String
struct String_t;
// System.Object
#include "mscorlib_System_Object.h"
// System.Net.IPHostEntry
struct IPHostEntry_t2437  : public Object_t
{
	// System.Net.IPAddress[] System.Net.IPHostEntry::addressList
	IPAddressU5BU5D_t520* ___addressList;
	// System.String[] System.Net.IPHostEntry::aliases
	StringU5BU5D_t4* ___aliases;
	// System.String System.Net.IPHostEntry::hostName
	String_t* ___hostName;
};
