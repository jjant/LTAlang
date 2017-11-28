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
     PROD = 287,
     MOD = 288,
     COCIENT = 289,
     PLUS = 290,
     MINUS = 291,
     LESS = 292,
     GREATER = 293,
     THEN = 294,
     OBJECT_ACCESSOR = 295,
     IF = 296,
     ELSE = 297,
     WHILE = 298,
     DO = 299,
     FOR = 300,
     RETURN = 301
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
#define PROD 287
#define MOD 288
#define COCIENT 289
#define PLUS 290
#define MINUS 291
#define LESS 292
#define GREATER 293
#define THEN 294
#define OBJECT_ACCESSOR 295
#define IF 296
#define ELSE 297
#define WHILE 298
#define DO 299
#define FOR 300
#define RETURN 301




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 12 "grammar.y"
{
  int num;
  char * string;
  struct Node * node;
	struct NodeList * list;
}
/* Line 1529 of yacc.c.  */
#line 148 "grammar.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

