#pragma once
#include <stdint.h>
// System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.NCommand>
struct Dictionary_2_t2350;
// System.Collections.Generic.Queue`1<ExitGames.Client.Photon.NCommand>
struct Queue_1_t2351;
// System.Object
#include "mscorlib_System_Object.h"
// ExitGames.Client.Photon.EnetChannel
struct EnetChannel_t2352  : public Object_t
{
	// System.Byte ExitGames.Client.Photon.EnetChannel::ChannelNumber
	uint8_t ___ChannelNumber;
	// System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.NCommand> ExitGames.Client.Photon.EnetChannel::incomingReliableCommandsList
	Dictionary_2_t2350 * ___incomingReliableCommandsList;
	// System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.NCommand> ExitGames.Client.Photon.EnetChannel::incomingUnreliableCommandsList
	Dictionary_2_t2350 * ___incomingUnreliableCommandsList;
	// System.Collections.Generic.Queue`1<ExitGames.Client.Photon.NCommand> ExitGames.Client.Photon.EnetChannel::outgoingReliableCommandsList
	Queue_1_t2351 * ___outgoingReliableCommandsList;
	// System.Collections.Generic.Queue`1<ExitGames.Client.Photon.NCommand> ExitGames.Client.Photon.EnetChannel::outgoingUnreliableCommandsList
	Queue_1_t2351 * ___outgoingUnreliableCommandsList;
	// System.Int32 ExitGames.Client.Photon.EnetChannel::incomingReliableSequenceNumber
	int32_t ___incomingReliableSequenceNumber;
	// System.Int32 ExitGames.Client.Photon.EnetChannel::incomingUnreliableSequenceNumber
	int32_t ___incomingUnreliableSequenceNumber;
	// System.Int32 ExitGames.Client.Photon.EnetChannel::outgoingReliableSequenceNumber
	int32_t ___outgoingReliableSequenceNumber;
	// System.Int32 ExitGames.Client.Photon.EnetChannel::outgoingUnreliableSequenceNumber
	int32_t ___outgoingUnreliableSequenceNumber;
};
