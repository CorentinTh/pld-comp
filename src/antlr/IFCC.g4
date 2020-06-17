grammar IFCC;

axiom : prog
      ;

prog : 'int' 'main' '(' ')' '{' instruction* '}' ;

instruction: action ';' ;

action: declaration
      | affectation
      | returnAct
      ;

declaration: 'int' IDENTIFIER                    # declarationEmpty
           | 'int' IDENTIFIER '=' expr           # declarationAffectation
           | 'int' IDENTIFIER (',' IDENTIFIER)*  # declarationMulti
           ;

affectation: IDENTIFIER '=' expr ;

returnAct: 'return' expr ;

expr: expr OPERATOR expr                # operation
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
