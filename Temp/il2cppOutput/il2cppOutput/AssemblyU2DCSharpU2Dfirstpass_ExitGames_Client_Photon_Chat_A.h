#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Object
#include "mscorlib_System_Object.h"
// ExitGames.Client.Photon.Chat.CustomAuthenticationType
#include "AssemblyU2DCSharpU2Dfirstpass_ExitGames_Client_Photon_Chat_C_7.h"
// ExitGames.Client.Photon.Chat.AuthenticationValues
struct AuthenticationValues_t10  : public Object_t
{
	// ExitGames.Client.Photon.Chat.CustomAuthenticationType ExitGames.Client.Photon.Chat.AuthenticationValues::AuthType
	uint8_t ___AuthType;
	// System.String ExitGames.Client.Photon.Chat.AuthenticationValues::AuthParameters
	String_t* ___AuthParameters;
	// System.String ExitGames.Client.Photon.Chat.AuthenticationValues::Secret
	String_t* ___Secret;
	// System.Object ExitGames.Client.Photon.Chat.AuthenticationValues::<AuthPostData>k__BackingField
	Object_t * ___U3CAuthPostDataU3Ek__BackingField;
};
