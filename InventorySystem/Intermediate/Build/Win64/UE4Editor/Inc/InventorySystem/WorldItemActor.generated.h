// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FMeshMaterials;
class UPrimitiveComponent;
class UBaseStorageItemPDataAsset;
#ifdef INVENTORYSYSTEM_WorldItemActor_generated_h
#error "WorldItemActor.generated.h already included, missing '#pragma once' in WorldItemActor.h"
#endif
#define INVENTORYSYSTEM_WorldItemActor_generated_h

#define StorageSystem_Plugins_InventorySystem_Source_InventorySystem_Public_Items_WorldItemActor_h_13_SPARSE_DATA
#define StorageSystem_Plugins_InventorySystem_Source_InventorySystem_Public_Items_WorldItemActor_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetMaterials); \
	DECLARE_FUNCTION(execSetMesh);


#define StorageSystem_Plugins_InventorySystem_Source_InventorySystem_Public_Items_WorldItemActor_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetMaterials); \
	DECLARE_FUNCTION(execSetMesh);


#define StorageSystem_Plugins_InventorySystem_Source_InventorySystem_Public_Items_WorldItemActor_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWorldItemActor(); \
	friend struct Z_Construct_UClass_AWorldItemActor_Statics; \
public: \
	DECLARE_CLASS(AWorldItemActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/InventorySystem"), NO_API) \
	DECLARE_SERIALIZER(AWorldItemActor) \
	virtual UObject* _getUObject() const override { return const_cast<AWorldItemActor*>(this); }


#define StorageSystem_Plugins_InventorySystem_Source_InventorySystem_Public_Items_WorldItemActor_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAWorldItemActor(); \
	friend struct Z_Construct_UClass_AWorldItemActor_Statics; \
public: \
	DECLARE_CLASS(AWorldItemActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/InventorySystem"), NO_API) \
	DECLARE_SERIALIZER(AWorldItemActor) \
	virtual UObject* _getUObject() const override { return const_cast<AWorldItemActor*>(this); }


#define StorageSystem_Plugins_InventorySystem_Source_InventorySystem_Public_Items_WorldItemActor_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWorldItemActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWorldItemActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWorldItemActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWorldItemActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWorldItemActor(AWorldItemActor&&); \
	NO_API AWorldItemActor(const AWorldItemActor&); \
public:


#define StorageSystem_Plugins_InventorySystem_Source_InventorySystem_Public_Items_WorldItemActor_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWorldItemActor(AWorldItemActor&&); \
	NO_API AWorldItemActor(const AWorldItemActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWorldItemActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWorldItemActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWorldItemActor)


#define StorageSystem_Plugins_InventorySystem_Source_InventorySystem_Public_Items_WorldItemActor_h_13_PRIVATE_PROPERTY_OFFSET
#define StorageSystem_Plugins_InventorySystem_Source_InventorySystem_Public_Items_WorldItemActor_h_10_PROLOG
#define StorageSystem_Plugins_InventorySystem_Source_InventorySystem_Public_Items_WorldItemActor_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StorageSystem_Plugins_InventorySystem_Source_InventorySystem_Public_Items_WorldItemActor_h_13_PRIVATE_PROPERTY_OFFSET \
	StorageSystem_Plugins_InventorySystem_Source_InventorySystem_Public_Items_WorldItemActor_h_13_SPARSE_DATA \
	StorageSystem_Plugins_InventorySystem_Source_InventorySystem_Public_Items_WorldItemActor_h_13_RPC_WRAPPERS \
	StorageSystem_Plugins_InventorySystem_Source_InventorySystem_Public_Items_WorldItemActor_h_13_INCLASS \
	StorageSystem_Plugins_InventorySystem_Source_InventorySystem_Public_Items_WorldItemActor_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define StorageSystem_Plugins_InventorySystem_Source_InventorySystem_Public_Items_WorldItemActor_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StorageSystem_Plugins_InventorySystem_Source_InventorySystem_Public_Items_WorldItemActor_h_13_PRIVATE_PROPERTY_OFFSET \
	StorageSystem_Plugins_InventorySystem_Source_InventorySystem_Public_Items_WorldItemActor_h_13_SPARSE_DATA \
	StorageSystem_Plugins_InventorySystem_Source_InventorySystem_Public_Items_WorldItemActor_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	StorageSystem_Plugins_InventorySystem_Source_InventorySystem_Public_Items_WorldItemActor_h_13_INCLASS_NO_PURE_DECLS \
	StorageSystem_Plugins_InventorySystem_Source_InventorySystem_Public_Items_WorldItemActor_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INVENTORYSYSTEM_API UClass* StaticClass<class AWorldItemActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID StorageSystem_Plugins_InventorySystem_Source_InventorySystem_Public_Items_WorldItemActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
