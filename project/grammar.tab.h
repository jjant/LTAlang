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
     INC_OP = 261,
     DEC_OP = 262,
     LEFT_OP = 263,
     RIGHT_OP = 264,
     LE_OP = 265,
     GE_OP = 266,
     EQ_OP = 267,
     NE_OP = 268,
     AND_OP = 269,
     OR_OP = 270,
     MUL_ASSIGN = 271,
     DIV_ASSIGN = 272,
     MOD_ASSIGN = 273,
     ADD_ASSIGN = 274,
     SUB_ASSIGN = 275,
     LEFT_ASSIGN = 276,
     RIGHT_ASSIGN = 277,
     AND_ASSIGN = 278,
     REG_ASSIGN = 279,
     XOR_ASSIGN = 280,
     OR_ASSIGN = 281,
     THIS = 282,
     ENDMARKER = 283,
     LAMDA_ASSIGN = 284,
     PLACEHOLDER = 285,
     PARENS_OPEN = 286,
     PARENS_CLOSE = 287,
     BRACKETS_OPEN = 288,
     BRACKETS_CLOSE = 289,
     LESS_OPEN = 290,
     LESS_CLOSE = 291,
     ARRAY_OPEN = 292,
     ARRAY_CLOSE = 293,
     SIMPLE_BAR = 294,
     LIST_DELIMITER = 295,
     COLONS = 296,
     PROD = 297,
     MOD = 298,
     COCIENT = 299,
     PLUS = 300,
     MINUS = 301,
     LESS = 302,
     GREATER = 303,
     THEN = 304,
     OBJECT_ACCESSOR = 305,
     CASE = 306,
     DEFAULT = 307,
     IF = 308,
     ELSE = 309,
     SWITCH = 310,
     WHILE = 311,
     DO = 312,
     FOR = 313,
     RETURN = 314
   };
#endif
/* Tokens.  */
#define IDENTIFIER 258
#define CONSTANT 259
#define STRING_LITERAL 260
#define INC_OP 261
#define DEC_OP 262
#define LEFT_OP 263
#define RIGHT_OP 264
#define LE_OP 265
#define GE_OP 266
#define EQ_OP 267
#define NE_OP 268
#define AND_OP 269
#define OR_OP 270
#define MUL_ASSIGN 271
#define DIV_ASSIGN 272
#define MOD_ASSIGN 273
#define ADD_ASSIGN 274
#define SUB_ASSIGN 275
#define LEFT_ASSIGN 276
#define RIGHT_ASSIGN 277
#define AND_ASSIGN 278
#define REG_ASSIGN 279
#define XOR_ASSIGN 280
#define OR_ASSIGN 281
#define THIS 282
#define ENDMARKER 283
#define LAMDA_ASSIGN 284
#define PLACEHOLDER 285
#define PARENS_OPEN 286
#define PARENS_CLOSE 287
#define BRACKETS_OPEN 288
#define BRACKETS_CLOSE 289
#define LESS_OPEN 290
#define LESS_CLOSE 291
#define ARRAY_OPEN 292
#define ARRAY_CLOSE 293
#define SIMPLE_BAR 294
#define LIST_DELIMITER 295
#define COLONS 296
#define PROD 297
#define MOD 298
#define COCIENT 299
#define PLUS 300
#define MINUS 301
#define LESS 302
#define GREATER 303
#define THEN 304
#define OBJECT_ACCESSOR 305
#define CASE 306
#define DEFAULT 307
#define IF 308
#define ELSE 309
#define SWITCH 310
#define WHILE 311
#define DO 312
#define FOR 313
#define RETURN 314




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

