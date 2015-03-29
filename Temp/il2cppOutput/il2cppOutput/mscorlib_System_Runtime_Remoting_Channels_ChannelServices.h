#pragma once
#include <stdint.h>
// System.Collections.ArrayList
struct ArrayList_t94;
// System.Runtime.Remoting.Contexts.CrossContextChannel
struct CrossContextChannel_t3454;
// System.String
struct String_t;
// System.Collections.IList
struct IList_t869;
// System.Object
#include "mscorlib_System_Object.h"
// System.Runtime.Remoting.Channels.ChannelServices
struct ChannelServices_t3455  : public Object_t
{
};
struct ChannelServices_t3455_StaticFields{
	// System.Collections.ArrayList System.Runtime.Remoting.Channels.ChannelServices::registeredChannels
	ArrayList_t94 * ___registeredChannels;
	// System.Collections.ArrayList System.Runtime.Remoting.Channels.ChannelServices::delayedClientChannels
	ArrayList_t94 * ___delayedClientChannels;
	// System.Runtime.Remoting.Contexts.CrossContextChannel System.Runtime.Remoting.Channels.ChannelServices::_crossContextSink
	CrossContextChannel_t3454 * ____crossContextSink;
	// System.String System.Runtime.Remoting.Channels.ChannelServices::CrossContextUrl
	String_t* ___CrossContextUrl;
	// System.Collections.IList System.Runtime.Remoting.Channels.ChannelServices::oldStartModeTypes
	Object_t * ___oldStartModeTypes;
};
