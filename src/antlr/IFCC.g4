grammar IFCC;

axiom : prog
      ;

prog : 'int' 'main' '(' ')' '{' inst* '}' ;

inst: expr ';' ;

expr: 'int' IDENTIFIER '=' CONST #identExpr
    | RETURN IDENTIFIER #returnExpr
    ;

RETURN : 'return' ;
CONST : [0-9]+ ;
IDENTIFIER: [a-zA-Z]+ ;
COMMENT : '/*' .*? '*/' -> skip ;
DIRECTIVE : '#' .*? '\n' -> skip ;
WS    : [ \t\r\n] -> channel(HIDDEN);