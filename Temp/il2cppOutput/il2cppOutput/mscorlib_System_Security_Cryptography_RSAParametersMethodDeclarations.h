#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RSAParameters
struct RSAParameters_t3247;
struct RSAParameters_t3247_marshaled;

void RSAParameters_t3247_marshal(const RSAParameters_t3247& unmarshaled, RSAParameters_t3247_marshaled& marshaled);
void RSAParameters_t3247_marshal_back(const RSAParameters_t3247_marshaled& marshaled, RSAParameters_t3247& unmarshaled);
void RSAParameters_t3247_marshal_cleanup(RSAParameters_t3247_marshaled& marshaled);
