﻿#pragma once
#include <stdint.h>
// System.UInt16[]
struct UInt16U5BU5D_t2767;
// System.Net.IPv6Address
struct IPv6Address_t2768;
// System.Object
#include "mscorlib_System_Object.h"
// System.Net.IPv6Address
struct IPv6Address_t2768  : public Object_t
{
	// System.UInt16[] System.Net.IPv6Address::address
	UInt16U5BU5D_t2767* ___address;
	// System.Int32 System.Net.IPv6Address::prefixLength
	int32_t ___prefixLength;
	// System.Int64 System.Net.IPv6Address::scopeId
	int64_t ___scopeId;
};
struct IPv6Address_t2768_StaticFields{
	// System.Net.IPv6Address System.Net.IPv6Address::Loopback
	IPv6Address_t2768 * ___Loopback;
	// System.Net.IPv6Address System.Net.IPv6Address::Unspecified
	IPv6Address_t2768 * ___Unspecified;
};
