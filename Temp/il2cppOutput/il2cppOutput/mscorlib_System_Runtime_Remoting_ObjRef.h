#pragma once
#include <stdint.h>
// System.Runtime.Remoting.IChannelInfo
struct IChannelInfo_t3509;
// System.String
struct String_t;
// System.Runtime.Remoting.IRemotingTypeInfo
struct IRemotingTypeInfo_t3510;
// System.Runtime.Remoting.IEnvoyInfo
struct IEnvoyInfo_t3511;
// System.Type
struct Type_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t57;
// System.Object
#include "mscorlib_System_Object.h"
// System.Runtime.Remoting.ObjRef
struct ObjRef_t3499  : public Object_t
{
	// System.Runtime.Remoting.IChannelInfo System.Runtime.Remoting.ObjRef::channel_info
	Object_t * ___channel_info;
	// System.String System.Runtime.Remoting.ObjRef::uri
	String_t* ___uri;
	// System.Runtime.Remoting.IRemotingTypeInfo System.Runtime.Remoting.ObjRef::typeInfo
	Object_t * ___typeInfo;
	// System.Runtime.Remoting.IEnvoyInfo System.Runtime.Remoting.ObjRef::envoyInfo
	Object_t * ___envoyInfo;
	// System.Int32 System.Runtime.Remoting.ObjRef::flags
	int32_t ___flags;
	// System.Type System.Runtime.Remoting.ObjRef::_serverType
	Type_t * ____serverType;
};
struct ObjRef_t3499_StaticFields{
	// System.Int32 System.Runtime.Remoting.ObjRef::MarshalledObjectRef
	int32_t ___MarshalledObjectRef;
	// System.Int32 System.Runtime.Remoting.ObjRef::WellKnowObjectRef
	int32_t ___WellKnowObjectRef;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Runtime.Remoting.ObjRef::<>f__switch$map26
	Dictionary_2_t57 * ___U3CU3Ef__switch$map26;
};
