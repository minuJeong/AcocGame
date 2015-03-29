#pragma once
#include <stdint.h>
// System.Collections.Generic.List`1<System.Collections.Hashtable>
struct List_1_t46;
// UnityEngine.GameObject
struct GameObject_t47;
// System.String
struct String_t;
// System.Collections.Hashtable
struct Hashtable_t48;
// iTween/EasingFunction
struct EasingFunction_t37;
// iTween/ApplyTween
struct ApplyTween_t41;
// UnityEngine.AudioSource
struct AudioSource_t49;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t32;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t50;
// UnityEngine.Color[,]
struct ColorU5BU2CU5D_t52;
// System.Single[]
struct SingleU5BU5D_t53;
// UnityEngine.Rect[]
struct RectU5BU5D_t54;
// iTween/CRSpline
struct CRSpline_t33;
// UnityEngine.Transform
struct Transform_t56;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t57;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// iTween/EaseType
#include "AssemblyU2DCSharpU2Dfirstpass_iTween_EaseType.h"
// iTween/LoopType
#include "AssemblyU2DCSharpU2Dfirstpass_iTween_LoopType.h"
// UnityEngine.Space
#include "UnityEngine_UnityEngine_Space.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// iTween/NamedValueColor
#include "AssemblyU2DCSharpU2Dfirstpass_iTween_NamedValueColor.h"
// iTween
struct iTween_t42  : public MonoBehaviour_t58
{
	// System.String iTween::id
	String_t* ___id;
	// System.String iTween::type
	String_t* ___type;
	// System.String iTween::method
	String_t* ___method;
	// iTween/EaseType iTween::easeType
	int32_t ___easeType;
	// System.Single iTween::time
	float ___time;
	// System.Single iTween::delay
	float ___delay;
	// iTween/LoopType iTween::loopType
	int32_t ___loopType;
	// System.Boolean iTween::isRunning
	bool ___isRunning;
	// System.Boolean iTween::isPaused
	bool ___isPaused;
	// System.String iTween::_name
	String_t* ____name;
	// System.Single iTween::runningTime
	float ___runningTime;
	// System.Single iTween::percentage
	float ___percentage;
	// System.Single iTween::delayStarted
	float ___delayStarted;
	// System.Boolean iTween::kinematic
	bool ___kinematic;
	// System.Boolean iTween::isLocal
	bool ___isLocal;
	// System.Boolean iTween::loop
	bool ___loop;
	// System.Boolean iTween::reverse
	bool ___reverse;
	// System.Boolean iTween::wasPaused
	bool ___wasPaused;
	// System.Boolean iTween::physics
	bool ___physics;
	// System.Collections.Hashtable iTween::tweenArguments
	Hashtable_t48 * ___tweenArguments;
	// UnityEngine.Space iTween::space
	int32_t ___space;
	// iTween/EasingFunction iTween::ease
	EasingFunction_t37 * ___ease;
	// iTween/ApplyTween iTween::apply
	ApplyTween_t41 * ___apply;
	// UnityEngine.AudioSource iTween::audioSource
	AudioSource_t49 * ___audioSource;
	// UnityEngine.Vector3[] iTween::vector3s
	Vector3U5BU5D_t32* ___vector3s;
	// UnityEngine.Vector2[] iTween::vector2s
	Vector2U5BU5D_t50* ___vector2s;
	// UnityEngine.Color[,] iTween::colors
	ColorU5BU2CU5D_t52* ___colors;
	// System.Single[] iTween::floats
	SingleU5BU5D_t53* ___floats;
	// UnityEngine.Rect[] iTween::rects
	RectU5BU5D_t54* ___rects;
	// iTween/CRSpline iTween::path
	CRSpline_t33 * ___path;
	// UnityEngine.Vector3 iTween::preUpdate
	Vector3_t31  ___preUpdate;
	// UnityEngine.Vector3 iTween::postUpdate
	Vector3_t31  ___postUpdate;
	// iTween/NamedValueColor iTween::namedcolorvalue
	int32_t ___namedcolorvalue;
	// System.Single iTween::lastRealTime
	float ___lastRealTime;
	// System.Boolean iTween::useRealTime
	bool ___useRealTime;
	// UnityEngine.Transform iTween::thisTransform
	Transform_t56 * ___thisTransform;
};
struct iTween_t42_StaticFields{
	// System.Collections.Generic.List`1<System.Collections.Hashtable> iTween::tweens
	List_1_t46 * ___tweens;
	// UnityEngine.GameObject iTween::cameraFade
	GameObject_t47 * ___cameraFade;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> iTween::<>f__switch$map0
	Dictionary_2_t57 * ___U3CU3Ef__switch$map0;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> iTween::<>f__switch$map1
	Dictionary_2_t57 * ___U3CU3Ef__switch$map1;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> iTween::<>f__switch$map2
	Dictionary_2_t57 * ___U3CU3Ef__switch$map2;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> iTween::<>f__switch$map3
	Dictionary_2_t57 * ___U3CU3Ef__switch$map3;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> iTween::<>f__switch$map4
	Dictionary_2_t57 * ___U3CU3Ef__switch$map4;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> iTween::<>f__switch$map5
	Dictionary_2_t57 * ___U3CU3Ef__switch$map5;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> iTween::<>f__switch$map6
	Dictionary_2_t57 * ___U3CU3Ef__switch$map6;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> iTween::<>f__switch$map7
	Dictionary_2_t57 * ___U3CU3Ef__switch$map7;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> iTween::<>f__switch$map8
	Dictionary_2_t57 * ___U3CU3Ef__switch$map8;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> iTween::<>f__switch$map9
	Dictionary_2_t57 * ___U3CU3Ef__switch$map9;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> iTween::<>f__switch$mapA
	Dictionary_2_t57 * ___U3CU3Ef__switch$mapA;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> iTween::<>f__switch$mapB
	Dictionary_2_t57 * ___U3CU3Ef__switch$mapB;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> iTween::<>f__switch$mapC
	Dictionary_2_t57 * ___U3CU3Ef__switch$mapC;
};
