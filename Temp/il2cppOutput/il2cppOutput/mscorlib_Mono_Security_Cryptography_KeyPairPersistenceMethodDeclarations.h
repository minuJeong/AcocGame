#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Cryptography.KeyPairPersistence
struct KeyPairPersistence_t3242;
// System.String
struct String_t;
// System.Security.Cryptography.CspParameters
struct CspParameters_t3241;

// System.Void Mono.Security.Cryptography.KeyPairPersistence::.ctor(System.Security.Cryptography.CspParameters)
 void KeyPairPersistence__ctor_m11411 (KeyPairPersistence_t3242 * __this, CspParameters_t3241 * ___parameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.KeyPairPersistence::.ctor(System.Security.Cryptography.CspParameters,System.String)
 void KeyPairPersistence__ctor_m11412 (KeyPairPersistence_t3242 * __this, CspParameters_t3241 * ___parameters, String_t* ___keyPair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.KeyPairPersistence::.cctor()
 void KeyPairPersistence__cctor_m11413 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Cryptography.KeyPairPersistence::get_Filename()
 String_t* KeyPairPersistence_get_Filename_m11414 (KeyPairPersistence_t3242 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Cryptography.KeyPairPersistence::get_KeyValue()
 String_t* KeyPairPersistence_get_KeyValue_m11415 (KeyPairPersistence_t3242 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.KeyPairPersistence::set_KeyValue(System.String)
 void KeyPairPersistence_set_KeyValue_m11416 (KeyPairPersistence_t3242 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::Load()
 bool KeyPairPersistence_Load_m11417 (KeyPairPersistence_t3242 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.KeyPairPersistence::Save()
 void KeyPairPersistence_Save_m11418 (KeyPairPersistence_t3242 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.KeyPairPersistence::Remove()
 void KeyPairPersistence_Remove_m11419 (KeyPairPersistence_t3242 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Cryptography.KeyPairPersistence::get_UserPath()
 String_t* KeyPairPersistence_get_UserPath_m11420 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Cryptography.KeyPairPersistence::get_MachinePath()
 String_t* KeyPairPersistence_get_MachinePath_m11421 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::_CanSecure(System.String)
 bool KeyPairPersistence__CanSecure_m11422 (Object_t * __this/* static, unused */, String_t* ___root, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::_ProtectUser(System.String)
 bool KeyPairPersistence__ProtectUser_m11423 (Object_t * __this/* static, unused */, String_t* ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::_ProtectMachine(System.String)
 bool KeyPairPersistence__ProtectMachine_m11424 (Object_t * __this/* static, unused */, String_t* ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::_IsUserProtected(System.String)
 bool KeyPairPersistence__IsUserProtected_m11425 (Object_t * __this/* static, unused */, String_t* ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::_IsMachineProtected(System.String)
 bool KeyPairPersistence__IsMachineProtected_m11426 (Object_t * __this/* static, unused */, String_t* ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::CanSecure(System.String)
 bool KeyPairPersistence_CanSecure_m11427 (Object_t * __this/* static, unused */, String_t* ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::ProtectUser(System.String)
 bool KeyPairPersistence_ProtectUser_m11428 (Object_t * __this/* static, unused */, String_t* ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::ProtectMachine(System.String)
 bool KeyPairPersistence_ProtectMachine_m11429 (Object_t * __this/* static, unused */, String_t* ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::IsUserProtected(System.String)
 bool KeyPairPersistence_IsUserProtected_m11430 (Object_t * __this/* static, unused */, String_t* ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::IsMachineProtected(System.String)
 bool KeyPairPersistence_IsMachineProtected_m11431 (Object_t * __this/* static, unused */, String_t* ___path, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::get_CanChange()
 bool KeyPairPersistence_get_CanChange_m11432 (KeyPairPersistence_t3242 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::get_UseDefaultKeyContainer()
 bool KeyPairPersistence_get_UseDefaultKeyContainer_m11433 (KeyPairPersistence_t3242 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.KeyPairPersistence::get_UseMachineKeyStore()
 bool KeyPairPersistence_get_UseMachineKeyStore_m11434 (KeyPairPersistence_t3242 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Cryptography.KeyPairPersistence::get_ContainerName()
 String_t* KeyPairPersistence_get_ContainerName_m11435 (KeyPairPersistence_t3242 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.CspParameters Mono.Security.Cryptography.KeyPairPersistence::Copy(System.Security.Cryptography.CspParameters)
 CspParameters_t3241 * KeyPairPersistence_Copy_m11436 (KeyPairPersistence_t3242 * __this, CspParameters_t3241 * ___p, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.KeyPairPersistence::FromXml(System.String)
 void KeyPairPersistence_FromXml_m11437 (KeyPairPersistence_t3242 * __this, String_t* ___xml, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Cryptography.KeyPairPersistence::ToXml()
 String_t* KeyPairPersistence_ToXml_m11438 (KeyPairPersistence_t3242 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
