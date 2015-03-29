#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ExitGames.Client.Photon.CustomType
struct CustomType_t2394;
// System.Type
struct Type_t;
// ExitGames.Client.Photon.SerializeMethod
struct SerializeMethod_t2383;
// ExitGames.Client.Photon.DeserializeMethod
struct DeserializeMethod_t2384;
// ExitGames.Client.Photon.SerializeStreamMethod
struct SerializeStreamMethod_t468;
// ExitGames.Client.Photon.DeserializeStreamMethod
struct DeserializeStreamMethod_t469;

// System.Void ExitGames.Client.Photon.CustomType::.ctor(System.Type,System.Byte,ExitGames.Client.Photon.SerializeMethod,ExitGames.Client.Photon.DeserializeMethod)
 void CustomType__ctor_m7480 (CustomType_t2394 * __this, Type_t * ___type, uint8_t ___code, SerializeMethod_t2383 * ___serializeFunction, DeserializeMethod_t2384 * ___deserializeFunction, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.CustomType::.ctor(System.Type,System.Byte,ExitGames.Client.Photon.SerializeStreamMethod,ExitGames.Client.Photon.DeserializeStreamMethod)
 void CustomType__ctor_m7481 (CustomType_t2394 * __this, Type_t * ___type, uint8_t ___code, SerializeStreamMethod_t468 * ___serializeFunction, DeserializeStreamMethod_t469 * ___deserializeFunction, MethodInfo* method) IL2CPP_METHOD_ATTR;
