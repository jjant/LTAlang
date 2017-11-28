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




/* Copy the first part of user declarations.  */
#line 1 "grammar.y"

	#include "structures.h"

	#define NULL 0

	extern int yylineno;

	void yyerror(NodeList **, char *);


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
typedef union YYSTYPE
#line 11 "grammar.y"
{
  int num;
  char * string;
  struct Node * node;
	struct NodeList * list;
}
/* Line 193 of yacc.c.  */
#line 205 "grammar.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 218 "grammar.tab.c"

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
#define YYFINAL  72
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   193

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  47
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  29
/* YYNRULES -- Number of rules.  */
#define YYNRULES  75
/* YYNRULES -- Number of states.  */
#define YYNSTATES  132

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   301

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
      45,    46
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     9,    11,    13,    16,    20,    22,    27,
      31,    34,    38,    40,    42,    44,    46,    48,    50,    54,
      56,    60,    62,    67,    71,    76,    78,    80,    85,    87,
      89,    93,    95,    99,   103,   107,   109,   113,   117,   119,
     123,   127,   131,   135,   137,   141,   145,   147,   151,   153,
     157,   159,   165,   167,   171,   173,   175,   177,   179,   181,
     183,   185,   189,   191,   193,   195,   197,   200,   202,   205,
     209,   211,   214,   220,   228,   234
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      72,     0,    -1,    27,    69,    27,    49,    71,    -1,    19,
      -1,    31,    -1,    27,    27,    -1,    27,    51,    27,    -1,
      52,    -1,    52,    28,     6,    51,    -1,     3,    29,    68,
      -1,    25,    26,    -1,    25,    57,    26,    -1,     4,    -1,
      18,    -1,     5,    -1,    53,    -1,    50,    -1,    48,    -1,
      21,    68,    22,    -1,     3,    -1,    56,    40,     3,    -1,
      54,    -1,    56,    25,    68,    26,    -1,    56,    21,    22,
      -1,    56,    21,    58,    22,    -1,    55,    -1,    66,    -1,
      57,    28,     6,    66,    -1,    66,    -1,    20,    -1,    58,
      28,    66,    -1,    56,    -1,    59,    32,    56,    -1,    59,
      34,    56,    -1,    59,    33,    56,    -1,    59,    -1,    60,
      35,    59,    -1,    60,    36,    59,    -1,    60,    -1,    61,
      37,    60,    -1,    61,    38,    60,    -1,    61,     7,    60,
      -1,    61,     8,    60,    -1,    61,    -1,    62,     9,    61,
      -1,    62,    10,    61,    -1,    62,    -1,    63,    11,    62,
      -1,    63,    -1,    64,    12,    63,    -1,    64,    -1,    64,
      39,    68,    29,    65,    -1,    65,    -1,    55,    67,    66,
      -1,    16,    -1,    13,    -1,    14,    -1,    17,    -1,    15,
      -1,    66,    -1,     3,    -1,    69,    28,     3,    -1,    71,
      -1,    73,    -1,    74,    -1,    75,    -1,    68,     6,    -1,
       6,    -1,    23,    24,    -1,    23,    72,    24,    -1,    70,
      -1,    72,    70,    -1,    41,    21,    68,    22,    71,    -1,
      41,    21,    68,    22,    71,    42,    71,    -1,    43,    21,
      68,    22,    71,    -1,    46,    21,    68,    22,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    89,    89,    93,    94,    99,   100,   104,   105,   109,
     114,   115,   120,   121,   122,   123,   124,   125,   126,   130,
     131,   135,   136,   137,   138,   139,   143,   144,   147,   148,
     149,   154,   155,   156,   157,   161,   162,   163,   167,   168,
     169,   170,   171,   175,   176,   177,   181,   182,   186,   187,
     191,   192,   196,   197,   202,   203,   204,   205,   206,   210,
     214,   215,   219,   220,   221,   222,   223,   224,   230,   231,
     236,   237,   241,   242,   246,   250
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "NUMBER", "STRING_LITERAL",
  "ENDMARKER", "LE_OP", "GE_OP", "EQ_OP", "NE_OP", "AND_OP", "OR_OP",
  "MUL_ASSIGN", "DIV_ASSIGN", "SUB_ASSIGN", "REG_ASSIGN", "ADD_ASSIGN",
  "THIS", "LAMDA_ASSIGN", "PLACEHOLDER", "PARENS_OPEN", "PARENS_CLOSE",
  "BRACKETS_OPEN", "BRACKETS_CLOSE", "ARRAY_OPEN", "ARRAY_CLOSE",
  "SIMPLE_BAR", "LIST_DELIMITER", "COLONS", "EMPTY", "LAMDA_ASYNC", "PROD",
  "MOD", "COCIENT", "PLUS", "MINUS", "LESS", "GREATER", "THEN",
  "OBJECT_ACCESSOR", "IF", "ELSE", "WHILE", "DO", "FOR", "RETURN",
  "$accept", "lamda_declaration", "opt_async", "object_declaration",
  "object_body", "object_property_declaration", "array_declaration",
  "primary_expression", "assignable_expression", "postfix_expression",
  "array_values_list", "argument_expression_list",
  "multiplicative_expression", "additive_expression",
  "relational_expression", "equality_expression", "logical_and_expression",
  "logical_or_expression", "conditional_expression",
  "assignment_expression", "assignment_operator", "expression",
  "parameter_list", "statement", "compound_statement", "statement_list",
  "selection_statement", "iteration_statement", "jump_statement", 0
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
     295,   296,   297,   298,   299,   300,   301
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    47,    48,    49,    49,    50,    50,    51,    51,    52,
      53,    53,    54,    54,    54,    54,    54,    54,    54,    55,
      55,    56,    56,    56,    56,    56,    57,    57,    58,    58,
      58,    59,    59,    59,    59,    60,    60,    60,    61,    61,
      61,    61,    61,    62,    62,    62,    63,    63,    64,    64,
      65,    65,    66,    66,    67,    67,    67,    67,    67,    68,
      69,    69,    70,    70,    70,    70,    70,    70,    71,    71,
      72,    72,    73,    73,    74,    75
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     5,     1,     1,     2,     3,     1,     4,     3,
       2,     3,     1,     1,     1,     1,     1,     1,     3,     1,
       3,     1,     4,     3,     4,     1,     1,     4,     1,     1,
       3,     1,     3,     3,     3,     1,     3,     3,     1,     3,
       3,     3,     3,     1,     3,     3,     1,     3,     1,     3,
       1,     5,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     3,     1,     1,     1,     1,     2,     1,     2,     3,
       1,     2,     5,     7,     5,     4
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    19,    12,    14,    67,    13,     0,     0,     0,     0,
       0,     0,     0,    17,    16,    15,    21,    25,    31,    35,
      38,    43,    46,    48,    50,    52,    59,     0,    70,    62,
       0,    63,    64,    65,     0,    68,     0,    10,     0,    26,
      60,     5,     0,     7,     0,     0,     0,     0,    55,    56,
      58,    54,    57,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    66,     1,    71,    18,    69,    11,     0,     0,     6,
       0,     0,     0,     0,     0,     0,    53,    29,    23,     0,
      28,     0,    20,    25,    32,    34,    33,    36,    37,    41,
      42,    39,    40,    44,    45,    47,    49,     0,     0,     9,
       0,     3,     4,     0,    61,     0,     0,    75,    24,     0,
      22,     0,    27,     0,     8,     2,    72,    74,    30,    51,
       0,    73
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,    13,   113,    14,    42,    43,    15,    16,    17,    18,
      38,    89,    19,    20,    21,    22,    23,    24,    25,    26,
      53,    27,    44,    28,    29,    30,    31,    32,    33
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -94
static const yytype_int16 yypact[] =
{
     109,   -94,   -94,   -94,   -94,   -94,   166,    53,   141,    12,
      14,    31,    54,   -94,   -94,   -94,   -94,    74,    -4,    76,
     -17,    17,    72,    27,     4,   -94,   -94,    73,   -94,   -94,
      26,   -94,   -94,   -94,    75,   -94,    80,   -94,    42,   -94,
      66,   -94,    79,    91,    65,   166,   166,   166,   -94,   -94,
     -94,   -94,   -94,   166,   136,   166,    99,   166,   166,   166,
     166,   166,   166,   166,   166,   166,   166,   166,   166,   166,
     166,   -94,   -94,   -94,   -94,   -94,   -94,   114,   166,   -94,
     116,    29,   128,   111,   113,   115,   -94,   -94,   -94,     5,
     -94,   112,   -94,   -94,    -4,    -4,    -4,    76,    76,   -17,
     -17,   -17,   -17,    17,    17,    72,    27,   118,   166,   -94,
     139,   -94,   -94,   120,   -94,   120,   120,   -94,   -94,   166,
     -94,   166,   -94,    66,   -94,   -94,   106,   -94,   -94,   -94,
     120,   -94
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -94,   -94,   -94,   -94,    39,   -94,   -94,   -94,   -55,    59,
     -94,   -94,    64,    -1,    62,    83,    84,   -94,    43,    -8,
     -94,    -5,   -94,    -2,   -93,   153,   -94,   -94,   -94
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      39,    34,    93,    93,    93,    93,    93,    93,    93,    93,
      93,    93,    93,    93,    93,    40,    69,    54,    60,    61,
     125,    55,   126,   127,    62,    63,    72,   118,    73,     1,
       2,     3,     4,   119,    73,    45,    56,   131,    68,    41,
      83,    84,    85,    70,     5,    86,    90,     6,   111,     7,
      91,     8,    46,     9,    64,    65,     1,     2,     3,     4,
     112,    99,   100,   101,   102,   107,    93,    10,    76,    11,
      77,     5,    12,   109,     6,    47,     7,    35,     8,    71,
       9,    66,    67,     1,     2,     3,     4,    48,    49,    50,
      51,    52,    81,    82,    10,    78,    11,    74,     5,    12,
     122,     6,    92,     7,    75,     8,    79,     9,    57,    58,
      59,   128,     1,     2,     3,     4,    94,    95,    96,    80,
     108,    10,   110,    11,    97,    98,    12,     5,   103,   104,
       6,   114,     7,   115,     8,   116,     9,   117,   120,     1,
       2,     3,   123,     7,     1,     2,     3,   121,   130,   124,
      10,   105,    11,   106,     5,    12,    87,     6,    88,     5,
      36,     8,     6,     9,   129,     0,     8,    37,     9,     1,
       2,     3,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     5,     0,     0,     6,     0,     0,
       0,     8,     0,     9
};

