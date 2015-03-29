﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.DelegateSerializationHolder/DelegateEntry
struct DelegateEntry_t3695;
// System.Delegate
struct Delegate_t793;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2615;

// System.Void System.DelegateSerializationHolder/DelegateEntry::.ctor(System.Delegate,System.String)
 void DelegateEntry__ctor_m14363 (DelegateEntry_t3695 * __this, Delegate_t793 * ___del, String_t* ___targetLabel, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.DelegateSerializationHolder/DelegateEntry::DeserializeDelegate(System.Runtime.Serialization.SerializationInfo)
 Delegate_t793 * DelegateEntry_DeserializeDelegate_m14364 (DelegateEntry_t3695 * __this, SerializationInfo_t2615 * ___info, MethodInfo* method) IL2CPP_METHOD_ATTR;
