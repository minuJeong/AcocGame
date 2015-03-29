#pragma once
#include <stdint.h>
// UnityEngine.AssetBundle
struct AssetBundle_t414;
// System.String
struct String_t;
// System.Type
struct Type_t;
// UnityEngine.AsyncOperation
#include "UnityEngine_UnityEngine_AsyncOperation.h"
// UnityEngine.AssetBundleRequest
struct AssetBundleRequest_t2456  : public AsyncOperation_t2455
{
	// UnityEngine.AssetBundle UnityEngine.AssetBundleRequest::m_AssetBundle
	AssetBundle_t414 * ___m_AssetBundle;
	// System.String UnityEngine.AssetBundleRequest::m_Path
	String_t* ___m_Path;
	// System.Type UnityEngine.AssetBundleRequest::m_Type
	Type_t * ___m_Type;
};
