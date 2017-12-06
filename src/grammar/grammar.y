%{
	#include "./structures.h"
	#include "./main.h"

	#define NULL 0

	extern int yylineno;

	void yyerror(NodeList **, char *);
%}

%union {
  int num;
  char string[1000];
  struct Node * node;
	struct NodeList * list;
}
// Variables and constants
%token IDENTIFIER NUMBER STRING_LITERAL

%token ENDMARKER

// Comparision and assignment operators
%token LE_OP GE_OP EQ_OP NE_OP
%token AND_OP OR_OP MUL_ASSIGN DIV_ASSIGN
%token SUB_ASSIGN REG_ASSIGN ADD_ASSIGN

// This can be called from wherever
%token THIS

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

%token EMPTY LAMDA_ASYNC EMP_OBJ

// Operators
%token PROD MOD COCIENT PLUS MINUS
%token LESS GREATER

%token NEGATE

// Ternary Operator
%token THEN

// Object property accessor .
%token OBJECT_ACCESSOR

// Flow tokens
%token IF ELSE WHILE DO FOR RETURN

%type <node> lamda_declaration object_declaration object_property_declaration
%type <node> primary_expression postfix_expression multiplicative_expression
%type <node> additive_expression relational_expression equality_expression
%type <node> logical_and_expression logical_or_expression conditional_expression
%type <node> assignment_expression expression statement selection_statement
%type <node> iteration_statement jump_statement assignable_expression THIS
%type <node> negation_expression

%type <string> assignment_operator REG_ASSIGN MUL_ASSIGN DIV_ASSIGN ADD_ASSIGN SUB_ASSIGN
%type <string> IDENTIFIER STRING_LITERAL NUMBER

%type <num> opt_async EMPTY LAMDA_ASSIGN LAMDA_ASYNC

%type <list> object_body array_declaration array_values_list argument_expression_list
%type <list> parameter_list compound_statement statement_list

%parse-param {NodeList ** program}

%start statement_list

%%

// Lamda functions are first class citizens
lamda_declaration
	: SIMPLE_BAR parameter_list SIMPLE_BAR opt_async compound_statement { $$ = newNodeLamdaDeclaration($4, $2, $5); }
	| EMP_OBJ opt_async compound_statement { $$ = newNodeLamdaDeclaration($2, NULL, $3); }
	;

opt_async
	: LAMDA_ASSIGN { $$ = 0; }
	| LAMDA_ASYNC { $$ = 1; }
	;

// Objects are key-value pairs
object_declaration
	: EMP_OBJ { $$ = newNodeObjectDeclaration(NULL); }
	| SIMPLE_BAR object_body SIMPLE_BAR { $$ = newNodeObjectDeclaration($2); }
	;

object_body
	: object_property_declaration { $$ = newKeyValueList($1); }
	| object_property_declaration LIST_DELIMITER ENDMARKER object_body { $$ = addKeyValue($4, $1); }
	| object_property_declaration LIST_DELIMITER object_body { $$ = addKeyValue($3, $1); }
	;

object_property_declaration
	: IDENTIFIER COLONS expression { $$ = newNodeKeyValue($1, $3); }
	;

// Array as JS
array_declaration
	: ARRAY_OPEN ARRAY_CLOSE { $$ = newArrayElementList(NULL); }
	| ARRAY_OPEN array_values_list ARRAY_CLOSE { $$ = $2; }
	;

// Terminals for an expression
primary_expression
	: NUMBER { $$ = newNodeNumber($1); }
	| THIS { $$ = newNodeThis(); }
	| STRING_LITERAL { $$ = newNodeString($1); }
	| array_declaration { $$ = newNodeArrayDeclaration($1); }
	| object_declaration { $$ = $1; }
	| lamda_declaration { $$ = $1; }
	| PARENS_OPEN expression PARENS_CLOSE { $$ = $2; }
	;

assignable_expression
	: IDENTIFIER { $$ = newNodeIdentifier($1); }
	| postfix_expression OBJECT_ACCESSOR IDENTIFIER { $$ = newNodeObjectAccessor($1, newNodeIdentifier($3)); }
	;

postfix_expression
	: primary_expression { $$ = $1; }
	| postfix_expression ARRAY_OPEN expression ARRAY_CLOSE
	| postfix_expression PARENS_OPEN PARENS_CLOSE { $$ = newNodeFunctionCall($1, NULL); }
	| postfix_expression PARENS_OPEN argument_expression_list PARENS_CLOSE { $$ = newNodeFunctionCall($1, $3); }
	| assignable_expression { $$ = $1; }
	;

array_values_list
	: assignment_expression { $$ = newArrayElementList($1); }
	| array_values_list LIST_DELIMITER ENDMARKER assignment_expression { $$ = addArrayElement($1, $4); }
	| array_values_list LIST_DELIMITER assignment_expression { $$ = addArrayElement($1, $3); }
	;

argument_expression_list
	: assignment_expression { $$ = newArgumentList($1); }
	| PLACEHOLDER { $$ = newArgumentList(newNodePlaceholder()); }
	| argument_expression_list LIST_DELIMITER assignment_expression { $$ = addArgument($1, $3); }
	;

