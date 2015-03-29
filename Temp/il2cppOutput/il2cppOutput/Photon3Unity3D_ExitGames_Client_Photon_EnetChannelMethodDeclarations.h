#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ExitGames.Client.Photon.EnetChannel
struct EnetChannel_t2352;
// ExitGames.Client.Photon.NCommand
struct NCommand_t2353;

// System.Void ExitGames.Client.Photon.EnetChannel::.ctor(System.Byte,System.Int32)
 void EnetChannel__ctor_m7261 (EnetChannel_t2352 * __this, uint8_t ___channelNumber, int32_t ___commandBufferSize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.EnetChannel::ContainsUnreliableSequenceNumber(System.Int32)
 bool EnetChannel_ContainsUnreliableSequenceNumber_m7262 (EnetChannel_t2352 * __this, int32_t ___unreliableSequenceNumber, MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.NCommand ExitGames.Client.Photon.EnetChannel::FetchUnreliableSequenceNumber(System.Int32)
 NCommand_t2353 * EnetChannel_FetchUnreliableSequenceNumber_m7263 (EnetChannel_t2352 * __this, int32_t ___unreliableSequenceNumber, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.EnetChannel::ContainsReliableSequenceNumber(System.Int32)
 bool EnetChannel_ContainsReliableSequenceNumber_m7264 (EnetChannel_t2352 * __this, int32_t ___reliableSequenceNumber, MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.NCommand ExitGames.Client.Photon.EnetChannel::FetchReliableSequenceNumber(System.Int32)
 NCommand_t2353 * EnetChannel_FetchReliableSequenceNumber_m7265 (EnetChannel_t2352 * __this, int32_t ___reliableSequenceNumber, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.EnetChannel::clearAll()
 void EnetChannel_clearAll_m7266 (EnetChannel_t2352 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
