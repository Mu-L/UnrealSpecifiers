// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MyBlueprintableStruct.generated.h"

USTRUCT(Blueprintable)
struct LEARN_API FMyBlueprintableStruct
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite)
	float ReadWriteValue=0.f;

	UPROPERTY(BlueprintReadOnly)
	float ReadOnlyValue=0.f;
};
