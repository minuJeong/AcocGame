#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Collections.Hashtable
struct Hashtable_t48;
// System.Security.Policy.Evidence
struct Evidence_t3383;
// System.Security.PermissionSet
struct PermissionSet_t3384;
// System.Security.Principal.IPrincipal
struct IPrincipal_t3664;
// System.AppDomain
struct AppDomain_t2231;
// System.AppDomainManager
struct AppDomainManager_t3675;
// System.ActivationContext
struct ActivationContext_t3673;
// System.ApplicationIdentity
struct ApplicationIdentity_t3676;
// System.AssemblyLoadEventHandler
struct AssemblyLoadEventHandler_t3677;
// System.ResolveEventHandler
struct ResolveEventHandler_t3678;
// System.EventHandler
struct EventHandler_t3679;
// System.UnhandledExceptionEventHandler
struct UnhandledExceptionEventHandler_t3680;
// System.MarshalByRefObject
#include "mscorlib_System_MarshalByRefObject.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Security.Principal.PrincipalPolicy
#include "mscorlib_System_Security_Principal_PrincipalPolicy.h"
// System.AppDomain
struct AppDomain_t2231  : public MarshalByRefObject_t3195
{
	// System.IntPtr System.AppDomain::_mono_app_domain
	IntPtr_t39 ____mono_app_domain;
	// System.Security.Policy.Evidence System.AppDomain::_evidence
	Evidence_t3383 * ____evidence;
	// System.Security.PermissionSet System.AppDomain::_granted
	PermissionSet_t3384 * ____granted;
	// System.Security.Principal.PrincipalPolicy System.AppDomain::_principalPolicy
	int32_t ____principalPolicy;
	// System.AppDomainManager System.AppDomain::_domain_manager
	AppDomainManager_t3675 * ____domain_manager;
	// System.ActivationContext System.AppDomain::_activation
	ActivationContext_t3673 * ____activation;
	// System.ApplicationIdentity System.AppDomain::_applicationIdentity
	ApplicationIdentity_t3676 * ____applicationIdentity;
	// System.AssemblyLoadEventHandler System.AppDomain::AssemblyLoad
	AssemblyLoadEventHandler_t3677 * ___AssemblyLoad;
	// System.ResolveEventHandler System.AppDomain::AssemblyResolve
	ResolveEventHandler_t3678 * ___AssemblyResolve;
	// System.EventHandler System.AppDomain::DomainUnload
	EventHandler_t3679 * ___DomainUnload;
	// System.EventHandler System.AppDomain::ProcessExit
	EventHandler_t3679 * ___ProcessExit;
	// System.ResolveEventHandler System.AppDomain::ResourceResolve
	ResolveEventHandler_t3678 * ___ResourceResolve;
	// System.ResolveEventHandler System.AppDomain::TypeResolve
	ResolveEventHandler_t3678 * ___TypeResolve;
	// System.UnhandledExceptionEventHandler System.AppDomain::UnhandledException
	UnhandledExceptionEventHandler_t3680 * ___UnhandledException;
	// System.ResolveEventHandler System.AppDomain::ReflectionOnlyAssemblyResolve
	ResolveEventHandler_t3678 * ___ReflectionOnlyAssemblyResolve;
};
struct AppDomain_t2231_StaticFields{
	// System.String System.AppDomain::_process_guid
	String_t* ____process_guid;
	// System.AppDomain System.AppDomain::default_domain
	AppDomain_t2231 * ___default_domain;
};
struct AppDomain_t2231_ThreadStaticFields{
	// System.Collections.Hashtable System.AppDomain::type_resolve_in_progress
	Hashtable_t48 * ___type_resolve_in_progress;
	// System.Collections.Hashtable System.AppDomain::assembly_resolve_in_progress
	Hashtable_t48 * ___assembly_resolve_in_progress;
	// System.Collections.Hashtable System.AppDomain::assembly_resolve_in_progress_refonly
	Hashtable_t48 * ___assembly_resolve_in_progress_refonly;
	// System.Security.Principal.IPrincipal System.AppDomain::_principal
	Object_t * ____principal;
};