static const yytype_int16 yycheck[] =
{
       8,     6,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,     3,    12,    21,    35,    36,
     113,    25,   115,   116,     7,     8,     0,    22,    30,     3,
       4,     5,     6,    28,    36,    21,    40,   130,    11,    27,
      45,    46,    47,    39,    18,    53,    54,    21,    19,    23,
      55,    25,    21,    27,    37,    38,     3,     4,     5,     6,
      31,    62,    63,    64,    65,    70,   121,    41,    26,    43,
      28,    18,    46,    78,    21,    21,    23,    24,    25,     6,
      27,     9,    10,     3,     4,     5,     6,    13,    14,    15,
      16,    17,    27,    28,    41,    29,    43,    22,    18,    46,
     108,    21,     3,    23,    24,    25,    27,    27,    32,    33,
      34,   119,     3,     4,     5,     6,    57,    58,    59,    28,
       6,    41,     6,    43,    60,    61,    46,    18,    66,    67,
      21,     3,    23,    22,    25,    22,    27,    22,    26,     3,
       4,     5,     3,    23,     3,     4,     5,    29,    42,   110,
      41,    68,    43,    69,    18,    46,    20,    21,    22,    18,
       7,    25,    21,    27,   121,    -1,    25,    26,    27,     3,
       4,     5,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    18,    -1,    -1,    21,    -1,    -1,
      -1,    25,    -1,    27
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,    18,    21,    23,    25,    27,
      41,    43,    46,    48,    50,    53,    54,    55,    56,    59,
      60,    61,    62,    63,    64,    65,    66,    68,    70,    71,
      72,    73,    74,    75,    68,    24,    72,    26,    57,    66,
       3,    27,    51,    52,    69,    21,    21,    21,    13,    14,
      15,    16,    17,    67,    21,    25,    40,    32,    33,    34,
      35,    36,     7,     8,    37,    38,     9,    10,    11,    12,
      39,     6,     0,    70,    22,    24,    26,    28,    29,    27,
      28,    27,    28,    68,    68,    68,    66,    20,    22,    58,
      66,    68,     3,    55,    56,    56,    56,    59,    59,    60,
      60,    60,    60,    61,    61,    62,    63,    68,     6,    68,
       6,    19,    31,    49,     3,    22,    22,    22,    22,    28,
      26,    29,    66,     3,    51,    71,    71,    71,    66,    65,
      42,    71
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
      yyerror (program, YY_("syntax error: cannot back up")); \
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
		  Type, Value, program); \
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
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, NodeList ** program)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, program)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    NodeList ** program;
#endif
{
  if (!yyvaluep)
    return;
  YYUSE (program);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, NodeList ** program)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, program)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    NodeList ** program;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep, program);
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
yy_reduce_print (YYSTYPE *yyvsp, int yyrule, NodeList ** program)
#else
static void
yy_reduce_print (yyvsp, yyrule, program)
    YYSTYPE *yyvsp;
    int yyrule;
    NodeList ** program;
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
		       		       , program);
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule, program); \
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, NodeList ** program)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, program)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    NodeList ** program;
#endif
{
  YYUSE (yyvaluep);
  YYUSE (program);

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
int yyparse (NodeList ** program);
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
yyparse (NodeList ** program)
#else
int
yyparse (program)
    NodeList ** program;
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
#line 89 "grammar.y"
    { (yyval.node) = newNodeLamdaDeclaration((yyvsp[(4) - (5)].num), (yyvsp[(2) - (5)].list), (yyvsp[(5) - (5)].list)); ;}
    break;

  case 3:
#line 93 "grammar.y"
    { (yyval.num) = 0 ;}
    break;

  case 4:
#line 94 "grammar.y"
    { (yyval.num) = 1 ;}
    break;

  case 5:
#line 99 "grammar.y"
    { (yyval.node) = newNodeObjectDeclaration(NULL); ;}
    break;

  case 6:
#line 100 "grammar.y"
    { (yyval.node) = newNodeObjectDeclaration((yyvsp[(2) - (3)].list)); ;}
    break;

  case 7:
#line 104 "grammar.y"
    { (yyval.list) = newKeyValueList((yyvsp[(1) - (1)].node)); ;}
    break;

  case 8:
#line 105 "grammar.y"
    { (yyval.list) = addKeyValue((yyvsp[(4) - (4)].list), (yyvsp[(1) - (4)].node)); ;}
    break;

  case 9:
#line 109 "grammar.y"
    { (yyval.node) = newNodeKeyValue((yyvsp[(1) - (3)].string), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 10:
#line 114 "grammar.y"
    { (yyval.list) = newArrayElementList(NULL); ;}
    break;

  case 11:
#line 115 "grammar.y"
    { (yyval.list) = (yyvsp[(2) - (3)].list); ;}
    break;

  case 12:
#line 120 "grammar.y"
    { (yyval.node) = newNodeNumber((yyvsp[(1) - (1)].string)); ;}
    break;

  case 13:
#line 121 "grammar.y"
    { (yyval.node) = newNodeThis(); ;}
    break;

  case 14:
#line 122 "grammar.y"
    { (yyval.node) = newNodeString((yyvsp[(1) - (1)].string)); ;}
    break;

  case 15:
#line 123 "grammar.y"
    { (yyval.node) = newNodeArrayDeclaration((yyvsp[(1) - (1)].list)); ;}
    break;

  case 16:
#line 124 "grammar.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 17:
#line 125 "grammar.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 18:
#line 126 "grammar.y"
    { (yyval.node) = (yyvsp[(2) - (3)].node); ;}
    break;

  case 19:
#line 130 "grammar.y"
    { (yyval.node) = newNodeIdentifier((yyvsp[(1) - (1)].string)); ;}
    break;

  case 20:
#line 131 "grammar.y"
    { (yyval.node) = newNodeObjectAccessor((yyvsp[(1) - (3)].node), newNodeIdentifier((yyvsp[(3) - (3)].string)));}
    break;

  case 21:
#line 135 "grammar.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 23:
#line 137 "grammar.y"
    { (yyval.node) = newNodeFunctionCall((yyvsp[(1) - (3)].node), NULL); ;}
    break;

  case 24:
#line 138 "grammar.y"
    { (yyval.node) = newNodeFunctionCall((yyvsp[(1) - (4)].node), (yyvsp[(3) - (4)].list)); ;}
    break;

  case 25:
#line 139 "grammar.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 26:
#line 143 "grammar.y"
    { (yyval.list) = newArrayElementList(newNodeArrayDeclaration((yyvsp[(1) - (1)].node))); ;}
    break;

  case 27:
#line 144 "grammar.y"
    { (yyval.list) = addArrayElement((yyvsp[(1) - (4)].list), (yyvsp[(4) - (4)].node)); ;}
    break;

  case 28:
#line 147 "grammar.y"
    { (yyval.list) = newArgumentList((yyvsp[(1) - (1)].node)); ;}
    break;

  case 29:
#line 148 "grammar.y"
    { (yyval.list) = newArgumentList(newNodePlaceholder()); ;}
    break;

  case 30:
#line 149 "grammar.y"
    { (yyval.list) = addArgument((yyvsp[(1) - (3)].list), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 31:
#line 154 "grammar.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 32:
#line 155 "grammar.y"
    { (yyval.node) = newNodeOperation((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), "*"); ;}
    break;

  case 33:
#line 156 "grammar.y"
    { (yyval.node) = newNodeOperation((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), "/"); ;}
    break;

  case 34:
#line 157 "grammar.y"
    { (yyval.node) = newNodeOperation((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), "mod"); ;}
    break;

  case 35:
#line 161 "grammar.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 36:
#line 162 "grammar.y"
    { (yyval.node) = newNodeOperation((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), "+"); ;}
    break;

  case 37:
#line 163 "grammar.y"
    { (yyval.node) = newNodeOperation((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), "-"); ;}
    break;

  case 38:
#line 167 "grammar.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 39:
#line 168 "grammar.y"
    { (yyval.node) = newNodeOperation((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), "<"); ;}
    break;

  case 40:
#line 169 "grammar.y"
    { (yyval.node) = newNodeOperation((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), ">"); ;}
    break;

  case 41:
#line 170 "grammar.y"
    { (yyval.node) = newNodeOperation((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), "<="); ;}
    break;

  case 42:
#line 171 "grammar.y"
    { (yyval.node) = newNodeOperation((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), ">="); ;}
    break;

  case 43:
#line 175 "grammar.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 44:
#line 176 "grammar.y"
    { (yyval.node) = newNodeOperation((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), "=="); ;}
    break;

  case 45:
#line 177 "grammar.y"
    { (yyval.node) = newNodeOperation((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), "!="); ;}
    break;

  case 46:
#line 181 "grammar.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 47:
#line 182 "grammar.y"
    { (yyval.node) = newNodeOperation((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), "&&"); ;}
    break;

  case 48:
#line 186 "grammar.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 49:
#line 187 "grammar.y"
    { (yyval.node) = newNodeOperation((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), "||"); ;}
    break;

  case 50:
#line 191 "grammar.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 51:
#line 192 "grammar.y"
    { (yyval.node) = newNodeTernaryOperation((yyvsp[(1) - (5)].node), (yyvsp[(3) - (5)].node), (yyvsp[(5) - (5)].node)); ;}
    break;

  case 52:
#line 196 "grammar.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 53:
#line 197 "grammar.y"
    { (yyval.node) = newNodeOperation((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), (yyvsp[(2) - (3)].string)); ;}
    break;

  case 54:
#line 202 "grammar.y"
    { (yyval.string) = "="; ;}
    break;

  case 55:
#line 203 "grammar.y"
    { (yyval.string) = "*="; ;}
    break;

  case 56:
#line 204 "grammar.y"
    { (yyval.string) = "/="; ;}
    break;

  case 57:
#line 205 "grammar.y"
    { (yyval.string) = "+="; ;}
    break;

  case 58:
#line 206 "grammar.y"
    { (yyval.string) = "-="; ;}
    break;

  case 59:
#line 210 "grammar.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 60:
#line 214 "grammar.y"
    { (yyval.list) = newParameterList(newNodeParameter((yyvsp[(1) - (1)].string))); ;}
    break;

  case 61:
#line 215 "grammar.y"
    { (yyval.list) = addParameter((yyvsp[(1) - (3)].list), (yyvsp[(3) - (3)].string)); ;}
    break;

  case 62:
#line 219 "grammar.y"
    { (yyval.node) = addNodeBlock((yyvsp[(1) - (1)].list)); ;}
    break;

  case 63:
#line 220 "grammar.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 64:
#line 221 "grammar.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 65:
#line 222 "grammar.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 66:
#line 223 "grammar.y"
    { (yyval.node) = (yyvsp[(1) - (2)].node); ;}
    break;

  case 67:
#line 224 "grammar.y"
    { (yyval.node) = addNodeIgnore(); ;}
    break;

  case 68:
#line 230 "grammar.y"
    { (yyval.list) = newInstructionsList(NULL); ;}
    break;

  case 69:
#line 231 "grammar.y"
    { (yyval.list) = (yyvsp[(2) - (3)].list); ;}
    break;

  case 70:
#line 236 "grammar.y"
    { (yyval.list) = (*program = newInstructionsList((yyvsp[(1) - (1)].node))); ;}
    break;

  case 71:
#line 237 "grammar.y"
    { (yyval.list) = (*program = addInstructions((yyvsp[(1) - (2)].list), (yyvsp[(2) - (2)].node))); ;}
    break;

  case 72:
#line 241 "grammar.y"
    { (yyval.node) = newNodeIf((yyvsp[(3) - (5)].node), (yyvsp[(5) - (5)].list), NULL); ;}
    break;

  case 73:
#line 242 "grammar.y"
    { (yyval.node) = newNodeIf((yyvsp[(3) - (7)].node), (yyvsp[(5) - (7)].list), (yyvsp[(7) - (7)].list)); ;}
    break;

  case 74:
#line 246 "grammar.y"
    { (yyval.node) = newNodeWhile((yyvsp[(3) - (5)].node), (yyvsp[(5) - (5)].list)); ;}
    break;

  case 75:
#line 250 "grammar.y"
    { (yyval.node) = newNodeReturn((yyvsp[(3) - (4)].node)); ;}
    break;


/* Line 1267 of yacc.c.  */
#line 1925 "grammar.tab.c"
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
      yyerror (program, YY_("syntax error"));
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
	    yyerror (program, yymsg);
	  }
	else
	  {
	    yyerror (program, YY_("syntax error"));
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
		      yytoken, &yylval, program);
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
		  yystos[yystate], yyvsp, program);
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
  yyerror (program, YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval, program);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp, program);
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


#line 253 "grammar.y"


void yyerror(NodeList ** program, char *msg) {
  printf("%s on line %d\n\n", msg, yylineno);
  exit(1);
}

int main() {
  int i;
	NodeList * program;
  int ret = yyparse(&program);

	if (ret == 1) {
		printf("%s", "There was an error parsing your program.");
		return 1;
	} else if (ret == 2) {
		printf("%s", "There is not enough memory to parse your program");
	}

	printf("type: %d\n", program->type);

	return 0;
}

