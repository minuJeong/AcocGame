#pragma once
#include <stdint.h>
// System.Object[]
struct ObjectU5BU5D_t5;
// UnityEngine.Component
struct Component_t105;
// System.Collections.Generic.List`1<UnityEngine.Component>
struct List_1_t313;
// System.Collections.Generic.Dictionary`2<UnityEngine.Component,System.Reflection.MethodInfo>
struct Dictionary_2_t314;
// System.Reflection.MethodInfo
struct MethodInfo_t292;
// Photon.MonoBehaviour
#include "AssemblyU2DCSharp_Photon_MonoBehaviour.h"
// ViewSynchronization
#include "AssemblyU2DCSharp_ViewSynchronization.h"
// OnSerializeTransform
#include "AssemblyU2DCSharp_OnSerializeTransform.h"
// OnSerializeRigidBody
#include "AssemblyU2DCSharp_OnSerializeRigidBody.h"
// OwnershipOption
#include "AssemblyU2DCSharp_OwnershipOption.h"
// PhotonView
struct PhotonView_t170  : public MonoBehaviour_t174
{
	// System.Int32 PhotonView::ownerId
	int32_t ___ownerId;
	// System.Int32 PhotonView::group
	int32_t ___group;
	// System.Boolean PhotonView::mixedModeIsReliable
	bool ___mixedModeIsReliable;
	// System.Int32 PhotonView::prefixBackup
	int32_t ___prefixBackup;
	// System.Object[] PhotonView::instantiationDataField
	ObjectU5BU5D_t5* ___instantiationDataField;
	// System.Object[] PhotonView::lastOnSerializeDataSent
	ObjectU5BU5D_t5* ___lastOnSerializeDataSent;
	// System.Object[] PhotonView::lastOnSerializeDataReceived
	ObjectU5BU5D_t5* ___lastOnSerializeDataReceived;
	// UnityEngine.Component PhotonView::observed
	Component_t105 * ___observed;
	// ViewSynchronization PhotonView::synchronization
	int32_t ___synchronization;
	// OnSerializeTransform PhotonView::onSerializeTransformOption
	int32_t ___onSerializeTransformOption;
	// OnSerializeRigidBody PhotonView::onSerializeRigidBodyOption
	int32_t ___onSerializeRigidBodyOption;
	// OwnershipOption PhotonView::ownershipTransfer
	int32_t ___ownershipTransfer;
	// System.Collections.Generic.List`1<UnityEngine.Component> PhotonView::ObservedComponents
	List_1_t313 * ___ObservedComponents;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Component,System.Reflection.MethodInfo> PhotonView::m_OnSerializeMethodInfos
	Dictionary_2_t314 * ___m_OnSerializeMethodInfos;
	// System.Boolean PhotonView::ObservedComponentsFoldoutOpen
	bool ___ObservedComponentsFoldoutOpen;
	// System.Int32 PhotonView::viewIdField
	int32_t ___viewIdField;
	// System.Int32 PhotonView::instantiationId
	int32_t ___instantiationId;
	// System.Boolean PhotonView::didAwake
	bool ___didAwake;
	// System.Boolean PhotonView::isRuntimeInstantiated
	bool ___isRuntimeInstantiated;
	// System.Boolean PhotonView::destroyedByPhotonNetworkOrQuit
	bool ___destroyedByPhotonNetworkOrQuit;
	// System.Reflection.MethodInfo PhotonView::OnSerializeMethodInfo
	MethodInfo_t292 * ___OnSerializeMethodInfo;
	// System.Boolean PhotonView::failedToFindOnSerialize
	bool ___failedToFindOnSerialize;
};
