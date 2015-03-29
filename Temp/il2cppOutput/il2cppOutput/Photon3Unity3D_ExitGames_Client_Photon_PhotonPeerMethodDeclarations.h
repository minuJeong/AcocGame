#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ExitGames.Client.Photon.PhotonPeer
struct PhotonPeer_t18;
// System.Type
struct Type_t;
// ExitGames.Client.Photon.IPhotonPeerListener
struct IPhotonPeerListener_t19;
// System.String
struct String_t;
// ExitGames.Client.Photon.TrafficStats
struct TrafficStats_t514;
// ExitGames.Client.Photon.TrafficStatsGameLevel
struct TrafficStatsGameLevel_t515;
// ExitGames.Client.Photon.SupportClass/IntegerMillisecondsDelegate
struct IntegerMillisecondsDelegate_t2381;
// ExitGames.Client.Photon.NetworkSimulationSet
struct NetworkSimulationSet_t509;
// System.Collections.Generic.Dictionary`2<System.Byte,System.Object>
struct Dictionary_2_t72;
// ExitGames.Client.Photon.OperationRequest
struct OperationRequest_t2382;
// ExitGames.Client.Photon.SerializeMethod
struct SerializeMethod_t2383;
// ExitGames.Client.Photon.DeserializeMethod
struct DeserializeMethod_t2384;
// ExitGames.Client.Photon.SerializeStreamMethod
struct SerializeStreamMethod_t468;
// ExitGames.Client.Photon.DeserializeStreamMethod
struct DeserializeStreamMethod_t469;
// ExitGames.Client.Photon.DebugLevel
#include "Photon3Unity3D_ExitGames_Client_Photon_DebugLevel.h"
// ExitGames.Client.Photon.PeerStateValue
#include "Photon3Unity3D_ExitGames_Client_Photon_PeerStateValue.h"
// ExitGames.Client.Photon.ConnectionProtocol
#include "Photon3Unity3D_ExitGames_Client_Photon_ConnectionProtocol.h"

