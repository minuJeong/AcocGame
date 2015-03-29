#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ExitGames.Client.Photon.EnetPeer
struct EnetPeer_t2363;
// ExitGames.Client.Photon.IPhotonPeerListener
struct IPhotonPeerListener_t19;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.Byte,System.Object>
struct Dictionary_2_t72;
// System.Byte[]
struct ByteU5BU5D_t21;
// System.Collections.Generic.Queue`1<ExitGames.Client.Photon.NCommand>
struct Queue_1_t2351;
// ExitGames.Client.Photon.NCommand
struct NCommand_t2353;
// ExitGames.Client.Photon.NCommand[]
struct NCommandU5BU5D_t2370;
// ExitGames.Client.Photon.PeerBase/EgMessageType
#include "Photon3Unity3D_ExitGames_Client_Photon_PeerBase_EgMessageTyp.h"

// System.Int32 ExitGames.Client.Photon.EnetPeer::get_QueuedIncomingCommandsCount()
 int32_t EnetPeer_get_QueuedIncomingCommandsCount_m7318 (EnetPeer_t2363 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.EnetPeer::get_QueuedOutgoingCommandsCount()
 int32_t EnetPeer_get_QueuedOutgoingCommandsCount_m7319 (EnetPeer_t2363 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.EnetPeer::.ctor()
 void EnetPeer__ctor_m7320 (EnetPeer_t2363 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.EnetPeer::.ctor(ExitGames.Client.Photon.IPhotonPeerListener)
 void EnetPeer__ctor_m7321 (EnetPeer_t2363 * __this, Object_t * ___listener, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.EnetPeer::InitPeerBase()
 void EnetPeer_InitPeerBase_m7322 (EnetPeer_t2363 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.EnetPeer::Connect(System.String,System.String)
 bool EnetPeer_Connect_m7323 (EnetPeer_t2363 * __this, String_t* ___ipport, String_t* ___appID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.EnetPeer::Disconnect()
 void EnetPeer_Disconnect_m7324 (EnetPeer_t2363 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.EnetPeer::StopConnection()
 void EnetPeer_StopConnection_m7325 (EnetPeer_t2363 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.EnetPeer::FetchServerTimestamp()
 void EnetPeer_FetchServerTimestamp_m7326 (EnetPeer_t2363 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.EnetPeer::DispatchIncomingCommands()
 bool EnetPeer_DispatchIncomingCommands_m7327 (EnetPeer_t2363 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.EnetPeer::SendAcksOnly()
 bool EnetPeer_SendAcksOnly_m7328 (EnetPeer_t2363 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.EnetPeer::SendOutgoingCommands()
 bool EnetPeer_SendOutgoingCommands_m7329 (EnetPeer_t2363 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.EnetPeer::AreReliableCommandsInTransit()
 bool EnetPeer_AreReliableCommandsInTransit_m7330 (EnetPeer_t2363 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.EnetPeer::EnqueueOperation(System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,System.Byte,System.Boolean,System.Byte,System.Boolean,ExitGames.Client.Photon.PeerBase/EgMessageType)
 bool EnetPeer_EnqueueOperation_m7331 (EnetPeer_t2363 * __this, Dictionary_2_t72 * ___parameters, uint8_t ___opCode, bool ___sendReliable, uint8_t ___channelId, bool ___encrypt, uint8_t ___messageType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.EnetPeer::CreateAndEnqueueCommand(System.Byte,System.Byte[],System.Byte)
 bool EnetPeer_CreateAndEnqueueCommand_m7332 (EnetPeer_t2363 * __this, uint8_t ___commandType, ByteU5BU5D_t21* ___payload, uint8_t ___channelNumber, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] ExitGames.Client.Photon.EnetPeer::SerializeOperationToMessage(System.Byte,System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,ExitGames.Client.Photon.PeerBase/EgMessageType,System.Boolean)
 ByteU5BU5D_t21* EnetPeer_SerializeOperationToMessage_m7333 (EnetPeer_t2363 * __this, uint8_t ___opc, Dictionary_2_t72 * ___parameters, uint8_t ___messageType, bool ___encrypt, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.EnetPeer::SerializeToBuffer(System.Collections.Generic.Queue`1<ExitGames.Client.Photon.NCommand>)
 int32_t EnetPeer_SerializeToBuffer_m7334 (EnetPeer_t2363 * __this, Queue_1_t2351 * ___commandList, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.EnetPeer::SendData(System.Byte[],System.Int32)
 void EnetPeer_SendData_m7335 (EnetPeer_t2363 * __this, ByteU5BU5D_t21* ___data, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.EnetPeer::QueueSentCommand(ExitGames.Client.Photon.NCommand)
 void EnetPeer_QueueSentCommand_m7336 (EnetPeer_t2363 * __this, NCommand_t2353 * ___command, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.EnetPeer::QueueOutgoingReliableCommand(ExitGames.Client.Photon.NCommand)
 void EnetPeer_QueueOutgoingReliableCommand_m7337 (EnetPeer_t2363 * __this, NCommand_t2353 * ___command, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.EnetPeer::QueueOutgoingUnreliableCommand(ExitGames.Client.Photon.NCommand)
 void EnetPeer_QueueOutgoingUnreliableCommand_m7338 (EnetPeer_t2363 * __this, NCommand_t2353 * ___command, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.EnetPeer::QueueOutgoingAcknowledgement(ExitGames.Client.Photon.NCommand)
 void EnetPeer_QueueOutgoingAcknowledgement_m7339 (EnetPeer_t2363 * __this, NCommand_t2353 * ___command, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.EnetPeer::ReceiveIncomingCommands(System.Byte[],System.Int32)
 void EnetPeer_ReceiveIncomingCommands_m7340 (EnetPeer_t2363 * __this, ByteU5BU5D_t21* ___inBuff, int32_t ___dataLength, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.EnetPeer::ExecuteCommand(ExitGames.Client.Photon.NCommand)
 bool EnetPeer_ExecuteCommand_m7341 (EnetPeer_t2363 * __this, NCommand_t2353 * ___command, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.EnetPeer::QueueIncomingCommand(ExitGames.Client.Photon.NCommand)
 bool EnetPeer_QueueIncomingCommand_m7342 (EnetPeer_t2363 * __this, NCommand_t2353 * ___command, MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.NCommand ExitGames.Client.Photon.EnetPeer::RemoveSentReliableCommand(System.Int32,System.Int32)
 NCommand_t2353 * EnetPeer_RemoveSentReliableCommand_m7343 (EnetPeer_t2363 * __this, int32_t ___ackReceivedReliableSequenceNumber, int32_t ___ackReceivedChannel, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.EnetPeer::CommandListToString(ExitGames.Client.Photon.NCommand[])
 String_t* EnetPeer_CommandListToString_m7344 (EnetPeer_t2363 * __this, NCommandU5BU5D_t2370* ___list, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.EnetPeer::<ExecuteCommand>b__13()
 void EnetPeer_U3CExecuteCommandU3Eb__13_m7345 (EnetPeer_t2363 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.EnetPeer::.cctor()
 void EnetPeer__cctor_m7346 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
