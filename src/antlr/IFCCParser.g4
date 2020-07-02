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
    : type functionLabel=IDENTIFIER OPEN_PAR (type IDENTIFIER (COMMA type IDENTIFIER)*)? CLOSE_PAR block
    ;

instruction
    : action SEMICOLON
    ;

action
    : declaration
    | affectation
    | functionCall
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

functionCall
    : functionLabel=IDENTIFIER OPEN_PAR (expr (COMMA expr)*)? CLOSE_PAR
    ;



expr returns[bool isInfix]
    : expr op=MULT  expr       # operationBinary
    | expr op=DIV   expr       # operationBinary
    | expr op=MOD   expr       # operationBinary
    | expr op=MIN   expr       # operationBinary
    | expr op=PLUS  expr       # operationBinary
    | expr op=DEQ   expr       # operationBinary
    | expr op=NEQ   expr       # operationBinary
    | expr op=GT    expr       # operationBinary
    | expr op=GE    expr       # operationBinary
    | expr op=LT    expr       # operationBinary
    | expr op=LE    expr       # operationBinary
    | expr op=B_AND expr       # operationBinary
    | expr op=L_AND expr       # operationBinary
    | expr op=B_OR  expr       # operationBinary
    | expr op=L_OR  expr       # operationBinary
    | expr op=X_OR  expr       # operationBinary
    | OPEN_PAR expr CLOSE_PAR  # parenthesis
    | op=MIN   expr            {$isInfix = true;} # operationUnary
    | op=PLUS  expr            {$isInfix = true;} # operationUnary
    | op=L_NOT expr            {$isInfix = true;} # operationUnary
    | op=B_NOT expr            {$isInfix = true;} # operationUnary
    | CONST                    # const
    | IDENTIFIER               # identifier
    | functionCall            # functionCallExpr
    | CHAR_LIT                 # charLiteral
    ;



