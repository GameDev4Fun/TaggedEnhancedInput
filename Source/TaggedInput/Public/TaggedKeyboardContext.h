// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TaggedInputSubsystem.h"
#include "UObject/Object.h"
#include "TaggedKeyboardContext.generated.h"

/**
 * 
 */
USTRUCT(BlueprintType)
struct TAGGEDINPUT_API FTaggedKeyboardContext
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category=Inputs)
	ETaggedInputKeyboardLayout Layout;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category=Inputs)
	class UInputMappingContext* MappingContext;
};
