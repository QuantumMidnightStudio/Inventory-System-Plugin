// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UBaseStorageItemObject;
class UBaseStorageSlotWidget;
enum class EItemMenuType : uint8;
class UItemStorageSlotWidget;
class UDaDStorage;
struct FItemLocation;
#ifdef INVENTORYSYSTEM_StorageWidget_generated_h
#error "StorageWidget.generated.h already included, missing '#pragma once' in StorageWidget.h"
#endif
#define INVENTORYSYSTEM_StorageWidget_generated_h

#define StorageSystem_Plugins_InventorySystem_Source_InventorySystem_Public_UI_Storage_StorageWidget_h_15_DELEGATE \
struct _Script_InventorySystem_eventAdditioinalUIStage1_Parms \
{ \
	UBaseStorageItemObject* Item; \
	UBaseStorageSlotWidget* SlotWidget; \
	EItemMenuType Type; \
}; \
static inline void FAdditioinalUIStage1_DelegateWrapper(const FMulticastScriptDelegate& AdditioinalUIStage1, UBaseStorageItemObject* Item, UBaseStorageSlotWidget* SlotWidget, EItemMenuType Type) \
{ \
	_Script_InventorySystem_eventAdditioinalUIStage1_Parms Parms; \
	Parms.Item=Item; \
	Parms.SlotWidget=SlotWidget; \
	Parms.Type=Type; \
	AdditioinalUIStage1.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define StorageSystem_Plugins_InventorySystem_Source_InventorySystem_Public_UI_Storage_StorageWidget_h_20_SPARSE_DATA
#define StorageSystem_Plugins_InventorySystem_Source_InventorySystem_Public_UI_Storage_StorageWidget_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execChangeCountItem); \
	DECLARE_FUNCTION(execRemoveItem); \
	DECLARE_FUNCTION(execRelocateItem); \
	DECLARE_FUNCTION(execAddItem); \
	DECLARE_FUNCTION(execCreateStorage); \
	DECLARE_FUNCTION(execSearchWidgetByItem); \
	DECLARE_FUNCTION(execDeselectSlots); \
	DECLARE_FUNCTION(execSelectOccupiedSlots); \
	DECLARE_FUNCTION(execSetInfo);


#define StorageSystem_Plugins_InventorySystem_Source_InventorySystem_Public_UI_Storage_StorageWidget_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execChangeCountItem); \
	DECLARE_FUNCTION(execRemoveItem); \
	DECLARE_FUNCTION(execRelocateItem); \
	DECLARE_FUNCTION(execAddItem); \
	DECLARE_FUNCTION(execCreateStorage); \
	DECLARE_FUNCTION(execSearchWidgetByItem); \
	DECLARE_FUNCTION(execDeselectSlots); \
	DECLARE_FUNCTION(execSelectOccupiedSlots); \
	DECLARE_FUNCTION(execSetInfo);


#define StorageSystem_Plugins_InventorySystem_Source_InventorySystem_Public_UI_Storage_StorageWidget_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStorageWidget(); \
	friend struct Z_Construct_UClass_UStorageWidget_Statics; \
public: \
	DECLARE_CLASS(UStorageWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InventorySystem"), NO_API) \
	DECLARE_SERIALIZER(UStorageWidget)


#define StorageSystem_Plugins_InventorySystem_Source_InventorySystem_Public_UI_Storage_StorageWidget_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUStorageWidget(); \
	friend struct Z_Construct_UClass_UStorageWidget_Statics; \
public: \
	DECLARE_CLASS(UStorageWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InventorySystem"), NO_API) \
	DECLARE_SERIALIZER(UStorageWidget)


#define StorageSystem_Plugins_InventorySystem_Source_InventorySystem_Public_UI_Storage_StorageWidget_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStorageWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStorageWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStorageWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStorageWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStorageWidget(UStorageWidget&&); \
	NO_API UStorageWidget(const UStorageWidget&); \
public:


#define StorageSystem_Plugins_InventorySystem_Source_InventorySystem_Public_UI_Storage_StorageWidget_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStorageWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStorageWidget(UStorageWidget&&); \
	NO_API UStorageWidget(const UStorageWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStorageWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStorageWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStorageWidget)


#define StorageSystem_Plugins_InventorySystem_Source_InventorySystem_Public_UI_Storage_StorageWidget_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SelectedSlots() { return STRUCT_OFFSET(UStorageWidget, SelectedSlots); } \
	FORCEINLINE static uint32 __PPO__OStorage() { return STRUCT_OFFSET(UStorageWidget, OStorage); } \
	FORCEINLINE static uint32 __PPO__GPStorageSlots() { return STRUCT_OFFSET(UStorageWidget, GPStorageSlots); } \
	FORCEINLINE static uint32 __PPO__OItems() { return STRUCT_OFFSET(UStorageWidget, OItems); } \
	FORCEINLINE static uint32 __PPO__EmptyStorageSlots() { return STRUCT_OFFSET(UStorageWidget, EmptyStorageSlots); } \
	FORCEINLINE static uint32 __PPO__StorageItemWidgets() { return STRUCT_OFFSET(UStorageWidget, StorageItemWidgets); } \
	FORCEINLINE static uint32 __PPO__StorageComponent() { return STRUCT_OFFSET(UStorageWidget, StorageComponent); }


#define StorageSystem_Plugins_InventorySystem_Source_InventorySystem_Public_UI_Storage_StorageWidget_h_17_PROLOG
#define StorageSystem_Plugins_InventorySystem_Source_InventorySystem_Public_UI_Storage_StorageWidget_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StorageSystem_Plugins_InventorySystem_Source_InventorySystem_Public_UI_Storage_StorageWidget_h_20_PRIVATE_PROPERTY_OFFSET \
	StorageSystem_Plugins_InventorySystem_Source_InventorySystem_Public_UI_Storage_StorageWidget_h_20_SPARSE_DATA \
	StorageSystem_Plugins_InventorySystem_Source_InventorySystem_Public_UI_Storage_StorageWidget_h_20_RPC_WRAPPERS \
	StorageSystem_Plugins_InventorySystem_Source_InventorySystem_Public_UI_Storage_StorageWidget_h_20_INCLASS \
	StorageSystem_Plugins_InventorySystem_Source_InventorySystem_Public_UI_Storage_StorageWidget_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define StorageSystem_Plugins_InventorySystem_Source_InventorySystem_Public_UI_Storage_StorageWidget_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StorageSystem_Plugins_InventorySystem_Source_InventorySystem_Public_UI_Storage_StorageWidget_h_20_PRIVATE_PROPERTY_OFFSET \
	StorageSystem_Plugins_InventorySystem_Source_InventorySystem_Public_UI_Storage_StorageWidget_h_20_SPARSE_DATA \
	StorageSystem_Plugins_InventorySystem_Source_InventorySystem_Public_UI_Storage_StorageWidget_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	StorageSystem_Plugins_InventorySystem_Source_InventorySystem_Public_UI_Storage_StorageWidget_h_20_INCLASS_NO_PURE_DECLS \
	StorageSystem_Plugins_InventorySystem_Source_InventorySystem_Public_UI_Storage_StorageWidget_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INVENTORYSYSTEM_API UClass* StaticClass<class UStorageWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID StorageSystem_Plugins_InventorySystem_Source_InventorySystem_Public_UI_Storage_StorageWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
