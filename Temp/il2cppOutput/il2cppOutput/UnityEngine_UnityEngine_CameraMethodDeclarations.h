#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Camera
struct Camera_t204;
// UnityEngine.RenderTexture
struct RenderTexture_t2489;
// UnityEngine.Camera[]
struct CameraU5BU5D_t2541;
// UnityEngine.GameObject
struct GameObject_t47;
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// UnityEngine.CameraClearFlags
#include "UnityEngine_UnityEngine_CameraClearFlags.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_Ray.h"

// System.Single UnityEngine.Camera::get_nearClipPlane()
 float Camera_get_nearClipPlane_m4121 (Camera_t204 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Camera::get_farClipPlane()
 float Camera_get_farClipPlane_m4120 (Camera_t204 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Camera::get_depth()
 float Camera_get_depth_m4002 (Camera_t204 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Camera::get_cullingMask()
 int32_t Camera_get_cullingMask_m4131 (Camera_t204 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Camera::get_eventMask()
 int32_t Camera_get_eventMask_m8535 (Camera_t204 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::INTERNAL_get_pixelRect(UnityEngine.Rect&)
 void Camera_INTERNAL_get_pixelRect_m8536 (Camera_t204 * __this, Rect_t55 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.Camera::get_pixelRect()
 Rect_t55  Camera_get_pixelRect_m8537 (Camera_t204 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RenderTexture UnityEngine.Camera::get_targetTexture()
 RenderTexture_t2489 * Camera_get_targetTexture_m8538 (Camera_t204 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.CameraClearFlags UnityEngine.Camera::get_clearFlags()
 int32_t Camera_get_clearFlags_m8539 (Camera_t204 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Camera::WorldToScreenPoint(UnityEngine.Vector3)
 Vector3_t31  Camera_WorldToScreenPoint_m2795 (Camera_t204 * __this, Vector3_t31  ___position, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Camera::INTERNAL_CALL_WorldToScreenPoint(UnityEngine.Camera,UnityEngine.Vector3&)
 Vector3_t31  Camera_INTERNAL_CALL_WorldToScreenPoint_m8540 (Object_t * __this/* static, unused */, Camera_t204 * ___self, Vector3_t31 * ___position, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Camera::ScreenToViewportPoint(UnityEngine.Vector3)
 Vector3_t31  Camera_ScreenToViewportPoint_m4246 (Camera_t204 * __this, Vector3_t31  ___position, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Camera::INTERNAL_CALL_ScreenToViewportPoint(UnityEngine.Camera,UnityEngine.Vector3&)
 Vector3_t31  Camera_INTERNAL_CALL_ScreenToViewportPoint_m8541 (Object_t * __this/* static, unused */, Camera_t204 * ___self, Vector3_t31 * ___position, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Ray UnityEngine.Camera::ViewportPointToRay(UnityEngine.Vector3)
 Ray_t396  Camera_ViewportPointToRay_m2313 (Camera_t204 * __this, Vector3_t31  ___position, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Ray UnityEngine.Camera::INTERNAL_CALL_ViewportPointToRay(UnityEngine.Camera,UnityEngine.Vector3&)
 Ray_t396  Camera_INTERNAL_CALL_ViewportPointToRay_m8542 (Object_t * __this/* static, unused */, Camera_t204 * ___self, Vector3_t31 * ___position, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Ray UnityEngine.Camera::ScreenPointToRay(UnityEngine.Vector3)
 Ray_t396  Camera_ScreenPointToRay_m2380 (Camera_t204 * __this, Vector3_t31  ___position, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Ray UnityEngine.Camera::INTERNAL_CALL_ScreenPointToRay(UnityEngine.Camera,UnityEngine.Vector3&)
 Ray_t396  Camera_INTERNAL_CALL_ScreenPointToRay_m8543 (Object_t * __this/* static, unused */, Camera_t204 * ___self, Vector3_t31 * ___position, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UnityEngine.Camera::get_main()
 Camera_t204 * Camera_get_main_m2219 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Camera::get_allCamerasCount()
 int32_t Camera_get_allCamerasCount_m8544 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Camera::GetAllCameras(UnityEngine.Camera[])
 int32_t Camera_GetAllCameras_m8545 (Object_t * __this/* static, unused */, CameraU5BU5D_t2541* ___cameras, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::FireOnPreCull(UnityEngine.Camera)
 void Camera_FireOnPreCull_m8546 (Object_t * __this/* static, unused */, Camera_t204 * ___cam, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::FireOnPreRender(UnityEngine.Camera)
 void Camera_FireOnPreRender_m8547 (Object_t * __this/* static, unused */, Camera_t204 * ___cam, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::FireOnPostRender(UnityEngine.Camera)
 void Camera_FireOnPostRender_m8548 (Object_t * __this/* static, unused */, Camera_t204 * ___cam, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Camera::RaycastTry(UnityEngine.Ray,System.Single,System.Int32)
 GameObject_t47 * Camera_RaycastTry_m8549 (Camera_t204 * __this, Ray_t396  ___ray, float ___distance, int32_t ___layerMask, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Camera::INTERNAL_CALL_RaycastTry(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32)
 GameObject_t47 * Camera_INTERNAL_CALL_RaycastTry_m8550 (Object_t * __this/* static, unused */, Camera_t204 * ___self, Ray_t396 * ___ray, float ___distance, int32_t ___layerMask, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Camera::RaycastTry2D(UnityEngine.Ray,System.Single,System.Int32)
 GameObject_t47 * Camera_RaycastTry2D_m8551 (Camera_t204 * __this, Ray_t396  ___ray, float ___distance, int32_t ___layerMask, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Camera::INTERNAL_CALL_RaycastTry2D(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32)
 GameObject_t47 * Camera_INTERNAL_CALL_RaycastTry2D_m8552 (Object_t * __this/* static, unused */, Camera_t204 * ___self, Ray_t396 * ___ray, float ___distance, int32_t ___layerMask, MethodInfo* method) IL2CPP_METHOD_ATTR;
