#pragma once
#include <stdint.h>
// ExitGames.Client.Photon.PeerBase
struct PeerBase_t2357;
// System.Threading.Thread
struct Thread_t1419;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t2387;
// System.Object
#include "mscorlib_System_Object.h"
// ExitGames.Client.Photon.NetworkSimulationSet
struct NetworkSimulationSet_t509  : public Object_t
{
	// System.Boolean ExitGames.Client.Photon.NetworkSimulationSet::isSimulationEnabled
	bool ___isSimulationEnabled;
	// System.Int32 ExitGames.Client.Photon.NetworkSimulationSet::outgoingLag
	int32_t ___outgoingLag;
	// System.Int32 ExitGames.Client.Photon.NetworkSimulationSet::outgoingJitter
	int32_t ___outgoingJitter;
	// System.Int32 ExitGames.Client.Photon.NetworkSimulationSet::outgoingLossPercentage
	int32_t ___outgoingLossPercentage;
	// System.Int32 ExitGames.Client.Photon.NetworkSimulationSet::incomingLag
	int32_t ___incomingLag;
	// System.Int32 ExitGames.Client.Photon.NetworkSimulationSet::incomingJitter
	int32_t ___incomingJitter;
	// System.Int32 ExitGames.Client.Photon.NetworkSimulationSet::incomingLossPercentage
	int32_t ___incomingLossPercentage;
	// ExitGames.Client.Photon.PeerBase ExitGames.Client.Photon.NetworkSimulationSet::peerBase
	PeerBase_t2357 * ___peerBase;
	// System.Threading.Thread ExitGames.Client.Photon.NetworkSimulationSet::netSimThread
	Thread_t1419 * ___netSimThread;
	// System.Threading.ManualResetEvent ExitGames.Client.Photon.NetworkSimulationSet::NetSimManualResetEvent
	ManualResetEvent_t2387 * ___NetSimManualResetEvent;
	// System.Int32 ExitGames.Client.Photon.NetworkSimulationSet::<LostPackagesOut>k__BackingField
	int32_t ___U3CLostPackagesOutU3Ek__BackingField;
	// System.Int32 ExitGames.Client.Photon.NetworkSimulationSet::<LostPackagesIn>k__BackingField
	int32_t ___U3CLostPackagesInU3Ek__BackingField;
};
