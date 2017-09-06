%{
#include <stdio.h>
#include <stdlib.h>

void yyerror(char * msg);
extern int yylex();
%}

%union {
  float f;
}

%token <f> NUM
%type <f> E T

%%
S : E         { printf("%f\n", $1); }
  ;

E : E '+' T   { $$ = $1 + $3; }
  | T         { $$ = $1; }
  ;

T : NUM       { $$ = $1; }
  ;
%%

void yyerror(char *msg) {
  printf("%s", msg);
  exit(1);
}

int main() {
  yyparse();
  return 0;
}
