#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RSAParameters
struct RSAParameters_t3246;
struct RSAParameters_t3246_marshaled;

void RSAParameters_t3246_marshal(const RSAParameters_t3246& unmarshaled, RSAParameters_t3246_marshaled& marshaled);
void RSAParameters_t3246_marshal_back(const RSAParameters_t3246_marshaled& marshaled, RSAParameters_t3246& unmarshaled);
void RSAParameters_t3246_marshal_cleanup(RSAParameters_t3246_marshaled& marshaled);
