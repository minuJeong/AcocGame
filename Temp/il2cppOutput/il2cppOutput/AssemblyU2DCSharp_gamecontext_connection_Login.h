#pragma once
#include <stdint.h>
// gamecontext.connection.Login
struct Login_t392;
// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t47;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// gamecontext.connection.Login
struct Login_t392  : public MonoBehaviour_t58
{
	// System.String gamecontext.connection.Login::account
	String_t* ___account;
	// System.String gamecontext.connection.Login::password
	String_t* ___password;
	// System.Boolean gamecontext.connection.Login::isFacebookLogin
	bool ___isFacebookLogin;
	// UnityEngine.GameObject gamecontext.connection.Login::InputField_ID_Text
	GameObject_t47 * ___InputField_ID_Text;
	// UnityEngine.GameObject gamecontext.connection.Login::InputField_Pass_Text
	GameObject_t47 * ___InputField_Pass_Text;
	// UnityEngine.GameObject gamecontext.connection.Login::GuestLoginButton
	GameObject_t47 * ___GuestLoginButton;
};
struct Login_t392_StaticFields{
	// gamecontext.connection.Login gamecontext.connection.Login::instance
	Login_t392 * ___instance;
};
