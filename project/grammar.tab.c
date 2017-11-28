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




/* Copy the first part of user declarations.  */
#line 1 "grammar.y"

	#include "structures.h"

	#define NULL 0

	extern int yylineno;

	void yyerror(Node *, char *);


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
#line 203 "grammar.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 216 "grammar.tab.c"

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
#define YYFINAL  73
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   222

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  47
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  28
/* YYNRULES -- Number of rules.  */
#define YYNRULES  73
/* YYNRULES -- Number of states.  */
#define YYNSTATES  130

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   300

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
       2,     2,     2,     2,     2,     2,     2,     2,     2,    46,
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
      45
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
     182,   186,   188,   190,   192,   194,   197,   200,   204,   206,
     209,   215,   223,   229
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      71,     0,    -1,    49,    26,    68,    26,    18,    70,    -1,
      29,    -1,    30,    -1,    26,    26,    -1,    26,    51,    26,
      -1,    52,    -1,    52,    27,    51,    -1,     3,    28,    67,
      -1,    24,    25,    -1,    24,    56,    25,    -1,     3,    -1,
       4,    -1,    17,    -1,     5,    -1,    53,    -1,    50,    -1,
      48,    -1,    20,    67,    21,    -1,    54,    -1,    55,    24,
      67,    25,    -1,    55,    20,    21,    -1,    55,    20,    57,
      21,    -1,    55,    39,     3,    -1,    65,    -1,    56,    27,
      65,    -1,    65,    -1,    19,    -1,    57,    27,    65,    -1,
      55,    -1,    58,    31,    55,    -1,    58,    33,    55,    -1,
      58,    32,    55,    -1,    58,    -1,    59,    34,    58,    -1,
      59,    35,    58,    -1,    59,    -1,    60,    36,    59,    -1,
      60,    37,    59,    -1,    60,     6,    59,    -1,    60,     7,
      59,    -1,    60,    -1,    61,     8,    60,    -1,    61,     9,
      60,    -1,    61,    -1,    62,    10,    61,    -1,    62,    -1,
      63,    11,    62,    -1,    63,    -1,    63,    38,    67,    28,
      64,    -1,    64,    -1,    55,    66,    65,    -1,    15,    -1,
      12,    -1,    13,    -1,    16,    -1,    14,    -1,    65,    -1,
       3,    -1,    68,    27,     3,    -1,    70,    -1,    72,    -1,
      73,    -1,    74,    -1,    67,    46,    -1,    22,    23,    -1,
      22,    71,    23,    -1,    69,    -1,    71,    69,    -1,    40,
      20,    67,    21,    70,    -1,    40,    20,    67,    21,    70,
      41,    70,    -1,    42,    20,    67,    21,    70,    -1,    45,
      20,    67,    21,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    87,    87,    91,    92,    97,    98,   102,   103,   107,
     112,   113,   118,   119,   120,   121,   122,   123,   124,   125,
     129,   130,   131,   132,   133,   137,   138,   141,   142,   143,
     148,   149,   150,   151,   155,   156,   157,   161,   162,   163,
     164,   165,   169,   170,   171,   175,   176,   180,   181,   185,
     186,   190,   191,   196,   197,   198,   199,   200,   204,   208,
     209,   213,   214,   215,   216,   217,   223,   224,   229,   230,
     234,   235,   239,   243
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "CONSTANT",
  "STRING_LITERAL", "LE_OP", "GE_OP", "EQ_OP", "NE_OP", "AND_OP", "OR_OP",
  "MUL_ASSIGN", "DIV_ASSIGN", "SUB_ASSIGN", "REG_ASSIGN", "ADD_ASSIGN",
  "THIS", "LAMDA_ASSIGN", "PLACEHOLDER", "PARENS_OPEN", "PARENS_CLOSE",
  "BRACKETS_OPEN", "BRACKETS_CLOSE", "ARRAY_OPEN", "ARRAY_CLOSE",
  "SIMPLE_BAR", "LIST_DELIMITER", "COLONS", "EMPTY", "ASYNC", "PROD",
  "MOD", "COCIENT", "PLUS", "MINUS", "LESS", "GREATER", "THEN",
  "OBJECT_ACCESSOR", "IF", "ELSE", "WHILE", "DO", "FOR", "RETURN", "';'",
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
     295,   296,   297,   298,   299,   300,    59
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    47,    48,    49,    49,    50,    50,    51,    51,    52,
      53,    53,    54,    54,    54,    54,    54,    54,    54,    54,
      55,    55,    55,    55,    55,    56,    56,    57,    57,    57,
      58,    58,    58,    58,    59,    59,    59,    60,    60,    60,
      60,    60,    61,    61,    61,    62,    62,    63,    63,    64,
      64,    65,    65,    66,    66,    66,    66,    66,    67,    68,
      68,    69,    69,    69,    69,    69,    70,    70,    71,    71,
      72,    72,    73,    74
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
       3,     1,     1,     1,     1,     2,     2,     3,     1,     2,
       5,     7,     5,     4
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    12,    13,    15,    14,     0,     0,     0,     0,     3,
       4,     0,     0,     0,    18,     0,    17,    16,    20,    30,
      34,    37,    42,    45,    47,    49,    51,    58,     0,    68,
      61,     0,    62,    63,    64,     0,    66,     0,    10,     0,
      25,     0,     5,     0,     7,     0,     0,     0,     0,    54,
      55,    57,    53,    56,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    65,     1,    69,    19,    67,    11,     0,     0,
       6,     0,     0,     0,     0,    59,     0,    28,    22,     0,
      27,     0,    24,    52,    31,    33,    32,    30,    35,    36,
      40,    41,    38,    39,    43,    44,    46,    48,     0,    26,
       9,     8,     0,     0,    73,     0,     0,    23,     0,    21,
       0,    70,    72,     0,    60,    29,    50,     0,     2,    71
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,    14,    15,    16,    43,    44,    17,    18,    19,    39,
      89,    20,    21,    22,    23,    24,    25,    26,    27,    57,
      28,    86,    29,    30,    31,    32,    33,    34
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -57
static const yytype_int16 yypact[] =
{
     124,   -57,   -57,   -57,   -57,   192,    65,   181,    31,   -57,
     -57,     7,    28,    40,   -57,    29,   -57,   -57,   -57,     5,
      99,   -11,     9,    22,    63,    15,   -57,   -57,    33,   -57,
     -57,    32,   -57,   -57,   -57,    60,   -57,    95,   -57,    13,
     -57,    58,   -57,    64,    79,   192,   192,   192,   105,   -57,
     -57,   -57,   -57,   -57,   153,   192,   106,   192,   192,   192,
     192,   192,   192,   192,   192,   192,   192,   192,   192,   192,
     192,   192,   -57,   -57,   -57,   -57,   -57,   -57,   192,   192,
     -57,   110,    93,   101,   102,   -57,    57,   -57,   -57,     1,
     -57,    91,   -57,   -57,    39,    39,    39,    39,    99,    99,
     -11,   -11,   -11,   -11,     9,     9,    22,    63,    92,   -57,
     -57,   -57,   104,   104,   -57,   115,   131,   -57,   192,   -57,
     192,    97,   -57,   104,   -57,   -57,   -57,   104,   -57,   -57
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -57,   -57,   -57,   -57,    55,   -57,   -57,   -57,   -56,   -57,
     -57,    35,    38,    25,    70,    72,   -57,    23,    -7,   -57,
      -4,   -57,     2,   -47,   139,   -57,   -57,   -57
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      40,    35,    94,    95,    96,    97,    97,    97,    97,    97,
      97,    97,    97,    97,    97,    63,    64,    49,    50,    51,
      52,    53,   117,    61,    62,    54,    70,    45,   118,    55,
      67,    68,    73,    74,    41,     1,     2,     3,    77,    74,
      78,    82,    83,    84,    56,    65,    66,    90,    46,     4,
      93,    91,     5,    71,     6,    48,     7,    42,     8,    54,
      47,     9,    10,    55,    97,   121,   122,   108,     1,     2,
       3,   109,    11,    69,    12,   110,   128,    13,    56,    72,
     129,    75,     4,   115,   116,     5,    79,     6,    36,     7,
      80,     8,   104,   105,     9,    10,    98,    99,     1,     2,
       3,   100,   101,   102,   103,    11,    81,    12,    85,    92,
      13,   125,     4,    41,   112,     5,   119,     6,    76,     7,
     120,     8,   113,   114,     9,    10,     6,     1,     2,     3,
      58,    59,    60,   123,   124,    11,   111,    12,   127,   106,
      13,     4,   107,   126,     5,    37,     6,     0,     7,     0,
       8,     0,     0,     9,    10,     0,     1,     2,     3,     0,
       0,     0,     0,     0,    11,     0,    12,     0,     0,    13,
       4,     0,    87,     5,    88,     0,     0,     7,     0,     8,
       0,     0,     9,    10,     1,     2,     3,     0,     0,     0,
       0,     0,     0,     0,     0,     1,     2,     3,     4,     0,
       0,     5,     0,     0,     0,     7,    38,     8,     0,     4,
       9,    10,     5,     0,     0,     0,     7,     0,     8,     0,
       0,     9,    10
};

