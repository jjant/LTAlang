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
%token RIGHT_ARROW OPEN_BRACE CLOSE_BRACE EQUAL OPEN_PARENS CLOSE_PARENS EXIT_COMMAND NEWLINE

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
