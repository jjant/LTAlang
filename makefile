default:
	rm -rf dist/*
	yacc -d ./compilers/grammar.y -o ./dist/compiled_grammar.c
	lex -o ./dist/compiled_lexer.c ./compilers/lexer.l
	cc ./dist/compiled_lexer.c ./dist/compiled_grammar.c -o ./dist/compiler

rmcmp:
	rm y.tab.c y.tab.h

run:
	./dist/compiler
