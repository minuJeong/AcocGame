#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// iTween/CRSpline
struct CRSpline_t33;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t32;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void iTween/CRSpline::.ctor(UnityEngine.Vector3[])
 void CRSpline__ctor_m76 (CRSpline_t33 * __this, Vector3U5BU5D_t32* ___pts, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 iTween/CRSpline::Interp(System.Single)
 Vector3_t31  CRSpline_Interp_m77 (CRSpline_t33 * __this, float ___t, MethodInfo* method) IL2CPP_METHOD_ATTR;
