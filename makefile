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
