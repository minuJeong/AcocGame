#pragma once
#include <stdint.h>
// System.Type
struct Type_t;
// ExitGames.Client.Photon.SerializeMethod
struct SerializeMethod_t2383;
// ExitGames.Client.Photon.DeserializeMethod
struct DeserializeMethod_t2384;
// ExitGames.Client.Photon.SerializeStreamMethod
struct SerializeStreamMethod_t468;
// ExitGames.Client.Photon.DeserializeStreamMethod
struct DeserializeStreamMethod_t469;
// System.Object
#include "mscorlib_System_Object.h"
// ExitGames.Client.Photon.CustomType
struct CustomType_t2394  : public Object_t
{
	// System.Byte ExitGames.Client.Photon.CustomType::Code
	uint8_t ___Code;
	// System.Type ExitGames.Client.Photon.CustomType::Type
	Type_t * ___Type;
	// ExitGames.Client.Photon.SerializeMethod ExitGames.Client.Photon.CustomType::SerializeFunction
	SerializeMethod_t2383 * ___SerializeFunction;
	// ExitGames.Client.Photon.DeserializeMethod ExitGames.Client.Photon.CustomType::DeserializeFunction
	DeserializeMethod_t2384 * ___DeserializeFunction;
	// ExitGames.Client.Photon.SerializeStreamMethod ExitGames.Client.Photon.CustomType::SerializeStreamFunction
	SerializeStreamMethod_t468 * ___SerializeStreamFunction;
	// ExitGames.Client.Photon.DeserializeStreamMethod ExitGames.Client.Photon.CustomType::DeserializeStreamFunction
	DeserializeStreamMethod_t469 * ___DeserializeStreamFunction;
};
