// Created by Daniel Janák


#include "UI/UIParams.h"

void FUIParams::SetBoolParam(FString Name, bool Value)
{
	Bools.Add(Name, Value);
}

void FUIParams::SetFloatParam(FString Name, float Value)
{
	Floats.Add(Name, Value);
}

void FUIParams::SetStringParam(FString Name, FString Value)
{
	Strings.Add(Name, Value);
}

void FUIParams::SetIntParam(FString Name, int32 Value)
{
	Integers.Add(Name, Value);
}

void FUIParams::SetWeakObjectPtrParam(FString Name, UObject* Value)
{
	TWeakObjectPtr<UObject> weakPtr = Value;
	WeakObjectPtrs.Add(Name, weakPtr);
}

bool FUIParams::TryGetBoolParam(FString Name, bool& Result)
{
	bool* boolPtr = Bools.Find(Name);

	if (boolPtr != nullptr)
	{
		Result = *boolPtr;
		return true;
	}

	return false;
}

bool FUIParams::TryGetFloatParam(FString Name, float& Result)
{
	float* floatPtr = Floats.Find(Name);

	if (floatPtr != nullptr)
	{
		Result = *floatPtr;
		return true;
	}

	return false;
}

bool FUIParams::TryGetStringParam(FString Name, FString& Result)
{
	FString* stringPtr = Strings.Find(Name);

	if (stringPtr != nullptr)
	{
		Result = *stringPtr;
		return true;
	}

	return false;
}

bool FUIParams::TryGetIntParam(FString Name, int32& Result)
{
	int32* intPtr = Integers.Find(Name);

	if (intPtr != nullptr)
	{
		Result = *intPtr;
		return true;
	}

	return false;
}

bool FUIParams::TryGetWeakObjectPtrParam(FString Name, UObject*& Result)
{
	TWeakObjectPtr<UObject>* weakPtrPtr = WeakObjectPtrs.Find(Name);

	if (weakPtrPtr != nullptr)
	{
		Result = (*weakPtrPtr).Get();
		return true;
	}

	return false;
}
