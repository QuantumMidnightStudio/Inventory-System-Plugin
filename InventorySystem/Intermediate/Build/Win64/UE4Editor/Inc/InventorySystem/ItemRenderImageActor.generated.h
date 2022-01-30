// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTextureRenderTarget2D;
class UBaseStorageItemPDataAsset;
class UPrimitiveComponent;
struct FMeshMaterials;
#ifdef INVENTORYSYSTEM_ItemRenderImageActor_generated_h
#error "ItemRenderImageActor.generated.h already included, missing '#pragma once' in ItemRenderImageActor.h"
#endif
#define INVENTORYSYSTEM_ItemRenderImageActor_generated_h

#define StorageSystem_Plugins_InventorySystem_Source_InventorySystem_Public_ItemRenderImageActor_h_11_SPARSE_DATA
#define StorageSystem_Plugins_InventorySystem_Source_InventorySystem_Public_ItemRenderImageActor_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSnap); \
	DECLARE_FUNCTION(execSetMesh); \
	DECLARE_FUNCTION(execSetMaterials); \
	DECLARE_FUNCTION(execRenderItem);


#define StorageSystem_Plugins_InventorySystem_Source_InventorySystem_Public_ItemRenderImageActor_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSnap); \
	DECLARE_FUNCTION(execSetMesh); \
	DECLARE_FUNCTION(execSetMaterials); \
	DECLARE_FUNCTION(execRenderItem);


#define StorageSystem_Plugins_InventorySystem_Source_InventorySystem_Public_ItemRenderImageActor_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAItemRenderImageActor(); \
	friend struct Z_Construct_UClass_AItemRenderImageActor_Statics; \
public: \
	DECLARE_CLASS(AItemRenderImageActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/InventorySystem"), NO_API) \
	DECLARE_SERIALIZER(AItemRenderImageActor)


#define StorageSystem_Plugins_InventorySystem_Source_InventorySystem_Public_ItemRenderImageActor_h_11_INCLASS \
private: \
	static void StaticRegisterNativesAItemRenderImageActor(); \
	friend struct Z_Construct_UClass_AItemRenderImageActor_Statics; \
public: \
	DECLARE_CLASS(AItemRenderImageActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/InventorySystem"), NO_API) \
	DECLARE_SERIALIZER(AItemRenderImageActor)


#define StorageSystem_Plugins_InventorySystem_Source_InventorySystem_Public_ItemRenderImageActor_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AItemRenderImageActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AItemRenderImageActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AItemRenderImageActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AItemRenderImageActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AItemRenderImageActor(AItemRenderImageActor&&); \
	NO_API AItemRenderImageActor(const AItemRenderImageActor&); \
public:


#define StorageSystem_Plugins_InventorySystem_Source_InventorySystem_Public_ItemRenderImageActor_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AItemRenderImageActor(AItemRenderImageActor&&); \
	NO_API AItemRenderImageActor(const AItemRenderImageActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AItemRenderImageActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AItemRenderImageActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AItemRenderImageActor)


#define StorageSystem_Plugins_InventorySystem_Source_InventorySystem_Public_ItemRenderImageActor_h_11_PRIVATE_PROPERTY_OFFSET
#define StorageSystem_Plugins_InventorySystem_Source_InventorySystem_Public_ItemRenderImageActor_h_8_PROLOG
#define StorageSystem_Plugins_InventorySystem_Source_InventorySystem_Public_ItemRenderImageActor_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StorageSystem_Plugins_InventorySystem_Source_InventorySystem_Public_ItemRenderImageActor_h_11_PRIVATE_PROPERTY_OFFSET \
	StorageSystem_Plugins_InventorySystem_Source_InventorySystem_Public_ItemRenderImageActor_h_11_SPARSE_DATA \
	StorageSystem_Plugins_InventorySystem_Source_InventorySystem_Public_ItemRenderImageActor_h_11_RPC_WRAPPERS \
	StorageSystem_Plugins_InventorySystem_Source_InventorySystem_Public_ItemRenderImageActor_h_11_INCLASS \
	StorageSystem_Plugins_InventorySystem_Source_InventorySystem_Public_ItemRenderImageActor_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define StorageSystem_Plugins_InventorySystem_Source_InventorySystem_Public_ItemRenderImageActor_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StorageSystem_Plugins_InventorySystem_Source_InventorySystem_Public_ItemRenderImageActor_h_11_PRIVATE_PROPERTY_OFFSET \
	StorageSystem_Plugins_InventorySystem_Source_InventorySystem_Public_ItemRenderImageActor_h_11_SPARSE_DATA \
	StorageSystem_Plugins_InventorySystem_Source_InventorySystem_Public_ItemRenderImageActor_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	StorageSystem_Plugins_InventorySystem_Source_InventorySystem_Public_ItemRenderImageActor_h_11_INCLASS_NO_PURE_DECLS \
	StorageSystem_Plugins_InventorySystem_Source_InventorySystem_Public_ItemRenderImageActor_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INVENTORYSYSTEM_API UClass* StaticClass<class AItemRenderImageActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID StorageSystem_Plugins_InventorySystem_Source_InventorySystem_Public_ItemRenderImageActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
