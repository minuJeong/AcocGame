#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t47;
// UnityEngine.TextMesh
struct TextMesh_t372;
// UnityEngine.Font
struct Font_t373;
// Photon.MonoBehaviour
#include "AssemblyU2DCSharp_Photon_MonoBehaviour.h"
// ShowInfoOfPlayer
struct ShowInfoOfPlayer_t374  : public MonoBehaviour_t174
{
	// UnityEngine.GameObject ShowInfoOfPlayer::textGo
	GameObject_t47 * ___textGo;
	// UnityEngine.TextMesh ShowInfoOfPlayer::tm
	TextMesh_t372 * ___tm;
	// System.Single ShowInfoOfPlayer::CharacterSize
	float ___CharacterSize;
	// UnityEngine.Font ShowInfoOfPlayer::font
	Font_t373 * ___font;
	// System.Boolean ShowInfoOfPlayer::DisableOnOwnObjects
	bool ___DisableOnOwnObjects;
};
