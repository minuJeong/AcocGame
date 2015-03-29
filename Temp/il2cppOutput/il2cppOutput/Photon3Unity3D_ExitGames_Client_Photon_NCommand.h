#pragma once
#include <stdint.h>
// System.Byte[]
struct ByteU5BU5D_t21;
// System.Object
#include "mscorlib_System_Object.h"
// ExitGames.Client.Photon.NCommand
struct NCommand_t2353  : public Object_t
{
	// System.Byte ExitGames.Client.Photon.NCommand::commandFlags
	uint8_t ___commandFlags;
	// System.Byte ExitGames.Client.Photon.NCommand::commandType
	uint8_t ___commandType;
	// System.Byte ExitGames.Client.Photon.NCommand::commandChannelID
	uint8_t ___commandChannelID;
	// System.Int32 ExitGames.Client.Photon.NCommand::reliableSequenceNumber
	int32_t ___reliableSequenceNumber;
	// System.Int32 ExitGames.Client.Photon.NCommand::unreliableSequenceNumber
	int32_t ___unreliableSequenceNumber;
	// System.Int32 ExitGames.Client.Photon.NCommand::unsequencedGroupNumber
	int32_t ___unsequencedGroupNumber;
	// System.Byte ExitGames.Client.Photon.NCommand::reservedByte
	uint8_t ___reservedByte;
	// System.Int32 ExitGames.Client.Photon.NCommand::startSequenceNumber
	int32_t ___startSequenceNumber;
	// System.Int32 ExitGames.Client.Photon.NCommand::fragmentCount
	int32_t ___fragmentCount;
	// System.Int32 ExitGames.Client.Photon.NCommand::fragmentNumber
	int32_t ___fragmentNumber;
	// System.Int32 ExitGames.Client.Photon.NCommand::totalLength
	int32_t ___totalLength;
	// System.Int32 ExitGames.Client.Photon.NCommand::fragmentOffset
	int32_t ___fragmentOffset;
	// System.Int32 ExitGames.Client.Photon.NCommand::fragmentsRemaining
	int32_t ___fragmentsRemaining;
	// System.Byte[] ExitGames.Client.Photon.NCommand::Payload
	ByteU5BU5D_t21* ___Payload;
	// System.Int32 ExitGames.Client.Photon.NCommand::commandSentTime
	int32_t ___commandSentTime;
	// System.Byte ExitGames.Client.Photon.NCommand::commandSentCount
	uint8_t ___commandSentCount;
	// System.Int32 ExitGames.Client.Photon.NCommand::roundTripTimeout
	int32_t ___roundTripTimeout;
	// System.Int32 ExitGames.Client.Photon.NCommand::timeoutTime
	int32_t ___timeoutTime;
	// System.Int32 ExitGames.Client.Photon.NCommand::ackReceivedReliableSequenceNumber
	int32_t ___ackReceivedReliableSequenceNumber;
	// System.Int32 ExitGames.Client.Photon.NCommand::ackReceivedSentTime
	int32_t ___ackReceivedSentTime;
	// System.Byte[] ExitGames.Client.Photon.NCommand::completeCommand
	ByteU5BU5D_t21* ___completeCommand;
	// System.Int32 ExitGames.Client.Photon.NCommand::Size
	int32_t ___Size;
};
