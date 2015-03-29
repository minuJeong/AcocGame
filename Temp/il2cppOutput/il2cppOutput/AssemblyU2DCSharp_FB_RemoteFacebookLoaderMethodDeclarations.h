#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// FB/RemoteFacebookLoader
struct RemoteFacebookLoader_t131;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t60;
// FB/RemoteFacebookLoader/LoadedDllCallback
struct LoadedDllCallback_t146;
// Facebook.IFacebook
struct IFacebook_t129;

// System.Void FB/RemoteFacebookLoader::.ctor()
 void RemoteFacebookLoader__ctor_m761 (RemoteFacebookLoader_t131 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FB/RemoteFacebookLoader::.cctor()
 void RemoteFacebookLoader__cctor_m762 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator FB/RemoteFacebookLoader::LoadFacebookClass(System.String,FB/RemoteFacebookLoader/LoadedDllCallback)
 Object_t * RemoteFacebookLoader_LoadFacebookClass_m763 (Object_t * __this/* static, unused */, String_t* ___className, LoadedDllCallback_t146 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String FB/RemoteFacebookLoader::get_className()
// System.Collections.IEnumerator FB/RemoteFacebookLoader::Start()
 Object_t * RemoteFacebookLoader_Start_m764 (RemoteFacebookLoader_t131 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FB/RemoteFacebookLoader::OnDllLoaded(Facebook.IFacebook)
 void RemoteFacebookLoader_OnDllLoaded_m765 (RemoteFacebookLoader_t131 * __this, Object_t * ___fb, MethodInfo* method) IL2CPP_METHOD_ATTR;
