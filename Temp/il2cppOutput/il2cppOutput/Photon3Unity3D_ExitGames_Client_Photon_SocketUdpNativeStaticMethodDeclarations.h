#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ExitGames.Client.Photon.SocketUdpNativeStatic
struct SocketUdpNativeStatic_t71;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t21;
// ExitGames.Client.Photon.PeerBase
struct PeerBase_t2357;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// ExitGames.Client.Photon.PhotonSocketError
#include "Photon3Unity3D_ExitGames_Client_Photon_PhotonSocketError.h"

// System.IntPtr ExitGames.Client.Photon.SocketUdpNativeStatic::egconnect(System.String)
 IntPtr_t39 SocketUdpNativeStatic_egconnect_m7556 (Object_t * __this/* static, unused */, String_t* ___address, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte ExitGames.Client.Photon.SocketUdpNativeStatic::eggetState(System.IntPtr)
 uint8_t SocketUdpNativeStatic_eggetState_m7557 (Object_t * __this/* static, unused */, IntPtr_t39 ___pConnectionHandler, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.SocketUdpNativeStatic::egdisconnect(System.IntPtr)
 void SocketUdpNativeStatic_egdisconnect_m7558 (Object_t * __this/* static, unused */, IntPtr_t39 ___pConnectionHandler, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.SocketUdpNativeStatic::egservice(System.IntPtr)
 int32_t SocketUdpNativeStatic_egservice_m7559 (Object_t * __this/* static, unused */, IntPtr_t39 ___pConnectionHandler, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.SocketUdpNativeStatic::egsend(System.IntPtr,System.Byte[],System.Int32)
 int32_t SocketUdpNativeStatic_egsend_m7560 (Object_t * __this/* static, unused */, IntPtr_t39 ___pConnectionHandler, ByteU5BU5D_t21* ___arr, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.SocketUdpNativeStatic::egread(System.IntPtr,System.Byte[],System.Int32&)
 int32_t SocketUdpNativeStatic_egread_m7561 (Object_t * __this/* static, unused */, IntPtr_t39 ___pConnectionHandler, ByteU5BU5D_t21* ___arr, int32_t* ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.SocketUdpNativeStatic::.ctor(ExitGames.Client.Photon.PeerBase)
 void SocketUdpNativeStatic__ctor_m7562 (SocketUdpNativeStatic_t71 * __this, PeerBase_t2357 * ___npeer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.SocketUdpNativeStatic::Connect()
 bool SocketUdpNativeStatic_Connect_m7563 (SocketUdpNativeStatic_t71 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.SocketUdpNativeStatic::Disconnect()
 bool SocketUdpNativeStatic_Disconnect_m7564 (SocketUdpNativeStatic_t71 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.PhotonSocketError ExitGames.Client.Photon.SocketUdpNativeStatic::Send(System.Byte[],System.Int32)
 int32_t SocketUdpNativeStatic_Send_m7565 (SocketUdpNativeStatic_t71 * __this, ByteU5BU5D_t21* ___data, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.PhotonSocketError ExitGames.Client.Photon.SocketUdpNativeStatic::Receive(System.Byte[]&)
 int32_t SocketUdpNativeStatic_Receive_m7566 (SocketUdpNativeStatic_t71 * __this, ByteU5BU5D_t21** ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.SocketUdpNativeStatic::DnsAndConnect()
 void SocketUdpNativeStatic_DnsAndConnect_m7567 (SocketUdpNativeStatic_t71 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.SocketUdpNativeStatic::ReceiveLoop()
 void SocketUdpNativeStatic_ReceiveLoop_m7568 (SocketUdpNativeStatic_t71 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.SocketUdpNativeStatic::.cctor()
 void SocketUdpNativeStatic__cctor_m7569 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
