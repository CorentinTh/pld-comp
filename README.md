# PLD Compilateur
![C/C++ CI](https://github.com/CorentinTh/pld-comp/workflows/C/C++%20CI/badge.svg)

## Description

This project has been made during study time at INSA Lyon
The goal of the project was to make a C compiler using C++ and Antlr4

For now our compilator support the following features :
* Main function
* Value return (only integer)
* Multiple variable declaration and affectation (only integer)
* Arithmetics

The project is also using unit testing to prevent regressions.

## Team and Organisation

This is a group project made by :
* Corentin Thomasset
* Bastien Marsaud
* Lucca Paffi
* Marc Meillac
* Balthazar Frolin

We mostly works with pair programming doing iterative works and building our compiler step by step

## User Manuel

In order to use our compiler follow the these steps :
* Write your own program using the basic c grammar (for the implemented features)
* Execute our compiler 
  * If there is syntaxe issues, errors will be printed in the console output
  * Else you will get your working binary file

Now you can run your binary file on your computer and see your program working.

## Code Description

### Project Structure

#### Grammar

The grammar is written for antlr4, you can find the describing file under antlr4 folder with `.g4` extension.

#### Modules

**Variable Manager** used to simplify variable management during compilation process

**ASSM** //TODO 

**Logger** used to provide informations during compilation process

#### Visitors

For each of our grammars entries we generate a visitor in C++ that will be used for syntaxe validation and assembly conversion.

We also use a AST tree to process arithmetics.

> For now our assembly code is generated at differents places, we know it's not a really clean solution but we are waiting for the IR implemtation to refactor this solution.

### IC Explaination

TODO

## Build

This project uses Cmake to build. Open it with CLion as a CMake project and the magic will show !

Note that the packages `uuid-dev` and `pkg-config` have to be installed.
