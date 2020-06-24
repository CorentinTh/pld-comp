grammar IFCC;

axiom : prog
      ;

prog: functionDeclaration+ ;

functionDeclaration: 'int' IDENTIFIER '(' ')' '{' instruction* '}'                                        #zeroArgumentsFunction
                   | 'int' IDENTIFIER '(' 'int' IDENTIFIER (', int' IDENTIFIER)* ')' '{' instruction* '}' #multiArgumentFunction
	               ;

functionCall: IDENTIFIER '(' ')'                    #zeroArgumentFunctionCall
	        | IDENTIFIER '(' CONST (',' CONST)* ')' #multiArgumentFunctionCall
	        ;

instruction: action ';' ;

action: declaration
      | affectation
      | functionCall
      | returnAct
      ;

declaration: 'int' IDENTIFIER                    # declarationEmpty
           | 'int' IDENTIFIER '=' expr           # declarationAffectation
           | 'int' IDENTIFIER (',' IDENTIFIER)*  # declarationMulti
           ;

affectation: IDENTIFIER '=' expr ;

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
