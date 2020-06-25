parser grammar IFCC;

options {
    tokenVocab = IFCCLexer;
}

axiom
    : (globalItem)*
    ;

globalItem
    : function
    | declaration
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
    : expr op=MULT expr     # operation
    | expr op=DIV  expr     # operation
    | expr op=MOD  expr     # operation
    | expr op=PLUS expr     # operation
    | expr op=MIN  expr     # operation
    | expr op=MIN  expr     # operation
    | CONST                 # const
    | IDENTIFIER            # identifier
    | '(' expr ')'          # parenthesis
    ;



