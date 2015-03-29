#pragma once
#include <stdint.h>
// System.String
struct String_t;
// PhotonHandler
struct PhotonHandler_t299;
// System.Type
struct Type_t;
// Photon.MonoBehaviour
#include "AssemblyU2DCSharp_Photon_MonoBehaviour.h"
// CloudRegionCode
#include "AssemblyU2DCSharp_CloudRegionCode.h"
// PhotonHandler
struct PhotonHandler_t299  : public MonoBehaviour_t174
{
	// System.Int32 PhotonHandler::updateInterval
	int32_t ___updateInterval;
	// System.Int32 PhotonHandler::updateIntervalOnSerialize
	int32_t ___updateIntervalOnSerialize;
	// System.Int32 PhotonHandler::nextSendTickCount
	int32_t ___nextSendTickCount;
	// System.Int32 PhotonHandler::nextSendTickCountOnSerialize
	int32_t ___nextSendTickCountOnSerialize;
};
struct PhotonHandler_t299_StaticFields{
	// System.String PhotonHandler::PlayerPrefsKey
	String_t* ___PlayerPrefsKey;
	// PhotonHandler PhotonHandler::SP
	PhotonHandler_t299 * ___SP;
	// System.Boolean PhotonHandler::sendThreadShouldRun
	bool ___sendThreadShouldRun;
	// System.Boolean PhotonHandler::AppQuits
	bool ___AppQuits;
	// System.Type PhotonHandler::PingImplementation
	Type_t * ___PingImplementation;
	// CloudRegionCode PhotonHandler::BestRegionCodeCurrently
	int32_t ___BestRegionCodeCurrently;
};
