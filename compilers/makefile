compile:
	yacc -d grammar.y
	lex lexer.l
	gcc -c y.tab.c lex.yy.c
	gcc y.tab.o lex.yy.o evaluator.c builtin.c node.c numbers.c string.c -o runner.out

clean:
	rm -rf dist/*

run:
	./dist/compiler

watch:
	while true; do make compile; sleep 3; done
