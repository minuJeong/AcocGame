#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Object
#include "mscorlib_System_Object.h"
// CloudRegionCode
#include "AssemblyU2DCSharp_CloudRegionCode.h"
// Region
struct Region_t296  : public Object_t
{
	// CloudRegionCode Region::Code
	int32_t ___Code;
	// System.String Region::HostAndPort
	String_t* ___HostAndPort;
	// System.Int32 Region::Ping
	int32_t ___Ping;
};
