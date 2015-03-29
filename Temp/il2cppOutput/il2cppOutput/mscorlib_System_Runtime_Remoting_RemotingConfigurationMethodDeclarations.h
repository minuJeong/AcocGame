#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.RemotingConfiguration
struct RemotingConfiguration_t3512;
// System.String
struct String_t;
// System.Runtime.Remoting.ActivatedClientTypeEntry
struct ActivatedClientTypeEntry_t3505;
// System.Type
struct Type_t;

// System.Void System.Runtime.Remoting.RemotingConfiguration::.cctor()
 void RemotingConfiguration__cctor_m13056 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.RemotingConfiguration::get_ApplicationName()
 String_t* RemotingConfiguration_get_ApplicationName_m13057 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.RemotingConfiguration::get_ProcessId()
 String_t* RemotingConfiguration_get_ProcessId_m13058 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.ActivatedClientTypeEntry System.Runtime.Remoting.RemotingConfiguration::IsRemotelyActivatedClientType(System.Type)
 ActivatedClientTypeEntry_t3505 * RemotingConfiguration_IsRemotelyActivatedClientType_m13059 (Object_t * __this/* static, unused */, Type_t * ___svrType, MethodInfo* method) IL2CPP_METHOD_ATTR;
