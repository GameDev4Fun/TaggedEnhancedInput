// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TaggedInputSubsystem.generated.h"

UENUM()
enum class ETaggedInputKeyboardLayout : uint8
{
	Qwerty,
	Qwertz,
	Azerty
};

/**
 * 
 */
UCLASS()
class TAGGEDINPUT_API UTaggedInputSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	/**
	 * Returns the current keyboard layout
	 */
	ETaggedInputKeyboardLayout CheckKeyboardLayout();
};
