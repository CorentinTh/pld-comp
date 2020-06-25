grammar IFCC;

axiom : prog
      ;

prog : 'int' 'main' '(' ')' '{' statement* '}' ;

instruction: action ';' ;

action: declaration
      | affectation
      | returnAct
      ;

statement: instruction
         | ifStmt
         | block;

block: '{' (statement)* '}';

declaration: 'int' IDENTIFIER                    # declarationEmpty
           | 'int' IDENTIFIER '=' expr           # declarationAffectation
           | 'int' IDENTIFIER (',' IDENTIFIER)*  # declarationMulti
           ;

affectation: IDENTIFIER '=' expr ;

ifStmt: 'if' '(' condition=expr ')' actionIF=statement ('else' actionELSE=statement)?;

returnAct: 'return' expr ;

expr: expr OP=( '*' | '/' ) expr        # operationMultDiv
    | expr OP=( '+' | '-' ) expr        # operationPlusMinus
    | CONST                             # const
    | IDENTIFIER                        # identifier
    | '(' expr ')'                      # parenthesis
    ;

CONST : [0-9]+ ;
IDENTIFIER: [a-zA-Z]+ ;
OPERATOR : [+\-*/];
COMMENT : '/*' .*? '*/' -> skip ;
DIRECTIVE : '#' .*? '\n' -> skip ;
WS    : [ \t\r\n] -> channel(HIDDEN);
