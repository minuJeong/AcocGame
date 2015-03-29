#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t2637;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t2625;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t292;
// System.Object[]
struct ObjectU5BU5D_t5;

// System.Void UnityEngine.Events.InvokableCallList::.ctor()
 void InvokableCallList__ctor_m9011 (InvokableCallList_t2637 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.InvokableCallList::AddPersistentInvokableCall(UnityEngine.Events.BaseInvokableCall)
 void InvokableCallList_AddPersistentInvokableCall_m9012 (InvokableCallList_t2637 * __this, BaseInvokableCall_t2625 * ___call, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.InvokableCallList::AddListener(UnityEngine.Events.BaseInvokableCall)
 void InvokableCallList_AddListener_m9013 (InvokableCallList_t2637 * __this, BaseInvokableCall_t2625 * ___call, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.InvokableCallList::RemoveListener(System.Object,System.Reflection.MethodInfo)
 void InvokableCallList_RemoveListener_m9014 (InvokableCallList_t2637 * __this, Object_t * ___targetObj, MethodInfo_t292 * ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.InvokableCallList::ClearPersistent()
 void InvokableCallList_ClearPersistent_m9015 (InvokableCallList_t2637 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.InvokableCallList::Invoke(System.Object[])
 void InvokableCallList_Invoke_m9016 (InvokableCallList_t2637 * __this, ObjectU5BU5D_t5* ___parameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
