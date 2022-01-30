// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FItemLocation;
#ifdef INVENTORYSYSTEM_BaseStorageItemObject_generated_h
#error "BaseStorageItemObject.generated.h already included, missing '#pragma once' in BaseStorageItemObject.h"
#endif
#define INVENTORYSYSTEM_BaseStorageItemObject_generated_h

#define StorageSystem_Plugins_InventorySystem_Source_InventorySystem_Public_Items_BaseStorageItemObject_h_11_SPARSE_DATA
#define StorageSystem_Plugins_InventorySystem_Source_InventorySystem_Public_Items_BaseStorageItemObject_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRemoveCount); \
	DECLARE_FUNCTION(execAddCount); \
	DECLARE_FUNCTION(execGetItemLocation);


#define StorageSystem_Plugins_InventorySystem_Source_InventorySystem_Public_Items_BaseStorageItemObject_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRemoveCount); \
	DECLARE_FUNCTION(execAddCount); \
	DECLARE_FUNCTION(execGetItemLocation);


#define StorageSystem_Plugins_InventorySystem_Source_InventorySystem_Public_Items_BaseStorageItemObject_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBaseStorageItemObject(); \
	friend struct Z_Construct_UClass_UBaseStorageItemObject_Statics; \
public: \
	DECLARE_CLASS(UBaseStorageItemObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InventorySystem"), NO_API) \
	DECLARE_SERIALIZER(UBaseStorageItemObject)


#define StorageSystem_Plugins_InventorySystem_Source_InventorySystem_Public_Items_BaseStorageItemObject_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUBaseStorageItemObject(); \
	friend struct Z_Construct_UClass_UBaseStorageItemObject_Statics; \
public: \
	DECLARE_CLASS(UBaseStorageItemObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InventorySystem"), NO_API) \
	DECLARE_SERIALIZER(UBaseStorageItemObject)


#define StorageSystem_Plugins_InventorySystem_Source_InventorySystem_Public_Items_BaseStorageItemObject_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBaseStorageItemObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBaseStorageItemObject) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseStorageItemObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseStorageItemObject); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBaseStorageItemObject(UBaseStorageItemObject&&); \
	NO_API UBaseStorageItemObject(const UBaseStorageItemObject&); \
public:


#define StorageSystem_Plugins_InventorySystem_Source_InventorySystem_Public_Items_BaseStorageItemObject_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBaseStorageItemObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBaseStorageItemObject(UBaseStorageItemObject&&); \
	NO_API UBaseStorageItemObject(const UBaseStorageItemObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseStorageItemObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseStorageItemObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBaseStorageItemObject)


#define StorageSystem_Plugins_InventorySystem_Source_InventorySystem_Public_Items_BaseStorageItemObject_h_11_PRIVATE_PROPERTY_OFFSET
#define StorageSystem_Plugins_InventorySystem_Source_InventorySystem_Public_Items_BaseStorageItemObject_h_8_PROLOG
#define StorageSystem_Plugins_InventorySystem_Source_InventorySystem_Public_Items_BaseStorageItemObject_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StorageSystem_Plugins_InventorySystem_Source_InventorySystem_Public_Items_BaseStorageItemObject_h_11_PRIVATE_PROPERTY_OFFSET \
	StorageSystem_Plugins_InventorySystem_Source_InventorySystem_Public_Items_BaseStorageItemObject_h_11_SPARSE_DATA \
	StorageSystem_Plugins_InventorySystem_Source_InventorySystem_Public_Items_BaseStorageItemObject_h_11_RPC_WRAPPERS \
	StorageSystem_Plugins_InventorySystem_Source_InventorySystem_Public_Items_BaseStorageItemObject_h_11_INCLASS \
	StorageSystem_Plugins_InventorySystem_Source_InventorySystem_Public_Items_BaseStorageItemObject_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define StorageSystem_Plugins_InventorySystem_Source_InventorySystem_Public_Items_BaseStorageItemObject_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StorageSystem_Plugins_InventorySystem_Source_InventorySystem_Public_Items_BaseStorageItemObject_h_11_PRIVATE_PROPERTY_OFFSET \
	StorageSystem_Plugins_InventorySystem_Source_InventorySystem_Public_Items_BaseStorageItemObject_h_11_SPARSE_DATA \
	StorageSystem_Plugins_InventorySystem_Source_InventorySystem_Public_Items_BaseStorageItemObject_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	StorageSystem_Plugins_InventorySystem_Source_InventorySystem_Public_Items_BaseStorageItemObject_h_11_INCLASS_NO_PURE_DECLS \
	StorageSystem_Plugins_InventorySystem_Source_InventorySystem_Public_Items_BaseStorageItemObject_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INVENTORYSYSTEM_API UClass* StaticClass<class UBaseStorageItemObject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID StorageSystem_Plugins_InventorySystem_Source_InventorySystem_Public_Items_BaseStorageItemObject_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
