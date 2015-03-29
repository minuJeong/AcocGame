#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.WebCamDevice
struct WebCamDevice_t2564;
struct WebCamDevice_t2564_marshaled;
// System.String
struct String_t;

// System.String UnityEngine.WebCamDevice::get_name()
 String_t* WebCamDevice_get_name_m8709 (WebCamDevice_t2564 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.WebCamDevice::get_isFrontFacing()
 bool WebCamDevice_get_isFrontFacing_m8710 (WebCamDevice_t2564 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void WebCamDevice_t2564_marshal(const WebCamDevice_t2564& unmarshaled, WebCamDevice_t2564_marshaled& marshaled);
void WebCamDevice_t2564_marshal_back(const WebCamDevice_t2564_marshaled& marshaled, WebCamDevice_t2564& unmarshaled);
void WebCamDevice_t2564_marshal_cleanup(WebCamDevice_t2564_marshaled& marshaled);
