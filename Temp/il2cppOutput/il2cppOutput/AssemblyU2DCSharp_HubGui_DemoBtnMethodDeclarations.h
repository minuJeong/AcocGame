#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// HubGui/DemoBtn
struct DemoBtn_t190;
struct DemoBtn_t190_marshaled;

void DemoBtn_t190_marshal(const DemoBtn_t190& unmarshaled, DemoBtn_t190_marshaled& marshaled);
void DemoBtn_t190_marshal_back(const DemoBtn_t190_marshaled& marshaled, DemoBtn_t190& unmarshaled);
void DemoBtn_t190_marshal_cleanup(DemoBtn_t190_marshaled& marshaled);