static const yytype_int8 yycheck[] =
{
       7,     5,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,     6,     7,    12,    13,    14,
      15,    16,    21,    34,    35,    20,    11,    20,    27,    24,
       8,     9,     0,    31,     3,     3,     4,     5,    25,    37,
      27,    45,    46,    47,    39,    36,    37,    54,    20,    17,
      57,    55,    20,    38,    22,    26,    24,    26,    26,    20,
      20,    29,    30,    24,   120,   112,   113,    71,     3,     4,
       5,    78,    40,    10,    42,    79,   123,    45,    39,    46,
     127,    21,    17,    26,    27,    20,    28,    22,    23,    24,
      26,    26,    67,    68,    29,    30,    61,    62,     3,     4,
       5,    63,    64,    65,    66,    40,    27,    42,     3,     3,
      45,   118,    17,     3,    21,    20,    25,    22,    23,    24,
      28,    26,    21,    21,    29,    30,    22,     3,     4,     5,
      31,    32,    33,    18,     3,    40,    81,    42,    41,    69,
      45,    17,    70,   120,    20,     6,    22,    -1,    24,    -1,
      26,    -1,    -1,    29,    30,    -1,     3,     4,     5,    -1,
      -1,    -1,    -1,    -1,    40,    -1,    42,    -1,    -1,    45,
      17,    -1,    19,    20,    21,    -1,    -1,    24,    -1,    26,
      -1,    -1,    29,    30,     3,     4,     5,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,    17,    -1,
      -1,    20,    -1,    -1,    -1,    24,    25,    26,    -1,    17,
      29,    30,    20,    -1,    -1,    -1,    24,    -1,    26,    -1,
      -1,    29,    30
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,    17,    20,    22,    24,    26,    29,
      30,    40,    42,    45,    48,    49,    50,    53,    54,    55,
      58,    59,    60,    61,    62,    63,    64,    65,    67,    69,
      70,    71,    72,    73,    74,    67,    23,    71,    25,    56,
      65,     3,    26,    51,    52,    20,    20,    20,    26,    12,
      13,    14,    15,    16,    20,    24,    39,    66,    31,    32,
      33,    34,    35,     6,     7,    36,    37,     8,     9,    10,
      11,    38,    46,     0,    69,    21,    23,    25,    27,    28,
      26,    27,    67,    67,    67,     3,    68,    19,    21,    57,
      65,    67,     3,    65,    55,    55,    55,    55,    58,    58,
      59,    59,    59,    59,    60,    60,    61,    62,    67,    65,
      67,    51,    21,    21,    21,    26,    27,    21,    27,    25,
      28,    70,    70,    18,     3,    65,    64,    41,    70,    70
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
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, Node * program)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, program)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    Node * program;
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, Node * program)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, program)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    Node * program;
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
yy_reduce_print (YYSTYPE *yyvsp, int yyrule, Node * program)
#else
static void
yy_reduce_print (yyvsp, yyrule, program)
    YYSTYPE *yyvsp;
    int yyrule;
    Node * program;
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, Node * program)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, program)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    Node * program;
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
int yyparse (Node * program);
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
yyparse (Node * program)
#else
int
yyparse (program)
    Node * program;
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
#line 87 "grammar.y"
    { (yyval.node) = newNodeLamdaDeclaration((yyvsp[(1) - (6)].num), (yyvsp[(3) - (6)].list), (yyvsp[(6) - (6)].list)); ;}
    break;

  case 3:
