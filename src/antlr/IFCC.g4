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
           | 'int' IDENTIFIER (',' IDENTIFIER)*   #declarationMulti
           | 'int' IDENTIFIER CONST   #declarationConst
           | 'int' IDENTIFIER ASSIGNMENT_OPERATOR IDENTIFIER #declarationAssign
           ;

affectation: IDENTIFIER ASSIGNMENT_OPERATOR IDENTIFIER  #affectationIdentifier
           | IDENTIFIER ASSIGNMENT_OPERATOR CONST       #affectationConst
           ;

returnExpr: RETURN_OPERATOR IDENTIFIER             #returnIdentifier
      | RETURN_OPERATOR CONST                  #returnConst
      ;

CONST : [0-9]+ ;
IDENTIFIER: [a-zA-Z]+ ;
COMMENT : '/*' .*? '*/' -> skip ;
DIRECTIVE : '#' .*? '\n' -> skip ;
WS    : [ \t\r\n] -> channel(HIDDEN);
ASSIGNMENT_OPERATOR: '=';
RETURN_OPERATOR: 'return';