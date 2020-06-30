lexer grammar IFCCLexer;

IF : 'if' ;
ELSE : 'else' ;
WHILE : 'while' ;
DO : 'do' ;
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
L_NOT   : '!'  ;
B_NOT   : '~'  ;
NEQ     : '!=' ;
DEQ     : '==' ;
GT      : '>'  ;
LT      : '<'  ;
GE      : '>=' ;
LE      : '<=' ;
B_AND   : '&'  ;
L_AND   : '&&' ;
B_OR    : '|'  ;
L_OR    : '||' ;
X_OR    : '^'  ;
DPLUS   : '++' ;
DMIN    : '--' ;
MULT_EQ : '*=' ;
DIV_EQ  : '/=' ;
PLUS_EQ : '+=' ;
MIN_EQ  : '-=' ;

CONST : [0-9]+ ;
CHAR_LIT: '\''[a-zA-Z_]'\'';
IDENTIFIER: [a-zA-Z_][a-zA-Z0-9_]* ;
OPERATOR : [+\-*/];
COMMENT : '/*' .*? '*/' -> skip ;
DIRECTIVE : '#' .*? '\n' -> skip ;
WS    : [ \t\r\n] -> channel(HIDDEN);
