grammar IFCC;

axiom : prog
      ;

prog : 'int' 'main' '(' ')' '{' instruction* '}' ;

instruction: expression ';' ;

expression: declaration
    | affectation
    | returnExpr
    ;

declaration: 'int' IDENTIFIER ASSIGNMENT_OPERATOR CONST   #declarationConst
           | 'int' IDENTIFIER ASSIGNMENT_OPERATOR IDENTIFIER #declarationAssign
           | 'int' IDENTIFIER (',' IDENTIFIER)*   #declarationMulti
           ;

affectation: IDENTIFIER ASSIGNMENT_OPERATOR IDENTIFIER  #affectationIdentifier
           | IDENTIFIER ASSIGNMENT_OPERATOR CONST       #affectationConst
           ;

returnExpr:  'return' IDENTIFIER             #returnIdentifier
           | 'return' CONST                  #returnConst
           ;

CONST : [0-9]+ ;
IDENTIFIER: [a-zA-Z]+ ;
COMMENT : '/*' .*? '*/' -> skip ;
DIRECTIVE : '#' .*? '\n' -> skip ;
WS    : [ \t\r\n] -> channel(HIDDEN);
ASSIGNMENT_OPERATOR: '=';