// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EnhancedInputComponent.h"
#include "TaggedInputConfig.h"
#include "UObject/Object.h"
#include "UTaggedInputComponent.generated.h"

/**
 * 
 */
UCLASS()
class TAGGEDINPUT_API UUTaggedInputComponent : public UEnhancedInputComponent
{
	GENERATED_BODY()

public:
	template<class TUserClass, class TFuncType>
	void BindActionByTag(const UTaggedInputConfig* InputConfig,
		FGameplayTag Tag,
		ETriggerEvent TriggerEvent,
		TUserClass* Object,
		TFuncType Func)
	{
		check(InputConfig);
		const auto* InputAction = InputConfig->FindInputActionForTag(Tag);
		if(!InputAction) return;

		BindAction(InputAction, TriggerEvent, Object, Func);
	}
};
