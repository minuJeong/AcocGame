#pragma once
#include <stdint.h>
// System.Collections.Generic.List`1<System.String>
struct List_1_t1;
// System.String
struct String_t;
// Photon.MonoBehaviour
#include "AssemblyU2DCSharp_Photon_MonoBehaviour.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// InRoomChat
struct InRoomChat_t347  : public MonoBehaviour_t174
{
	// UnityEngine.Rect InRoomChat::GuiRect
	Rect_t55  ___GuiRect;
	// System.Boolean InRoomChat::IsVisible
	bool ___IsVisible;
	// System.Boolean InRoomChat::AlignBottom
	bool ___AlignBottom;
	// System.Collections.Generic.List`1<System.String> InRoomChat::messages
	List_1_t1 * ___messages;
	// System.String InRoomChat::inputLine
	String_t* ___inputLine;
	// UnityEngine.Vector2 InRoomChat::scrollPos
	Vector2_t51  ___scrollPos;
};
struct InRoomChat_t347_StaticFields{
	// System.String InRoomChat::ChatRPC
	String_t* ___ChatRPC;
};
