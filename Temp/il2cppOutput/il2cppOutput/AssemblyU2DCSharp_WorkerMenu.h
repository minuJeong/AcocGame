#pragma once
#include <stdint.h>
// UnityEngine.GUISkin
struct GUISkin_t137;
// System.String
struct String_t;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// WorkerMenu
struct WorkerMenu_t231  : public MonoBehaviour_t58
{
	// UnityEngine.GUISkin WorkerMenu::Skin
	GUISkin_t137 * ___Skin;
	// UnityEngine.Vector2 WorkerMenu::WidthAndHeight
	Vector2_t51  ___WidthAndHeight;
	// System.String WorkerMenu::roomName
	String_t* ___roomName;
	// UnityEngine.Vector2 WorkerMenu::scrollPos
	Vector2_t51  ___scrollPos;
	// System.Boolean WorkerMenu::connectFailed
	bool ___connectFailed;
	// System.String WorkerMenu::errorDialog
	String_t* ___errorDialog;
	// System.Double WorkerMenu::timeToClearDialog
	double ___timeToClearDialog;
};
struct WorkerMenu_t231_StaticFields{
	// System.String WorkerMenu::SceneNameMenu
	String_t* ___SceneNameMenu;
	// System.String WorkerMenu::SceneNameGame
	String_t* ___SceneNameGame;
};
