%{
#include <stdio.h>
#include <stdlib.h>
#include "node.h"
#include "evaluator.h"
#include "types.h"
#include "numbers.h"

/* Turns evaluation on/off */
/*OFF = 0*/
/*ON  = 1*/
#define EVAL 1

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

// Keywords: if, do, while, exit, do while {}, do {} while
%token IF DO WHILE EXIT_COMMAND REPEAT_BEFORE REPEAT_AFTER

// Comparison operators: ==, >=, <=, >, <
%token CMP_EQUAL CMP_GREATER_EQUAL CMP_LOWER_EQUAL CMP_GREATER CMP_LOWER

// Logic Operators: !, &
%token NOT AND

// Object operators: .
%token OBJECT_RETRIEVE

// Logic Literals: true, false
%token TRUE FALSE

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
  a { ; }
  ;

a:
  function NEWLINE
  | a NEWLINE a
  ;

/*function:
  expression                  { if(EVAL) evaluate($1); }
  | empty_expression          { printf("empty exp\n");}
  function expression { evaluate((VALUE)$2); }
  | empty_expression*/
  ;
/*
assignment:
  IDENTIFIER EQUAL logic_expression  { updateSymbolValue($1, $3); printf("# => pija %d", $3); }
  ;
*/

/*
  Function call
*/

function_call:
  identifier OPEN_PARENS call_parameters CLOSE_PARENS
  ;

call_parameters:
    empty_expression
  | call_parameter
  ;

parameter:
    logic_expression
  | identifier
  | call_parameter
  // TODO: Add comma between parameters.
  ;

/*
  JS Objects alike
*/
object:
  identifier EQUAL OPEN_BRACE object_body CLOSE_BRACE
  ;

object_body:
    identifier EQUAL logic_expression
  | NEWLINE object_body
  ;

object_value:
  identifier OBJECT_RETRIEVE identifier
  // TODO: Check how to assign this to a variable. Check if it's ok to do this like this.
  ;

/*
  Loops
*/
while:
    repeat testable_expression code_block
  | repeat testable_expression assignment
  | repeat testable_expression logic_expression
  ;

testable_expression:
  OPEN_PARENS logic_expression CLOSE_PARENS
  ;

repeat:
    REPEAT_BEFORE
  | REPEAT_AFTER
  ;

code_block:
  OPEN_BRACE body CLOSE_BRACE // TODO: body should be several lines of code. HOW TO?
  ;


/*
  Logic expressions grammar
*/
logic_expression:
    logic_term
  | logic_expression AND logic_term
  ;

logic_term:
    logic_factor
  | NOT logic_term
  ;

logic_factor:
    literal
  | logic_comparison
  | OPEN_PARENS logic_expression CLOSE_PARENS
  ;

logic_comparison:
    expression CMP_LOWER         expression
  | expression CMP_GREATER       expression
  | expression CMP_GREATER_EQUAL expression
  | expression CMP_LOWER_EQUAL   expression
  | expression CMP_EQUAL         expression
  ;

logic_literal:
    TRUE
  | FALSE
  ;

/*
  Arithmetic expressions grammar
*/
expression:
    term
  | expression PLUS term
  | expression MINUS term
  ;

term:
    factor
  | term TIMES factor
  | term DIVIDE factor
  ;

factor:
    literal
  | OPEN_PARENS expression CLOSE_PARENS
  ;

literal:
    logic_literal
  | number
  | identifier
  | function_call
  // TODO: Add function declaration?
  ;

/*value:
  term

expression:
    term                         { $$ = $1; }
  | expression PLUS term         { $$ = (struct Node *)create_function_call_node((VALUE)"+", $1, $3); }
  | expression MINUS term        { $$ = (struct Node *)create_function_call_node((VALUE)"-", $1, $3); }
  | expression TIMES term        { $$ = (struct Node *)create_function_call_node((VALUE)"*", $1, $3); }
  | expression DIVIDE term       { $$ = (struct Node *)create_function_call_node((VALUE)"/", $1, $3); }
  | function_expression          { $$ = (struct Node *)create_constant_node((VALUE)$1, CONST_FUNC); /* como pija hago esto bien*/ }
  /*| if_expression                { $$ = $1; }
  ;*/
/*
term:
    NUMBER
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
    printf("[[EVALUATION MODE]]\n\n");

  int i;
  for(i = 0; i < 52; i++) {
    symbols[i] = 0;
  }
  return yyparse();
}
