%{
#include <stdio.h>
#include <stdlib.h>
#include "node.h"
#include "evaluator.h"
#include "types.h"
#include "numbers.h"

#define EVAL 0

void yyerror(char * msg);
extern int yylex();
extern int yylineno;

int symbols[52];
int getSymbolValue(char symbol);
void updateSymbolValue(char symbol, int value);
%}

%union {
  int num;
  char * id;
  char * text;
  struct Node * node;
}

%token <id> IDENTIFIER
%token <num> NUMBER
%token <text> OPERATOR

// Punctuation: =>, {, }, =, (, ), \n
%token RIGHT_ARROW OPEN_BRACE CLOSE_BRACE EQUAL OPEN_PARENS CLOSE_PARENS NEWLINE COMMA

// Keywords: if, do, while, exit
%token IF DO WHILE EXIT_COMMAND

// Comparison operators: ==, >=, <=, >, <
%token CMP_EQUAL CMP_GREATER_EQUAL CMP_LOWER_EQUAL CMP_GREATER CMP_LOWER

// Operators
%token PLUS MINUS TIMES DIVIDE

%type <node> expression term function_expression opt_params parameter

%start program

%%
/*line:
    line NEWLINE line    { ; }
  | assignment
  | EXIT_COMMAND         { exit(0); }
  | expression           { printf("# => %d\n", $1); }
  ;*/
program:
  function { ; }
  ;

function:
  expression NEWLINE                  { if(EVAL) evaluate($1); }
  | empty_expression
  /*function expression { evaluate((VALUE)$2); }
  | empty_expression*/
  ;
/*
assignment:
  IDENTIFIER EQUAL expression  { updateSymbolValue($1, $3); printf("# => pija %d", $3); }
  ;
*/
expression:
    term                         { $$ = $1; }
  | expression PLUS term         { $$ = (struct Node *)create_function_call_node((VALUE)"+", $1, $3); }
  | expression MINUS term        { $$ = (struct Node *)create_function_call_node((VALUE)"-", $1, $3); }
  | expression TIMES term        { $$ = (struct Node *)create_function_call_node((VALUE)"*", $1, $3); }
  | expression DIVIDE term       { $$ = (struct Node *)create_function_call_node((VALUE)"/", $1, $3); }
  | function_expression          { $$ = (struct Node *)create_constant_node((VALUE)$1, CONST_FUNC); /* como pija hago esto bien*/ }
  /*| if_expression                { $$ = $1; }*/
  ;

term:
    NUMBER      { $$ = (struct Node *)create_constant_node($1, CONST_NUMBER); }
  /*| IDENTIFIER  { $$ = getSymbolValue($1); }*/

function_expression:
    parameter_declaration RIGHT_ARROW function_body { $$ = create_constant_node(2, CONST_NUMBER); /* TODO: Cambiar */}
    ;

parameter_declaration:
    OPEN_PARENS opt_params CLOSE_PARENS
    ;

opt_params:
    parameter             { $$ = (struct Node *)create_node_function_parameters((NodeFunctionParameterDeclaration *)$1); }
    | empty_expression
    ;

parameter:
    IDENTIFIER                      { $$ = (struct Node *)create_node_function_parameter_declaration(NULL, $1); }
    | parameter COMMA IDENTIFIER    { $$ = (struct Node *)create_node_function_parameter_declaration((NodeFunctionParameterDeclaration *)$1, $3); }

function_body:
    OPEN_BRACE CLOSE_BRACE
    ;

/*if_expression:
    IF expression OPEN_BRACE expression CLOSE_BRACE optional_else { $$ = create_if_node($2, $4, $6) }

optional_else:
    empty_expression                        { $$ = create_empty_node() }
  | ELSE OPEN_BRACE expression CLOSE_BRACE  { $$ = $3 }*/

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
  if(EVAL)
    printf("evaluando...\n\n\n");

  int i;
  for(i = 0; i < 52; i++) {
    symbols[i] = 0;
  }
  return yyparse();
}
