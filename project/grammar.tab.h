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
     CONSTANT = 259,
     STRING_LITERAL = 260,
     LE_OP = 261,
     GE_OP = 262,
     EQ_OP = 263,
     NE_OP = 264,
     AND_OP = 265,
     OR_OP = 266,
     MUL_ASSIGN = 267,
     DIV_ASSIGN = 268,
     SUB_ASSIGN = 269,
     REG_ASSIGN = 270,
     ADD_ASSIGN = 271,
     THIS = 272,
     LAMDA_ASSIGN = 273,
     PLACEHOLDER = 274,
     PARENS_OPEN = 275,
     PARENS_CLOSE = 276,
     BRACKETS_OPEN = 277,
     BRACKETS_CLOSE = 278,
     ARRAY_OPEN = 279,
     ARRAY_CLOSE = 280,
     SIMPLE_BAR = 281,
     LIST_DELIMITER = 282,
     COLONS = 283,
     EMPTY = 284,
     ASYNC = 285,
     PROD = 286,
     MOD = 287,
     COCIENT = 288,
     PLUS = 289,
     MINUS = 290,
     LESS = 291,
     GREATER = 292,
     THEN = 293,
     OBJECT_ACCESSOR = 294,
     IF = 295,
     ELSE = 296,
     WHILE = 297,
     DO = 298,
     FOR = 299,
     RETURN = 300
   };
#endif
/* Tokens.  */
#define IDENTIFIER 258
#define CONSTANT 259
#define STRING_LITERAL 260
#define LE_OP 261
#define GE_OP 262
#define EQ_OP 263
#define NE_OP 264
#define AND_OP 265
#define OR_OP 266
#define MUL_ASSIGN 267
#define DIV_ASSIGN 268
#define SUB_ASSIGN 269
#define REG_ASSIGN 270
#define ADD_ASSIGN 271
#define THIS 272
#define LAMDA_ASSIGN 273
#define PLACEHOLDER 274
#define PARENS_OPEN 275
#define PARENS_CLOSE 276
#define BRACKETS_OPEN 277
#define BRACKETS_CLOSE 278
#define ARRAY_OPEN 279
#define ARRAY_CLOSE 280
#define SIMPLE_BAR 281
#define LIST_DELIMITER 282
#define COLONS 283
#define EMPTY 284
#define ASYNC 285
#define PROD 286
#define MOD 287
#define COCIENT 288
#define PLUS 289
#define MINUS 290
#define LESS 291
#define GREATER 292
#define THEN 293
#define OBJECT_ACCESSOR 294
#define IF 295
#define ELSE 296
#define WHILE 297
#define DO 298
#define FOR 299
#define RETURN 300




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 8 "grammar.y"
{
  int num;
  char * string;
  struct Node * node;
	struct NodeList * list;
}
/* Line 1529 of yacc.c.  */
#line 146 "grammar.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

