grammar IFCC;

axiom : prog
      ;

prog : 'int' 'main' '(' ')' '{' instruction* '}' ;

instruction: action ';' ;

action: declaration
      | affectation
      | ifStmt
      | block
      | returnAct
      ;

block: '{' (action)* '}';

declaration: 'int' IDENTIFIER                    # declarationEmpty
           | 'int' IDENTIFIER '=' expr           # declarationAffectation
           | 'int' IDENTIFIER (',' IDENTIFIER)*  # declarationMulti
           ;

affectation: IDENTIFIER '=' expr ;

ifStmt: 'if' '(' expr ')' actionIF=action ('else' actionELSE=action)?;

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
