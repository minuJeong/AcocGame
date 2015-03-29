#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Object
struct Object_t;
// ExitGames.Client.Photon.Hashtable
struct Hashtable_t256;
// System.Object
#include "mscorlib_System_Object.h"
// PhotonPlayer
struct PhotonPlayer_t230  : public Object_t
{
	// System.Int32 PhotonPlayer::actorID
	int32_t ___actorID;
	// System.String PhotonPlayer::nameField
	String_t* ___nameField;
	// System.Boolean PhotonPlayer::isLocal
	bool ___isLocal;
	// System.Object PhotonPlayer::TagObject
	Object_t * ___TagObject;
	// ExitGames.Client.Photon.Hashtable PhotonPlayer::<customProperties>k__BackingField
	Hashtable_t256 * ___U3CcustomPropertiesU3Ek__BackingField;
};
