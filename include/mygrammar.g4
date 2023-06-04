grammar mygrammar;
DOUBLE:[0-9]+ '.' [0-9]+ | [0-9]+;
NAME:[A-z]+;
EQ:'=';
COUT: '<<';
SUB:'-';
MUL:'*';
SUM:'+';
DIV:'/';
SEP:';';
LBR:'(';
RBR:')';
WS:[ \t\r\n]->skip;
expr: expr (MUL|DIV) expr # exprMULexpr
	| expr (ADD|SUB) expr # exprADDexpr
	| LBR expr RBR # LexprR
	| DOUBLE # DOUBLE
	| NAME # VAR
;
row: expr SEP # expr_sep
	| NAME EQ expr SEP # ADD_VAR
	| COUT expr SEP # cout_expr_sep
;
prog: row EOF? # oneLineProg
| row prog EOF? # prog_row
;
