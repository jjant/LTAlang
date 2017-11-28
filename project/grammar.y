%{
	#include "structures.h"
	extern int yylineno;

	void yyerror(char *);
%}

// Variables and constants
%token IDENTIFIER CONSTANT STRING_LITERAL

// Comparision and assignment operators
%token INC_OP DEC_OP LEFT_OP RIGHT_OP LE_OP GE_OP EQ_OP NE_OP
%token AND_OP OR_OP MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN ADD_ASSIGN
%token SUB_ASSIGN LEFT_ASSIGN RIGHT_ASSIGN AND_ASSIGN REG_ASSIGN
%token XOR_ASSIGN OR_ASSIGN

// This can be called from wherever
%token THIS ENDMARKER

// Lamdas =>, _. The placeholder is to ignore a parameter, returning a function with setted parameters
%token LAMDA_ASSIGN PLACEHOLDER

// Usually (, ). I separate them just in case we want to use different symbols for each.
%token PARENS_OPEN PARENS_CLOSE

// Usually { }. Idem before
%token BRACKETS_OPEN BRACKETS_CLOSE

// Usually [, ]. Idem before
%token ARRAY_OPEN ARRAY_CLOSE

// |, |
%token SIMPLE_BAR

// ,
%token LIST_DELIMITER

// :
%token COLONS

%token EMPTY ASYNC

// Operators
%token PROD MOD COCIENT PLUS MINUS
%token LESS GREATER

// Ternary Operator
%token THEN

// Object property accessor .
%token OBJECT_ACCESSOR

// Flow tokens
%token IF ELSE WHILE DO FOR RETURN

%start statement_list

%%

// Lamda functions are first class citizens
lamda_declaration
	: opt_async SIMPLE_BAR parameter_list SIMPLE_BAR LAMDA_ASSIGN compound_statement { $$ = newNodeLamdaDeclaration($1, $2, $3); }
	;

opt_async
	: EMPTY
	| ASYNC
	;

// Objects are key-value pairs
object_declaration
	: BRACKETS_OPEN BRACKETS_CLOSE { $$ = newObjectDeclaration(NULL); }
	| BRACKETS_OPEN object_body BRACKETS_CLOSE { $$ = newObjectDeclaration($1); }
	;

object_body
	: object_property_declaration { $$ = newKeyValueList($1); }
	| object_property_declaration LIST_DELIMITER object_body { $$ = addKeyValue($2, $1); }
	;

object_property_declaration
	: IDENTIFIER COLONS expression { $$ = newNodeKeyValue($1, $2); }
	;

// Array as JS
array_declaration
	: ARRAY_OPEN ARRAY_CLOSE { $$ = newArrayElementList(NULL); }
	| ARRAY_OPEN array_values_list ARRAY_CLOSE { $$ = $1; }
	;

// Terminals for an expression
primary_expression
	: IDENTIFIER { $$ = newNodeIdentifier($1); }
	| CONSTANT { $$ = newNodeNumber($1); }
	| THIS { $$ = newNodeThis(); }
	| STRING_LITERAL { $$ = newNodeString($1); }
	| array_declaration { $$ = $1; }
	| object_declaration { $$ = $1; }
	| lamda_declaration { $$ = $1; }
	| PARENS_OPEN expression PARENS_CLOSE { $$ = $1; }
	;

postfix_expression
	: primary_expression { $$ = $1; }
	| postfix_expression ARRAY_OPEN expression ARRAY_CLOSE
	| postfix_expression PARENS_OPEN PARENS_CLOSE { $$ = newNodeFunctionCall($1, NULL); }
	| postfix_expression PARENS_OPEN argument_expression_list PARENS_CLOSE { $$ = newNodeFunctionCall($1, $2); }
	| postfix_expression OBJECT_ACCESSOR IDENTIFIER { $$ = newNodeObjectAccesor($1, newNodeIdentifier($2))}
	;

array_values_list
	: assignment_expression { $$ = newArrayElementList(newNodeArrayDeclaration($1)); }
	| array_values_list LIST_DELIMITER assignment_expression { $$ = addArrayElement($1, $2); }
	;
argument_expression_list
	: assignment_expression
	| PLACEHOLDER
	| argument_expression_list LIST_DELIMITER assignment_expression
	;

