OBJECTS=objects
DEP_COMPILER=dependency_compiler

all: $(BISON_FLEX) $(OBJECTS) $(DEP_COMPILER)
	$(BISON_FLEX)
	$(OBJECTS)
	$(DEP_COMPILER)

$(BISON_FLEX):
	bison -d src/grammar/grammar.y &&	lex src/grammar/lexer.l

$(OBJECTS):
	gcc -c grammar.tab.c src/code_generator/structures.c src/code_generator/main.c lex.yy.c -w -s
$(DEP_COMPILER):
	gcc grammar.tab.o lex.yy.o structures.o main.o -o dependency_compiler.out

grammar:
	bison -d src/grammar/grammar.y &&	lex src/grammar/lexer.l

dependencies:
	npm install

build:
	gcc -c grammar.tab.c src/code_generator/structures.c src/code_generator/main.c lex.yy.c -w -s &&	gcc grammar.tab.o lex.yy.o structures.o main.o -o dependency_compiler.out

clean:
	rm -rf grammar.tab.o lex.yy.o main.o structures.o dependency_compiler.out grammar.tab.c grammar.tab.h lex.yy.c unoptimized.js output.js

run:
	make all
	clear
	cat input.lta | ./compiler
