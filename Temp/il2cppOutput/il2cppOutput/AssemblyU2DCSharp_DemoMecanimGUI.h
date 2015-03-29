#pragma once
#include <stdint.h>
// UnityEngine.GUISkin
struct GUISkin_t137;
// PhotonAnimatorView
struct PhotonAnimatorView_t194;
// UnityEngine.Animator
struct Animator_t168;
// Photon.PunBehaviour
#include "AssemblyU2DCSharp_Photon_PunBehaviour.h"
// DemoMecanimGUI
struct DemoMecanimGUI_t195  : public PunBehaviour_t196
{
	// UnityEngine.GUISkin DemoMecanimGUI::Skin
	GUISkin_t137 * ___Skin;
	// PhotonAnimatorView DemoMecanimGUI::m_AnimatorView
	PhotonAnimatorView_t194 * ___m_AnimatorView;
	// UnityEngine.Animator DemoMecanimGUI::m_RemoteAnimator
	Animator_t168 * ___m_RemoteAnimator;
	// System.Single DemoMecanimGUI::m_SlideIn
	float ___m_SlideIn;
	// System.Single DemoMecanimGUI::m_FoundPlayerSlideIn
	float ___m_FoundPlayerSlideIn;
	// System.Boolean DemoMecanimGUI::m_IsOpen
	bool ___m_IsOpen;
};
