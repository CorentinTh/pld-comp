parser grammar IFCCParser;

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
    | whileStmt
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

whileStmt returns[bool isDoWhile]
    : WHILE OPEN_PAR condition=expr CLOSE_PAR statement               {$isDoWhile = false;}
    | DO statement WHILE OPEN_PAR condition=expr CLOSE_PAR SEMICOLON  {$isDoWhile = true;}
    ;

returnAct
    : RETURN expr
    ;

expr
    : expr op=MULT expr       # operationBinary
    | expr op=DIV  expr       # operationBinary
    | expr op=MOD  expr       # operationBinary
    | expr op=MIN  expr       # operationBinary
    | expr op=PLUS expr       # operationBinary
    | expr op=DEQ  expr       # operationBinary
    | expr op=NEQ  expr       # operationBinary
    | expr op=GT   expr       # operationBinary
    | expr op=GE   expr       # operationBinary
    | expr op=LT   expr       # operationBinary
    | expr op=LE   expr       # operationBinary
    | expr op=AND  expr       # operationBinary
    | expr op=DAND expr       # operationBinary
    | expr op=OR   expr       # operationBinary
    | expr op=DOR  expr       # operationBinary
    | OPEN_PAR expr CLOSE_PAR # parenthesis
    | op=MIN  expr            # operationUnary
    | CONST                   # const
    | IDENTIFIER              # identifier
    ;



