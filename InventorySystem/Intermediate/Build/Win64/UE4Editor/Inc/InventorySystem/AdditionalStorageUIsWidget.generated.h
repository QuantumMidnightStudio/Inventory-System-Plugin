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
class UWindowStorageWidget;
struct FItemLocation;
class UStorage_StorageItemObject;
#ifdef INVENTORYSYSTEM_AdditionalStorageUIsWidget_generated_h
#error "AdditionalStorageUIsWidget.generated.h already included, missing '#pragma once' in AdditionalStorageUIsWidget.h"
#endif
#define INVENTORYSYSTEM_AdditionalStorageUIsWidget_generated_h

#define StorageSystem_Plugins_InventorySystem_Source_InventorySystem_Public_UI_Storage_AdditionalStorageUIsWidget_h_12_DELEGATE \
struct _Script_InventorySystem_eventAdditioinalUI_Parms \
{ \
	UBaseStorageItemObject* Item; \
	UBaseStorageSlotWidget* SlotWidget; \
	EItemMenuType Type; \
}; \
static inline void FAdditioinalUI_DelegateWrapper(const FMulticastScriptDelegate& AdditioinalUI, UBaseStorageItemObject* Item, UBaseStorageSlotWidget* SlotWidget, EItemMenuType Type) \
{ \
	_Script_InventorySystem_eventAdditioinalUI_Parms Parms; \
	Parms.Item=Item; \
	Parms.SlotWidget=SlotWidget; \
	Parms.Type=Type; \
	AdditioinalUI.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define StorageSystem_Plugins_InventorySystem_Source_InventorySystem_Public_UI_Storage_AdditionalStorageUIsWidget_h_17_SPARSE_DATA
#define StorageSystem_Plugins_InventorySystem_Source_InventorySystem_Public_UI_Storage_AdditionalStorageUIsWidget_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCloseWindow); \
	DECLARE_FUNCTION(execItemSplitMenu); \
	DECLARE_FUNCTION(execOpenItemMenu); \
	DECLARE_FUNCTION(execAddWindowStorage); \
	DECLARE_FUNCTION(execOpenAdditionalUI);


#define StorageSystem_Plugins_InventorySystem_Source_InventorySystem_Public_UI_Storage_AdditionalStorageUIsWidget_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCloseWindow); \
	DECLARE_FUNCTION(execItemSplitMenu); \
	DECLARE_FUNCTION(execOpenItemMenu); \
	DECLARE_FUNCTION(execAddWindowStorage); \
	DECLARE_FUNCTION(execOpenAdditionalUI);


#define StorageSystem_Plugins_InventorySystem_Source_InventorySystem_Public_UI_Storage_AdditionalStorageUIsWidget_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAdditionalStorageUIsWidget(); \
	friend struct Z_Construct_UClass_UAdditionalStorageUIsWidget_Statics; \
public: \
	DECLARE_CLASS(UAdditionalStorageUIsWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InventorySystem"), NO_API) \
	DECLARE_SERIALIZER(UAdditionalStorageUIsWidget)


#define StorageSystem_Plugins_InventorySystem_Source_InventorySystem_Public_UI_Storage_AdditionalStorageUIsWidget_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUAdditionalStorageUIsWidget(); \
	friend struct Z_Construct_UClass_UAdditionalStorageUIsWidget_Statics; \
public: \
	DECLARE_CLASS(UAdditionalStorageUIsWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InventorySystem"), NO_API) \
	DECLARE_SERIALIZER(UAdditionalStorageUIsWidget)


#define StorageSystem_Plugins_InventorySystem_Source_InventorySystem_Public_UI_Storage_AdditionalStorageUIsWidget_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAdditionalStorageUIsWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAdditionalStorageUIsWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAdditionalStorageUIsWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAdditionalStorageUIsWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAdditionalStorageUIsWidget(UAdditionalStorageUIsWidget&&); \
	NO_API UAdditionalStorageUIsWidget(const UAdditionalStorageUIsWidget&); \
public:


#define StorageSystem_Plugins_InventorySystem_Source_InventorySystem_Public_UI_Storage_AdditionalStorageUIsWidget_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAdditionalStorageUIsWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAdditionalStorageUIsWidget(UAdditionalStorageUIsWidget&&); \
	NO_API UAdditionalStorageUIsWidget(const UAdditionalStorageUIsWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAdditionalStorageUIsWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAdditionalStorageUIsWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAdditionalStorageUIsWidget)


#define StorageSystem_Plugins_InventorySystem_Source_InventorySystem_Public_UI_Storage_AdditionalStorageUIsWidget_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__WindowStorageWidget() { return STRUCT_OFFSET(UAdditionalStorageUIsWidget, WindowStorageWidget); } \
	FORCEINLINE static uint32 __PPO__ItemSplitMenuWidget() { return STRUCT_OFFSET(UAdditionalStorageUIsWidget, ItemSplitMenuWidget); } \
	FORCEINLINE static uint32 __PPO__OAllContent() { return STRUCT_OFFSET(UAdditionalStorageUIsWidget, OAllContent); } \
	FORCEINLINE static uint32 __PPO__StorageWindows() { return STRUCT_OFFSET(UAdditionalStorageUIsWidget, StorageWindows); }


#define StorageSystem_Plugins_InventorySystem_Source_InventorySystem_Public_UI_Storage_AdditionalStorageUIsWidget_h_14_PROLOG
#define StorageSystem_Plugins_InventorySystem_Source_InventorySystem_Public_UI_Storage_AdditionalStorageUIsWidget_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StorageSystem_Plugins_InventorySystem_Source_InventorySystem_Public_UI_Storage_AdditionalStorageUIsWidget_h_17_PRIVATE_PROPERTY_OFFSET \
	StorageSystem_Plugins_InventorySystem_Source_InventorySystem_Public_UI_Storage_AdditionalStorageUIsWidget_h_17_SPARSE_DATA \
	StorageSystem_Plugins_InventorySystem_Source_InventorySystem_Public_UI_Storage_AdditionalStorageUIsWidget_h_17_RPC_WRAPPERS \
	StorageSystem_Plugins_InventorySystem_Source_InventorySystem_Public_UI_Storage_AdditionalStorageUIsWidget_h_17_INCLASS \
	StorageSystem_Plugins_InventorySystem_Source_InventorySystem_Public_UI_Storage_AdditionalStorageUIsWidget_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define StorageSystem_Plugins_InventorySystem_Source_InventorySystem_Public_UI_Storage_AdditionalStorageUIsWidget_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StorageSystem_Plugins_InventorySystem_Source_InventorySystem_Public_UI_Storage_AdditionalStorageUIsWidget_h_17_PRIVATE_PROPERTY_OFFSET \
	StorageSystem_Plugins_InventorySystem_Source_InventorySystem_Public_UI_Storage_AdditionalStorageUIsWidget_h_17_SPARSE_DATA \
	StorageSystem_Plugins_InventorySystem_Source_InventorySystem_Public_UI_Storage_AdditionalStorageUIsWidget_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	StorageSystem_Plugins_InventorySystem_Source_InventorySystem_Public_UI_Storage_AdditionalStorageUIsWidget_h_17_INCLASS_NO_PURE_DECLS \
	StorageSystem_Plugins_InventorySystem_Source_InventorySystem_Public_UI_Storage_AdditionalStorageUIsWidget_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INVENTORYSYSTEM_API UClass* StaticClass<class UAdditionalStorageUIsWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID StorageSystem_Plugins_InventorySystem_Source_InventorySystem_Public_UI_Storage_AdditionalStorageUIsWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
