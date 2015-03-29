#pragma once
#include <stdint.h>
// System.String
struct String_t;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// FB/RemoteFacebookLoader
struct RemoteFacebookLoader_t131  : public MonoBehaviour_t58
{
};
struct RemoteFacebookLoader_t131_StaticFields{
	// System.String FB/RemoteFacebookLoader::facebookNamespace
	String_t* ___facebookNamespace;
	// System.Int32 FB/RemoteFacebookLoader::maxRetryLoadCount
	int32_t ___maxRetryLoadCount;
	// System.Int32 FB/RemoteFacebookLoader::retryLoadCount
	int32_t ___retryLoadCount;
};
