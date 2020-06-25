lexer grammar IFCCLexer;

IF : 'if' ;
ELSE : 'else' ;
WHILE : 'while' ;
RETURN : 'return' ;

OPEN_PAR : '(' ;
CLOSE_PAR : ')' ;
OPEN_BRACE : '{' ;
CLOSE_BRACE : '}' ;
OPEN_BRACKET : '[' ;
CLOSE_BRACKET : ']' ;

SEMICOLON : ';' ;
COMMA     : ',' ;

INT  : 'int' ;
CHAR : 'char';

MULT    : '*'  ;
DIV     : '/'  ;
PLUS    : '+'  ;
MIN     : '-'  ;
MOD     : '%'  ;
EQ      : '='  ;
NEQ     : '!=' ;
DEQ     : '==' ;
GT      : '>'  ;
LT      : '<'  ;
GE      : '>=' ;
LE      : '<=' ;

CONST : [0-9]+ ;
IDENTIFIER: [a-zA-Z_][a-zA-Z0-9_]* ;
OPERATOR : [+\-*/];
COMMENT : '/*' .*? '*/' -> skip ;
DIRECTIVE : '#' .*? '\n' -> skip ;
WS    : [ \t\r\n] -> channel(HIDDEN);
