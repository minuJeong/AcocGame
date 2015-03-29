#pragma once
#include <stdint.h>
// PhotonPlayer
struct PhotonPlayer_t230;
// PhotonView
struct PhotonView_t170;
// System.Object
#include "mscorlib_System_Object.h"
// PhotonMessageInfo
struct PhotonMessageInfo_t210  : public Object_t
{
	// System.Int32 PhotonMessageInfo::timeInt
	int32_t ___timeInt;
	// PhotonPlayer PhotonMessageInfo::sender
	PhotonPlayer_t230 * ___sender;
	// PhotonView PhotonMessageInfo::photonView
	PhotonView_t170 * ___photonView;
};