#line 91 "grammar.y"
    { (yyval.num) = 0 ;}
    break;

  case 4:
#line 92 "grammar.y"
    { (yyval.num) = 1 ;}
    break;

  case 5:
#line 97 "grammar.y"
    { (yyval.node) = newNodeObjectDeclaration(NULL); ;}
    break;

  case 6:
#line 98 "grammar.y"
    { (yyval.node) = newNodeObjectDeclaration((yyvsp[(2) - (3)].list)); ;}
    break;

  case 7:
#line 102 "grammar.y"
    { (yyval.list) = newKeyValueList((yyvsp[(1) - (1)].node)); ;}
    break;

  case 8:
#line 103 "grammar.y"
    { (yyval.list) = addKeyValue((yyvsp[(3) - (3)].list), (yyvsp[(1) - (3)].node)); ;}
    break;

  case 9:
#line 107 "grammar.y"
    { (yyval.node) = newNodeKeyValue((yyvsp[(1) - (3)].string), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 10:
#line 112 "grammar.y"
    { (yyval.list) = newArrayElementList(NULL); ;}
    break;

  case 11:
#line 113 "grammar.y"
    { (yyval.list) = (yyvsp[(2) - (3)].list); ;}
    break;

  case 12:
#line 118 "grammar.y"
    { (yyval.node) = newNodeIdentifier((yyvsp[(1) - (1)].string)); ;}
    break;

  case 13:
#line 119 "grammar.y"
    { (yyval.node) = newNodeNumber((yyvsp[(1) - (1)].num)); ;}
    break;

  case 14:
#line 120 "grammar.y"
    { (yyval.node) = newNodeThis(); ;}
    break;

  case 15:
#line 121 "grammar.y"
    { (yyval.node) = newNodeString((yyvsp[(1) - (1)].string)); ;}
    break;

  case 16:
#line 122 "grammar.y"
    { (yyval.node) = (yyvsp[(1) - (1)].list); ;}
    break;

  case 17:
#line 123 "grammar.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 18:
#line 124 "grammar.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 19:
#line 125 "grammar.y"
    { (yyval.node) = (yyvsp[(2) - (3)].node); ;}
    break;

  case 20:
#line 129 "grammar.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 22:
#line 131 "grammar.y"
    { (yyval.node) = newNodeFunctionCall((yyvsp[(1) - (3)].node), NULL); ;}
    break;

  case 23:
#line 132 "grammar.y"
    { (yyval.node) = newNodeFunctionCall((yyvsp[(1) - (4)].node), (yyvsp[(3) - (4)].list)); ;}
    break;

  case 24:
#line 133 "grammar.y"
    { (yyval.node) = newNodeObjectAccessor((yyvsp[(1) - (3)].node), newNodeIdentifier((yyvsp[(3) - (3)].string)));}
    break;

  case 25:
#line 137 "grammar.y"
    { (yyval.list) = newArrayElementList(newNodeArrayDeclaration((yyvsp[(1) - (1)].node))); ;}
    break;

  case 26:
#line 138 "grammar.y"
    { (yyval.list) = addArrayElement((yyvsp[(1) - (3)].list), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 27:
#line 141 "grammar.y"
    { (yyval.list) = newArgumentList((yyvsp[(1) - (1)].node)); ;}
    break;

  case 28:
#line 142 "grammar.y"
    { (yyval.list) = newArgumentList(newNodePlaceholder()); ;}
    break;

  case 29:
#line 143 "grammar.y"
    { (yyval.list) = addArgument((yyvsp[(1) - (3)].list), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 30:
#line 148 "grammar.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 31:
#line 149 "grammar.y"
    { (yyval.node) = newNodeOperation((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), "*"); ;}
    break;

  case 32:
#line 150 "grammar.y"
    { (yyval.node) = newNodeOperation((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), "/"); ;}
    break;

  case 33:
#line 151 "grammar.y"
    { (yyval.node) = newNodeOperation((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), "mod"); ;}
    break;

  case 34:
#line 155 "grammar.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 35:
#line 156 "grammar.y"
    { (yyval.node) = newNodeOperation((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), "+"); ;}
    break;

  case 36:
#line 157 "grammar.y"
    { (yyval.node) = newNodeOperation((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), "-"); ;}
    break;

  case 37:
#line 161 "grammar.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 38:
#line 162 "grammar.y"
    { (yyval.node) = newNodeOperation((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), "<"); ;}
    break;

  case 39:
#line 163 "grammar.y"
    { (yyval.node) = newNodeOperation((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), ">"); ;}
    break;

  case 40:
#line 164 "grammar.y"
    { (yyval.node) = newNodeOperation((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), "<="); ;}
    break;

  case 41:
#line 165 "grammar.y"
    { (yyval.node) = newNodeOperation((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), ">="); ;}
    break;

  case 42:
#line 169 "grammar.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 43:
#line 170 "grammar.y"
    { (yyval.node) = newNodeOperation((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), "=="); ;}
    break;

  case 44:
#line 171 "grammar.y"
    { (yyval.node) = newNodeOperation((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), "!="); ;}
    break;

  case 45:
#line 175 "grammar.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 46:
#line 176 "grammar.y"
    { (yyval.node) = newNodeOperation((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), "&&"); ;}
    break;

  case 47:
#line 180 "grammar.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 48:
#line 181 "grammar.y"
    { (yyval.node) = newNodeOperation((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), "||"); ;}
    break;

  case 49:
#line 185 "grammar.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 50:
#line 186 "grammar.y"
    { (yyval.node) = newNodeTernaryOperation((yyvsp[(1) - (5)].node), (yyvsp[(3) - (5)].node), (yyvsp[(5) - (5)].node)); ;}
    break;

  case 51:
#line 190 "grammar.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 52:
#line 191 "grammar.y"
    { (yyval.node) = newNodeOperation((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), (yyvsp[(2) - (3)].string)); ;}
    break;

  case 53:
#line 196 "grammar.y"
    { (yyval.string) = "="; ;}
    break;

  case 54:
#line 197 "grammar.y"
    { (yyval.string) = "*="; ;}
    break;

  case 55:
#line 198 "grammar.y"
    { (yyval.string) = "/="; ;}
    break;

  case 56:
#line 199 "grammar.y"
    { (yyval.string) = "+="; ;}
    break;

  case 57:
#line 200 "grammar.y"
    { (yyval.string) = "-="; ;}
    break;

  case 58:
#line 204 "grammar.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 59:
#line 208 "grammar.y"
    { (yyval.list) = newParameterList(newNodeParameter((yyvsp[(1) - (1)].string))); ;}
    break;

  case 60:
#line 209 "grammar.y"
    { (yyval.list) = addParameter((yyvsp[(1) - (3)].list), (yyvsp[(3) - (3)].string)); ;}
    break;

  case 61:
#line 213 "grammar.y"
    { (yyval.node) = (yyvsp[(1) - (1)].list); ;}
    break;

  case 62:
#line 214 "grammar.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 63:
#line 215 "grammar.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 64:
#line 216 "grammar.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 65:
#line 217 "grammar.y"
    { (yyval.node) = (yyvsp[(1) - (2)].node); ;}
    break;

  case 66:
#line 223 "grammar.y"
    { (yyval.list) = newInstructionsList(NULL); ;}
    break;

  case 67:
#line 224 "grammar.y"
    { (yyval.list) = (yyvsp[(2) - (3)].list); ;}
    break;

  case 68:
#line 229 "grammar.y"
    { (yyval.list) = newInstructionsList((yyvsp[(1) - (1)].node)); ;}
    break;

  case 69:
#line 230 "grammar.y"
    { (yyval.list) = addInstructions((yyvsp[(1) - (2)].list), (yyvsp[(2) - (2)].node)); ;}
    break;

  case 70:
#line 234 "grammar.y"
    { (yyval.node) = newNodeIf((yyvsp[(3) - (5)].node), (yyvsp[(5) - (5)].list), NULL); ;}
    break;

  case 71:
#line 235 "grammar.y"
    { (yyval.node) = newNodeIf((yyvsp[(3) - (7)].node), (yyvsp[(5) - (7)].list), (yyvsp[(7) - (7)].list)); ;}
    break;

  case 72:
#line 239 "grammar.y"
    { (yyval.node) = newNodeWhile((yyvsp[(3) - (5)].node), (yyvsp[(5) - (5)].list)); ;}
    break;

  case 73:
#line 243 "grammar.y"
    { (yyval.node) = newNodeReturn((yyvsp[(3) - (4)].node)); ;}
    break;


/* Line 1267 of yacc.c.  */
#line 1916 "grammar.tab.c"
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


#line 246 "grammar.y"


void yyerror(Node * program, char *msg) {
  printf("%s on line %d\n\n", msg, yylineno);
  exit(1);
}

int main() {
  int i;
	Node * program;
  return yyparse(&program);
}

