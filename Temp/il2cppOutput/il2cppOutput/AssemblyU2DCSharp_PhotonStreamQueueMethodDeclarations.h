#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PhotonStreamQueue
struct PhotonStreamQueue_t308;
// System.Object
struct Object_t;
// PhotonStream
struct PhotonStream_t209;

// System.Void PhotonStreamQueue::.ctor(System.Int32)
 void PhotonStreamQueue__ctor_m1610 (PhotonStreamQueue_t308 * __this, int32_t ___sampleRate, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonStreamQueue::BeginWritePackage()
 void PhotonStreamQueue_BeginWritePackage_m1611 (PhotonStreamQueue_t308 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonStreamQueue::Reset()
 void PhotonStreamQueue_Reset_m1612 (PhotonStreamQueue_t308 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonStreamQueue::SendNext(System.Object)
 void PhotonStreamQueue_SendNext_m1613 (PhotonStreamQueue_t308 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonStreamQueue::HasQueuedObjects()
 bool PhotonStreamQueue_HasQueuedObjects_m1614 (PhotonStreamQueue_t308 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object PhotonStreamQueue::ReceiveNext()
 Object_t * PhotonStreamQueue_ReceiveNext_m1615 (PhotonStreamQueue_t308 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonStreamQueue::Serialize(PhotonStream)
 void PhotonStreamQueue_Serialize_m1616 (PhotonStreamQueue_t308 * __this, PhotonStream_t209 * ___stream, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonStreamQueue::Deserialize(PhotonStream)
 void PhotonStreamQueue_Deserialize_m1617 (PhotonStreamQueue_t308 * __this, PhotonStream_t209 * ___stream, MethodInfo* method) IL2CPP_METHOD_ATTR;
