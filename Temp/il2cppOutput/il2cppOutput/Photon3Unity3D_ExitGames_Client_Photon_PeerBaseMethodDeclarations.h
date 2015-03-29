#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ExitGames.Client.Photon.PeerBase
struct PeerBase_t2357;
// System.String
struct String_t;
// ExitGames.Client.Photon.IPhotonPeerListener
struct IPhotonPeerListener_t19;
// ExitGames.Client.Photon.NetworkSimulationSet
struct NetworkSimulationSet_t509;
// System.Byte[]
struct ByteU5BU5D_t21;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t123;
// System.Collections.Generic.Dictionary`2<System.Byte,System.Object>
struct Dictionary_2_t72;
// System.Object
struct Object_t;
// ExitGames.Client.Photon.OperationResponse
struct OperationResponse_t13;
// ExitGames.Client.Photon.PeerBase/MyAction
struct MyAction_t2354;
// ExitGames.Client.Photon.PeerBase/EgMessageType
#include "Photon3Unity3D_ExitGames_Client_Photon_PeerBase_EgMessageTyp.h"
// ExitGames.Client.Photon.DebugLevel
#include "Photon3Unity3D_ExitGames_Client_Photon_DebugLevel.h"
// ExitGames.Client.Photon.StatusCode
#include "Photon3Unity3D_ExitGames_Client_Photon_StatusCode.h"

