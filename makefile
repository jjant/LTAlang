default:
	yacc -d calc.y
	lex calc.l
	cc lex.yy.c y.tab.c -o calc
