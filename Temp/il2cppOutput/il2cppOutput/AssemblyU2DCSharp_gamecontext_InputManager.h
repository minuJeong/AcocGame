#pragma once
#include <stdint.h>
// gamecontext.InputManager
struct InputManager_t394;
// UnityEngine.Camera
struct Camera_t204;
// gamecontext.uicontrol.SelectRect
struct SelectRect_t388;
// System.Collections.Generic.List`1<gamecontext.Hero>
struct List_1_t398;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// gamecontext.InputManager
struct InputManager_t394  : public MonoBehaviour_t58
{
	// UnityEngine.Camera gamecontext.InputManager::_cachedMainCamera
	Camera_t204 * ____cachedMainCamera;
	// gamecontext.uicontrol.SelectRect gamecontext.InputManager::_cachedSelectRect
	SelectRect_t388 * ____cachedSelectRect;
	// System.Collections.Generic.List`1<gamecontext.Hero> gamecontext.InputManager::ControlableHeroes
	List_1_t398 * ___ControlableHeroes;
	// System.Collections.Generic.List`1<gamecontext.Hero> gamecontext.InputManager::SelectedHeroes
	List_1_t398 * ___SelectedHeroes;
};
struct InputManager_t394_StaticFields{
	// gamecontext.InputManager gamecontext.InputManager::instance
	InputManager_t394 * ___instance;
};
