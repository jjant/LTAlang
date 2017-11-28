/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



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
     ARRAY_OPEN = 290,
     ARRAY_CLOSE = 291,
     SIMPLE_BAR = 292,
     LIST_DELIMITER = 293,
     COLONS = 294,
     EMPTY = 295,
     ASYNC = 296,
     PROD = 297,
     MOD = 298,
     COCIENT = 299,
     PLUS = 300,
     MINUS = 301,
     LESS = 302,
     GREATER = 303,
     THEN = 304,
     OBJECT_ACCESSOR = 305,
     IF = 306,
     ELSE = 307,
     WHILE = 308,
     DO = 309,
     FOR = 310,
     RETURN = 311
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
#define ARRAY_OPEN 290
#define ARRAY_CLOSE 291
#define SIMPLE_BAR 292
#define LIST_DELIMITER 293
#define COLONS 294
#define EMPTY 295
#define ASYNC 296
#define PROD 297
#define MOD 298
#define COCIENT 299
#define PLUS 300
#define MINUS 301
#define LESS 302
#define GREATER 303
#define THEN 304
#define OBJECT_ACCESSOR 305
#define IF 306
#define ELSE 307
#define WHILE 308
#define DO 309
#define FOR 310
#define RETURN 311




/* Copy the first part of user declarations.  */
#line 1 "grammar.y"

	#include "structures.h"
	extern int yylineno;

	void yyerror(char *);


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 225 "grammar.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  16
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   146

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  57
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  28
/* YYNRULES -- Number of rules.  */
#define YYNRULES  72
/* YYNRULES -- Number of states.  */
#define YYNSTATES  128

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   311

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,    10,    12,    14,    17,    21,    23,    27,
      31,    34,    38,    40,    42,    44,    46,    48,    50,    52,
      56,    58,    63,    67,    72,    76,    78,    82,    84,    86,
      90,    92,    96,   100,   104,   106,   110,   114,   116,   120,
     124,   128,   132,   134,   138,   142,   144,   148,   150,   154,
     156,   162,   164,   168,   170,   172,   174,   176,   178,   180,
     182,   186,   188,   190,   192,   194,   197,   201,   203,   206,
     212,   220,   226
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      81,     0,    -1,    59,    37,    78,    37,    29,    80,    -1,
      40,    -1,    41,    -1,    33,    34,    -1,    33,    61,    34,
      -1,    62,    -1,    62,    38,    61,    -1,     3,    39,    77,
      -1,    35,    36,    -1,    35,    66,    36,    -1,     3,    -1,
       4,    -1,    27,    -1,     5,    -1,    63,    -1,    60,    -1,
      58,    -1,    31,    77,    32,    -1,    64,    -1,    65,    35,
      77,    36,    -1,    65,    31,    32,    -1,    65,    31,    67,
      32,    -1,    65,    50,     3,    -1,    75,    -1,    66,    38,
      75,    -1,    75,    -1,    30,    -1,    67,    38,    75,    -1,
      65,    -1,    68,    42,    65,    -1,    68,    44,    65,    -1,
      68,    43,    65,    -1,    68,    -1,    69,    45,    68,    -1,
      69,    46,    68,    -1,    69,    -1,    70,    47,    69,    -1,
      70,    48,    69,    -1,    70,    10,    69,    -1,    70,    11,
      69,    -1,    70,    -1,    71,    12,    70,    -1,    71,    13,
      70,    -1,    71,    -1,    72,    14,    71,    -1,    72,    -1,
      73,    15,    72,    -1,    73,    -1,    73,    49,    77,    39,
      74,    -1,    74,    -1,    65,    76,    75,    -1,    24,    -1,
      16,    -1,    17,    -1,    19,    -1,    20,    -1,    75,    -1,
       3,    -1,    78,    38,     3,    -1,    80,    -1,    82,    -1,
      83,    -1,    84,    -1,    33,    34,    -1,    33,    81,    34,
      -1,    79,    -1,    81,    79,    -1,    51,    31,    77,    32,
      80,    -1,    51,    31,    77,    32,    80,    52,    80,    -1,
      53,    31,    77,    32,    80,    -1,    56,    31,    77,    32,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    62,    62,    66,    67,    72,    73,    77,    78,    82,
      87,    88,    93,    94,    95,    96,    97,    98,    99,   100,
     104,   105,   106,   107,   108,   112,   113,   116,   117,   118,
     123,   124,   125,   126,   130,   131,   132,   136,   137,   138,
     139,   140,   144,   145,   146,   150,   151,   155,   156,   160,
     161,   165,   166,   171,   172,   173,   174,   175,   179,   183,
     184,   188,   189,   190,   191,   197,   198,   203,   204,   208,
     209,   213,   217
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "CONSTANT",
  "STRING_LITERAL", "INC_OP", "DEC_OP", "LEFT_OP", "RIGHT_OP", "LE_OP",
  "GE_OP", "EQ_OP", "NE_OP", "AND_OP", "OR_OP", "MUL_ASSIGN", "DIV_ASSIGN",
  "MOD_ASSIGN", "ADD_ASSIGN", "SUB_ASSIGN", "LEFT_ASSIGN", "RIGHT_ASSIGN",
  "AND_ASSIGN", "REG_ASSIGN", "XOR_ASSIGN", "OR_ASSIGN", "THIS",
  "ENDMARKER", "LAMDA_ASSIGN", "PLACEHOLDER", "PARENS_OPEN",
  "PARENS_CLOSE", "BRACKETS_OPEN", "BRACKETS_CLOSE", "ARRAY_OPEN",
  "ARRAY_CLOSE", "SIMPLE_BAR", "LIST_DELIMITER", "COLONS", "EMPTY",
  "ASYNC", "PROD", "MOD", "COCIENT", "PLUS", "MINUS", "LESS", "GREATER",
  "THEN", "OBJECT_ACCESSOR", "IF", "ELSE", "WHILE", "DO", "FOR", "RETURN",
  "$accept", "lamda_declaration", "opt_async", "object_declaration",
  "object_body", "object_property_declaration", "array_declaration",
  "primary_expression", "postfix_expression", "array_values_list",
  "argument_expression_list", "multiplicative_expression",
  "additive_expression", "relational_expression", "equality_expression",
  "logical_and_expression", "logical_or_expression",
  "conditional_expression", "assignment_expression", "assignment_operator",
  "expression", "parameter_list", "statement", "compound_statement",
  "statement_list", "selection_statement", "iteration_statement",
  "jump_statement", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    57,    58,    59,    59,    60,    60,    61,    61,    62,
      63,    63,    64,    64,    64,    64,    64,    64,    64,    64,
      65,    65,    65,    65,    65,    66,    66,    67,    67,    67,
      68,    68,    68,    68,    69,    69,    69,    70,    70,    70,
      70,    70,    71,    71,    71,    72,    72,    73,    73,    74,
      74,    75,    75,    76,    76,    76,    76,    76,    77,    78,
      78,    79,    79,    79,    79,    80,    80,    81,    81,    82,
      82,    83,    84
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     6,     1,     1,     2,     3,     1,     3,     3,
       2,     3,     1,     1,     1,     1,     1,     1,     1,     3,
       1,     4,     3,     4,     3,     1,     3,     1,     1,     3,
       1,     3,     3,     3,     1,     3,     3,     1,     3,     3,
       3,     3,     1,     3,     3,     1,     3,     1,     3,     1,
       5,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       3,     1,     1,     1,     1,     2,     3,     1,     2,     5,
       7,     5,     4
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,    67,    61,     0,    62,    63,
      64,    65,     0,     0,     0,     0,     1,    68,    66,    12,
      13,    15,    14,     0,     0,     0,     3,     4,    18,     0,
      17,    16,    20,    30,    34,    37,    42,    45,    47,    49,
      51,    58,     0,     0,     0,     0,     0,     5,     0,     7,
      10,     0,    25,     0,    54,    55,    56,    57,    53,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    72,
      19,     0,     6,     0,    11,     0,    59,     0,    28,    22,
       0,    27,     0,    24,    52,    31,    33,    32,    30,    35,
      36,    40,    41,    38,    39,    43,    44,    46,    48,     0,
      69,    71,     9,     8,    26,     0,     0,    23,     0,    21,
       0,     0,     0,    60,    29,    50,    70,     2
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,    28,    29,    30,    48,    49,    31,    32,    33,    51,
      90,    34,    35,    36,    37,    38,    39,    40,    41,    62,
      42,    87,     5,     6,     7,     8,     9,    10
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -74
static const yytype_int16 yypact[] =
{
      72,    65,   -23,    -2,     2,   -74,   -74,     3,   -74,   -74,
     -74,   -74,    76,    73,    73,    73,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,    73,     4,    61,   -74,   -74,   -74,   -12,
     -74,   -74,   -74,    11,    91,    12,    42,    74,    25,    -9,
     -74,   -74,     9,    19,    30,    47,    35,   -74,    57,    69,
     -74,   -27,   -74,    92,   -74,   -74,   -74,   -74,   -74,    40,
      73,   100,    73,    73,    73,    73,    73,    73,    73,    73,
      73,    73,    73,    73,    73,    73,    73,    79,    79,   -74,
     -74,    73,   -74,   114,   -74,    73,   -74,    82,   -74,   -74,
      -6,   -74,    86,   -74,   -74,    80,    80,    80,    80,    91,
      91,    12,    12,    12,    12,    42,    42,    74,    25,    85,
      88,   -74,   -74,   -74,   -74,    97,   128,   -74,    73,   -74,
      73,    79,    79,   -74,   -74,   -74,   -74,   -74
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -74,   -74,   -74,   -74,    58,   -74,   -74,   -74,   -51,   -74,
     -74,    70,    14,    66,    68,    71,   -74,    23,   -25,   -74,
     -13,   -74,    43,   -73,   143,   -74,   -74,   -74
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      52,    43,    44,    16,   110,   111,    75,    46,    13,    84,
      45,    85,    95,    96,    97,    98,    98,    98,    98,    98,
      98,    98,    98,    98,    98,    53,   117,    54,    55,    14,
      56,    57,   118,    15,    91,    58,     1,    94,    47,    74,
      76,    77,    59,    19,    20,    21,    60,    92,   126,   127,
      17,    78,    68,    69,     2,    17,     3,    66,    67,     4,
     114,    61,    79,   109,    19,    20,    21,    22,   112,    98,
      88,    23,    89,    24,    81,    25,    19,    20,    21,    80,
      26,    27,   101,   102,   103,   104,    72,    73,    22,    70,
      71,    82,    23,   124,    24,    86,    25,    50,     1,    11,
      22,    26,    27,    93,    23,     1,    24,    83,    25,     1,
      18,    59,     1,    26,    27,    60,     2,    46,     3,   115,
     116,     4,   119,     2,   120,     3,   122,     2,     4,     3,
      61,   123,     4,    63,    64,    65,    99,   100,   105,   106,
     121,   113,   107,   125,    12,     0,   108
};

