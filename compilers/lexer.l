%{
  #include <stdio.h>
  #include <stdlib.h>
  #include "compiled_grammar.h" // Generated via yacc -d
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
";"             { return ';'; }
"-"             { return '-'; }
"+"             { return '+'; }
"{"             { return OPEN_BRACE; }
"}"             { return CLOSE_BRACE; }
"="             { return EQUAL; }
"=>"            { return RIGHT_ARROW; }
{number}        { yylval.num = atoi(yytext); return NUMBER; }
{identifier}    { yylval.id = yytext[0]; return IDENTIFIER; }
{whitespace}    { ; }
{newline}       { yylineno++; return NEWLINE; }
{exit}          { return EXIT_COMMAND; }

%%
