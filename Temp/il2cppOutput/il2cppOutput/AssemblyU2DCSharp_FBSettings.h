#pragma once
#include <stdint.h>
// System.String
struct String_t;
// FBSettings
struct FBSettings_t161;
// System.String[]
struct StringU5BU5D_t4;
// UnityEngine.ScriptableObject
#include "UnityEngine_UnityEngine_ScriptableObject.h"
// FBSettings
struct FBSettings_t161  : public ScriptableObject_t151
{
	// System.Int32 FBSettings::selectedAppIndex
	int32_t ___selectedAppIndex;
	// System.String[] FBSettings::appIds
	StringU5BU5D_t4* ___appIds;
	// System.String[] FBSettings::appLabels
	StringU5BU5D_t4* ___appLabels;
	// System.Boolean FBSettings::cookie
	bool ___cookie;
	// System.Boolean FBSettings::logging
	bool ___logging;
	// System.Boolean FBSettings::status
	bool ___status;
	// System.Boolean FBSettings::xfbml
	bool ___xfbml;
	// System.Boolean FBSettings::frictionlessRequests
	bool ___frictionlessRequests;
	// System.String FBSettings::iosURLSuffix
	String_t* ___iosURLSuffix;
};
struct FBSettings_t161_StaticFields{
	// System.String FBSettings::facebookSettingsAssetName
	String_t* ___facebookSettingsAssetName;
	// System.String FBSettings::facebookSettingsPath
	String_t* ___facebookSettingsPath;
	// System.String FBSettings::facebookSettingsAssetExtension
	String_t* ___facebookSettingsAssetExtension;
	// FBSettings FBSettings::instance
	FBSettings_t161 * ___instance;
};
