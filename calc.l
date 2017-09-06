%{
  #include <stdio.h>
  #include <stdlib.h>
  #include "y.tab.h" // Generated via yacc -d
%}

%option noyywrap

%%

[0-9]+(\.[0-9]+)?   { yylval.f = atof(yytext); return NUM; }
[-+*]               { return yytext[0]; }
[ \t\v\n]           { ; }

%%
