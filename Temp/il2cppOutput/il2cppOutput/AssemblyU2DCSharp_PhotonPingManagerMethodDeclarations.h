#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PhotonPingManager
struct PhotonPingManager_t295;
// Region
struct Region_t296;
// System.Collections.IEnumerator
struct IEnumerator_t60;
// System.String
struct String_t;

// System.Void PhotonPingManager::.ctor()
 void PhotonPingManager__ctor_m1656 (PhotonPingManager_t295 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonPingManager::.cctor()
 void PhotonPingManager__cctor_m1657 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Region PhotonPingManager::get_BestRegion()
 Region_t296 * PhotonPingManager_get_BestRegion_m1658 (PhotonPingManager_t295 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonPingManager::get_Done()
 bool PhotonPingManager_get_Done_m1659 (PhotonPingManager_t295 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator PhotonPingManager::PingSocket(Region)
 Object_t * PhotonPingManager_PingSocket_m1660 (PhotonPingManager_t295 * __this, Region_t296 * ___region, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PhotonPingManager::ResolveHost(System.String)
 String_t* PhotonPingManager_ResolveHost_m1661 (Object_t * __this/* static, unused */, String_t* ___hostName, MethodInfo* method) IL2CPP_METHOD_ATTR;
