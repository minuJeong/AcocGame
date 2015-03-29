#pragma once
#include <stdint.h>
// System.UInt16[]
struct UInt16U5BU5D_t2765;
// System.Net.IPAddress
struct IPAddress_t519;
// System.Object
#include "mscorlib_System_Object.h"
// System.Net.Sockets.AddressFamily
#include "System_System_Net_Sockets_AddressFamily.h"
// System.Net.IPAddress
struct IPAddress_t519  : public Object_t
{
	// System.Int64 System.Net.IPAddress::m_Address
	int64_t ___m_Address;
	// System.Net.Sockets.AddressFamily System.Net.IPAddress::m_Family
	int32_t ___m_Family;
	// System.UInt16[] System.Net.IPAddress::m_Numbers
	UInt16U5BU5D_t2765* ___m_Numbers;
	// System.Int64 System.Net.IPAddress::m_ScopeId
	int64_t ___m_ScopeId;
};
struct IPAddress_t519_StaticFields{
	// System.Net.IPAddress System.Net.IPAddress::Any
	IPAddress_t519 * ___Any;
	// System.Net.IPAddress System.Net.IPAddress::Broadcast
	IPAddress_t519 * ___Broadcast;
	// System.Net.IPAddress System.Net.IPAddress::Loopback
	IPAddress_t519 * ___Loopback;
	// System.Net.IPAddress System.Net.IPAddress::None
	IPAddress_t519 * ___None;
	// System.Net.IPAddress System.Net.IPAddress::IPv6Any
	IPAddress_t519 * ___IPv6Any;
	// System.Net.IPAddress System.Net.IPAddress::IPv6Loopback
	IPAddress_t519 * ___IPv6Loopback;
	// System.Net.IPAddress System.Net.IPAddress::IPv6None
	IPAddress_t519 * ___IPv6None;
};
