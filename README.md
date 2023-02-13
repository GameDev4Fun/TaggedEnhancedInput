# TaggedEnhancedInput

## How to use?

First things first, you need to set the TaggedInputComponent as your default Input Component. 

To do so go to Project Settings -> Default Input Component Class and choose `UTaggedInputComponent`

Next, you need to define your Gameplay Tags dedicated to inputs (e.g. Input.Jump, Input.Move) either in Project Settings or natively in code. 
With Input Actions defined normally, create an Input Config that maps Input Action and Gameplay Tags. This Input Config will be used to map action
to gameplay tags in your code.
