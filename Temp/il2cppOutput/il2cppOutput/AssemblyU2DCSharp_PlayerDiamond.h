#pragma once
#include <stdint.h>
// UnityEngine.Transform
struct Transform_t56;
// PhotonView
struct PhotonView_t170;
// UnityEngine.Renderer
struct Renderer_t102;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// PlayerDiamond
struct PlayerDiamond_t239  : public MonoBehaviour_t58
{
	// UnityEngine.Transform PlayerDiamond::HeadTransform
	Transform_t56 * ___HeadTransform;
	// System.Single PlayerDiamond::HeightOffset
	float ___HeightOffset;
	// PhotonView PlayerDiamond::m_PhotonView
	PhotonView_t170 * ___m_PhotonView;
	// UnityEngine.Renderer PlayerDiamond::m_DiamondRenderer
	Renderer_t102 * ___m_DiamondRenderer;
	// System.Single PlayerDiamond::m_Rotation
	float ___m_Rotation;
	// System.Single PlayerDiamond::m_Height
	float ___m_Height;
};
