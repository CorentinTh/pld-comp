# PLD Compilateur
![C/C++ CI](https://github.com/CorentinTh/pld-comp/workflows/C/C++%20CI/badge.svg)
Bare C to ASM compiler in CPP (school project).

## Description

This project has been made during our fourth year at INSA Lyon
The goal of the project was to make a compiler for a subset of the C language using C++ and Antlr4

For now our compilator supports the following features :
 * Arithmetic operations 
   * Binary operators: `*`, `/`, `+`, `-`, `%`, `&`, `|`, `^`
   * Bool operators: `==`, `!=`, `>`, `<`, `>=`, `<=`
   * Unary operators: `-`, `+`, `!` (not bool), `~` (not bitwise)
 * Multiple variable declaration and affectation
 * IF / ELSE (with or without block body)
 * WHILE / DO-WHILE (with or without block body)
 * Procedure and functions up to 6 arguments
 * `getchar` / `putchar`

The project also uses unit testing and continuous integration to prevent regressions.

## Team and Organisation

This is a group project made by :
 - Balthazar Frolin
 - Bastien Marsaud
 - Marc Meillac
 - Corentin Thomasset
 - Lucca Paffi

We mostly work with pair/group programming doing iterative works and building our compiler step by step.
We use Github Projects to track bugs and features status. The fact that it is fully integrated with Github allow us to work faster with one single account.

## User Manual

In order to use our compiler follow these steps :
* Write your own program using the basic C grammar (for the implemented features)
* Compile our compiler (see "[Using command line](#using-command-line)")

Now you can run against any C program .
```
$ ./pld-comp myFile.c -o myResult.s
```

Cli usage :
```
$ ./pld-comp -h
A compiler for a subset of the C language using C++ and Antlr4.
Usage : ./pld-comp <inputFileName> <option> [<args>]

Commandes:
        -h, --help      show this message
        -o              specifie a file to write the output
```

A set of demo of complex working C programs is available in the [demo](./demo) folder.

## Links
 * **Source code**: https://github.com/CorentinTh/pld-comp  
 * **Project management kanban**: https://github.com/CorentinTh/pld-comp/projects/1  
 * **CI pipeline**: https://github.com/CorentinTh/pld-comp/actions  
 * **UT framework**: https://github.com/CorentinTh/comest  

## Code Description

### Project Structure

#### Grammar

The grammar is written for antlr4, you can find the describing file under antlr4 folder with `.g4` extension ([here](./src/antlr/IFCC.g4)).

#### Modules

* **Variable Manager** used to simplify variable management during compilation process

* **ASSM** utility class that simplifies assembly code generation

* **Logger** used to provide informations during compilation process

#### Visitors

For each of our grammars entries we generate a visitor in C++ that will be used for syntax validation and assembly conversion. You can find our visitors in file `CompVisitor.cpp`.

We also use an AST tree to process arithmetics.

> For now our assembly code is generated at differents places, we know it's not a really clean solution but we are waiting for the IR implemtation to refactor this solution.

### IC Explaination

To ensure we do not create regression while implementing features, we've setup continuous integration thanks to Github Actions. The pipeline configuration file is located in [.github/workflows/c-cpp.yml](./.github/workflows/c-cpp.yml). To do so, we've create a small node.js framework called [comest](https://github.com/CorentinTh/comest) that allows execution of shell commands and checks stdout, stderr and the result code of the command thanks to `yaml` files. Here is an example of a test file :

```yaml
name: Simple multiplication
command: ./cmake-build-debug/pld-comp {file1}
assets:
  - type: file
    name: file1
    content: |-
      int main() {
          int a = 8 * 8;
          return a;
      }
expect:
  status: 0
  stdout: |-
    .text
    .global main
    main:
      pushq %rbp
      movq %rsp, %rbp
      movl $8, %eax
      movl $8, %ebx
      imull %ebx, %eax
      movl %eax, -4(%rbp)
      movl -4(%rbp), %eax
      popq %rbp
      ret
```

## Build

This project uses Cmake to build. 

### Prerequisites
The packages `uuid-dev` and `pkg-config` have to be installed.

```shell
sudo apt-get install uuid-dev pkg-config
```

### Using command line
```shell
# Compile
cmake . -B cmake-build-debug
cd cmake-build-debug
make

# Execute
./pld-comp myFile.c
```

### Using Clion
Open it with CLion as a CMake project and the magic will show !

