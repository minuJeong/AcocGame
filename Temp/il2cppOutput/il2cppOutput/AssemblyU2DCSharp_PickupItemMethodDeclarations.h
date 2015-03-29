#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PickupItem
struct PickupItem_t202;
// UnityEngine.Collider
struct Collider_t200;
// PhotonStream
struct PhotonStream_t209;
// PhotonMessageInfo
struct PhotonMessageInfo_t210;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void PickupItem::.ctor()
 void PickupItem__ctor_m1832 (PickupItem_t202 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupItem::.cctor()
 void PickupItem__cctor_m1833 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PickupItem::get_ViewID()
 int32_t PickupItem_get_ViewID_m1834 (PickupItem_t202 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupItem::OnTriggerEnter(UnityEngine.Collider)
 void PickupItem_OnTriggerEnter_m1835 (PickupItem_t202 * __this, Collider_t200 * ___other, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupItem::OnPhotonSerializeView(PhotonStream,PhotonMessageInfo)
 void PickupItem_OnPhotonSerializeView_m1836 (PickupItem_t202 * __this, PhotonStream_t209 * ___stream, PhotonMessageInfo_t210 * ___info, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupItem::Pickup()
 void PickupItem_Pickup_m1837 (PickupItem_t202 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupItem::Drop()
 void PickupItem_Drop_m1838 (PickupItem_t202 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupItem::Drop(UnityEngine.Vector3)
 void PickupItem_Drop_m1839 (PickupItem_t202 * __this, Vector3_t31  ___newPosition, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupItem::PunPickup(PhotonMessageInfo)
 void PickupItem_PunPickup_m1840 (PickupItem_t202 * __this, PhotonMessageInfo_t210 * ___msgInfo, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupItem::PickedUp(System.Single)
 void PickupItem_PickedUp_m1841 (PickupItem_t202 * __this, float ___timeUntilRespawn, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupItem::PunRespawn(UnityEngine.Vector3)
 void PickupItem_PunRespawn_m1842 (PickupItem_t202 * __this, Vector3_t31  ___pos, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PickupItem::PunRespawn()
 void PickupItem_PunRespawn_m1843 (PickupItem_t202 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
