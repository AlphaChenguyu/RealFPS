// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BlockoutToolsParent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BLOCKOUTTOOLSPLUGIN_BlockoutToolsParent_generated_h
#error "BlockoutToolsParent.generated.h already included, missing '#pragma once' in BlockoutToolsParent.h"
#endif
#define BLOCKOUTTOOLSPLUGIN_BlockoutToolsParent_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlockoutToolsPlugin_Source_BlockoutToolsPlugin_Private_BlockoutToolsParent_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execBlockoutSetMaterial); \
	DECLARE_FUNCTION(execRerunConstructionScript);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlockoutToolsPlugin_Source_BlockoutToolsPlugin_Private_BlockoutToolsParent_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABlockoutToolsParent(); \
	friend struct Z_Construct_UClass_ABlockoutToolsParent_Statics; \
public: \
	DECLARE_CLASS(ABlockoutToolsParent, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BlockoutToolsPlugin"), NO_API) \
	DECLARE_SERIALIZER(ABlockoutToolsParent)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlockoutToolsPlugin_Source_BlockoutToolsPlugin_Private_BlockoutToolsParent_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ABlockoutToolsParent(ABlockoutToolsParent&&); \
	ABlockoutToolsParent(const ABlockoutToolsParent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABlockoutToolsParent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABlockoutToolsParent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABlockoutToolsParent) \
	NO_API virtual ~ABlockoutToolsParent();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlockoutToolsPlugin_Source_BlockoutToolsPlugin_Private_BlockoutToolsParent_h_19_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlockoutToolsPlugin_Source_BlockoutToolsPlugin_Private_BlockoutToolsParent_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlockoutToolsPlugin_Source_BlockoutToolsPlugin_Private_BlockoutToolsParent_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlockoutToolsPlugin_Source_BlockoutToolsPlugin_Private_BlockoutToolsParent_h_22_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlockoutToolsPlugin_Source_BlockoutToolsPlugin_Private_BlockoutToolsParent_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLOCKOUTTOOLSPLUGIN_API UClass* StaticClass<class ABlockoutToolsParent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlockoutToolsPlugin_Source_BlockoutToolsPlugin_Private_BlockoutToolsParent_h


#define FOREACH_ENUM_EBLOCKOUTMATERIALTYPE(op) \
	op(BlockoutMaterialType_Grid) \
	op(BlockoutMaterialType_CustomMaterial) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
