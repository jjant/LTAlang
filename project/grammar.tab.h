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
     STRING_LITERAL = 260,
     ENDMARKER = 261,
     LE_OP = 262,
     GE_OP = 263,
     EQ_OP = 264,
     NE_OP = 265,
     AND_OP = 266,
     OR_OP = 267,
     MUL_ASSIGN = 268,
     DIV_ASSIGN = 269,
     SUB_ASSIGN = 270,
     REG_ASSIGN = 271,
     ADD_ASSIGN = 272,
     THIS = 273,
     LAMDA_ASSIGN = 274,
     PLACEHOLDER = 275,
     PARENS_OPEN = 276,
     PARENS_CLOSE = 277,
     BRACKETS_OPEN = 278,
     BRACKETS_CLOSE = 279,
     ARRAY_OPEN = 280,
     ARRAY_CLOSE = 281,
     SIMPLE_BAR = 282,
     LIST_DELIMITER = 283,
     COLONS = 284,
     EMPTY = 285,
     LAMDA_ASYNC = 286,
     EMP_OBJ = 287,
     PROD = 288,
     MOD = 289,
     COCIENT = 290,
     PLUS = 291,
     MINUS = 292,
     LESS = 293,
     GREATER = 294,
     THEN = 295,
     OBJECT_ACCESSOR = 296,
     IF = 297,
     ELSE = 298,
     WHILE = 299,
     DO = 300,
     FOR = 301,
     RETURN = 302
   };
#endif
/* Tokens.  */
#define IDENTIFIER 258
#define NUMBER 259
#define STRING_LITERAL 260
#define ENDMARKER 261
#define LE_OP 262
#define GE_OP 263
#define EQ_OP 264
#define NE_OP 265
#define AND_OP 266
#define OR_OP 267
#define MUL_ASSIGN 268
#define DIV_ASSIGN 269
#define SUB_ASSIGN 270
#define REG_ASSIGN 271
#define ADD_ASSIGN 272
#define THIS 273
#define LAMDA_ASSIGN 274
#define PLACEHOLDER 275
#define PARENS_OPEN 276
#define PARENS_CLOSE 277
#define BRACKETS_OPEN 278
#define BRACKETS_CLOSE 279
#define ARRAY_OPEN 280
#define ARRAY_CLOSE 281
#define SIMPLE_BAR 282
#define LIST_DELIMITER 283
#define COLONS 284
#define EMPTY 285
#define LAMDA_ASYNC 286
#define EMP_OBJ 287
#define PROD 288
#define MOD 289
#define COCIENT 290
#define PLUS 291
#define MINUS 292
#define LESS 293
#define GREATER 294
#define THEN 295
#define OBJECT_ACCESSOR 296
#define IF 297
#define ELSE 298
#define WHILE 299
#define DO 300
#define FOR 301
#define RETURN 302




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 12 "grammar/grammar.y"
{
  int num;
  char string[1000];
  struct Node * node;
	struct NodeList * list;
}
/* Line 1529 of yacc.c.  */
#line 150 "grammar.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

