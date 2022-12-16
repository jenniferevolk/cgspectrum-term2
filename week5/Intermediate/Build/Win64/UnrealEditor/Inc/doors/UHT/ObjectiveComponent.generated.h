// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ObjectiveComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EObjectiveState : int32;
#ifdef DOORS_ObjectiveComponent_generated_h
#error "ObjectiveComponent.generated.h already included, missing '#pragma once' in ObjectiveComponent.h"
#endif
#define DOORS_ObjectiveComponent_generated_h

#define FID_cgspectrum_term2_projects_cgspectrum_term2_week5_Source_doors_Public_ObjectiveComponent_h_22_SPARSE_DATA
#define FID_cgspectrum_term2_projects_cgspectrum_term2_week5_Source_doors_Public_ObjectiveComponent_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetState); \
	DECLARE_FUNCTION(execGetDescription);


#define FID_cgspectrum_term2_projects_cgspectrum_term2_week5_Source_doors_Public_ObjectiveComponent_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetState); \
	DECLARE_FUNCTION(execGetDescription);


#define FID_cgspectrum_term2_projects_cgspectrum_term2_week5_Source_doors_Public_ObjectiveComponent_h_22_ACCESSORS
#define FID_cgspectrum_term2_projects_cgspectrum_term2_week5_Source_doors_Public_ObjectiveComponent_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUObjectiveComponent(); \
	friend struct Z_Construct_UClass_UObjectiveComponent_Statics; \
public: \
	DECLARE_CLASS(UObjectiveComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/doors"), NO_API) \
	DECLARE_SERIALIZER(UObjectiveComponent)


#define FID_cgspectrum_term2_projects_cgspectrum_term2_week5_Source_doors_Public_ObjectiveComponent_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUObjectiveComponent(); \
	friend struct Z_Construct_UClass_UObjectiveComponent_Statics; \
public: \
	DECLARE_CLASS(UObjectiveComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/doors"), NO_API) \
	DECLARE_SERIALIZER(UObjectiveComponent)


#define FID_cgspectrum_term2_projects_cgspectrum_term2_week5_Source_doors_Public_ObjectiveComponent_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UObjectiveComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UObjectiveComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UObjectiveComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UObjectiveComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UObjectiveComponent(UObjectiveComponent&&); \
	NO_API UObjectiveComponent(const UObjectiveComponent&); \
public: \
	NO_API virtual ~UObjectiveComponent();


#define FID_cgspectrum_term2_projects_cgspectrum_term2_week5_Source_doors_Public_ObjectiveComponent_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UObjectiveComponent(UObjectiveComponent&&); \
	NO_API UObjectiveComponent(const UObjectiveComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UObjectiveComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UObjectiveComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UObjectiveComponent) \
	NO_API virtual ~UObjectiveComponent();


#define FID_cgspectrum_term2_projects_cgspectrum_term2_week5_Source_doors_Public_ObjectiveComponent_h_19_PROLOG
#define FID_cgspectrum_term2_projects_cgspectrum_term2_week5_Source_doors_Public_ObjectiveComponent_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_cgspectrum_term2_projects_cgspectrum_term2_week5_Source_doors_Public_ObjectiveComponent_h_22_SPARSE_DATA \
	FID_cgspectrum_term2_projects_cgspectrum_term2_week5_Source_doors_Public_ObjectiveComponent_h_22_RPC_WRAPPERS \
	FID_cgspectrum_term2_projects_cgspectrum_term2_week5_Source_doors_Public_ObjectiveComponent_h_22_ACCESSORS \
	FID_cgspectrum_term2_projects_cgspectrum_term2_week5_Source_doors_Public_ObjectiveComponent_h_22_INCLASS \
	FID_cgspectrum_term2_projects_cgspectrum_term2_week5_Source_doors_Public_ObjectiveComponent_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_cgspectrum_term2_projects_cgspectrum_term2_week5_Source_doors_Public_ObjectiveComponent_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_cgspectrum_term2_projects_cgspectrum_term2_week5_Source_doors_Public_ObjectiveComponent_h_22_SPARSE_DATA \
	FID_cgspectrum_term2_projects_cgspectrum_term2_week5_Source_doors_Public_ObjectiveComponent_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_cgspectrum_term2_projects_cgspectrum_term2_week5_Source_doors_Public_ObjectiveComponent_h_22_ACCESSORS \
	FID_cgspectrum_term2_projects_cgspectrum_term2_week5_Source_doors_Public_ObjectiveComponent_h_22_INCLASS_NO_PURE_DECLS \
	FID_cgspectrum_term2_projects_cgspectrum_term2_week5_Source_doors_Public_ObjectiveComponent_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DOORS_API UClass* StaticClass<class UObjectiveComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_cgspectrum_term2_projects_cgspectrum_term2_week5_Source_doors_Public_ObjectiveComponent_h


#define FOREACH_ENUM_EOBJECTIVESTATE(op) \
	op(EObjectiveState::OS_Inactive) \
	op(EObjectiveState::OS_Active) \
	op(EObjectiveState::OS_Completed) 

enum class EObjectiveState;
template<> struct TIsUEnumClass<EObjectiveState> { enum { Value = true }; };
template<> DOORS_API UEnum* StaticEnum<EObjectiveState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
