#pragma once
#include <stdint.h>
// System.Collections.Generic.Dictionary`2<System.Byte,ExitGames.Client.Photon.EnetChannel>
struct Dictionary_2_t2367;
// System.Collections.Generic.List`1<ExitGames.Client.Photon.NCommand>
struct List_1_t2368;
// System.Collections.Generic.Queue`1<ExitGames.Client.Photon.NCommand>
struct Queue_1_t2351;
// System.Byte[]
struct ByteU5BU5D_t21;
// System.Collections.Generic.Queue`1<System.Int32>
struct Queue_1_t2369;
// ExitGames.Client.Photon.PeerBase
#include "Photon3Unity3D_ExitGames_Client_Photon_PeerBase.h"
// ExitGames.Client.Photon.EnetPeer
struct EnetPeer_t2363  : public PeerBase_t2357
{
	// System.Collections.Generic.Dictionary`2<System.Byte,ExitGames.Client.Photon.EnetChannel> ExitGames.Client.Photon.EnetPeer::channels
	Dictionary_2_t2367 * ___channels;
	// System.Collections.Generic.List`1<ExitGames.Client.Photon.NCommand> ExitGames.Client.Photon.EnetPeer::sentReliableCommands
	List_1_t2368 * ___sentReliableCommands;
	// System.Collections.Generic.Queue`1<ExitGames.Client.Photon.NCommand> ExitGames.Client.Photon.EnetPeer::outgoingAcknowledgementsList
	Queue_1_t2351 * ___outgoingAcknowledgementsList;
	// System.Int32 ExitGames.Client.Photon.EnetPeer::windowSize
	int32_t ___windowSize;
	// System.Byte ExitGames.Client.Photon.EnetPeer::udpCommandCount
	uint8_t ___udpCommandCount;
	// System.Byte[] ExitGames.Client.Photon.EnetPeer::udpBuffer
	ByteU5BU5D_t21* ___udpBuffer;
	// System.Int32 ExitGames.Client.Photon.EnetPeer::udpBufferIndex
	int32_t ___udpBufferIndex;
	// System.Int32 ExitGames.Client.Photon.EnetPeer::challenge
	int32_t ___challenge;
	// System.Int32 ExitGames.Client.Photon.EnetPeer::reliableCommandsRepeated
	int32_t ___reliableCommandsRepeated;
	// System.Int32 ExitGames.Client.Photon.EnetPeer::reliableCommandsSent
	int32_t ___reliableCommandsSent;
	// System.Int32 ExitGames.Client.Photon.EnetPeer::serverSentTime
	int32_t ___serverSentTime;
	// System.Collections.Generic.Queue`1<System.Int32> ExitGames.Client.Photon.EnetPeer::commandsToRemove
	Queue_1_t2369 * ___commandsToRemove;
};
struct EnetPeer_t2363_StaticFields{
	// System.Int32 ExitGames.Client.Photon.EnetPeer::CRC_LENGTH
	int32_t ___CRC_LENGTH;
	// System.Byte[] ExitGames.Client.Photon.EnetPeer::udpHeader0xF3
	ByteU5BU5D_t21* ___udpHeader0xF3;
	// System.Byte[] ExitGames.Client.Photon.EnetPeer::messageHeader
	ByteU5BU5D_t21* ___messageHeader;
};
