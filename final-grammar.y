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

// Operators
%token PROD MOD COCIENT PLUS MINUS
%token LESS GREATER

// Ternary Operator
%token THEN

// Object property accessor .
%token OBJECT_ACCESSOR

// Flow tokens
%token CASE DEFAULT IF ELSE SWITCH WHILE DO FOR RETURN

%start statement_list

%%

// Lamda functions are first class citizens
lamda_declaration
	: SIMPLE_BAR parameter_list SIMPLE_BAR LAMDA_ASSIGN compound_statement
	;

// Objects are key-value pairs
object_declaration
	: BRACKETS_OPEN BRACKETS_CLOSE
	| BRACKETS_OPEN object_body BRACKETS_CLOSE
	;

object_body
	: object_property_declaration
	| object_property_declaration LIST_DELIMITER object_body
	;

object_property_declaration
	: IDENTIFIER COLONS expression
	;

// Array as JS
array_declaration
	: ARRAY_OPEN ARRAY_CLOSE
	| ARRAY_OPEN array_values_list ARRAY_CLOSE
	;

// Terminals for an expression
primary_expression
	: IDENTIFIER
	| CONSTANT
	| THIS
	| lamda_declaration
	| STRING_LITERAL
	| array_declaration
	| PARENS_OPEN expression PARENS_CLOSE
	;

postfix_expression
	: primary_expression
	| postfix_expression ARRAY_OPEN expression ARRAY_CLOSE
	| postfix_expression PARENS_OPEN PARENS_CLOSE
	| postfix_expression PARENS_OPEN argument_expression_list PARENS_CLOSE
	| postfix_expression OBJECT_ACCESSOR IDENTIFIER
	| postfix_expression INC_OP
	| postfix_expression DEC_OP
	;

array_values_list
	: assignment_expression
	| argument_expression_list LIST_DELIMITER assignment_expression
	;
argument_expression_list
	: assignment_expression
	| PLACEHOLDER
	| argument_expression_list LIST_DELIMITER assignment_expression
	;

// Expressions with logic and arithmetic operators
unary_expression
	: postfix_expression
	| INC_OP unary_expression
	| DEC_OP unary_expression
	;

multiplicative_expression
	: unary_expression
	| multiplicative_expression PROD unary_expression
	| multiplicative_expression COCIENT unary_expression
	| multiplicative_expression MOD unary_expression
	;

additive_expression
	: multiplicative_expression
	| additive_expression PLUS multiplicative_expression
	| additive_expression MINUS multiplicative_expression
	;

shift_expression
	: additive_expression
	| shift_expression LEFT_OP additive_expression
	| shift_expression RIGHT_OP additive_expression
	;

relational_expression
	: shift_expression
	| relational_expression LESS shift_expression
	| relational_expression GREATER shift_expression
	| relational_expression LE_OP shift_expression
	| relational_expression GE_OP shift_expression
	;

equality_expression
	: relational_expression
	| equality_expression EQ_OP relational_expression
	| equality_expression NE_OP relational_expression
	;

logical_and_expression
	: equality_expression
	| logical_and_expression AND_OP equality_expression
	;

logical_or_expression
	: logical_and_expression
	| logical_or_expression OR_OP logical_and_expression
	;

conditional_expression
	: logical_or_expression
	| logical_or_expression THEN expression COLONS conditional_expression
	;

assignment_expression
	: conditional_expression
	| unary_expression assignment_operator assignment_expression
	| unary_expression REG_ASSIGN object_declaration
	;

// Assignment terminals
assignment_operator
	: REG_ASSIGN
	| MUL_ASSIGN
	| DIV_ASSIGN
	| MOD_ASSIGN
	| ADD_ASSIGN
	| SUB_ASSIGN
	| LEFT_ASSIGN
	| RIGHT_ASSIGN
	| AND_ASSIGN
	| XOR_ASSIGN
	| OR_ASSIGN
	;

expression
	: assignment_expression
	;

constant_expression
	: conditional_expression
	;

parameter_list
	: IDENTIFIER
	| parameter_list LIST_DELIMITER IDENTIFIER
	;

statement
	: labeled_statement
	| compound_statement
	| expression_statement
	| selection_statement
	| iteration_statement
	| jump_statement
	;

labeled_statement
	: CASE constant_expression COLONS statement
	| DEFAULT COLONS statement
	;

// List of statements between enclosers
compound_statement
	: BRACKETS_OPEN BRACKETS_CLOSE
	| BRACKETS_OPEN statement_list BRACKETS_CLOSE
	;

// List of statements
statement_list
	: statement
	| statement_list statement
	;

expression_statement
	: ENDMARKER
	| expression ENDMARKER
	;

selection_statement
	: IF PARENS_OPEN expression PARENS_CLOSE compound_statement
	| IF PARENS_OPEN expression PARENS_CLOSE compound_statement ELSE compound_statement
	| SWITCH PARENS_OPEN expression PARENS_CLOSE compound_statement
	;

iteration_statement
	: WHILE PARENS_OPEN expression PARENS_CLOSE compound_statement
	| DO compound_statement WHILE PARENS_OPEN expression PARENS_CLOSE ENDMARKER
	| FOR PARENS_OPEN expression_statement expression_statement PARENS_CLOSE compound_statement
	| FOR PARENS_OPEN expression_statement expression_statement expression PARENS_CLOSE compound_statement
	;

jump_statement
	: RETURN ENDMARKER
	| RETURN expression ENDMARKER
	;
