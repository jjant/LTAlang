all:
	bison -d grammar/grammar.y &&	lex grammar/lexer.l &&	gcc -c grammar.tab.c code_generator/structures.c code_generator/main.c lex.yy.c -w -s &&	gcc grammar.tab.o lex.yy.o structures.o main.o -o dependency_compiler.out && npm install

grammar:
	bison -d grammar/grammar.y &&	lex grammar/lexer.l

dependencies:
	npm install

build:
	gcc -c grammar.tab.c code_generator/structures.c code_generator/main.c lex.yy.c -w -s &&	gcc grammar.tab.o lex.yy.o structures.o main.o -o dependency_compiler.out

clean:
	rm -rf grammar.tab.o lex.yy.o main.o structures.o dependency_compiler.out grammar.tab.c grammar.tab.h lex.yy.c node_modules unoptimized.js output.js

run:
	make all
	clear
	cat input.lta | ./compiler
