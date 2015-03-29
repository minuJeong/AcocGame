#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PhotonStream
struct PhotonStream_t209;
// System.Object[]
struct ObjectU5BU5D_t5;
// System.Object
struct Object_t;
// System.String
struct String_t;
// PhotonPlayer
struct PhotonPlayer_t230;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"

// System.Void PhotonStream::.ctor(System.Boolean,System.Object[])
 void PhotonStream__ctor_m1397 (PhotonStream_t209 * __this, bool ___write, ObjectU5BU5D_t5* ___incomingData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonStream::get_isWriting()
 bool PhotonStream_get_isWriting_m1398 (PhotonStream_t209 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonStream::get_isReading()
 bool PhotonStream_get_isReading_m1399 (PhotonStream_t209 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonStream::get_Count()
 int32_t PhotonStream_get_Count_m1400 (PhotonStream_t209 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object PhotonStream::ReceiveNext()
 Object_t * PhotonStream_ReceiveNext_m1401 (PhotonStream_t209 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object PhotonStream::PeekNext()
 Object_t * PhotonStream_PeekNext_m1402 (PhotonStream_t209 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonStream::SendNext(System.Object)
 void PhotonStream_SendNext_m1403 (PhotonStream_t209 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] PhotonStream::ToArray()
 ObjectU5BU5D_t5* PhotonStream_ToArray_m1404 (PhotonStream_t209 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonStream::Serialize(System.Boolean&)
 void PhotonStream_Serialize_m1405 (PhotonStream_t209 * __this, bool* ___myBool, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonStream::Serialize(System.Int32&)
 void PhotonStream_Serialize_m1406 (PhotonStream_t209 * __this, int32_t* ___myInt, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonStream::Serialize(System.String&)
 void PhotonStream_Serialize_m1407 (PhotonStream_t209 * __this, String_t** ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonStream::Serialize(System.Char&)
 void PhotonStream_Serialize_m1408 (PhotonStream_t209 * __this, uint16_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonStream::Serialize(System.Int16&)
 void PhotonStream_Serialize_m1409 (PhotonStream_t209 * __this, int16_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonStream::Serialize(System.Single&)
 void PhotonStream_Serialize_m1410 (PhotonStream_t209 * __this, float* ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonStream::Serialize(PhotonPlayer&)
 void PhotonStream_Serialize_m1411 (PhotonStream_t209 * __this, PhotonPlayer_t230 ** ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonStream::Serialize(UnityEngine.Vector3&)
 void PhotonStream_Serialize_m1412 (PhotonStream_t209 * __this, Vector3_t31 * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonStream::Serialize(UnityEngine.Vector2&)
 void PhotonStream_Serialize_m1413 (PhotonStream_t209 * __this, Vector2_t51 * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonStream::Serialize(UnityEngine.Quaternion&)
 void PhotonStream_Serialize_m1414 (PhotonStream_t209 * __this, Quaternion_t110 * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
