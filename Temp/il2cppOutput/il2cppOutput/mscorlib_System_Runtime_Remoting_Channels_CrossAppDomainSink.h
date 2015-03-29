#pragma once
#include <stdint.h>
// System.Collections.Hashtable
struct Hashtable_t48;
// System.Reflection.MethodInfo
struct MethodInfo_t292;
// System.Object
#include "mscorlib_System_Object.h"
// System.Runtime.Remoting.Channels.CrossAppDomainSink
struct CrossAppDomainSink_t3459  : public Object_t
{
	// System.Int32 System.Runtime.Remoting.Channels.CrossAppDomainSink::_domainID
	int32_t ____domainID;
};
struct CrossAppDomainSink_t3459_StaticFields{
	// System.Collections.Hashtable System.Runtime.Remoting.Channels.CrossAppDomainSink::s_sinks
	Hashtable_t48 * ___s_sinks;
	// System.Reflection.MethodInfo System.Runtime.Remoting.Channels.CrossAppDomainSink::processMessageMethod
	MethodInfo_t292 * ___processMessageMethod;
};
