#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t58;
// System.String
struct String_t;
// UnityEngine.Coroutine
struct Coroutine_t91;
struct Coroutine_t91_marshaled;
// System.Collections.IEnumerator
struct IEnumerator_t60;
// System.Object
struct Object_t;

// System.Void UnityEngine.MonoBehaviour::.ctor()
 void MonoBehaviour__ctor_m482 (MonoBehaviour_t58 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::Internal_CancelInvokeAll()
 void MonoBehaviour_Internal_CancelInvokeAll_m8588 (MonoBehaviour_t58 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::Invoke(System.String,System.Single)
 void MonoBehaviour_Invoke_m2719 (MonoBehaviour_t58 * __this, String_t* ___methodName, float ___time, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::InvokeRepeating(System.String,System.Single,System.Single)
 void MonoBehaviour_InvokeRepeating_m2746 (MonoBehaviour_t58 * __this, String_t* ___methodName, float ___time, float ___repeatRate, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::CancelInvoke()
 void MonoBehaviour_CancelInvoke_m2747 (MonoBehaviour_t58 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
 Coroutine_t91 * MonoBehaviour_StartCoroutine_m2033 (MonoBehaviour_t58 * __this, Object_t * ___routine, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine_Auto(System.Collections.IEnumerator)
 Coroutine_t91 * MonoBehaviour_StartCoroutine_Auto_m8589 (MonoBehaviour_t58 * __this, Object_t * ___routine, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.String,System.Object)
 Coroutine_t91 * MonoBehaviour_StartCoroutine_m8590 (MonoBehaviour_t58 * __this, String_t* ___methodName, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.String)
 Coroutine_t91 * MonoBehaviour_StartCoroutine_m481 (MonoBehaviour_t58 * __this, String_t* ___methodName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(System.String)
 void MonoBehaviour_StopCoroutine_m614 (MonoBehaviour_t58 * __this, String_t* ___methodName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(System.Collections.IEnumerator)
 void MonoBehaviour_StopCoroutine_m8591 (MonoBehaviour_t58 * __this, Object_t * ___routine, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(UnityEngine.Coroutine)
 void MonoBehaviour_StopCoroutine_m4403 (MonoBehaviour_t58 * __this, Coroutine_t91 * ___routine, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::StopCoroutineViaEnumerator_Auto(System.Collections.IEnumerator)
 void MonoBehaviour_StopCoroutineViaEnumerator_Auto_m8592 (MonoBehaviour_t58 * __this, Object_t * ___routine, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::StopCoroutine_Auto(UnityEngine.Coroutine)
 void MonoBehaviour_StopCoroutine_Auto_m8593 (MonoBehaviour_t58 * __this, Coroutine_t91 * ___routine, MethodInfo* method) IL2CPP_METHOD_ATTR;
