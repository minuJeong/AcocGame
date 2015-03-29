#pragma once
#include <stdint.h>
// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t47;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// GUICustomAuth/GuiState
#include "AssemblyU2DCSharp_GUICustomAuth_GuiState.h"
// GUICustomAuth
struct GUICustomAuth_t186  : public MonoBehaviour_t58
{
	// UnityEngine.Rect GUICustomAuth::GuiRect
	Rect_t55  ___GuiRect;
	// System.String GUICustomAuth::authName
	String_t* ___authName;
	// System.String GUICustomAuth::authToken
	String_t* ___authToken;
	// System.String GUICustomAuth::authDebugMessage
	String_t* ___authDebugMessage;
	// GUICustomAuth/GuiState GUICustomAuth::guiState
	int32_t ___guiState;
	// UnityEngine.GameObject GUICustomAuth::RootOf3dButtons
	GameObject_t47 * ___RootOf3dButtons;
};
