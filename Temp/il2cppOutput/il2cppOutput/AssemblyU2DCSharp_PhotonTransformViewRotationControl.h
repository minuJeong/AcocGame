#pragma once
#include <stdint.h>
// PhotonTransformViewRotationModel
struct PhotonTransformViewRotationModel_t334;
// System.Object
#include "mscorlib_System_Object.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
// PhotonTransformViewRotationControl
struct PhotonTransformViewRotationControl_t337  : public Object_t
{
	// PhotonTransformViewRotationModel PhotonTransformViewRotationControl::m_Model
	PhotonTransformViewRotationModel_t334 * ___m_Model;
	// UnityEngine.Quaternion PhotonTransformViewRotationControl::m_NetworkRotation
	Quaternion_t110  ___m_NetworkRotation;
};
