#pragma once
#include <stdint.h>
// UnityEngine.Rigidbody
struct Rigidbody_t104;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// PhotonRigidbodyView
struct PhotonRigidbodyView_t332  : public MonoBehaviour_t58
{
	// System.Boolean PhotonRigidbodyView::m_SynchronizeVelocity
	bool ___m_SynchronizeVelocity;
	// System.Boolean PhotonRigidbodyView::m_SynchronizeAngularVelocity
	bool ___m_SynchronizeAngularVelocity;
	// UnityEngine.Rigidbody PhotonRigidbodyView::m_Body
	Rigidbody_t104 * ___m_Body;
};
