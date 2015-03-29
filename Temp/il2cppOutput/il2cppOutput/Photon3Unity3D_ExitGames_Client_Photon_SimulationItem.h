#pragma once
#include <stdint.h>
// System.Diagnostics.Stopwatch
struct Stopwatch_t316;
// ExitGames.Client.Photon.PeerBase/MyAction
struct MyAction_t2354;
// System.Object
#include "mscorlib_System_Object.h"
// ExitGames.Client.Photon.SimulationItem
struct SimulationItem_t2386  : public Object_t
{
	// System.Diagnostics.Stopwatch ExitGames.Client.Photon.SimulationItem::stopw
	Stopwatch_t316 * ___stopw;
	// System.Int32 ExitGames.Client.Photon.SimulationItem::TimeToExecute
	int32_t ___TimeToExecute;
	// ExitGames.Client.Photon.PeerBase/MyAction ExitGames.Client.Photon.SimulationItem::ActionToExecute
	MyAction_t2354 * ___ActionToExecute;
	// System.Int32 ExitGames.Client.Photon.SimulationItem::<Delay>k__BackingField
	int32_t ___U3CDelayU3Ek__BackingField;
};
