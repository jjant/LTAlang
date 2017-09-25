%{
  #include <stdio.h>
  #include <stdlib.h>
  #include "y.tab.h" // Generated via yacc -d
%}

%option noyywrap

digit       [0-9]
number      [0-9]+(\.[0-9]+)?
/*operator    [-+*\\]*/
identifier  \w
whitespace  [ \t\v]
newline     \n
exit        ("exit"|"quit")

%%
"if"            { return IF; }
"do"            { return DO; }
"while"         { return WHILE; }
";"             { return ';'; }
"-"             { return MINUS; }
"+"             { return PLUS; }
"*"             { return TIMES; }
"/"             { return DIVIDE; }
"{"             { return OPEN_BRACE; }
"}"             { return CLOSE_BRACE; }
"=>"            { return RIGHT_ARROW; }
"=="            { return CMP_EQUAL; }
">="            { return CMP_GREATER_EQUAL; }
"<="            { return CMP_LOWER_EQUAL; }
">"             { return CMP_GREATER; }
"<"             { return CMP_LOWER; }
"="             { return EQUAL; }
{number}        { yylval.num = atoi(yytext); return NUMBER; }
{identifier}    { yylval.id = yytext[0]; return IDENTIFIER; }
{whitespace}    { ; }
{newline}       { yylineno++; return NEWLINE; }
{exit}          { return EXIT_COMMAND; }

%%
