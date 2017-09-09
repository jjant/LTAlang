%{
#include <stdio.h>
#include <stdlib.h>

void yyerror(char * msg);
extern int yylex();
extern int yylineno;

int symbols[52];
int getSymbolValue(char symbol);
void updateSymbolValue(char symbol, int value);
%}

%union {
  int num;
  char id;
  char * text;
}

%token <id> IDENTIFIER
%token <num> NUMBER
%token <text> OPERATOR

// Punctuation
%token RIGHT_ARROW OPEN_BRACE CLOSE_BRACE EQUAL OPEN_PARENS CLOSE_PARENS NEWLINE

// Keywords
%token IF DO WHILE EXIT_COMMAND

// Comparison operators
%token CMP_EQUAL CMP_GREATER_EQUAL CMP_LOWER_EQUAL CMP_GREATER CMP_LOWER

%type <num> expression term

%start line

%%
line:
    line NEWLINE line    { ; }
  | assignment
  | EXIT_COMMAND         { exit(0); }
  | expression           { printf("# => %d\n", $1); }
  ;

assignment:
  IDENTIFIER EQUAL expression  { updateSymbolValue($1, $3); printf("# => pija %d", $3); }
  ;

expression:
    term                         { $$ = $1; }
  | expression '+' term          { $$ = $1 + $3; }
  | expression '-' term          { $$ = $1 - $3; }
  ;

term:
    NUMBER      { $$ = $1; }
  | IDENTIFIER  { $$ = getSymbolValue($1); }

function_expression:
    parameter_declaration RIGHT_ARROW function_body

parameter_declaration:
    OPEN_PARENS CLOSE_PARENS

function_body:
    OPEN_BRACE CLOSE_BRACE

if_expression:
    IF expression OPEN_BRACE expression CLOSE_BRACE optional_else

optional_else:
    empty_expression
  | ELSE OPEN_BRACE expression CLOSE_BRACE

empty_expression:
  ;
%%

void yyerror(char *msg) {
  printf("%s on line %d\n\n", msg, yylineno);
  exit(1);
}

int getSymbolValue(char symbol) {
  return symbols[symbol - 'a'];
}

void updateSymbolValue(char symbol, int value) {
  symbols[symbol] = value;
}

int main() {
  int i;
  for(i = 0; i < 52; i++) {
    symbols[i] = 0;
  }
  return yyparse();
}
