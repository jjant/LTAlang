/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     IDENTIFIER = 258,
     NUMBER = 259,
     OPERATOR = 260,
     RIGHT_ARROW = 261,
     OPEN_BRACE = 262,
     CLOSE_BRACE = 263,
     EQUAL = 264,
     OPEN_PARENS = 265,
     CLOSE_PARENS = 266,
     NEWLINE = 267,
     IF = 268,
     DO = 269,
     WHILE = 270,
     EXIT_COMMAND = 271,
     CMP_EQUAL = 272,
     CMP_GREATER_EQUAL = 273,
     CMP_LOWER_EQUAL = 274,
     CMP_GREATER = 275,
     CMP_LOWER = 276,
     PLUS = 277,
     MINUS = 278,
     TIMES = 279,
     DIVIDE = 280
   };
#endif
/* Tokens.  */
#define IDENTIFIER 258
#define NUMBER 259
#define OPERATOR 260
#define RIGHT_ARROW 261
#define OPEN_BRACE 262
#define CLOSE_BRACE 263
#define EQUAL 264
#define OPEN_PARENS 265
#define CLOSE_PARENS 266
#define NEWLINE 267
#define IF 268
#define DO 269
#define WHILE 270
#define EXIT_COMMAND 271
#define CMP_EQUAL 272
#define CMP_GREATER_EQUAL 273
#define CMP_LOWER_EQUAL 274
#define CMP_GREATER 275
#define CMP_LOWER 276
#define PLUS 277
#define MINUS 278
#define TIMES 279
#define DIVIDE 280




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 18 "grammar.y"
{
  int num;
  char id;
  char * text;
  struct Node * node;
}
/* Line 1529 of yacc.c.  */
#line 106 "y.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