// System.Void ExitGames.Client.Photon.PhotonPeer::set_SocketImplementation(System.Type)
 void PhotonPeer_set_SocketImplementation_m386 (PhotonPeer_t18 * __this, Type_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type ExitGames.Client.Photon.PhotonPeer::get_SocketImplementation()
 Type_t * PhotonPeer_get_SocketImplementation_m387 (PhotonPeer_t18 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::set_DebugOut(ExitGames.Client.Photon.DebugLevel)
 void PhotonPeer_set_DebugOut_m2626 (PhotonPeer_t18 * __this, uint8_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.DebugLevel ExitGames.Client.Photon.PhotonPeer::get_DebugOut()
 uint8_t PhotonPeer_get_DebugOut_m446 (PhotonPeer_t18 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.IPhotonPeerListener ExitGames.Client.Photon.PhotonPeer::get_Listener()
 Object_t * PhotonPeer_get_Listener_m447 (PhotonPeer_t18 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::set_Listener(ExitGames.Client.Photon.IPhotonPeerListener)
 void PhotonPeer_set_Listener_m2442 (PhotonPeer_t18 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 ExitGames.Client.Photon.PhotonPeer::get_BytesIn()
 int64_t PhotonPeer_get_BytesIn_m7371 (PhotonPeer_t18 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 ExitGames.Client.Photon.PhotonPeer::get_BytesOut()
 int64_t PhotonPeer_get_BytesOut_m7372 (PhotonPeer_t18 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.PhotonPeer::get_ByteCountCurrentDispatch()
 int32_t PhotonPeer_get_ByteCountCurrentDispatch_m7373 (PhotonPeer_t18 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.PhotonPeer::get_CommandInfoCurrentDispatch()
 String_t* PhotonPeer_get_CommandInfoCurrentDispatch_m7374 (PhotonPeer_t18 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.PhotonPeer::get_ByteCountLastOperation()
 int32_t PhotonPeer_get_ByteCountLastOperation_m7375 (PhotonPeer_t18 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PhotonPeer::get_TrafficStatsEnabled()
 bool PhotonPeer_get_TrafficStatsEnabled_m2613 (PhotonPeer_t18 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::set_TrafficStatsEnabled(System.Boolean)
 void PhotonPeer_set_TrafficStatsEnabled_m2614 (PhotonPeer_t18 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 ExitGames.Client.Photon.PhotonPeer::get_TrafficStatsElapsedMs()
 int64_t PhotonPeer_get_TrafficStatsElapsedMs_m2632 (PhotonPeer_t18 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::TrafficStatsReset()
 void PhotonPeer_TrafficStatsReset_m2624 (PhotonPeer_t18 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.TrafficStats ExitGames.Client.Photon.PhotonPeer::get_TrafficStatsIncoming()
 TrafficStats_t514 * PhotonPeer_get_TrafficStatsIncoming_m2636 (PhotonPeer_t18 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.TrafficStats ExitGames.Client.Photon.PhotonPeer::get_TrafficStatsOutgoing()
 TrafficStats_t514 * PhotonPeer_get_TrafficStatsOutgoing_m2638 (PhotonPeer_t18 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.TrafficStatsGameLevel ExitGames.Client.Photon.PhotonPeer::get_TrafficStatsGameLevel()
 TrafficStatsGameLevel_t515 * PhotonPeer_get_TrafficStatsGameLevel_m2631 (PhotonPeer_t18 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.PeerStateValue ExitGames.Client.Photon.PhotonPeer::get_PeerState()
 uint8_t PhotonPeer_get_PeerState_m396 (PhotonPeer_t18 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.PhotonPeer::get_PeerID()
 String_t* PhotonPeer_get_PeerID_m7376 (PhotonPeer_t18 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.PhotonPeer::get_CommandBufferSize()
 int32_t PhotonPeer_get_CommandBufferSize_m7377 (PhotonPeer_t18 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.PhotonPeer::get_RhttpMinConnections()
 int32_t PhotonPeer_get_RhttpMinConnections_m7378 (PhotonPeer_t18 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::set_RhttpMinConnections(System.Int32)
 void PhotonPeer_set_RhttpMinConnections_m7379 (PhotonPeer_t18 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.PhotonPeer::get_RhttpMaxConnections()
 int32_t PhotonPeer_get_RhttpMaxConnections_m7380 (PhotonPeer_t18 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::set_RhttpMaxConnections(System.Int32)
 void PhotonPeer_set_RhttpMaxConnections_m7381 (PhotonPeer_t18 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.PhotonPeer::get_LimitOfUnreliableCommands()
 int32_t PhotonPeer_get_LimitOfUnreliableCommands_m2612 (PhotonPeer_t18 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::set_LimitOfUnreliableCommands(System.Int32)
 void PhotonPeer_set_LimitOfUnreliableCommands_m2443 (PhotonPeer_t18 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.PhotonPeer::get_QueuedIncomingCommands()
 int32_t PhotonPeer_get_QueuedIncomingCommands_m7382 (PhotonPeer_t18 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.PhotonPeer::get_QueuedOutgoingCommands()
 int32_t PhotonPeer_get_QueuedOutgoingCommands_m7383 (PhotonPeer_t18 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte ExitGames.Client.Photon.PhotonPeer::get_ChannelCount()
 uint8_t PhotonPeer_get_ChannelCount_m7384 (PhotonPeer_t18 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::set_ChannelCount(System.Byte)
 void PhotonPeer_set_ChannelCount_m7385 (PhotonPeer_t18 * __this, uint8_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PhotonPeer::get_CrcEnabled()
 bool PhotonPeer_get_CrcEnabled_m2616 (PhotonPeer_t18 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::set_CrcEnabled(System.Boolean)
 void PhotonPeer_set_CrcEnabled_m2617 (PhotonPeer_t18 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.PhotonPeer::get_PacketLossByCrc()
 int32_t PhotonPeer_get_PacketLossByCrc_m2618 (PhotonPeer_t18 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.PhotonPeer::get_ResentReliableCommands()
 int32_t PhotonPeer_get_ResentReliableCommands_m2615 (PhotonPeer_t18 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.PhotonPeer::get_WarningSize()
 int32_t PhotonPeer_get_WarningSize_m7386 (PhotonPeer_t18 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::set_WarningSize(System.Int32)
 void PhotonPeer_set_WarningSize_m7387 (PhotonPeer_t18 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.PhotonPeer::get_SentCountAllowance()
 int32_t PhotonPeer_get_SentCountAllowance_m2619 (PhotonPeer_t18 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::set_SentCountAllowance(System.Int32)
 void PhotonPeer_set_SentCountAllowance_m2620 (PhotonPeer_t18 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.PhotonPeer::get_TimePingInterval()
 int32_t PhotonPeer_get_TimePingInterval_m7388 (PhotonPeer_t18 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::set_TimePingInterval(System.Int32)
 void PhotonPeer_set_TimePingInterval_m388 (PhotonPeer_t18 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.PhotonPeer::get_DisconnectTimeout()
 int32_t PhotonPeer_get_DisconnectTimeout_m7389 (PhotonPeer_t18 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::set_DisconnectTimeout(System.Int32)
 void PhotonPeer_set_DisconnectTimeout_m7390 (PhotonPeer_t18 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.PhotonPeer::get_ServerTimeInMilliSeconds()
 int32_t PhotonPeer_get_ServerTimeInMilliSeconds_m2515 (PhotonPeer_t18 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.PhotonPeer::get_LocalTimeInMilliSeconds()
 int32_t PhotonPeer_get_LocalTimeInMilliSeconds_m7391 (PhotonPeer_t18 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::set_LocalMsTimestampDelegate(ExitGames.Client.Photon.SupportClass/IntegerMillisecondsDelegate)
 void PhotonPeer_set_LocalMsTimestampDelegate_m7392 (PhotonPeer_t18 * __this, IntegerMillisecondsDelegate_t2381 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.PhotonPeer::get_RoundTripTime()
 int32_t PhotonPeer_get_RoundTripTime_m2596 (PhotonPeer_t18 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.PhotonPeer::get_RoundTripTimeVariance()
 int32_t PhotonPeer_get_RoundTripTimeVariance_m2597 (PhotonPeer_t18 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.PhotonPeer::get_TimestampOfLastSocketReceive()
 int32_t PhotonPeer_get_TimestampOfLastSocketReceive_m7393 (PhotonPeer_t18 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.PhotonPeer::get_ServerAddress()
 String_t* PhotonPeer_get_ServerAddress_m2373 (PhotonPeer_t18 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::set_ServerAddress(System.String)
 void PhotonPeer_set_ServerAddress_m7394 (PhotonPeer_t18 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.ConnectionProtocol ExitGames.Client.Photon.PhotonPeer::get_UsedProtocol()
 uint8_t PhotonPeer_get_UsedProtocol_m383 (PhotonPeer_t18 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PhotonPeer::get_IsSimulationEnabled()
 bool PhotonPeer_get_IsSimulationEnabled_m449 (PhotonPeer_t18 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::set_IsSimulationEnabled(System.Boolean)
 void PhotonPeer_set_IsSimulationEnabled_m450 (PhotonPeer_t18 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.NetworkSimulationSet ExitGames.Client.Photon.PhotonPeer::get_NetworkSimulationSettings()
 NetworkSimulationSet_t509 * PhotonPeer_get_NetworkSimulationSettings_m2599 (PhotonPeer_t18 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.PhotonPeer::get_OutgoingStreamBufferSize()
 int32_t PhotonPeer_get_OutgoingStreamBufferSize_m7395 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::set_OutgoingStreamBufferSize(System.Int32)
 void PhotonPeer_set_OutgoingStreamBufferSize_m7396 (Object_t * __this/* static, unused */, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.PhotonPeer::get_MaximumTransferUnit()
 int32_t PhotonPeer_get_MaximumTransferUnit_m7397 (PhotonPeer_t18 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::set_MaximumTransferUnit(System.Int32)
 void PhotonPeer_set_MaximumTransferUnit_m7398 (PhotonPeer_t18 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PhotonPeer::get_IsEncryptionAvailable()
 bool PhotonPeer_get_IsEncryptionAvailable_m448 (PhotonPeer_t18 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PhotonPeer::get_IsSendingOnlyAcks()
 bool PhotonPeer_get_IsSendingOnlyAcks_m7399 (PhotonPeer_t18 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::set_IsSendingOnlyAcks(System.Boolean)
 void PhotonPeer_set_IsSendingOnlyAcks_m2611 (PhotonPeer_t18 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::.ctor(ExitGames.Client.Photon.ConnectionProtocol)
 void PhotonPeer__ctor_m7400 (PhotonPeer_t18 * __this, uint8_t ___protocolType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::.ctor(ExitGames.Client.Photon.IPhotonPeerListener,ExitGames.Client.Photon.ConnectionProtocol)
 void PhotonPeer__ctor_m445 (PhotonPeer_t18 * __this, Object_t * ___listener, uint8_t ___protocolType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::.ctor(ExitGames.Client.Photon.IPhotonPeerListener)
 void PhotonPeer__ctor_m7401 (PhotonPeer_t18 * __this, Object_t * ___listener, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::.ctor(ExitGames.Client.Photon.IPhotonPeerListener,System.Boolean)
 void PhotonPeer__ctor_m7402 (PhotonPeer_t18 * __this, Object_t * ___listener, bool ___useTcp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PhotonPeer::Connect(System.String,System.String)
 bool PhotonPeer_Connect_m393 (PhotonPeer_t18 * __this, String_t* ___serverAddress, String_t* ___applicationName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::Disconnect()
 void PhotonPeer_Disconnect_m381 (PhotonPeer_t18 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::StopThread()
 void PhotonPeer_StopThread_m397 (PhotonPeer_t18 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::FetchServerTimestamp()
 void PhotonPeer_FetchServerTimestamp_m451 (PhotonPeer_t18 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PhotonPeer::EstablishEncryption()
 bool PhotonPeer_EstablishEncryption_m378 (PhotonPeer_t18 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PhotonPeer::Service()
 void PhotonPeer_Service_m395 (PhotonPeer_t18 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PhotonPeer::SendOutgoingCommands()
 bool PhotonPeer_SendOutgoingCommands_m452 (PhotonPeer_t18 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PhotonPeer::SendAcksOnly()
 bool PhotonPeer_SendAcksOnly_m405 (PhotonPeer_t18 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PhotonPeer::DispatchIncomingCommands()
 bool PhotonPeer_DispatchIncomingCommands_m453 (PhotonPeer_t18 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.PhotonPeer::VitalStatsToString(System.Boolean)
 String_t* PhotonPeer_VitalStatsToString_m2625 (PhotonPeer_t18 * __this, bool ___all, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PhotonPeer::OpCustom(System.Byte,System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,System.Boolean)
 bool PhotonPeer_OpCustom_m401 (PhotonPeer_t18 * __this, uint8_t ___customOpCode, Dictionary_2_t72 * ___customOpParameters, bool ___sendReliable, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PhotonPeer::OpCustom(System.Byte,System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,System.Boolean,System.Byte)
 bool PhotonPeer_OpCustom_m454 (PhotonPeer_t18 * __this, uint8_t ___customOpCode, Dictionary_2_t72 * ___customOpParameters, bool ___sendReliable, uint8_t ___channelId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PhotonPeer::OpCustom(System.Byte,System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,System.Boolean,System.Byte,System.Boolean)
 bool PhotonPeer_OpCustom_m402 (PhotonPeer_t18 * __this, uint8_t ___customOpCode, Dictionary_2_t72 * ___customOpParameters, bool ___sendReliable, uint8_t ___channelId, bool ___encrypt, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PhotonPeer::OpCustom(ExitGames.Client.Photon.OperationRequest,System.Boolean,System.Byte,System.Boolean)
 bool PhotonPeer_OpCustom_m455 (PhotonPeer_t18 * __this, OperationRequest_t2382 * ___operationRequest, bool ___sendReliable, uint8_t ___channelId, bool ___encrypt, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PhotonPeer::RegisterType(System.Type,System.Byte,ExitGames.Client.Photon.SerializeMethod,ExitGames.Client.Photon.DeserializeMethod)
 bool PhotonPeer_RegisterType_m7403 (Object_t * __this/* static, unused */, Type_t * ___customType, uint8_t ___code, SerializeMethod_t2383 * ___serializeMethod, DeserializeMethod_t2384 * ___constructor, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PhotonPeer::RegisterType(System.Type,System.Byte,ExitGames.Client.Photon.SerializeStreamMethod,ExitGames.Client.Photon.DeserializeStreamMethod)
 bool PhotonPeer_RegisterType_m2401 (Object_t * __this/* static, unused */, Type_t * ___customType, uint8_t ___code, SerializeStreamMethod_t468 * ___serializeMethod, DeserializeStreamMethod_t469 * ___constructor, MethodInfo* method) IL2CPP_METHOD_ATTR;
