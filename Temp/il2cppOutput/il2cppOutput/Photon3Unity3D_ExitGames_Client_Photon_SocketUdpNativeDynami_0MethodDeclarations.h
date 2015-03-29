#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ExitGames.Client.Photon.SocketUdpNativeDynamic
struct SocketUdpNativeDynamic_t2400;
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

// System.IntPtr ExitGames.Client.Photon.SocketUdpNativeDynamic::egconnect(System.String)
 IntPtr_t39 SocketUdpNativeDynamic_egconnect_m7544 (Object_t * __this/* static, unused */, String_t* ___address, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte ExitGames.Client.Photon.SocketUdpNativeDynamic::eggetState(System.IntPtr)
 uint8_t SocketUdpNativeDynamic_eggetState_m7545 (Object_t * __this/* static, unused */, IntPtr_t39 ___pConnectionHandler, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.SocketUdpNativeDynamic::egdisconnect(System.IntPtr)
 void SocketUdpNativeDynamic_egdisconnect_m7546 (Object_t * __this/* static, unused */, IntPtr_t39 ___pConnectionHandler, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.SocketUdpNativeDynamic::egservice(System.IntPtr)
 int32_t SocketUdpNativeDynamic_egservice_m7547 (Object_t * __this/* static, unused */, IntPtr_t39 ___pConnectionHandler, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.SocketUdpNativeDynamic::egsend(System.IntPtr,System.Byte[],System.Int32)
 int32_t SocketUdpNativeDynamic_egsend_m7548 (Object_t * __this/* static, unused */, IntPtr_t39 ___pConnectionHandler, ByteU5BU5D_t21* ___arr, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.SocketUdpNativeDynamic::egread(System.IntPtr,System.Byte[],System.Int32&)
 int32_t SocketUdpNativeDynamic_egread_m7549 (Object_t * __this/* static, unused */, IntPtr_t39 ___pConnectionHandler, ByteU5BU5D_t21* ___arr, int32_t* ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.SocketUdpNativeDynamic::.ctor(ExitGames.Client.Photon.PeerBase)
 void SocketUdpNativeDynamic__ctor_m7550 (SocketUdpNativeDynamic_t2400 * __this, PeerBase_t2357 * ___npeer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.SocketUdpNativeDynamic::Connect()
 bool SocketUdpNativeDynamic_Connect_m7551 (SocketUdpNativeDynamic_t2400 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.SocketUdpNativeDynamic::Disconnect()
 bool SocketUdpNativeDynamic_Disconnect_m7552 (SocketUdpNativeDynamic_t2400 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.PhotonSocketError ExitGames.Client.Photon.SocketUdpNativeDynamic::Send(System.Byte[],System.Int32)
 int32_t SocketUdpNativeDynamic_Send_m7553 (SocketUdpNativeDynamic_t2400 * __this, ByteU5BU5D_t21* ___data, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.PhotonSocketError ExitGames.Client.Photon.SocketUdpNativeDynamic::Receive(System.Byte[]&)
 int32_t SocketUdpNativeDynamic_Receive_m7554 (SocketUdpNativeDynamic_t2400 * __this, ByteU5BU5D_t21** ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.SocketUdpNativeDynamic::DnsAndConnect()
 void SocketUdpNativeDynamic_DnsAndConnect_m7555 (SocketUdpNativeDynamic_t2400 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.SocketUdpNativeDynamic::ReceiveLoop()
 void SocketUdpNativeDynamic_ReceiveLoop_m7556 (SocketUdpNativeDynamic_t2400 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.SocketUdpNativeDynamic::.cctor()
 void SocketUdpNativeDynamic__cctor_m7557 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
