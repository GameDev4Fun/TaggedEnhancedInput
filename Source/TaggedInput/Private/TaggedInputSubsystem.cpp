// Fill out your copyright notice in the Description page of Project Settings.


#include "TaggedInputSubsystem.h"

#if PLATFORM_WINDOWS
#include "Windows/WindowsHWrapper.h"
#endif

ETaggedInputKeyboardLayout UTaggedInputSubsystem::CheckKeyboardLayout()
{
#if PLATFORM_WINDOWS
	switch(PRIMARYLANGID(LOWORD(::GetKeyboardLayout(0))))
	{
	case LANG_FRENCH:
		return ETaggedInputKeyboardLayout::Azerty;
	case LANG_GERMAN:
		return ETaggedInputKeyboardLayout::Qwertz;
	default:
		return ETaggedInputKeyboardLayout::Qwerty;
	}
#else
	return ETaggedInputKeyboardLayout::Qwerty;
#endif
	
}
