cmake_minimum_required(VERSION 3.16)
project(pld-comp)

set(CMAKE_CXX_STANDARD 14)

include_directories(src)
include_directories(src/antlr)

add_executable(
        pld-comp
        src/antlr/IFCCParserBaseVisitor.cpp
        src/antlr/IFCCParserBaseVisitor.h
        src/antlr/IFCCLexer.cpp
        src/antlr/IFCCLexer.h
        src/antlr/IFCCParserVisitor.cpp
        src/antlr/IFCCParserVisitor.h
        src/antlr/IFCCParser.cpp
        src/antlr/IFCCParser.h
        src/CompVisitor.cpp
        src/CompVisitor.h
        src/Logger.h
        src/Logger.cpp
        src/ASSM.h
        src/ASSM.cpp
        src/main.cpp
        src/AST.cpp
        src/AST.h
        src/Variable.h
        src/Variable.cpp
        src/VariableManager.h
        src/VariableManager.cpp
        src/main.cpp
        src/TagManager.h)

include(ExternalAntlr4Cpp.cmake)
include_directories(${ANTLR4_INCLUDE_DIRS})

target_link_libraries(pld-comp antlr4_static)