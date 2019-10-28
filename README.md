# ECE30862-InterpreterProject
Due Sunday, 11/3, 11:59PM

## Summary
The bytecode interpreter will read a bytecode file produced by your compiler, and execute it.

## Current Goals:
The main thing to solve is how to initialize the runtime stack array, we are going to do this the same way that we discussed having a variable length stack in 362.  
Every time that we hit the max length of our stack, we double the size of the stack array.  
Every time that our stack is only 25% in use, we will halve the size of the stack array.  

## Current Branches:
#### List of current branches, and the files they edit and description
##### feature_Value:
##### feature_ByteCode:

## Misc
.smp files are to be treated as binary files

