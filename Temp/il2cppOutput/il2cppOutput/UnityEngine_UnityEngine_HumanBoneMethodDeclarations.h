#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.HumanBone
struct HumanBone_t2575;
struct HumanBone_t2575_marshaled;
// System.String
struct String_t;

// System.String UnityEngine.HumanBone::get_boneName()
 String_t* HumanBone_get_boneName_m8773 (HumanBone_t2575 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.HumanBone::set_boneName(System.String)
 void HumanBone_set_boneName_m8774 (HumanBone_t2575 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.HumanBone::get_humanName()
 String_t* HumanBone_get_humanName_m8775 (HumanBone_t2575 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.HumanBone::set_humanName(System.String)
 void HumanBone_set_humanName_m8776 (HumanBone_t2575 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
void HumanBone_t2575_marshal(const HumanBone_t2575& unmarshaled, HumanBone_t2575_marshaled& marshaled);
void HumanBone_t2575_marshal_back(const HumanBone_t2575_marshaled& marshaled, HumanBone_t2575& unmarshaled);
void HumanBone_t2575_marshal_cleanup(HumanBone_t2575_marshaled& marshaled);
