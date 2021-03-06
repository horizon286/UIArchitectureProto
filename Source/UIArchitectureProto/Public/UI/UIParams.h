// Created by Daniel Janák

#pragma once

#include "CoreMinimal.h"
#include "UIParams.generated.h"

/**
 * 
 */
USTRUCT()
struct UIARCHITECTUREPROTO_API FUIParams
{
	GENERATED_BODY()

public: // Setters

	void SetBoolParam(FString Name, bool Value);
	void SetFloatParam(FString Name, float Value);
	void SetStringParam(FString Name, FString Value);
	void SetIntParam(FString Name, int32 Value);
	void SetWeakObjectPtrParam(FString Name, UObject* Value);

public: // Getters

	bool TryGetBoolParam(FString Name, bool& Result);
	bool TryGetFloatParam(FString Name, float& Result);
	bool TryGetStringParam(FString Name, FString& Result);
	bool TryGetIntParam(FString Name, int32& Result);
	bool TryGetWeakObjectPtrParam(FString Name, UObject*& Result);

protected: // Data

	TMap<FString, bool> Bools;
	TMap<FString, float> Floats;
	TMap<FString, FString> Strings;
	TMap<FString, int32> Integers;
	TMap<FString, TWeakObjectPtr<UObject>> WeakObjectPtrs;
};
