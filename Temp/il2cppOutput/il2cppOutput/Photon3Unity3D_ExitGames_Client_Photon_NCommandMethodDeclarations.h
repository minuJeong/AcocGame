#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ExitGames.Client.Photon.NCommand
struct NCommand_t2353;
// ExitGames.Client.Photon.EnetPeer
struct EnetPeer_t2363;
// System.Byte[]
struct ByteU5BU5D_t21;
// System.String
struct String_t;

// System.Void ExitGames.Client.Photon.NCommand::.ctor(ExitGames.Client.Photon.EnetPeer,System.Byte,System.Byte[],System.Byte)
 void NCommand__ctor_m7424 (NCommand_t2353 * __this, EnetPeer_t2363 * ___peer, uint8_t ___commandType, ByteU5BU5D_t21* ___payload, uint8_t ___channel, MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.NCommand ExitGames.Client.Photon.NCommand::CreateAck(ExitGames.Client.Photon.EnetPeer,ExitGames.Client.Photon.NCommand,System.Int32)
 NCommand_t2353 * NCommand_CreateAck_m7425 (Object_t * __this/* static, unused */, EnetPeer_t2363 * ___peer, NCommand_t2353 * ___commandToAck, int32_t ___sentTime, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.NCommand::.ctor(ExitGames.Client.Photon.EnetPeer,System.Byte[],System.Int32&)
 void NCommand__ctor_m7426 (NCommand_t2353 * __this, EnetPeer_t2363 * ___peer, ByteU5BU5D_t21* ___inBuff, int32_t* ___readingOffset, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] ExitGames.Client.Photon.NCommand::Serialize()
 ByteU5BU5D_t21* NCommand_Serialize_m7427 (NCommand_t2353 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.NCommand::CompareTo(ExitGames.Client.Photon.NCommand)
 int32_t NCommand_CompareTo_m7428 (NCommand_t2353 * __this, NCommand_t2353 * ___other, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.NCommand::ToString()
 String_t* NCommand_ToString_m7429 (NCommand_t2353 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
