#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PhotonView
struct PhotonView_t170;
// System.Object[]
struct ObjectU5BU5D_t5;
// PhotonPlayer
struct PhotonPlayer_t230;
// PhotonStream
struct PhotonStream_t209;
// PhotonMessageInfo
struct PhotonMessageInfo_t210;
// UnityEngine.Component
struct Component_t105;
// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t47;
// PhotonTargets
#include "AssemblyU2DCSharp_PhotonTargets.h"

// System.Void PhotonView::.ctor()
 void PhotonView__ctor_m1618 (PhotonView_t170 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonView::get_prefix()
 int32_t PhotonView_get_prefix_m1619 (PhotonView_t170 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonView::set_prefix(System.Int32)
 void PhotonView_set_prefix_m1620 (PhotonView_t170 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] PhotonView::get_instantiationData()
 ObjectU5BU5D_t5* PhotonView_get_instantiationData_m1621 (PhotonView_t170 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonView::set_instantiationData(System.Object[])
 void PhotonView_set_instantiationData_m1622 (PhotonView_t170 * __this, ObjectU5BU5D_t5* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonView::get_viewID()
 int32_t PhotonView_get_viewID_m1623 (PhotonView_t170 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonView::set_viewID(System.Int32)
 void PhotonView_set_viewID_m1624 (PhotonView_t170 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonView::get_isSceneView()
 bool PhotonView_get_isSceneView_m1625 (PhotonView_t170 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PhotonPlayer PhotonView::get_owner()
 PhotonPlayer_t230 * PhotonView_get_owner_m1626 (PhotonView_t170 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonView::get_OwnerActorNr()
 int32_t PhotonView_get_OwnerActorNr_m1627 (PhotonView_t170 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonView::get_isOwnerActive()
 bool PhotonView_get_isOwnerActive_m1628 (PhotonView_t170 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonView::get_CreatorActorNr()
 int32_t PhotonView_get_CreatorActorNr_m1629 (PhotonView_t170 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonView::get_isMine()
 bool PhotonView_get_isMine_m1630 (PhotonView_t170 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonView::Awake()
 void PhotonView_Awake_m1631 (PhotonView_t170 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonView::RequestOwnership()
 void PhotonView_RequestOwnership_m1632 (PhotonView_t170 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonView::TransferOwnership(PhotonPlayer)
 void PhotonView_TransferOwnership_m1633 (PhotonView_t170 * __this, PhotonPlayer_t230 * ___newOwner, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonView::TransferOwnership(System.Int32)
 void PhotonView_TransferOwnership_m1634 (PhotonView_t170 * __this, int32_t ___newOwnerId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonView::OnApplicationQuit()
 void PhotonView_OnApplicationQuit_m1635 (PhotonView_t170 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonView::OnDestroy()
 void PhotonView_OnDestroy_m1636 (PhotonView_t170 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonView::SerializeView(PhotonStream,PhotonMessageInfo)
 void PhotonView_SerializeView_m1637 (PhotonView_t170 * __this, PhotonStream_t209 * ___stream, PhotonMessageInfo_t210 * ___info, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonView::DeserializeView(PhotonStream,PhotonMessageInfo)
 void PhotonView_DeserializeView_m1638 (PhotonView_t170 * __this, PhotonStream_t209 * ___stream, PhotonMessageInfo_t210 * ___info, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonView::DeserializeComponent(UnityEngine.Component,PhotonStream,PhotonMessageInfo)
 void PhotonView_DeserializeComponent_m1639 (PhotonView_t170 * __this, Component_t105 * ___component, PhotonStream_t209 * ___stream, PhotonMessageInfo_t210 * ___info, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonView::SerializeComponent(UnityEngine.Component,PhotonStream,PhotonMessageInfo)
 void PhotonView_SerializeComponent_m1640 (PhotonView_t170 * __this, Component_t105 * ___component, PhotonStream_t209 * ___stream, PhotonMessageInfo_t210 * ___info, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonView::ExecuteComponentOnSerialize(UnityEngine.Component,PhotonStream,PhotonMessageInfo)
 void PhotonView_ExecuteComponentOnSerialize_m1641 (PhotonView_t170 * __this, Component_t105 * ___component, PhotonStream_t209 * ___stream, PhotonMessageInfo_t210 * ___info, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonView::RPC(System.String,PhotonTargets,System.Object[])
 void PhotonView_RPC_m1642 (PhotonView_t170 * __this, String_t* ___methodName, int32_t ___target, ObjectU5BU5D_t5* ___parameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonView::RpcSecure(System.String,PhotonTargets,System.Boolean,System.Object[])
 void PhotonView_RpcSecure_m1643 (PhotonView_t170 * __this, String_t* ___methodName, int32_t ___target, bool ___encrypt, ObjectU5BU5D_t5* ___parameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonView::RPC(System.String,PhotonPlayer,System.Object[])
 void PhotonView_RPC_m1644 (PhotonView_t170 * __this, String_t* ___methodName, PhotonPlayer_t230 * ___targetPlayer, ObjectU5BU5D_t5* ___parameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonView::RpcSecure(System.String,PhotonPlayer,System.Boolean,System.Object[])
 void PhotonView_RpcSecure_m1645 (PhotonView_t170 * __this, String_t* ___methodName, PhotonPlayer_t230 * ___targetPlayer, bool ___encrypt, ObjectU5BU5D_t5* ___parameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PhotonView PhotonView::Get(UnityEngine.Component)
 PhotonView_t170 * PhotonView_Get_m1646 (Object_t * __this/* static, unused */, Component_t105 * ___component, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PhotonView PhotonView::Get(UnityEngine.GameObject)
 PhotonView_t170 * PhotonView_Get_m1647 (Object_t * __this/* static, unused */, GameObject_t47 * ___gameObj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PhotonView PhotonView::Find(System.Int32)
 PhotonView_t170 * PhotonView_Find_m1648 (Object_t * __this/* static, unused */, int32_t ___viewID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PhotonView::ToString()
 String_t* PhotonView_ToString_m1649 (PhotonView_t170 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