// Expressions with logic and arithmetic operators
negation_expression
	: postfix_expression { $$ = $1; }
	| NEGATE postfix_expression { $$ = newNodeNegation($2); }
	;

multiplicative_expression
	: negation_expression { $$ = $1; }
	| multiplicative_expression PROD negation_expression { $$ = newNodeOperation($1, $3, "*"); }
	| multiplicative_expression COCIENT negation_expression { $$ = newNodeOperation($1, $3, "/"); }
	| multiplicative_expression MOD negation_expression { $$ = newNodeOperation($1, $3, "%"); }
	;

additive_expression
	: multiplicative_expression { $$ = $1; }
	| additive_expression PLUS multiplicative_expression { $$ = newNodeOperation($1, $3, "+"); }
	| additive_expression MINUS multiplicative_expression { $$ = newNodeOperation($1, $3, "-"); }
	;

relational_expression
	: additive_expression { $$ = $1; }
	| relational_expression LESS additive_expression { $$ = newNodeOperation($1, $3, "<"); }
	| relational_expression GREATER additive_expression { $$ = newNodeOperation($1, $3, ">"); }
	| relational_expression LE_OP additive_expression { $$ = newNodeOperation($1, $3, "<="); }
	| relational_expression GE_OP additive_expression { $$ = newNodeOperation($1, $3, ">="); }
	;

equality_expression
	: relational_expression { $$ = $1; }
	| equality_expression EQ_OP relational_expression { $$ = newNodeOperation($1, $3, "=="); }
	| equality_expression NE_OP relational_expression { $$ = newNodeOperation($1, $3, "!="); }
	;

logical_and_expression
	: equality_expression { $$ = $1; }
	| logical_and_expression AND_OP equality_expression { $$ = newNodeOperation($1, $3, "&&"); }
	;

logical_or_expression
	: logical_and_expression { $$ = $1; }
	| logical_or_expression OR_OP logical_and_expression { $$ = newNodeOperation($1, $3, "||"); }
	;

conditional_expression
	: logical_or_expression { $$ = $1; }
	| logical_or_expression THEN expression COLONS conditional_expression { $$ = newNodeTernaryOperation($1, $3, $5); }
	;

assignment_expression
	: conditional_expression { $$ = $1; }
	| assignable_expression assignment_operator assignment_expression { $$ = newNodeOperation($1, $3, $2); }
	;

// Assignment terminals
assignment_operator
	: REG_ASSIGN { strcpy($$, "="); }
	| MUL_ASSIGN { strcpy($$, "*="); }
	| DIV_ASSIGN { strcpy($$, "/="); }
	| ADD_ASSIGN { strcpy($$, "+="); }
	| SUB_ASSIGN { strcpy($$, "-="); }
	;

expression
	: assignment_expression { $$ = $1; }
	;

parameter_list
	: IDENTIFIER { $$ = newParameterList(newNodeParameter($1)); }
	| parameter_list LIST_DELIMITER IDENTIFIER { $$ = addParameter($1, newNodeParameter($3)); }
	;

statement
	: compound_statement { $$ = addNodeBlock($1); }
	| selection_statement { $$ = $1; }
	| iteration_statement { $$ = $1; }
	| jump_statement { $$ = $1; }
	| expression ENDMARKER { $$ = newNodeEndmarked($1); }
	| ENDMARKER { $$ = addNodeIgnore(); }
	;


// List of statements between enclosers
compound_statement
	: BRACKETS_OPEN BRACKETS_CLOSE { $$ = newInstructionsList(NULL); }
	| BRACKETS_OPEN statement_list BRACKETS_CLOSE { $$ = $2; }
	;

// List of statements
statement_list
	: statement { $$ = (*program = newInstructionsList($1)); }
	| statement_list statement { $$ = (*program = addInstructions($1, $2)); }
	;

selection_statement
	: IF PARENS_OPEN expression PARENS_CLOSE compound_statement { $$ = newNodeIf($3, $5, NULL); }
	| IF PARENS_OPEN expression PARENS_CLOSE compound_statement ELSE compound_statement { $$ = newNodeIf($3, $5, $7); }
	;

iteration_statement
	: WHILE PARENS_OPEN expression PARENS_CLOSE compound_statement { $$ = newNodeWhile($3, $5); }
	;

jump_statement
	: RETURN PARENS_OPEN expression PARENS_CLOSE { $$ = newNodeReturn($3); }
	;

%%

void yyerror(NodeList ** program, char *msg) {
  printf("%s on line %d\n\n", msg, yylineno);
  exit(1);
}

int main() {
  int i;

	// We store the AST in this program variable.
	NodeList * program;
  int ret = yyparse(&program);

	if (ret == 1) {
		printf("%s", "There was an error parsing your program.");
		return 1;
	} else if (ret == 2) {
		printf("%s", "There is not enough memory to parse your program");
	}

	// Print the final compiled code
	printf("%s\n", generate_code(program));

	return 0;
}
