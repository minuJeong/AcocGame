#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SendMouseEvents
struct SendMouseEvents_t2605;
// UnityEngine.SendMouseEvents/HitInfo
#include "UnityEngine_UnityEngine_SendMouseEvents_HitInfo.h"

// System.Void UnityEngine.SendMouseEvents::.cctor()
 void SendMouseEvents__cctor_m8913 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SendMouseEvents::DoSendMouseEvents(System.Int32,System.Int32)
 void SendMouseEvents_DoSendMouseEvents_m8914 (Object_t * __this/* static, unused */, int32_t ___mouseUsed, int32_t ___skipRTCameras, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SendMouseEvents::SendEvents(System.Int32,UnityEngine.SendMouseEvents/HitInfo)
 void SendMouseEvents_SendEvents_m8915 (Object_t * __this/* static, unused */, int32_t ___i, HitInfo_t2603  ___hit, MethodInfo* method) IL2CPP_METHOD_ATTR;