static const yytype_int8 yycheck[] =
{
      25,    14,    15,     0,    77,    78,    15,     3,    31,    36,
      23,    38,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    37,    32,    16,    17,    31,
      19,    20,    38,    31,    59,    24,    33,    62,    34,    14,
      49,    32,    31,     3,     4,     5,    35,    60,   121,   122,
       7,    32,    10,    11,    51,    12,    53,    45,    46,    56,
      85,    50,    32,    76,     3,     4,     5,    27,    81,   120,
      30,    31,    32,    33,    39,    35,     3,     4,     5,    32,
      40,    41,    68,    69,    70,    71,    12,    13,    27,    47,
      48,    34,    31,   118,    33,     3,    35,    36,    33,    34,
      27,    40,    41,     3,    31,    33,    33,    38,    35,    33,
      34,    31,    33,    40,    41,    35,    51,     3,    53,    37,
      38,    56,    36,    51,    39,    53,    29,    51,    56,    53,
      50,     3,    56,    42,    43,    44,    66,    67,    72,    73,
      52,    83,    74,   120,     1,    -1,    75
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    33,    51,    53,    56,    79,    80,    81,    82,    83,
      84,    34,    81,    31,    31,    31,     0,    79,    34,     3,
       4,     5,    27,    31,    33,    35,    40,    41,    58,    59,
      60,    63,    64,    65,    68,    69,    70,    71,    72,    73,
      74,    75,    77,    77,    77,    77,     3,    34,    61,    62,
      36,    66,    75,    37,    16,    17,    19,    20,    24,    31,
      35,    50,    76,    42,    43,    44,    45,    46,    10,    11,
      47,    48,    12,    13,    14,    15,    49,    32,    32,    32,
      32,    39,    34,    38,    36,    38,     3,    78,    30,    32,
      67,    75,    77,     3,    75,    65,    65,    65,    65,    68,
      68,    69,    69,    69,    69,    70,    70,    71,    72,    77,
      80,    80,    77,    61,    75,    37,    38,    32,    38,    36,
      39,    52,    29,     3,    75,    74,    80,    80
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 62 "grammar.y"
    { (yyval) = newNodeLamdaDeclaration((yyvsp[(1) - (6)]), (yyvsp[(2) - (6)]), (yyvsp[(3) - (6)])); ;}
    break;

  case 5:
#line 72 "grammar.y"
    { (yyval) = newObjectDeclaration(NULL); ;}
    break;

  case 6:
#line 73 "grammar.y"
    { (yyval) = newObjectDeclaration((yyvsp[(1) - (3)])); ;}
    break;

  case 7:
#line 77 "grammar.y"
    { (yyval) = newKeyValueList((yyvsp[(1) - (1)])); ;}
    break;

  case 8:
#line 78 "grammar.y"
    { (yyval) = addKeyValue((yyvsp[(2) - (3)]), (yyvsp[(1) - (3)])); ;}
    break;

  case 9:
#line 82 "grammar.y"
    { (yyval) = newNodeKeyValue((yyvsp[(1) - (3)]), (yyvsp[(2) - (3)])); ;}
    break;

  case 10:
#line 87 "grammar.y"
    { (yyval) = newArrayElementList(NULL); ;}
    break;

  case 11:
#line 88 "grammar.y"
    { (yyval) = (yyvsp[(1) - (3)]); ;}
    break;

  case 12:
#line 93 "grammar.y"
    { (yyval) = newNodeIdentifier((yyvsp[(1) - (1)])); ;}
    break;

  case 13:
#line 94 "grammar.y"
    { (yyval) = newNodeNumber((yyvsp[(1) - (1)])); ;}
    break;

  case 14:
#line 95 "grammar.y"
    { (yyval) = newNodeThis(); ;}
    break;

  case 15:
#line 96 "grammar.y"
    { (yyval) = newNodeString((yyvsp[(1) - (1)])); ;}
    break;

  case 16:
#line 97 "grammar.y"
    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 17:
#line 98 "grammar.y"
    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 18:
#line 99 "grammar.y"
    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 19:
#line 100 "grammar.y"
    { (yyval) = (yyvsp[(1) - (3)]); ;}
    break;

  case 20:
#line 104 "grammar.y"
    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 22:
#line 106 "grammar.y"
    { (yyval) = newNodeFunctionCall((yyvsp[(1) - (3)]), NULL); ;}
    break;

  case 23:
#line 107 "grammar.y"
    { (yyval) = newNodeFunctionCall((yyvsp[(1) - (4)]), (yyvsp[(2) - (4)])); ;}
    break;

  case 24:
#line 108 "grammar.y"
    { (yyval) = newNodeObjectAccesor((yyvsp[(1) - (3)]), newNodeIdentifier((yyvsp[(2) - (3)])));}
    break;

  case 25:
#line 112 "grammar.y"
    { (yyval) = newArrayElementList(newNodeArrayDeclaration((yyvsp[(1) - (1)]))); ;}
    break;

  case 26:
#line 113 "grammar.y"
    { (yyval) = addArrayElement((yyvsp[(1) - (3)]), (yyvsp[(2) - (3)])); ;}
    break;

  case 30:
#line 123 "grammar.y"
    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 31:
#line 124 "grammar.y"
    { (yyval) = newNodeOperation((yyvsp[(1) - (3)]), (yyvsp[(2) - (3)]), "*"); ;}
    break;

  case 32:
#line 125 "grammar.y"
    { (yyval) = newNodeOperation((yyvsp[(1) - (3)]), (yyvsp[(2) - (3)]), "/"); ;}
    break;

  case 33:
#line 126 "grammar.y"
    { (yyval) = newNodeOperation((yyvsp[(1) - (3)]), (yyvsp[(2) - (3)]), "mod"); ;}
    break;

  case 34:
#line 130 "grammar.y"
    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 35:
#line 131 "grammar.y"
    { (yyval) = newNodeOperation((yyvsp[(1) - (3)]), (yyvsp[(2) - (3)]), "+"); ;}
    break;

  case 36:
#line 132 "grammar.y"
    { (yyval) = newNodeOperation((yyvsp[(1) - (3)]), (yyvsp[(2) - (3)]), "-"); ;}
    break;

  case 37:
#line 136 "grammar.y"
    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 38:
#line 137 "grammar.y"
    { (yyval) = newNodeOperation((yyvsp[(1) - (3)]), (yyvsp[(2) - (3)]), "<"); ;}
    break;

  case 39:
#line 138 "grammar.y"
    { (yyval) = newNodeOperation((yyvsp[(1) - (3)]), (yyvsp[(2) - (3)]), ">"); ;}
    break;

  case 40:
#line 139 "grammar.y"
    { (yyval) = newNodeOperation((yyvsp[(1) - (3)]), (yyvsp[(2) - (3)]), "<="); ;}
    break;

  case 41:
#line 140 "grammar.y"
    { (yyval) = newNodeOperation((yyvsp[(1) - (3)]), (yyvsp[(2) - (3)]), ">="); ;}
    break;

  case 42:
#line 144 "grammar.y"
    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 43:
#line 145 "grammar.y"
    { (yyval) = newNodeOperation((yyvsp[(1) - (3)]), (yyvsp[(2) - (3)]), "=="); ;}
    break;

  case 44:
#line 146 "grammar.y"
    { (yyval) = newNodeOperation((yyvsp[(1) - (3)]), (yyvsp[(2) - (3)]), "!="); ;}
    break;

  case 45:
#line 150 "grammar.y"
    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 46:
#line 151 "grammar.y"
    { (yyval) = newNodeOperation((yyvsp[(1) - (3)]), (yyvsp[(2) - (3)]), "&&"); ;}
    break;

  case 47:
#line 155 "grammar.y"
    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 48:
#line 156 "grammar.y"
    { (yyval) = newNodeOperation((yyvsp[(1) - (3)]), (yyvsp[(2) - (3)]), "||"); ;}
    break;

  case 49:
#line 160 "grammar.y"
    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 50:
#line 161 "grammar.y"
    { (yyval) = newNodeTernaryOperation((yyvsp[(1) - (5)]), (yyvsp[(2) - (5)]), (yyvsp[(3) - (5)])); ;}
    break;

  case 51:
#line 165 "grammar.y"
    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 52:
#line 166 "grammar.y"
    { (yyval) = newNodeOperation((yyvsp[(1) - (3)]), (yyvsp[(3) - (3)]), (yyvsp[(2) - (3)])); ;}
    break;

  case 53:
#line 171 "grammar.y"
    { (yyval) = "="; ;}
    break;

  case 54:
#line 172 "grammar.y"
    { (yyval) = "*="; ;}
    break;

  case 55:
#line 173 "grammar.y"
    { (yyval) = "/="; ;}
    break;

  case 56:
#line 174 "grammar.y"
    { (yyval) = "+="; ;}
    break;

  case 57:
#line 175 "grammar.y"
    { (yyval) = "-="; ;}
    break;

  case 58:
#line 179 "grammar.y"
    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 59:
#line 183 "grammar.y"
    { (yyval) = newParameterList(newNodeParameter((yyvsp[(1) - (1)]))); ;}
    break;

  case 60:
#line 184 "grammar.y"
    { (yyval) = addParameter((yyvsp[(2) - (3)]), (yyvsp[(1) - (3)])); ;}
    break;

  case 61:
#line 188 "grammar.y"
    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 62:
#line 189 "grammar.y"
    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 63:
#line 190 "grammar.y"
    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 64:
#line 191 "grammar.y"
    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 65:
#line 197 "grammar.y"
    { (yyval) = newInstructionsList(NULL); ;}
    break;

  case 66:
#line 198 "grammar.y"
    { (yyval) = (yyvsp[(1) - (3)]); ;}
    break;

  case 67:
#line 203 "grammar.y"
    { (yyval) = newInstructionsList((yyvsp[(1) - (1)])); ;}
    break;

  case 68:
#line 204 "grammar.y"
    { (yyval) = addInstructions((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); ;}
    break;

  case 69:
#line 208 "grammar.y"
    { (yyval) = newNodeIf((yyvsp[(1) - (5)]), (yyvsp[(2) - (5)]), NULL); ;}
    break;

  case 70:
#line 209 "grammar.y"
    { (yyval) = newNodeIf((yyvsp[(1) - (7)]), (yyvsp[(2) - (7)]), (yyvsp[(3) - (7)])); ;}
    break;

  case 71:
#line 213 "grammar.y"
    { (yyval) = nodeWhile((yyvsp[(1) - (5)]), (yyvsp[(2) - (5)])); ;}
    break;

  case 72:
#line 217 "grammar.y"
    { (yyval) = NodeReturn((yyvsp[(2) - (4)])); ;}
    break;


/* Line 1267 of yacc.c.  */
#line 1877 "grammar.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 220 "grammar.y"


void yyerror(char *msg) {
  printf("%s on line %d\n\n", msg, yylineno);
  exit(1);
}

int main() {
  int i;
  return yyparse();
}

