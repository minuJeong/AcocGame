#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PhotonMessageInfo
struct PhotonMessageInfo_t210;
// PhotonPlayer
struct PhotonPlayer_t230;
// PhotonView
struct PhotonView_t170;
// System.String
struct String_t;

// System.Void PhotonMessageInfo::.ctor()
 void PhotonMessageInfo__ctor_m1378 (PhotonMessageInfo_t210 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonMessageInfo::.ctor(PhotonPlayer,System.Int32,PhotonView)
 void PhotonMessageInfo__ctor_m1379 (PhotonMessageInfo_t210 * __this, PhotonPlayer_t230 * ___player, int32_t ___timestamp, PhotonView_t170 * ___view, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double PhotonMessageInfo::get_timestamp()
 double PhotonMessageInfo_get_timestamp_m1380 (PhotonMessageInfo_t210 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PhotonMessageInfo::ToString()
 String_t* PhotonMessageInfo_ToString_m1381 (PhotonMessageInfo_t210 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