// System.Int64 ExitGames.Client.Photon.PeerBase::get_TrafficStatsEnabledTime()
 int64_t PeerBase_get_TrafficStatsEnabledTime_m7275 (PeerBase_t2357 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PeerBase::get_TrafficStatsEnabled()
 bool PeerBase_get_TrafficStatsEnabled_m7276 (PeerBase_t2357 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase::set_TrafficStatsEnabled(System.Boolean)
 void PeerBase_set_TrafficStatsEnabled_m7277 (PeerBase_t2357 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.PeerBase::get_ServerAddress()
 String_t* PeerBase_get_ServerAddress_m7278 (PeerBase_t2357 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase::set_ServerAddress(System.String)
 void PeerBase_set_ServerAddress_m7279 (PeerBase_t2357 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.PeerBase::get_HttpUrlParameters()
 String_t* PeerBase_get_HttpUrlParameters_m7280 (PeerBase_t2357 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase::set_HttpUrlParameters(System.String)
 void PeerBase_set_HttpUrlParameters_m7281 (PeerBase_t2357 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.IPhotonPeerListener ExitGames.Client.Photon.PeerBase::get_Listener()
 Object_t * PeerBase_get_Listener_m7282 (PeerBase_t2357 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase::set_Listener(ExitGames.Client.Photon.IPhotonPeerListener)
 void PeerBase_set_Listener_m7283 (PeerBase_t2357 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.NetworkSimulationSet ExitGames.Client.Photon.PeerBase::get_NetworkSimulationSettings()
 NetworkSimulationSet_t509 * PeerBase_get_NetworkSimulationSettings_m7284 (PeerBase_t2357 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 ExitGames.Client.Photon.PeerBase::get_BytesOut()
 int64_t PeerBase_get_BytesOut_m7285 (PeerBase_t2357 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 ExitGames.Client.Photon.PeerBase::get_BytesIn()
 int64_t PeerBase_get_BytesIn_m7286 (PeerBase_t2357 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.PeerBase::get_QueuedIncomingCommandsCount()
// System.Int32 ExitGames.Client.Photon.PeerBase::get_QueuedOutgoingCommandsCount()
// System.String ExitGames.Client.Photon.PeerBase::get_PeerID()
 String_t* PeerBase_get_PeerID_m7287 (PeerBase_t2357 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] ExitGames.Client.Photon.PeerBase::get_TcpConnectionPrefix()
 ByteU5BU5D_t21* PeerBase_get_TcpConnectionPrefix_m7288 (PeerBase_t2357 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase::set_TcpConnectionPrefix(System.Byte[])
 void PeerBase_set_TcpConnectionPrefix_m7289 (PeerBase_t2357 * __this, ByteU5BU5D_t21* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase::InitOnce()
 void PeerBase_InitOnce_m7290 (PeerBase_t2357 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PeerBase::Connect(System.String,System.String)
// System.String ExitGames.Client.Photon.PeerBase::GetHttpKeyValueString(System.Collections.Generic.Dictionary`2<System.String,System.String>)
 String_t* PeerBase_GetHttpKeyValueString_m7291 (PeerBase_t2357 * __this, Dictionary_2_t123 * ___dic, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase::Disconnect()
// System.Void ExitGames.Client.Photon.PeerBase::StopConnection()
// System.Void ExitGames.Client.Photon.PeerBase::FetchServerTimestamp()
// System.Boolean ExitGames.Client.Photon.PeerBase::EnqueueOperation(System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,System.Byte,System.Boolean,System.Byte,System.Boolean)
 bool PeerBase_EnqueueOperation_m7292 (PeerBase_t2357 * __this, Dictionary_2_t72 * ___parameters, uint8_t ___opCode, bool ___sendReliable, uint8_t ___channelId, bool ___encrypted, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PeerBase::EnqueueOperation(System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,System.Byte,System.Boolean,System.Byte,System.Boolean,ExitGames.Client.Photon.PeerBase/EgMessageType)
// System.Boolean ExitGames.Client.Photon.PeerBase::DispatchIncomingCommands()
// System.Boolean ExitGames.Client.Photon.PeerBase::SendOutgoingCommands()
// System.Boolean ExitGames.Client.Photon.PeerBase::SendAcksOnly()
 bool PeerBase_SendAcksOnly_m7293 (PeerBase_t2357 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] ExitGames.Client.Photon.PeerBase::SerializeMessageToMessage(System.Object,System.Boolean,System.Byte[],System.Boolean)
 ByteU5BU5D_t21* PeerBase_SerializeMessageToMessage_m7294 (PeerBase_t2357 * __this, Object_t * ___message, bool ___encrypt, ByteU5BU5D_t21* ___messageHeader, bool ___writeLength, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] ExitGames.Client.Photon.PeerBase::SerializeRawMessageToMessage(System.Byte[],System.Boolean,System.Byte[],System.Boolean)
 ByteU5BU5D_t21* PeerBase_SerializeRawMessageToMessage_m7295 (PeerBase_t2357 * __this, ByteU5BU5D_t21* ___data, bool ___encrypt, ByteU5BU5D_t21* ___messageHeader, bool ___writeLength, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] ExitGames.Client.Photon.PeerBase::SerializeOperationToMessage(System.Byte,System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,ExitGames.Client.Photon.PeerBase/EgMessageType,System.Boolean)
// System.Void ExitGames.Client.Photon.PeerBase::ReceiveIncomingCommands(System.Byte[],System.Int32)
// System.Void ExitGames.Client.Photon.PeerBase::InitCallback()
 void PeerBase_InitCallback_m7296 (PeerBase_t2357 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PeerBase::get_IsSendingOnlyAcks()
 bool PeerBase_get_IsSendingOnlyAcks_m7297 (PeerBase_t2357 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase::set_IsSendingOnlyAcks(System.Boolean)
 void PeerBase_set_IsSendingOnlyAcks_m7298 (PeerBase_t2357 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PeerBase::ExchangeKeysForEncryption()
 bool PeerBase_ExchangeKeysForEncryption_m7299 (PeerBase_t2357 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase::DeriveSharedKey(ExitGames.Client.Photon.OperationResponse)
 void PeerBase_DeriveSharedKey_m7300 (PeerBase_t2357 * __this, OperationResponse_t13 * ___operationResponse, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase::EnqueueActionForDispatch(ExitGames.Client.Photon.PeerBase/MyAction)
 void PeerBase_EnqueueActionForDispatch_m7301 (PeerBase_t2357 * __this, MyAction_t2354 * ___action, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase::EnqueueDebugReturn(ExitGames.Client.Photon.DebugLevel,System.String)
 void PeerBase_EnqueueDebugReturn_m7302 (PeerBase_t2357 * __this, uint8_t ___level, String_t* ___debugReturn, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase::EnqueueStatusCallback(ExitGames.Client.Photon.StatusCode)
 void PeerBase_EnqueueStatusCallback_m7303 (PeerBase_t2357 * __this, int32_t ___statusValue, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase::InitPeerBase()
 void PeerBase_InitPeerBase_m7304 (PeerBase_t2357 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.PeerBase::DeserializeMessageAndCallback(System.Byte[])
 bool PeerBase_DeserializeMessageAndCallback_m7305 (PeerBase_t2357 * __this, ByteU5BU5D_t21* ___inBuff, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase::SendNetworkSimulated(ExitGames.Client.Photon.PeerBase/MyAction)
 void PeerBase_SendNetworkSimulated_m7306 (PeerBase_t2357 * __this, MyAction_t2354 * ___sendAction, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase::ReceiveNetworkSimulated(ExitGames.Client.Photon.PeerBase/MyAction)
 void PeerBase_ReceiveNetworkSimulated_m7307 (PeerBase_t2357 * __this, MyAction_t2354 * ___receiveAction, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase::NetworkSimRun()
 void PeerBase_NetworkSimRun_m7308 (PeerBase_t2357 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase::UpdateRoundTripTimeAndVariance(System.Int32)
 void PeerBase_UpdateRoundTripTimeAndVariance_m7309 (PeerBase_t2357 * __this, int32_t ___lastRoundtripTime, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase::InitializeTrafficStats()
 void PeerBase_InitializeTrafficStats_m7310 (PeerBase_t2357 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase::.ctor()
 void PeerBase__ctor_m7311 (PeerBase_t2357 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.PeerBase::.cctor()
 void PeerBase__cctor_m7312 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
