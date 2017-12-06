CC=gcc
CFLAGS=-w
DIST_FOLDER=dist
OBJDIR=./dist
SOURCES=$(wildcard dist/*.c)
OBJECTS=objects
HEADERS=headers
DEP_COMPILER=dep_compiler
DEP_COMPILER_OUT=dependency_compiler.out
PARSER=parser
PARSER_SOURCE=src/grammar/grammar.y
PARSER_C=dist/grammar.tab.c
LEXER=lexer
LEXER_OBJECT=dist/lex.yy.c
CODE_GENERATOR=code_generator
CODE_GENERATOR_SRC=$(wildcard src/code_generator/*.c)
CODE_GENERATOR_OBJ=$(CODE_GENERATOR_SRC:.c=.o)
OBJS_SRC=$(wildcard dist/*.o)
OBJS_2=$(SOURCES:.c=.o)
CP_CODE_GENERATOR_SRC=cp_code_gen
CP_SRC=cp_src
OBJS_1=OBJS_1
MAKE_OBJS=objs__

all: $(DIST_FOLDER) $(PARSER) $(LEXER) $(OBJS_1) $(DEP_COMPILER)

$(OBJDIR)/%.o: %.c $(HEADERS)
	$(HEADERS)
	$(CC) $(CFLAGS) -c -o $@ $<

$(DIST_FOLDER):
	mkdir -p $(DIST_FOLDER)

$(PARSER): $(DIST_FOLDER)
	bison -d $(PARSER_SOURCE) -o $(PARSER_C)

$(LEXER): $(DIST_FOLDER)
	flex -o $(LEXER_OBJECT) src/grammar/lexer.l

$(CP_SRC): $(DIST_FOLDER)
	cp src/code_generator/* dist/

$(OBJS_1): $(CP_SRC) $(OBJS_2)

$(MAKE_OBJS)%.o: $(wildcard dist/*.c)
	$(CC) $(CFLAGS) -c -o $@ $<


$(CP_CODE_GENERATOR_SRC):
	cp -f src/code_generator/* dist

$(CODE_GENERATOR): $(CP_CODE_GENERATOR_SRC) $(CODE_GENERATOR_OBJ)

$(DEP_COMPILER): $(OBJS_1)
	$(CC) $(OBJS_SRC) -o $(DEP_COMPILER_OUT)

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
