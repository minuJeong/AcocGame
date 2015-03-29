#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Runtime.Hosting.ActivationArguments
struct ActivationArguments_t3428;
// System.AppDomainInitializer
struct AppDomainInitializer_t3681;
// System.Security.Policy.ApplicationTrust
struct ApplicationTrust_t3620;
// System.String[]
struct StringU5BU5D_t4;
// System.Security.SecurityElement
struct SecurityElement_t3166;
// System.Byte[]
struct ByteU5BU5D_t21;
// System.Object
#include "mscorlib_System_Object.h"
// System.LoaderOptimization
#include "mscorlib_System_LoaderOptimization.h"
// System.AppDomainSetup
struct AppDomainSetup_t3682  : public Object_t
{
	// System.String System.AppDomainSetup::application_base
	String_t* ___application_base;
	// System.String System.AppDomainSetup::application_name
	String_t* ___application_name;
	// System.String System.AppDomainSetup::cache_path
	String_t* ___cache_path;
	// System.String System.AppDomainSetup::configuration_file
	String_t* ___configuration_file;
	// System.String System.AppDomainSetup::dynamic_base
	String_t* ___dynamic_base;
	// System.String System.AppDomainSetup::license_file
	String_t* ___license_file;
	// System.String System.AppDomainSetup::private_bin_path
	String_t* ___private_bin_path;
	// System.String System.AppDomainSetup::private_bin_path_probe
	String_t* ___private_bin_path_probe;
	// System.String System.AppDomainSetup::shadow_copy_directories
	String_t* ___shadow_copy_directories;
	// System.String System.AppDomainSetup::shadow_copy_files
	String_t* ___shadow_copy_files;
	// System.Boolean System.AppDomainSetup::publisher_policy
	bool ___publisher_policy;
	// System.Boolean System.AppDomainSetup::path_changed
	bool ___path_changed;
	// System.LoaderOptimization System.AppDomainSetup::loader_optimization
	int32_t ___loader_optimization;
	// System.Boolean System.AppDomainSetup::disallow_binding_redirects
	bool ___disallow_binding_redirects;
	// System.Boolean System.AppDomainSetup::disallow_code_downloads
	bool ___disallow_code_downloads;
	// System.Runtime.Hosting.ActivationArguments System.AppDomainSetup::_activationArguments
	ActivationArguments_t3428 * ____activationArguments;
	// System.AppDomainInitializer System.AppDomainSetup::domain_initializer
	AppDomainInitializer_t3681 * ___domain_initializer;
	// System.Security.Policy.ApplicationTrust System.AppDomainSetup::application_trust
	ApplicationTrust_t3620 * ___application_trust;
	// System.String[] System.AppDomainSetup::domain_initializer_args
	StringU5BU5D_t4* ___domain_initializer_args;
	// System.Security.SecurityElement System.AppDomainSetup::application_trust_xml
	SecurityElement_t3166 * ___application_trust_xml;
	// System.Boolean System.AppDomainSetup::disallow_appbase_probe
	bool ___disallow_appbase_probe;
	// System.Byte[] System.AppDomainSetup::configuration_bytes
	ByteU5BU5D_t21* ___configuration_bytes;
};
