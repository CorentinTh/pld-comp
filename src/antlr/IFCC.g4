parser grammar IFCC;

options {
    tokenVocab = IFCCLexer;
}

axiom
    : (globalItem)*
    ;

globalItem
    : declaration
    | function
    ;

function
    : type IDENTIFIER OPEN_PAR CLOSE_PAR block
    ;

instruction
    : action SEMICOLON
    ;

action
    : declaration
    | affectation
    | returnAct
    ;

statement
    : instruction
    | ifStmt
    | block
    ;

block
    : OPEN_BRACE (statement)* CLOSE_BRACE
    ;

declaration
    : type IDENTIFIER                      # declarationEmpty
    | type IDENTIFIER EQ expr              # declarationAffectation
    | type IDENTIFIER (COMMA IDENTIFIER)*  # declarationMulti
    ;

type
    : typeName=INT
    ;

affectation
    : IDENTIFIER EQ expr
    ;

ifStmt
    : IF OPEN_PAR condition=expr CLOSE_PAR actionIF=statement (ELSE actionELSE=statement)?
    ;

returnAct
    : RETURN expr
    ;

expr
    : expr op=MULT expr       # operationBinary
    | expr op=DIV  expr       # operationBinary
    | expr op=MOD  expr       # operationBinary
    | expr op=PLUS expr       # operationBinary
    | expr op=MIN  expr       # operationBinary
    | op=MIN  expr            # operationUnary
    | CONST                   # const
    | IDENTIFIER              # identifier
    | OPEN_PAR expr CLOSE_PAR # parenthesis
    ;



