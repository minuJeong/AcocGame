#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ServerSettings
struct ServerSettings_t302;
// System.String
struct String_t;
// CloudRegionCode
#include "AssemblyU2DCSharp_CloudRegionCode.h"

// System.Void ServerSettings::.ctor()
 void ServerSettings__ctor_m1700 (ServerSettings_t302 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ServerSettings::UseCloudBestResion(System.String)
 void ServerSettings_UseCloudBestResion_m1701 (ServerSettings_t302 * __this, String_t* ___cloudAppid, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ServerSettings::UseCloud(System.String)
 void ServerSettings_UseCloud_m1702 (ServerSettings_t302 * __this, String_t* ___cloudAppid, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ServerSettings::UseCloud(System.String,CloudRegionCode)
 void ServerSettings_UseCloud_m1703 (ServerSettings_t302 * __this, String_t* ___cloudAppid, int32_t ___code, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ServerSettings::UseMyServer(System.String,System.Int32,System.String)
 void ServerSettings_UseMyServer_m1704 (ServerSettings_t302 * __this, String_t* ___serverAddress, int32_t ___serverPort, String_t* ___application, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ServerSettings::ToString()
 String_t* ServerSettings_ToString_m1705 (ServerSettings_t302 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
