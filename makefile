CFLAGS=-pedantic -std=c99 -Wall -Wextra -Wfloat-equal -Wshadow -Wpointer-arith -Wstrict-prototypes -Wcast-align -Wstrict-overflow=5 -Waggregate-return -Wcast-qual -Wswitch-default -Wswitch-enum -Wunreachable-code -Wno-unused-parameter -Wno-unused-function -Wno-unused-variable -Werror -pedantic-errors -Wmissing-prototypes
CC=gcc

compile:
	yacc -d ./compilers/grammar.y -o ./dist/compiled_grammar.c
	lex -o ./dist/compiled_lexer.c ./compilers/lexer.l
	cc ./dist/compiled_lexer.c ./dist/compiled_grammar.c -o ./dist/compiler

clean:
	rm -rf dist/*

run:
	./dist/compiler

watch:
	while true; do make compile; sleep 3; done
