// Fill out your copyright notice in the Description page of Project Settings.


#include "TaggedInputConfig.h"

const UInputAction* UTaggedInputConfig::FindInputActionForTag(FGameplayTag Tag) const
{
	for(const auto& TaggedInputAction : TaggedInputActions)
	{
		if(TaggedInputAction.InputAction && TaggedInputAction.InputTag == Tag)
		{
			return TaggedInputAction.InputAction;
		}
	}

	return nullptr;
}
