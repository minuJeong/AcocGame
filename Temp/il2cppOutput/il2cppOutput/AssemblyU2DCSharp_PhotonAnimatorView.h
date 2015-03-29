#pragma once
#include <stdint.h>
// UnityEngine.Animator
struct Animator_t168;
// PhotonStreamQueue
struct PhotonStreamQueue_t308;
// System.Collections.Generic.List`1<PhotonAnimatorView/SynchronizedParameter>
struct List_1_t329;
// System.Collections.Generic.List`1<PhotonAnimatorView/SynchronizedLayer>
struct List_1_t330;
// PhotonView
struct PhotonView_t170;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// PhotonAnimatorView
struct PhotonAnimatorView_t194  : public MonoBehaviour_t58
{
	// UnityEngine.Animator PhotonAnimatorView::m_Animator
	Animator_t168 * ___m_Animator;
	// PhotonStreamQueue PhotonAnimatorView::m_StreamQueue
	PhotonStreamQueue_t308 * ___m_StreamQueue;
	// System.Boolean PhotonAnimatorView::ShowLayerWeightsInspector
	bool ___ShowLayerWeightsInspector;
	// System.Boolean PhotonAnimatorView::ShowParameterInspector
	bool ___ShowParameterInspector;
	// System.Collections.Generic.List`1<PhotonAnimatorView/SynchronizedParameter> PhotonAnimatorView::m_SynchronizeParameters
	List_1_t329 * ___m_SynchronizeParameters;
	// System.Collections.Generic.List`1<PhotonAnimatorView/SynchronizedLayer> PhotonAnimatorView::m_SynchronizeLayers
	List_1_t330 * ___m_SynchronizeLayers;
	// UnityEngine.Vector3 PhotonAnimatorView::m_ReceiverPosition
	Vector3_t31  ___m_ReceiverPosition;
	// System.Single PhotonAnimatorView::m_LastDeserializeTime
	float ___m_LastDeserializeTime;
	// System.Boolean PhotonAnimatorView::m_WasSynchronizeTypeChanged
	bool ___m_WasSynchronizeTypeChanged;
	// PhotonView PhotonAnimatorView::m_PhotonView
	PhotonView_t170 * ___m_PhotonView;
};
