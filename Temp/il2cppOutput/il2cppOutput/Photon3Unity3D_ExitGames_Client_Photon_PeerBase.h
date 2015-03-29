#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Type
struct Type_t;
// ExitGames.Client.Photon.IPhotonSocket
struct IPhotonSocket_t2360;
// ExitGames.Client.Photon.NCommand
struct NCommand_t2353;
// ExitGames.Client.Photon.TrafficStats
struct TrafficStats_t514;
// ExitGames.Client.Photon.TrafficStatsGameLevel
struct TrafficStatsGameLevel_t515;
// System.Diagnostics.Stopwatch
struct Stopwatch_t316;
// System.Collections.Generic.Queue`1<ExitGames.Client.Photon.PeerBase/MyAction>
struct Queue_1_t2361;
// Photon.SocketServer.Security.DiffieHellmanCryptoProvider
struct DiffieHellmanCryptoProvider_t2349;
// System.Random
struct Random_t2346;
// System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem>
struct LinkedList_1_t2362;
// ExitGames.Client.Photon.NetworkSimulationSet
struct NetworkSimulationSet_t509;
// System.Byte[]
struct ByteU5BU5D_t21;
// System.IO.MemoryStream
struct MemoryStream_t242;
// ExitGames.Client.Photon.IPhotonPeerListener
struct IPhotonPeerListener_t19;
// System.Object
#include "mscorlib_System_Object.h"
// ExitGames.Client.Photon.ConnectionProtocol
#include "Photon3Unity3D_ExitGames_Client_Photon_ConnectionProtocol.h"
// ExitGames.Client.Photon.DebugLevel
#include "Photon3Unity3D_ExitGames_Client_Photon_DebugLevel.h"
// ExitGames.Client.Photon.PeerBase/ConnectionStateValue
#include "Photon3Unity3D_ExitGames_Client_Photon_PeerBase_ConnectionSt.h"
// ExitGames.Client.Photon.PeerBase
struct PeerBase_t2357  : public Object_t
{
	// System.Type ExitGames.Client.Photon.PeerBase::SocketImplementation
	Type_t * ___SocketImplementation;
	// ExitGames.Client.Photon.IPhotonSocket ExitGames.Client.Photon.PeerBase::rt
	IPhotonSocket_t2360 * ___rt;
	// System.Int32 ExitGames.Client.Photon.PeerBase::ByteCountLastOperation
	int32_t ___ByteCountLastOperation;
	// System.Int32 ExitGames.Client.Photon.PeerBase::ByteCountCurrentDispatch
	int32_t ___ByteCountCurrentDispatch;
	// ExitGames.Client.Photon.NCommand ExitGames.Client.Photon.PeerBase::CommandInCurrentDispatch
	NCommand_t2353 * ___CommandInCurrentDispatch;
	// System.Int32 ExitGames.Client.Photon.PeerBase::TrafficPackageHeaderSize
	int32_t ___TrafficPackageHeaderSize;
	// ExitGames.Client.Photon.TrafficStats ExitGames.Client.Photon.PeerBase::TrafficStatsIncoming
	TrafficStats_t514 * ___TrafficStatsIncoming;
	// ExitGames.Client.Photon.TrafficStats ExitGames.Client.Photon.PeerBase::TrafficStatsOutgoing
	TrafficStats_t514 * ___TrafficStatsOutgoing;
	// ExitGames.Client.Photon.TrafficStatsGameLevel ExitGames.Client.Photon.PeerBase::TrafficStatsGameLevel
	TrafficStatsGameLevel_t515 * ___TrafficStatsGameLevel;
	// System.Diagnostics.Stopwatch ExitGames.Client.Photon.PeerBase::trafficStatsStopwatch
	Stopwatch_t316 * ___trafficStatsStopwatch;
	// System.Boolean ExitGames.Client.Photon.PeerBase::trafficStatsEnabled
	bool ___trafficStatsEnabled;
	// ExitGames.Client.Photon.ConnectionProtocol ExitGames.Client.Photon.PeerBase::usedProtocol
	uint8_t ___usedProtocol;
	// System.Boolean ExitGames.Client.Photon.PeerBase::crcEnabled
	bool ___crcEnabled;
	// System.Int32 ExitGames.Client.Photon.PeerBase::packetLossByCrc
	int32_t ___packetLossByCrc;
	// ExitGames.Client.Photon.DebugLevel ExitGames.Client.Photon.PeerBase::debugOut
	uint8_t ___debugOut;
	// System.Collections.Generic.Queue`1<ExitGames.Client.Photon.PeerBase/MyAction> ExitGames.Client.Photon.PeerBase::ActionQueue
	Queue_1_t2361 * ___ActionQueue;
	// System.Int16 ExitGames.Client.Photon.PeerBase::peerID
	int16_t ___peerID;
	// ExitGames.Client.Photon.PeerBase/ConnectionStateValue ExitGames.Client.Photon.PeerBase::peerConnectionState
	uint8_t ___peerConnectionState;
	// System.Int32 ExitGames.Client.Photon.PeerBase::serverTimeOffset
	int32_t ___serverTimeOffset;
	// System.Boolean ExitGames.Client.Photon.PeerBase::serverTimeOffsetIsAvailable
	bool ___serverTimeOffsetIsAvailable;
	// System.Int32 ExitGames.Client.Photon.PeerBase::roundTripTime
	int32_t ___roundTripTime;
	// System.Int32 ExitGames.Client.Photon.PeerBase::roundTripTimeVariance
	int32_t ___roundTripTimeVariance;
	// System.Int32 ExitGames.Client.Photon.PeerBase::lastRoundTripTime
	int32_t ___lastRoundTripTime;
	// System.Int32 ExitGames.Client.Photon.PeerBase::lowestRoundTripTime
	int32_t ___lowestRoundTripTime;
	// System.Int32 ExitGames.Client.Photon.PeerBase::lastRoundTripTimeVariance
	int32_t ___lastRoundTripTimeVariance;
	// System.Int32 ExitGames.Client.Photon.PeerBase::highestRoundTripTimeVariance
	int32_t ___highestRoundTripTimeVariance;
	// System.Int32 ExitGames.Client.Photon.PeerBase::timestampOfLastReceive
	int32_t ___timestampOfLastReceive;
	// System.Int32 ExitGames.Client.Photon.PeerBase::packetThrottleInterval
	int32_t ___packetThrottleInterval;
	// System.Int64 ExitGames.Client.Photon.PeerBase::bytesOut
	int64_t ___bytesOut;
	// System.Int64 ExitGames.Client.Photon.PeerBase::bytesIn
	int64_t ___bytesIn;
	// System.Int32 ExitGames.Client.Photon.PeerBase::commandBufferSize
	int32_t ___commandBufferSize;
	// System.Int32 ExitGames.Client.Photon.PeerBase::warningSize
	int32_t ___warningSize;
	// System.Int32 ExitGames.Client.Photon.PeerBase::sentCountAllowance
	int32_t ___sentCountAllowance;
	// System.Int32 ExitGames.Client.Photon.PeerBase::DisconnectTimeout
	int32_t ___DisconnectTimeout;
	// System.Int32 ExitGames.Client.Photon.PeerBase::timePingInterval
	int32_t ___timePingInterval;
	// System.Byte ExitGames.Client.Photon.PeerBase::ChannelCount
	uint8_t ___ChannelCount;
	// System.Int32 ExitGames.Client.Photon.PeerBase::limitOfUnreliableCommands
	int32_t ___limitOfUnreliableCommands;
	// Photon.SocketServer.Security.DiffieHellmanCryptoProvider ExitGames.Client.Photon.PeerBase::CryptoProvider
	DiffieHellmanCryptoProvider_t2349 * ___CryptoProvider;
	// System.Random ExitGames.Client.Photon.PeerBase::lagRandomizer
	Random_t2346 * ___lagRandomizer;
	// System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem> ExitGames.Client.Photon.PeerBase::NetSimListOutgoing
	LinkedList_1_t2362 * ___NetSimListOutgoing;
	// System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem> ExitGames.Client.Photon.PeerBase::NetSimListIncoming
	LinkedList_1_t2362 * ___NetSimListIncoming;
	// ExitGames.Client.Photon.NetworkSimulationSet ExitGames.Client.Photon.PeerBase::networkSimulationSettings
	NetworkSimulationSet_t509 * ___networkSimulationSettings;
	// System.Byte[] ExitGames.Client.Photon.PeerBase::INIT_BYTES
	ByteU5BU5D_t21* ___INIT_BYTES;
	// System.Int32 ExitGames.Client.Photon.PeerBase::timeBase
	int32_t ___timeBase;
	// System.Int32 ExitGames.Client.Photon.PeerBase::timeInt
	int32_t ___timeInt;
	// System.Int32 ExitGames.Client.Photon.PeerBase::timeoutInt
	int32_t ___timeoutInt;
	// System.Int32 ExitGames.Client.Photon.PeerBase::timeLastAckReceive
	int32_t ___timeLastAckReceive;
	// System.Boolean ExitGames.Client.Photon.PeerBase::ApplicationIsInitialized
	bool ___ApplicationIsInitialized;
	// System.Boolean ExitGames.Client.Photon.PeerBase::isEncryptionAvailable
	bool ___isEncryptionAvailable;
	// System.Int32 ExitGames.Client.Photon.PeerBase::outgoingCommandsInStream
	int32_t ___outgoingCommandsInStream;
	// System.Int32 ExitGames.Client.Photon.PeerBase::mtu
	int32_t ___mtu;
	// System.Int32 ExitGames.Client.Photon.PeerBase::rhttpMinConnections
	int32_t ___rhttpMinConnections;
	// System.Int32 ExitGames.Client.Photon.PeerBase::rhttpMaxConnections
	int32_t ___rhttpMaxConnections;
	// System.IO.MemoryStream ExitGames.Client.Photon.PeerBase::SerializeMemStream
	MemoryStream_t242 * ___SerializeMemStream;
	// System.String ExitGames.Client.Photon.PeerBase::<ServerAddress>k__BackingField
	String_t* ___U3CServerAddressU3Ek__BackingField;
	// System.String ExitGames.Client.Photon.PeerBase::<HttpUrlParameters>k__BackingField
	String_t* ___U3CHttpUrlParametersU3Ek__BackingField;
	// ExitGames.Client.Photon.IPhotonPeerListener ExitGames.Client.Photon.PeerBase::<Listener>k__BackingField
	Object_t * ___U3CListenerU3Ek__BackingField;
	// System.Byte[] ExitGames.Client.Photon.PeerBase::<TcpConnectionPrefix>k__BackingField
	ByteU5BU5D_t21* ___U3CTcpConnectionPrefixU3Ek__BackingField;
	// System.Boolean ExitGames.Client.Photon.PeerBase::<IsSendingOnlyAcks>k__BackingField
	bool ___U3CIsSendingOnlyAcksU3Ek__BackingField;
};
struct PeerBase_t2357_StaticFields{
	// System.String ExitGames.Client.Photon.PeerBase::ClientVersion
	String_t* ___ClientVersion;
	// System.Int32 ExitGames.Client.Photon.PeerBase::ENET_PEER_PACKET_LOSS_SCALE
	int32_t ___ENET_PEER_PACKET_LOSS_SCALE;
	// System.Int32 ExitGames.Client.Photon.PeerBase::ENET_PEER_DEFAULT_ROUND_TRIP_TIME
	int32_t ___ENET_PEER_DEFAULT_ROUND_TRIP_TIME;
	// System.Int32 ExitGames.Client.Photon.PeerBase::ENET_PEER_PACKET_THROTTLE_INTERVAL
	int32_t ___ENET_PEER_PACKET_THROTTLE_INTERVAL;
	// System.Int16 ExitGames.Client.Photon.PeerBase::peerCount
	int16_t ___peerCount;
	// System.Int32 ExitGames.Client.Photon.PeerBase::outgoingStreamBufferSize
	int32_t ___outgoingStreamBufferSize;
};
