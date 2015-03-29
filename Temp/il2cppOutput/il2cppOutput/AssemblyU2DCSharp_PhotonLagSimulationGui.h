#pragma once
#include <stdint.h>
// ExitGames.Client.Photon.PhotonPeer
struct PhotonPeer_t18;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// PhotonLagSimulationGui
struct PhotonLagSimulationGui_t300  : public MonoBehaviour_t58
{
	// UnityEngine.Rect PhotonLagSimulationGui::WindowRect
	Rect_t55  ___WindowRect;
	// System.Int32 PhotonLagSimulationGui::WindowId
	int32_t ___WindowId;
	// System.Boolean PhotonLagSimulationGui::Visible
	bool ___Visible;
	// ExitGames.Client.Photon.PhotonPeer PhotonLagSimulationGui::<Peer>k__BackingField
	PhotonPeer_t18 * ___U3CPeerU3Ek__BackingField;
};
