#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Collections.Hashtable
struct Hashtable_t48;
// System.Object
#include "mscorlib_System_Object.h"
// System.Runtime.Remoting.RemotingConfiguration
struct RemotingConfiguration_t3512  : public Object_t
{
};
struct RemotingConfiguration_t3512_StaticFields{
	// System.String System.Runtime.Remoting.RemotingConfiguration::applicationID
	String_t* ___applicationID;
	// System.String System.Runtime.Remoting.RemotingConfiguration::applicationName
	String_t* ___applicationName;
	// System.String System.Runtime.Remoting.RemotingConfiguration::processGuid
	String_t* ___processGuid;
	// System.Boolean System.Runtime.Remoting.RemotingConfiguration::defaultConfigRead
	bool ___defaultConfigRead;
	// System.Boolean System.Runtime.Remoting.RemotingConfiguration::defaultDelayedConfigRead
	bool ___defaultDelayedConfigRead;
	// System.Collections.Hashtable System.Runtime.Remoting.RemotingConfiguration::wellKnownClientEntries
	Hashtable_t48 * ___wellKnownClientEntries;
	// System.Collections.Hashtable System.Runtime.Remoting.RemotingConfiguration::activatedClientEntries
	Hashtable_t48 * ___activatedClientEntries;
	// System.Collections.Hashtable System.Runtime.Remoting.RemotingConfiguration::wellKnownServiceEntries
	Hashtable_t48 * ___wellKnownServiceEntries;
	// System.Collections.Hashtable System.Runtime.Remoting.RemotingConfiguration::activatedServiceEntries
	Hashtable_t48 * ___activatedServiceEntries;
	// System.Collections.Hashtable System.Runtime.Remoting.RemotingConfiguration::channelTemplates
	Hashtable_t48 * ___channelTemplates;
	// System.Collections.Hashtable System.Runtime.Remoting.RemotingConfiguration::clientProviderTemplates
	Hashtable_t48 * ___clientProviderTemplates;
	// System.Collections.Hashtable System.Runtime.Remoting.RemotingConfiguration::serverProviderTemplates
	Hashtable_t48 * ___serverProviderTemplates;
};
