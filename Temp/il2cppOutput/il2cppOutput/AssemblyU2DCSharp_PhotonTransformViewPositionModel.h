#pragma once
#include <stdint.h>
// UnityEngine.AnimationCurve
struct AnimationCurve_t342;
struct AnimationCurve_t342_marshaled;
// System.Object
#include "mscorlib_System_Object.h"
// PhotonTransformViewPositionModel/InterpolateOptions
#include "AssemblyU2DCSharp_PhotonTransformViewPositionModel_Interpola.h"
// PhotonTransformViewPositionModel/ExtrapolateOptions
#include "AssemblyU2DCSharp_PhotonTransformViewPositionModel_Extrapola.h"
// PhotonTransformViewPositionModel
struct PhotonTransformViewPositionModel_t333  : public Object_t
{
	// System.Boolean PhotonTransformViewPositionModel::SynchronizeEnabled
	bool ___SynchronizeEnabled;
	// System.Boolean PhotonTransformViewPositionModel::TeleportEnabled
	bool ___TeleportEnabled;
	// System.Single PhotonTransformViewPositionModel::TeleportIfDistanceGreaterThan
	float ___TeleportIfDistanceGreaterThan;
	// PhotonTransformViewPositionModel/InterpolateOptions PhotonTransformViewPositionModel::InterpolateOption
	int32_t ___InterpolateOption;
	// System.Single PhotonTransformViewPositionModel::InterpolateMoveTowardsSpeed
	float ___InterpolateMoveTowardsSpeed;
	// System.Single PhotonTransformViewPositionModel::InterpolateLerpSpeed
	float ___InterpolateLerpSpeed;
	// System.Single PhotonTransformViewPositionModel::InterpolateMoveTowardsAcceleration
	float ___InterpolateMoveTowardsAcceleration;
	// System.Single PhotonTransformViewPositionModel::InterpolateMoveTowardsDeceleration
	float ___InterpolateMoveTowardsDeceleration;
	// UnityEngine.AnimationCurve PhotonTransformViewPositionModel::InterpolateSpeedCurve
	AnimationCurve_t342 * ___InterpolateSpeedCurve;
	// PhotonTransformViewPositionModel/ExtrapolateOptions PhotonTransformViewPositionModel::ExtrapolateOption
	int32_t ___ExtrapolateOption;
	// System.Single PhotonTransformViewPositionModel::ExtrapolateSpeed
	float ___ExtrapolateSpeed;
	// System.Boolean PhotonTransformViewPositionModel::ExtrapolateIncludingRoundTripTime
	bool ___ExtrapolateIncludingRoundTripTime;
	// System.Int32 PhotonTransformViewPositionModel::ExtrapolateNumberOfStoredPositions
	int32_t ___ExtrapolateNumberOfStoredPositions;
	// System.Boolean PhotonTransformViewPositionModel::DrawErrorGizmo
	bool ___DrawErrorGizmo;
};
