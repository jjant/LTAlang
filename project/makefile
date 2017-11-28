all:
	bison -d grammar.y
	lex lexer.l
	gcc -c grammar.tab.c structures.c code_generator/main.c lex.yy.c -s
	gcc grammar.tab.o lex.yy.o structures.o main.o -o runner.out

run:
	make all
	clear
	echo "| a: \"hola\" |" | ./runner.out
