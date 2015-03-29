#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ExitGames.Client.Photon.SupportClass
struct SupportClass_t471;
// System.Byte[]
struct ByteU5BU5D_t21;
// System.Collections.Generic.List`1<System.Reflection.MethodInfo>
struct List_1_t483;
// System.Type
struct Type_t;
// System.Func`1<System.Boolean>
struct Func_1_t508;
// System.Exception
struct Exception_t107;
// System.IO.TextWriter
struct TextWriter_t920;
// System.String
struct String_t;
// System.Collections.IDictionary
struct IDictionary_t255;
// ExitGames.Client.Photon.Hashtable
struct Hashtable_t256;

// System.UInt32 ExitGames.Client.Photon.SupportClass::CalculateCrc(System.Byte[],System.Int32)
 uint32_t SupportClass_CalculateCrc_m7581 (Object_t * __this/* static, unused */, ByteU5BU5D_t21* ___buffer, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Reflection.MethodInfo> ExitGames.Client.Photon.SupportClass::GetMethods(System.Type,System.Type)
 List_1_t483 * SupportClass_GetMethods_m2503 (Object_t * __this/* static, unused */, Type_t * ___type, Type_t * ___attribute, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.SupportClass::GetTickCount()
 int32_t SupportClass_GetTickCount_m7582 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.SupportClass::CallInBackground(System.Func`1<System.Boolean>)
 void SupportClass_CallInBackground_m2594 (Object_t * __this/* static, unused */, Func_1_t508 * ___myThread, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.SupportClass::CallInBackground(System.Func`1<System.Boolean>,System.Int32)
 void SupportClass_CallInBackground_m7583 (Object_t * __this/* static, unused */, Func_1_t508 * ___myThread, int32_t ___millisecondsInterval, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.SupportClass::WriteStackTrace(System.Exception,System.IO.TextWriter)
 void SupportClass_WriteStackTrace_m7584 (Object_t * __this/* static, unused */, Exception_t107 * ___throwable, TextWriter_t920 * ___stream, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.SupportClass::WriteStackTrace(System.Exception)
 void SupportClass_WriteStackTrace_m7585 (Object_t * __this/* static, unused */, Exception_t107 * ___throwable, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.SupportClass::DictionaryToString(System.Collections.IDictionary)
 String_t* SupportClass_DictionaryToString_m2498 (Object_t * __this/* static, unused */, Object_t * ___dictionary, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.SupportClass::DictionaryToString(System.Collections.IDictionary,System.Boolean)
 String_t* SupportClass_DictionaryToString_m2419 (Object_t * __this/* static, unused */, Object_t * ___dictionary, bool ___includeTypes, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.SupportClass::HashtableToString(ExitGames.Client.Photon.Hashtable)
 String_t* SupportClass_HashtableToString_m7586 (Object_t * __this/* static, unused */, Hashtable_t256 * ___hash, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.SupportClass::NumberToByteArray(System.Byte[],System.Int32,System.Int16)
 void SupportClass_NumberToByteArray_m7587 (Object_t * __this/* static, unused */, ByteU5BU5D_t21* ___buffer, int32_t ___index, int16_t ___number, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.SupportClass::NumberToByteArray(System.Byte[],System.Int32,System.Int32)
 void SupportClass_NumberToByteArray_m7588 (Object_t * __this/* static, unused */, ByteU5BU5D_t21* ___buffer, int32_t ___index, int32_t ___number, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.SupportClass::ByteArrayToString(System.Byte[])
 String_t* SupportClass_ByteArrayToString_m7589 (Object_t * __this/* static, unused */, ByteU5BU5D_t21* ___list, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.SupportClass::.ctor()
 void SupportClass__ctor_m7590 (SupportClass_t471 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.SupportClass::.cctor()
 void SupportClass__cctor_m7591 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.SupportClass::<.cctor>b__3()
 int32_t SupportClass_U3C_cctorU3Eb__3_m7592 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
