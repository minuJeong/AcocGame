#pragma once
#include <stdint.h>
// PhotonTransformViewPositionModel
struct PhotonTransformViewPositionModel_t333;
// System.Collections.Generic.Queue`1<UnityEngine.Vector3>
struct Queue_1_t339;
// System.Object
#include "mscorlib_System_Object.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// PhotonTransformViewPositionControl
struct PhotonTransformViewPositionControl_t336  : public Object_t
{
	// PhotonTransformViewPositionModel PhotonTransformViewPositionControl::m_Model
	PhotonTransformViewPositionModel_t333 * ___m_Model;
	// System.Single PhotonTransformViewPositionControl::m_CurrentSpeed
	float ___m_CurrentSpeed;
	// System.Double PhotonTransformViewPositionControl::m_LastSerializeTime
	double ___m_LastSerializeTime;
	// UnityEngine.Vector3 PhotonTransformViewPositionControl::m_SynchronizedSpeed
	Vector3_t31  ___m_SynchronizedSpeed;
	// System.Single PhotonTransformViewPositionControl::m_SynchronizedTurnSpeed
	float ___m_SynchronizedTurnSpeed;
	// UnityEngine.Vector3 PhotonTransformViewPositionControl::m_NetworkPosition
	Vector3_t31  ___m_NetworkPosition;
	// System.Collections.Generic.Queue`1<UnityEngine.Vector3> PhotonTransformViewPositionControl::m_OldNetworkPositions
	Queue_1_t339 * ___m_OldNetworkPositions;
	// System.Boolean PhotonTransformViewPositionControl::m_UpdatedPositionAfterOnSerialize
	bool ___m_UpdatedPositionAfterOnSerialize;
};
