grammar IFCC;

axiom : prog
      ;

prog : 'int' 'main' '(' ')' '{' instruction* '}' ;

instruction: expression ';' ;

expression: declaration
    | affectation
    | returnExpr
    ;

declaration: 'int' IDENTIFIER           #declarationEmpty
           | 'int' IDENTIFIER '=' CONST   #declarationConst
           ;

affectation: IDENTIFIER '=' IDENTIFIER  #affectationIdentifier
           | IDENTIFIER '=' CONST       #affectationConst
           ;

returnExpr: 'return' IDENTIFIER             #returnIdentifier
      | 'return' CONST                  #returnConst
      ;

CONST : [0-9]+ ;
IDENTIFIER: [a-zA-Z]+ ;
COMMENT : '/*' .*? '*/' -> skip ;
DIRECTIVE : '#' .*? '\n' -> skip ;
WS    : [ \t\r\n] -> channel(HIDDEN);
