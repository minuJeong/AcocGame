#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.WebCamDevice
struct WebCamDevice_t2563;
struct WebCamDevice_t2563_marshaled;
// System.String
struct String_t;

// System.String UnityEngine.WebCamDevice::get_name()
 String_t* WebCamDevice_get_name_m8706 (WebCamDevice_t2563 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.WebCamDevice::get_isFrontFacing()
 bool WebCamDevice_get_isFrontFacing_m8707 (WebCamDevice_t2563 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void WebCamDevice_t2563_marshal(const WebCamDevice_t2563& unmarshaled, WebCamDevice_t2563_marshaled& marshaled);
void WebCamDevice_t2563_marshal_back(const WebCamDevice_t2563_marshaled& marshaled, WebCamDevice_t2563& unmarshaled);
void WebCamDevice_t2563_marshal_cleanup(WebCamDevice_t2563_marshaled& marshaled);
