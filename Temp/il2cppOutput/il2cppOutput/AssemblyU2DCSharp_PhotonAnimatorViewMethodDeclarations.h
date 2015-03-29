#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PhotonAnimatorView
struct PhotonAnimatorView_t194;
// System.String
struct String_t;
// System.Collections.Generic.List`1<PhotonAnimatorView/SynchronizedLayer>
struct List_1_t330;
// System.Collections.Generic.List`1<PhotonAnimatorView/SynchronizedParameter>
struct List_1_t329;
// PhotonStream
struct PhotonStream_t209;
// PhotonMessageInfo
struct PhotonMessageInfo_t210;
// PhotonAnimatorView/SynchronizeType
#include "AssemblyU2DCSharp_PhotonAnimatorView_SynchronizeType.h"
// PhotonAnimatorView/ParameterType
#include "AssemblyU2DCSharp_PhotonAnimatorView_ParameterType.h"

// System.Void PhotonAnimatorView::.ctor()
 void PhotonAnimatorView__ctor_m1720 (PhotonAnimatorView_t194 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonAnimatorView::Awake()
 void PhotonAnimatorView_Awake_m1721 (PhotonAnimatorView_t194 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonAnimatorView::Update()
 void PhotonAnimatorView_Update_m1722 (PhotonAnimatorView_t194 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonAnimatorView::DoesLayerSynchronizeTypeExist(System.Int32)
 bool PhotonAnimatorView_DoesLayerSynchronizeTypeExist_m1723 (PhotonAnimatorView_t194 * __this, int32_t ___layerIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonAnimatorView::DoesParameterSynchronizeTypeExist(System.String)
 bool PhotonAnimatorView_DoesParameterSynchronizeTypeExist_m1724 (PhotonAnimatorView_t194 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<PhotonAnimatorView/SynchronizedLayer> PhotonAnimatorView::GetSynchronizedLayers()
 List_1_t330 * PhotonAnimatorView_GetSynchronizedLayers_m1725 (PhotonAnimatorView_t194 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<PhotonAnimatorView/SynchronizedParameter> PhotonAnimatorView::GetSynchronizedParameters()
 List_1_t329 * PhotonAnimatorView_GetSynchronizedParameters_m1726 (PhotonAnimatorView_t194 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PhotonAnimatorView/SynchronizeType PhotonAnimatorView::GetLayerSynchronizeType(System.Int32)
 int32_t PhotonAnimatorView_GetLayerSynchronizeType_m1727 (PhotonAnimatorView_t194 * __this, int32_t ___layerIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PhotonAnimatorView/SynchronizeType PhotonAnimatorView::GetParameterSynchronizeType(System.String)
 int32_t PhotonAnimatorView_GetParameterSynchronizeType_m1728 (PhotonAnimatorView_t194 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonAnimatorView::SetLayerSynchronized(System.Int32,PhotonAnimatorView/SynchronizeType)
 void PhotonAnimatorView_SetLayerSynchronized_m1729 (PhotonAnimatorView_t194 * __this, int32_t ___layerIndex, int32_t ___synchronizeType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonAnimatorView::SetParameterSynchronized(System.String,PhotonAnimatorView/ParameterType,PhotonAnimatorView/SynchronizeType)
 void PhotonAnimatorView_SetParameterSynchronized_m1730 (PhotonAnimatorView_t194 * __this, String_t* ___name, int32_t ___type, int32_t ___synchronizeType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonAnimatorView::SerializeDataContinuously()
 void PhotonAnimatorView_SerializeDataContinuously_m1731 (PhotonAnimatorView_t194 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonAnimatorView::DeserializeDataContinuously()
 void PhotonAnimatorView_DeserializeDataContinuously_m1732 (PhotonAnimatorView_t194 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonAnimatorView::SerializeDataDiscretly(PhotonStream)
 void PhotonAnimatorView_SerializeDataDiscretly_m1733 (PhotonAnimatorView_t194 * __this, PhotonStream_t209 * ___stream, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonAnimatorView::DeserializeDataDiscretly(PhotonStream)
 void PhotonAnimatorView_DeserializeDataDiscretly_m1734 (PhotonAnimatorView_t194 * __this, PhotonStream_t209 * ___stream, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonAnimatorView::SerializeSynchronizationTypeState(PhotonStream)
 void PhotonAnimatorView_SerializeSynchronizationTypeState_m1735 (PhotonAnimatorView_t194 * __this, PhotonStream_t209 * ___stream, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonAnimatorView::DeserializeSynchronizationTypeState(PhotonStream)
 void PhotonAnimatorView_DeserializeSynchronizationTypeState_m1736 (PhotonAnimatorView_t194 * __this, PhotonStream_t209 * ___stream, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonAnimatorView::OnPhotonSerializeView(PhotonStream,PhotonMessageInfo)
 void PhotonAnimatorView_OnPhotonSerializeView_m1737 (PhotonAnimatorView_t194 * __this, PhotonStream_t209 * ___stream, PhotonMessageInfo_t210 * ___info, MethodInfo* method) IL2CPP_METHOD_ATTR;
