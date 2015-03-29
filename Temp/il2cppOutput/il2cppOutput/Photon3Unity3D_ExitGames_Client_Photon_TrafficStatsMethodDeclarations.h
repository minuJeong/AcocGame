#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ExitGames.Client.Photon.TrafficStats
struct TrafficStats_t514;
// System.String
struct String_t;

// System.Int32 ExitGames.Client.Photon.TrafficStats::get_PackageHeaderSize()
 int32_t TrafficStats_get_PackageHeaderSize_m7628 (TrafficStats_t514 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.TrafficStats::set_PackageHeaderSize(System.Int32)
 void TrafficStats_set_PackageHeaderSize_m7629 (TrafficStats_t514 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_ReliableCommandCount()
 int32_t TrafficStats_get_ReliableCommandCount_m7630 (TrafficStats_t514 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.TrafficStats::set_ReliableCommandCount(System.Int32)
 void TrafficStats_set_ReliableCommandCount_m7631 (TrafficStats_t514 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_UnreliableCommandCount()
 int32_t TrafficStats_get_UnreliableCommandCount_m7632 (TrafficStats_t514 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.TrafficStats::set_UnreliableCommandCount(System.Int32)
 void TrafficStats_set_UnreliableCommandCount_m7633 (TrafficStats_t514 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_FragmentCommandCount()
 int32_t TrafficStats_get_FragmentCommandCount_m7634 (TrafficStats_t514 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.TrafficStats::set_FragmentCommandCount(System.Int32)
 void TrafficStats_set_FragmentCommandCount_m7635 (TrafficStats_t514 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_ControlCommandCount()
 int32_t TrafficStats_get_ControlCommandCount_m7636 (TrafficStats_t514 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.TrafficStats::set_ControlCommandCount(System.Int32)
 void TrafficStats_set_ControlCommandCount_m7637 (TrafficStats_t514 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_TotalPacketCount()
 int32_t TrafficStats_get_TotalPacketCount_m7638 (TrafficStats_t514 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.TrafficStats::set_TotalPacketCount(System.Int32)
 void TrafficStats_set_TotalPacketCount_m7639 (TrafficStats_t514 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_TotalCommandsInPackets()
 int32_t TrafficStats_get_TotalCommandsInPackets_m7640 (TrafficStats_t514 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.TrafficStats::set_TotalCommandsInPackets(System.Int32)
 void TrafficStats_set_TotalCommandsInPackets_m7641 (TrafficStats_t514 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_ReliableCommandBytes()
 int32_t TrafficStats_get_ReliableCommandBytes_m7642 (TrafficStats_t514 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.TrafficStats::set_ReliableCommandBytes(System.Int32)
 void TrafficStats_set_ReliableCommandBytes_m7643 (TrafficStats_t514 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_UnreliableCommandBytes()
 int32_t TrafficStats_get_UnreliableCommandBytes_m7644 (TrafficStats_t514 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.TrafficStats::set_UnreliableCommandBytes(System.Int32)
 void TrafficStats_set_UnreliableCommandBytes_m7645 (TrafficStats_t514 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_FragmentCommandBytes()
 int32_t TrafficStats_get_FragmentCommandBytes_m7646 (TrafficStats_t514 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.TrafficStats::set_FragmentCommandBytes(System.Int32)
 void TrafficStats_set_FragmentCommandBytes_m7647 (TrafficStats_t514 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_ControlCommandBytes()
 int32_t TrafficStats_get_ControlCommandBytes_m7648 (TrafficStats_t514 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.TrafficStats::set_ControlCommandBytes(System.Int32)
 void TrafficStats_set_ControlCommandBytes_m7649 (TrafficStats_t514 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.TrafficStats::.ctor(System.Int32)
 void TrafficStats__ctor_m7650 (TrafficStats_t514 * __this, int32_t ___packageHeaderSize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_TotalCommandCount()
 int32_t TrafficStats_get_TotalCommandCount_m7651 (TrafficStats_t514 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_TotalCommandBytes()
 int32_t TrafficStats_get_TotalCommandBytes_m7652 (TrafficStats_t514 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_TotalPacketBytes()
 int32_t TrafficStats_get_TotalPacketBytes_m7653 (TrafficStats_t514 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_TimestampOfLastAck()
 int32_t TrafficStats_get_TimestampOfLastAck_m7654 (TrafficStats_t514 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.TrafficStats::set_TimestampOfLastAck(System.Int32)
 void TrafficStats_set_TimestampOfLastAck_m7655 (TrafficStats_t514 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_TimestampOfLastReliableCommand()
 int32_t TrafficStats_get_TimestampOfLastReliableCommand_m7656 (TrafficStats_t514 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.TrafficStats::set_TimestampOfLastReliableCommand(System.Int32)
 void TrafficStats_set_TimestampOfLastReliableCommand_m7657 (TrafficStats_t514 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.TrafficStats::CountControlCommand(System.Int32)
 void TrafficStats_CountControlCommand_m7658 (TrafficStats_t514 * __this, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.TrafficStats::CountReliableOpCommand(System.Int32)
 void TrafficStats_CountReliableOpCommand_m7659 (TrafficStats_t514 * __this, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.TrafficStats::CountUnreliableOpCommand(System.Int32)
 void TrafficStats_CountUnreliableOpCommand_m7660 (TrafficStats_t514 * __this, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.TrafficStats::CountFragmentOpCommand(System.Int32)
 void TrafficStats_CountFragmentOpCommand_m7661 (TrafficStats_t514 * __this, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.TrafficStats::ToString()
 String_t* TrafficStats_ToString_m2635 (TrafficStats_t514 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
