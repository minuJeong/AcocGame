#pragma once
#include <stdint.h>
// System.String
struct String_t;
// TypedLobby
struct TypedLobby_t263;
// System.Object
#include "mscorlib_System_Object.h"
// LobbyType
#include "AssemblyU2DCSharp_LobbyType.h"
// TypedLobby
struct TypedLobby_t263  : public Object_t
{
	// System.String TypedLobby::Name
	String_t* ___Name;
	// LobbyType TypedLobby::Type
	uint8_t ___Type;
};
struct TypedLobby_t263_StaticFields{
	// TypedLobby TypedLobby::Default
	TypedLobby_t263 * ___Default;
};
