D			[0-9]
L			[a-zA-Z_]
H			[a-fA-F0-9]
E			[Ee][+-]?{D}+
FS			(f|F|l|L)
IS			(u|U|l|L)*

%{
	#include <stdio.h>
	#include "grammar.tab.h"

	void count();
%}

%%
"/*"			{ comment(); }

"else"			{ count(); return(ELSE); }
"if"			{ count(); return(IF); }
"_"			{ count(); return(PLACEHOLDER); }
"return"		{ count(); return(RETURN); }
"while"			{ count(); return(WHILE); }
"this"			{ count(); return(THIS); }


{L}({L}|{D})*		{ count(); return(check_type()); }

0[xX]{H}+{IS}?		{ count(); return(CONSTANT); }
0{D}+{IS}?		{ count(); return(CONSTANT); }
{D}+{IS}?		{ count(); return(CONSTANT); }
L?'(\\.|[^\\'])+'	{ count(); return(CONSTANT); }

{D}+{E}{FS}?		{ count(); return(CONSTANT); }
{D}*"."{D}+({E})?{FS}?	{ count(); return(CONSTANT); }
{D}+"."{D}*({E})?{FS}?	{ count(); return(CONSTANT); }

L?\"(\\.|[^\\"])*\"	{ count(); return(STRING_LITERAL); }

"+="			{ count(); return(ADD_ASSIGN); }
"-="			{ count(); return(SUB_ASSIGN); }
"*="			{ count(); return(MUL_ASSIGN); }
"/="			{ count(); return(DIV_ASSIGN); }
"&&"			{ count(); return(AND_OP); }
"||"			{ count(); return(OR_OP); }
"<="			{ count(); return(LE_OP); }
">="			{ count(); return(GE_OP); }
"=="			{ count(); return(EQ_OP); }
"=>"			{ count(); return(LAMDA_ASSIGN); }
"|"			{ count(); return(SIMPLE_BAR); }
"!="			{ count(); return(NE_OP); }
("{")		{ count(); return(BRACKETS_OPEN); }
("}")		{ count(); return(BRACKETS_CLOSE); }
","			{ count(); return(LIST_DELIMITER); }
":"			{ count(); return(COLONS); }
"="			{ count(); return(REG_ASSIGN); }
"("			{ count(); return(PARENS_OPEN); }
")"			{ count(); return(PARENS_CLOSE); }
("[")		{ count(); return(ARRAY_OPEN); }
("]")		{ count(); return(ARRAY_CLOSE); }
"."			{ count(); return(OBJECT_ACCESSOR); }
"!"			{ count(); return('!'); }
"-"			{ count(); return(MINUS); }
"+"			{ count(); return(PLUS); }
"*"			{ count(); return(PROD); }
"%"			{ count(); return(MOD); }
"<"			{ count(); return(LESS); }
">"			{ count(); return(GREATER); }
"?"			{ count(); return(THEN); }

[ \t\v\n\f]		{ count(); }
.			{ /* ignore bad characters */ }

%%

yywrap()
{
	return(1);
}


comment()
{
	char c, c1;

loop:
	while ((c = input()) != '*' && c != 0)
		putchar(c);

	if ((c1 = input()) != '/' && c != 0)
	{
		unput(c1);
		goto loop;
	}

	if (c != 0)
		putchar(c1);
}


int column = 0;

void count()
{
	int i;

	for (i = 0; yytext[i] != '\0'; i++)
		if (yytext[i] == '\n')
			column = 0;
		else if (yytext[i] == '\t')
			column += 8 - (column % 8);
		else
			column++;

	ECHO;
}


int check_type()
{
/*
* pseudo code --- this is what it should check
*
*	if (yytext == type_name)
*		return(TYPE_NAME);
*
*	return(IDENTIFIER);
*/

/*
*	it actually will only return IDENTIFIER
*/

	return(IDENTIFIER);
}
