%{
	#include <stdio.h>
	#include <stdlib.h>
	#include "grammar.tab.h"
%}

%option noyywrap

digit       [0-9]
number      [0-9]+(\.[0-9]+)?
identifier  [a-z]+
newline     \n
exit        ("exit"|"quit")

%%
"else"			{ return(ELSE); }
"if"			{ return(IF); }
"_"			{ return(PLACEHOLDER); }
"return"		{ return(RETURN); }
"while"			{ return(WHILE); }
"this"			{ return(THIS); }
"+="			{ return(ADD_ASSIGN); }
"-="			{ return(SUB_ASSIGN); }
"*="			{ return(MUL_ASSIGN); }
"/="			{ return(DIV_ASSIGN); }
"&&"			{ return(AND_OP); }
"||"			{ return(OR_OP); }
"<="			{ return(LE_OP); }
">="			{ return(GE_OP); }
"=="			{ return(EQ_OP); }
"=>"			{ return(LAMDA_ASSIGN); }
"|"			{ return(SIMPLE_BAR); }
"!="			{ return(NE_OP); }
("{")		{ return(BRACKETS_OPEN); }
("}")		{ return(BRACKETS_CLOSE); }
","			{ return(LIST_DELIMITER); }
":"			{ return(COLONS); }
"="			{ return(REG_ASSIGN); }
"("			{ return(PARENS_OPEN); }
")"			{ return(PARENS_CLOSE); }
("[")		{ return(ARRAY_OPEN); }
("]")		{ return(ARRAY_CLOSE); }
"."			{ return(OBJECT_ACCESSOR); }
"!"			{ return('!'); }
"-"			{ return(MINUS); }
"+"			{ return(PLUS); }
"*"			{ return(PROD); }
"%"			{ return(MOD); }
"<"			{ return(LESS); }
">"			{ return(GREATER); }
"?"			{ return(THEN); }
{number}        { yylval.num = atoi(yytext); return NUMBER; }
{identifier}    { yylval.string = yytext; return IDENTIFIER; }
{newline}       { yylineno++; return(ENDMARKER); }
.			{ /* ignore bad characters */ }

%%
