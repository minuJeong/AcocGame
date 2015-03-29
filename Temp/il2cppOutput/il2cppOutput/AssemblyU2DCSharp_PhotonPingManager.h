#pragma once
#include <stdint.h>
// System.Object
#include "mscorlib_System_Object.h"
// PhotonPingManager
struct PhotonPingManager_t295  : public Object_t
{
	// System.Boolean PhotonPingManager::UseNative
	bool ___UseNative;
	// System.Int32 PhotonPingManager::PingsRunning
	int32_t ___PingsRunning;
};
struct PhotonPingManager_t295_StaticFields{
	// System.Int32 PhotonPingManager::Attempts
	int32_t ___Attempts;
	// System.Boolean PhotonPingManager::IgnoreInitialAttempt
	bool ___IgnoreInitialAttempt;
	// System.Int32 PhotonPingManager::MaxMilliseconsPerPing
	int32_t ___MaxMilliseconsPerPing;
};
