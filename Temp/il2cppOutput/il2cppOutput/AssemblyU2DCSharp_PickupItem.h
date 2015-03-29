#pragma once
#include <stdint.h>
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t58;
// System.Collections.Generic.HashSet`1<PickupItem>
struct HashSet_1_t360;
// Photon.MonoBehaviour
#include "AssemblyU2DCSharp_Photon_MonoBehaviour.h"
// PickupItem
struct PickupItem_t202  : public MonoBehaviour_t174
{
	// System.Single PickupItem::SecondsBeforeRespawn
	float ___SecondsBeforeRespawn;
	// System.Boolean PickupItem::PickupOnTrigger
	bool ___PickupOnTrigger;
	// System.Boolean PickupItem::PickupIsMine
	bool ___PickupIsMine;
	// UnityEngine.MonoBehaviour PickupItem::OnPickedUpCall
	MonoBehaviour_t58 * ___OnPickedUpCall;
	// System.Boolean PickupItem::SentPickup
	bool ___SentPickup;
	// System.Double PickupItem::TimeOfRespawn
	double ___TimeOfRespawn;
};
struct PickupItem_t202_StaticFields{
	// System.Collections.Generic.HashSet`1<PickupItem> PickupItem::DisabledPickupItems
	HashSet_1_t360 * ___DisabledPickupItems;
};
