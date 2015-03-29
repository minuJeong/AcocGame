#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.Dns
struct Dns_t518;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t4;
// System.Net.IPHostEntry
struct IPHostEntry_t2437;
// System.Net.IPAddress
struct IPAddress_t519;
// System.Net.IPAddress[]
struct IPAddressU5BU5D_t520;

// System.Void System.Net.Dns::.cctor()
 void Dns__cctor_m9295 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Dns::GetHostByName_internal(System.String,System.String&,System.String[]&,System.String[]&)
 bool Dns_GetHostByName_internal_m9296 (Object_t * __this/* static, unused */, String_t* ___host, String_t** ___h_name, StringU5BU5D_t4** ___h_aliases, StringU5BU5D_t4** ___h_addr_list, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Dns::GetHostByAddr_internal(System.String,System.String&,System.String[]&,System.String[]&)
 bool Dns_GetHostByAddr_internal_m9297 (Object_t * __this/* static, unused */, String_t* ___addr, String_t** ___h_name, StringU5BU5D_t4** ___h_aliases, StringU5BU5D_t4** ___h_addr_list, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPHostEntry System.Net.Dns::hostent_to_IPHostEntry(System.String,System.String[],System.String[])
 IPHostEntry_t2437 * Dns_hostent_to_IPHostEntry_m9298 (Object_t * __this/* static, unused */, String_t* ___h_name, StringU5BU5D_t4* ___h_aliases, StringU5BU5D_t4* ___h_addrlist, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPHostEntry System.Net.Dns::GetHostByAddressFromString(System.String,System.Boolean)
 IPHostEntry_t2437 * Dns_GetHostByAddressFromString_m9299 (Object_t * __this/* static, unused */, String_t* ___address, bool ___parse, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPHostEntry System.Net.Dns::GetHostEntry(System.String)
 IPHostEntry_t2437 * Dns_GetHostEntry_m7826 (Object_t * __this/* static, unused */, String_t* ___hostNameOrAddress, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPHostEntry System.Net.Dns::GetHostEntry(System.Net.IPAddress)
 IPHostEntry_t2437 * Dns_GetHostEntry_m9300 (Object_t * __this/* static, unused */, IPAddress_t519 * ___address, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPAddress[] System.Net.Dns::GetHostAddresses(System.String)
 IPAddressU5BU5D_t520* Dns_GetHostAddresses_m2666 (Object_t * __this/* static, unused */, String_t* ___hostNameOrAddress, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPHostEntry System.Net.Dns::GetHostByName(System.String)
 IPHostEntry_t2437 * Dns_GetHostByName_m9301 (Object_t * __this/* static, unused */, String_t* ___hostName, MethodInfo* method) IL2CPP_METHOD_ATTR;
