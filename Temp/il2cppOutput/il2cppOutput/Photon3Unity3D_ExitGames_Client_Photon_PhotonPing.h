#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t21;
// System.Object
#include "mscorlib_System_Object.h"
// ExitGames.Client.Photon.PhotonPing
struct PhotonPing_t315  : public Object_t
{
	// System.String ExitGames.Client.Photon.PhotonPing::DebugString
	String_t* ___DebugString;
	// System.Boolean ExitGames.Client.Photon.PhotonPing::Successful
	bool ___Successful;
	// System.Boolean ExitGames.Client.Photon.PhotonPing::GotResult
	bool ___GotResult;
	// System.Int32 ExitGames.Client.Photon.PhotonPing::PingLength
	int32_t ___PingLength;
	// System.Byte[] ExitGames.Client.Photon.PhotonPing::PingBytes
	ByteU5BU5D_t21* ___PingBytes;
	// System.Byte ExitGames.Client.Photon.PhotonPing::PingId
	uint8_t ___PingId;
};
