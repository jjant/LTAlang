all:
	bison -d grammar/grammar.y &&	lex grammar/lexer.l &&	gcc -c grammar.tab.c code_generator/structures.c code_generator/main.c lex.yy.c -s &&	gcc grammar.tab.o lex.yy.o structures.o main.o -o compiler.out

grammar:
	bison -d grammar.y &&	lex lexer.l

build:
	gcc -c grammar.tab.c code_generator/structures.c code_generator/main.c lex.yy.c -s &&	gcc grammar.tab.o lex.yy.o structures.o main.o -o compiler.out

clean:
	rm -f grammar.tab.o lex.yy.o main.o structures.o compiler.out grammar.tab.c grammar.tab.h lex.yy.c

run:
	make all
	clear
	cat input.lta | ./compiler.out
