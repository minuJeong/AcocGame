#pragma once
#include <stdint.h>
// gamecontext.connection.JoinRoom
struct JoinRoom_t389;
// UnityEngine.GameObject
struct GameObject_t47;
// RoomInfo[]
struct RoomInfoU5BU5D_t280;
// Photon.MonoBehaviour
#include "AssemblyU2DCSharp_Photon_MonoBehaviour.h"
// gamecontext.connection.JoinRoom
struct JoinRoom_t389  : public MonoBehaviour_t174
{
	// UnityEngine.GameObject gamecontext.connection.JoinRoom::uiCanvas
	GameObject_t47 * ___uiCanvas;
	// UnityEngine.GameObject gamecontext.connection.JoinRoom::roomItemButton
	GameObject_t47 * ___roomItemButton;
	// UnityEngine.GameObject gamecontext.connection.JoinRoom::createRoomInputField
	GameObject_t47 * ___createRoomInputField;
	// UnityEngine.GameObject gamecontext.connection.JoinRoom::loadingDisplay
	GameObject_t47 * ___loadingDisplay;
	// UnityEngine.GameObject gamecontext.connection.JoinRoom::currentRoomDisplay
	GameObject_t47 * ___currentRoomDisplay;
	// RoomInfo[] gamecontext.connection.JoinRoom::roomList
	RoomInfoU5BU5D_t280* ___roomList;
};
struct JoinRoom_t389_StaticFields{
	// gamecontext.connection.JoinRoom gamecontext.connection.JoinRoom::instance
	JoinRoom_t389 * ___instance;
};
