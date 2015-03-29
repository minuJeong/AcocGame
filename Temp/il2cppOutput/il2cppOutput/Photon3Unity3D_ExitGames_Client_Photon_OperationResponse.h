#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.Byte,System.Object>
struct Dictionary_2_t72;
// System.Object
#include "mscorlib_System_Object.h"
// ExitGames.Client.Photon.OperationResponse
struct OperationResponse_t13  : public Object_t
{
	// System.Byte ExitGames.Client.Photon.OperationResponse::OperationCode
	uint8_t ___OperationCode;
	// System.Int16 ExitGames.Client.Photon.OperationResponse::ReturnCode
	int16_t ___ReturnCode;
	// System.String ExitGames.Client.Photon.OperationResponse::DebugMessage
	String_t* ___DebugMessage;
	// System.Collections.Generic.Dictionary`2<System.Byte,System.Object> ExitGames.Client.Photon.OperationResponse::Parameters
	Dictionary_2_t72 * ___Parameters;
};