// Expressions with logic and arithmetic operators
multiplicative_expression
	: postfix_expression { $$ = $1; }
	| multiplicative_expression PROD postfix_expression { $$ = newNodeOperation($1, $2, "*"); }
	| multiplicative_expression COCIENT postfix_expression { $$ = newNodeOperation($1, $2, "/"); }
	| multiplicative_expression MOD postfix_expression { $$ = newNodeOperation($1, $2, "mod"); }
	;

additive_expression
	: multiplicative_expression { $$ = $1; }
	| additive_expression PLUS multiplicative_expression { $$ = newNodeOperation($1, $2, "+"); }
	| additive_expression MINUS multiplicative_expression { $$ = newNodeOperation($1, $2, "-"); }
	;

relational_expression
	: additive_expression { $$ = $1; }
	| relational_expression LESS additive_expression { $$ = newNodeOperation($1, $2, "<"); }
	| relational_expression GREATER additive_expression { $$ = newNodeOperation($1, $2, ">"); }
	| relational_expression LE_OP additive_expression { $$ = newNodeOperation($1, $2, "<="); }
	| relational_expression GE_OP additive_expression { $$ = newNodeOperation($1, $2, ">="); }
	;

equality_expression
	: relational_expression { $$ = $1; }
	| equality_expression EQ_OP relational_expression { $$ = newNodeOperation($1, $2, "=="); }
	| equality_expression NE_OP relational_expression { $$ = newNodeOperation($1, $2, "!="); }
	;

logical_and_expression
	: equality_expression { $$ = $1; }
	| logical_and_expression AND_OP equality_expression { $$ = newNodeOperation($1, $2, "&&"); }
	;

logical_or_expression
	: logical_and_expression { $$ = $1; }
	| logical_or_expression OR_OP logical_and_expression { $$ = newNodeOperation($1, $2, "||"); }
	;

conditional_expression
	: logical_or_expression { $$ = $1; }
	| logical_or_expression THEN expression COLONS conditional_expression { $$ = newNodeTernaryOperation($1, $2, $3); }
	;

assignment_expression
	: conditional_expression { $$ = $1; }
	| postfix_expression assignment_operator assignment_expression { $$ = newNodeOperation($1, $3, $2); }
	;

// Assignment terminals
assignment_operator
	: REG_ASSIGN { $$ = "="; }
	| MUL_ASSIGN { $$ = "*="; }
	| DIV_ASSIGN { $$ = "/="; }
	| ADD_ASSIGN { $$ = "+="; }
	| SUB_ASSIGN { $$ = "-="; }
	;

expression
	: assignment_expression { $$ = $1; }
	;

parameter_list
	: IDENTIFIER { $$ = newParameterList(newNodeParameter($1)); }
	| parameter_list LIST_DELIMITER IDENTIFIER { $$ = addParameter($2, $1); }
	;

statement
	: compound_statement { $$ = $1; }
	| selection_statement { $$ = $1; }
	| iteration_statement { $$ = $1; }
	| jump_statement { $$ = $1; }
	;


// List of statements between enclosers
compound_statement
	: BRACKETS_OPEN BRACKETS_CLOSE { $$ = newInstructionsList(NULL); }
	| BRACKETS_OPEN statement_list BRACKETS_CLOSE { $$ = $1; }
	;

// List of statements
statement_list
	: statement { $$ = newInstructionsList($1); }
	| statement_list statement { $$ = addInstructions($1, $2); }
	;

selection_statement
	: IF PARENS_OPEN expression PARENS_CLOSE compound_statement { $$ = newNodeIf($1, $2, NULL); }
	| IF PARENS_OPEN expression PARENS_CLOSE compound_statement ELSE compound_statement { $$ = newNodeIf($1, $2, $3); }
	;

iteration_statement
	: WHILE PARENS_OPEN expression PARENS_CLOSE compound_statement { $$ = nodeWhile($1, $2); }
	;

jump_statement
	: RETURN PARENS_OPEN expression PARENS_CLOSE { $$ = NodeReturn($2); }
	;

%%

void yyerror(char *msg) {
  printf("%s on line %d\n\n", msg, yylineno);
  exit(1);
}

int main() {
  int i;
  return yyparse();
}
