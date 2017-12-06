CC=gcc
CFLAGS=-w

DIST_FOLDER=dist

CP_SRC=cp_src

PARSER=parser
PARSER_SOURCE=src/grammar/grammar.y
PARSER_C=dist/grammar.tab.c
PARSER_OBJECT=dist/grammar.tab.o

LEXER=lexer
LEXER_SOURCE=src/grammar/lexer.l
LEXER_C=dist/lex.yy.c
LEXER_OBJECT=dist/lex.yy.o

CODE_GENERATOR=code_generator
CODE_GENERATOR_C=dist/main.c
CODE_GENERATOR_OBJECT=dist/main.o

STRUCTURES_C=dist/structures.c
STRUCTURES_OBJECT=dist/structures.o

OBJECTS=objects

DEP_COMPILER=dep_compiler
DEP_COMPILER_OUT=dependency_compiler.out
DEP_COMPILER_SOURCES=$(wildcard dist/*.o)

all: $(DEP_COMPILER)

$(DIST_FOLDER):
	mkdir -p $(DIST_FOLDER)

$(PARSER): $(DIST_FOLDER)
	bison -o $(PARSER_C) -d $(PARSER_SOURCE)

$(LEXER): $(DIST_FOLDER)
	flex -o $(LEXER_C) $(LEXER_SOURCE)

$(CP_SRC): $(DIST_FOLDER)
	cp src/code_generator/* $(DIST_FOLDER)

$(PARSER_OBJECT): $(PARSER)
	$(CC) $(CFLAGS) -c -o $(PARSER_OBJECT) $(PARSER_C)

$(LEXER_OBJECT): $(LEXER)
	$(CC) $(CFLAGS) -c -o $(LEXER_OBJECT) $(LEXER_C)

$(CODE_GENERATOR_OBJECT):
	$(CC) $(CFLAGS) -c -o $(CODE_GENERATOR_OBJECT) $(CODE_GENERATOR_C)
	$(CC) $(CFLAGS) -c -o $(STRUCTURES_OBJECT) $(STRUCTURES_C)

$(OBJECTS): $(CP_SRC) $(PARSER_OBJECT) $(LEXER_OBJECT) $(CODE_GENERATOR_OBJECT)

$(DEP_COMPILER): $(OBJECTS)
	$(CC) $(DEP_COMPILER_SOURCES) -o $(DEP_COMPILER_OUT)

dependencies:
	npm install

build:
	$(CC) -c grammar.tab.c src/code_generator/structures.c src/code_generator/main.c lex.yy.c -w -s &&	$(CC) grammar.tab.o lex.yy.o structures.o main.o -o dependency_compiler.out

clean:
	rm -rf grammar.tab.o lex.yy.o main.o structures.o dependency_compiler.out grammar.tab.c grammar.tab.h lex.yy.c unoptimized.js output.js dist

run:
	make all
	clear
	cat input.lta | ./compiler
