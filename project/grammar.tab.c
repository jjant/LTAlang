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




/* Copy the first part of user declarations.  */
#line 1 "grammar/grammar.y"

	#include "./code_generator/structures.h"
	#include "./code_generator/main.h"

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
#line 12 "grammar/grammar.y"
{
  int num;
  char string[1000];
  struct Node * node;
	struct NodeList * list;
}
/* Line 193 of yacc.c.  */
#line 208 "grammar.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 221 "grammar.tab.c"

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
#define YYLAST   241

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  48
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  29
/* YYNRULES -- Number of rules.  */
#define YYNRULES  78
/* YYNRULES -- Number of states.  */
#define YYNSTATES  137

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   302

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
      45,    46,    47
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     9,    14,    16,    18,    20,    24,    26,
      31,    35,    39,    42,    46,    48,    50,    52,    54,    56,
      58,    62,    64,    68,    70,    75,    79,    84,    86,    88,
      93,    97,    99,   101,   105,   107,   111,   115,   119,   121,
     125,   129,   131,   135,   139,   143,   147,   149,   153,   157,
     159,   163,   165,   169,   171,   177,   179,   183,   185,   187,
     189,   191,   193,   195,   197,   201,   203,   205,   207,   209,
     212,   214,   217,   221,   223,   226,   232,   240,   246
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      73,     0,    -1,    27,    70,    27,    50,    72,    -1,    27,
      27,    50,    72,    -1,    19,    -1,    31,    -1,    32,    -1,
      27,    52,    27,    -1,    53,    -1,    53,    28,     6,    52,
      -1,    53,    28,    52,    -1,     3,    29,    69,    -1,    25,
      26,    -1,    25,    58,    26,    -1,     4,    -1,    18,    -1,
       5,    -1,    54,    -1,    51,    -1,    49,    -1,    21,    69,
      22,    -1,     3,    -1,    57,    41,     3,    -1,    55,    -1,
      57,    25,    69,    26,    -1,    57,    21,    22,    -1,    57,
      21,    59,    22,    -1,    56,    -1,    67,    -1,    58,    28,
       6,    67,    -1,    58,    28,    67,    -1,    67,    -1,    20,
      -1,    59,    28,    67,    -1,    57,    -1,    60,    33,    57,
      -1,    60,    35,    57,    -1,    60,    34,    57,    -1,    60,
      -1,    61,    36,    60,    -1,    61,    37,    60,    -1,    61,
      -1,    62,    38,    61,    -1,    62,    39,    61,    -1,    62,
       7,    61,    -1,    62,     8,    61,    -1,    62,    -1,    63,
       9,    62,    -1,    63,    10,    62,    -1,    63,    -1,    64,
      11,    63,    -1,    64,    -1,    65,    12,    64,    -1,    65,
      -1,    65,    40,    69,    29,    66,    -1,    66,    -1,    56,
      68,    67,    -1,    16,    -1,    13,    -1,    14,    -1,    17,
      -1,    15,    -1,    67,    -1,     3,    -1,    70,    28,     3,
      -1,    72,    -1,    74,    -1,    75,    -1,    76,    -1,    69,
       6,    -1,     6,    -1,    23,    24,    -1,    23,    73,    24,
      -1,    71,    -1,    73,    71,    -1,    42,    21,    69,    22,
      72,    -1,    42,    21,    69,    22,    72,    43,    72,    -1,
      44,    21,    69,    22,    72,    -1,    47,    21,    69,    22,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    90,    90,    91,    95,    96,   101,   102,   106,   107,
     108,   112,   117,   118,   123,   124,   125,   126,   127,   128,
     129,   133,   134,   138,   139,   140,   141,   142,   146,   147,
     148,   152,   153,   154,   159,   160,   161,   162,   166,   167,
     168,   172,   173,   174,   175,   176,   180,   181,   182,   186,
     187,   191,   192,   196,   197,   201,   202,   207,   208,   209,
     210,   211,   215,   219,   220,   224,   225,   226,   227,   228,
     229,   235,   236,   241,   242,   246,   247,   251,   255
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
  "SIMPLE_BAR", "LIST_DELIMITER", "COLONS", "EMPTY", "LAMDA_ASYNC",
  "EMP_OBJ", "PROD", "MOD", "COCIENT", "PLUS", "MINUS", "LESS", "GREATER",
  "THEN", "OBJECT_ACCESSOR", "IF", "ELSE", "WHILE", "DO", "FOR", "RETURN",
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
     295,   296,   297,   298,   299,   300,   301,   302
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    48,    49,    49,    50,    50,    51,    51,    52,    52,
      52,    53,    54,    54,    55,    55,    55,    55,    55,    55,
      55,    56,    56,    57,    57,    57,    57,    57,    58,    58,
      58,    59,    59,    59,    60,    60,    60,    60,    61,    61,
      61,    62,    62,    62,    62,    62,    63,    63,    63,    64,
      64,    65,    65,    66,    66,    67,    67,    68,    68,    68,
      68,    68,    69,    70,    70,    71,    71,    71,    71,    71,
      71,    72,    72,    73,    73,    74,    74,    75,    76
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     5,     4,     1,     1,     1,     3,     1,     4,
       3,     3,     2,     3,     1,     1,     1,     1,     1,     1,
       3,     1,     3,     1,     4,     3,     4,     1,     1,     4,
       3,     1,     1,     3,     1,     3,     3,     3,     1,     3,
       3,     1,     3,     3,     3,     3,     1,     3,     3,     1,
       3,     1,     3,     1,     5,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     3,     1,     1,     1,     1,     2,
       1,     2,     3,     1,     2,     5,     7,     5,     4
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    21,    14,    16,    70,    15,     0,     0,     0,     0,
       6,     0,     0,     0,    19,    18,    17,    23,    27,    34,
      38,    41,    46,    49,    51,    53,    55,    62,     0,    73,
      65,     0,    66,    67,    68,     0,    71,     0,    12,     0,
      28,    63,     0,     0,     8,     0,     0,     0,     0,    58,
      59,    61,    57,    60,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    69,     1,    74,    20,    72,    13,     0,     0,
       4,     5,     0,     7,     0,     0,     0,     0,     0,     0,
      56,    32,    25,     0,    31,     0,    22,    27,    35,    37,
      36,    39,    40,    44,    45,    42,    43,    47,    48,    50,
      52,     0,     0,    30,    11,     3,     0,     0,    10,     0,
      64,     0,     0,    78,    26,     0,    24,     0,    29,     9,
       2,    75,    77,    33,    54,     0,    76
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,    14,    82,    15,    43,    44,    16,    17,    18,    19,
      39,    93,    20,    21,    22,    23,    24,    25,    26,    27,
      54,    28,    45,    29,    30,    31,    32,    33,    34
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -69
static const yytype_int16 yypact[] =
{
     143,   -69,   -69,   -69,   -69,   -69,   209,    88,   176,    17,
     -69,     2,    32,    44,   -69,   -69,   -69,   -69,    19,    -3,
      62,    36,    18,    50,    28,     5,   -69,   -69,    61,   -69,
     -69,    58,   -69,   -69,   -69,    47,   -69,   118,   -69,    22,
     -69,    46,     0,    53,    54,     1,   209,   209,   209,   -69,
     -69,   -69,   -69,   -69,   209,   151,   209,    81,   209,   209,
     209,   209,   209,   209,   209,   209,   209,   209,   209,   209,
     209,   209,   -69,   -69,   -69,   -69,   -69,   -69,   201,   209,
     -69,   -69,    78,   -69,    34,     0,   100,    85,    86,    92,
     -69,   -69,   -69,    -1,   -69,    84,   -69,   -69,    -3,    -3,
      -3,    62,    62,    36,    36,    36,    36,    18,    18,    50,
      28,    87,   209,   -69,   -69,   -69,    46,   115,   -69,    78,
     -69,    78,    78,   -69,   -69,   209,   -69,   209,   -69,   -69,
     -69,    76,   -69,   -69,   -69,    78,   -69
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -69,   -69,    43,   -69,   -68,   -69,   -69,   -69,   -56,    67,
     -69,   -69,    16,    23,    31,    60,    63,   -69,     4,    -8,
     -69,    -5,   -69,    -7,   -67,   127,   -69,   -69,   -69
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      40,    35,    97,    97,    97,    97,    97,    97,    97,    97,
      97,    97,    97,    97,    97,   115,   118,    70,    55,    80,
      41,   124,    56,    46,    74,    63,    64,   125,    85,    86,
      74,    81,    49,    50,    51,    52,    53,   116,    57,    69,
     117,    87,    88,    89,    42,    71,    90,    94,    77,   129,
      78,    95,   130,    47,   131,   132,    65,    66,    73,    67,
      68,     1,     2,     3,     4,    48,   111,    72,   136,    75,
     113,    97,    61,    62,   114,    79,     5,   101,   102,     6,
      83,     7,    84,     8,    96,     9,   103,   104,   105,   106,
      10,     1,     2,     3,     4,    58,    59,    60,   107,   108,
      11,     7,    12,   120,   128,    13,     5,   121,   122,     6,
     126,     7,    36,     8,   123,     9,   127,   133,   116,   135,
      10,     1,     2,     3,     4,    98,    99,   100,   119,   109,
      11,   134,    12,   110,    37,    13,     5,     0,     0,     6,
       0,     7,    76,     8,     0,     9,     1,     2,     3,     4,
      10,     0,     0,     0,     1,     2,     3,     0,     0,     0,
      11,     5,    12,     0,     6,    13,     7,     0,     8,     5,
       9,    91,     6,    92,     0,    10,     8,     0,     9,     1,
       2,     3,     0,    10,     0,    11,     0,    12,     0,     0,
      13,     0,     0,     0,     5,     0,     0,     6,     0,     0,
       0,     8,    38,     9,     1,     2,     3,   112,    10,     0,
       0,     0,     1,     2,     3,     0,     0,     0,     0,     5,
       0,     0,     6,     0,     0,     0,     8,     5,     9,     0,
       6,     0,     0,    10,     8,     0,     9,     0,     0,     0,
       0,    10
};

static const yytype_int16 yycheck[] =
{
       8,     6,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    82,    84,    12,    21,    19,
       3,    22,    25,    21,    31,     7,     8,    28,    27,    28,
      37,    31,    13,    14,    15,    16,    17,     3,    41,    11,
       6,    46,    47,    48,    27,    40,    54,    55,    26,   117,
      28,    56,   119,    21,   121,   122,    38,    39,     0,     9,
      10,     3,     4,     5,     6,    21,    71,     6,   135,    22,
      78,   127,    36,    37,    79,    29,    18,    61,    62,    21,
      27,    23,    28,    25,     3,    27,    63,    64,    65,    66,
      32,     3,     4,     5,     6,    33,    34,    35,    67,    68,
      42,    23,    44,     3,   112,    47,    18,    22,    22,    21,
      26,    23,    24,    25,    22,    27,    29,   125,     3,    43,
      32,     3,     4,     5,     6,    58,    59,    60,    85,    69,
      42,   127,    44,    70,     7,    47,    18,    -1,    -1,    21,
      -1,    23,    24,    25,    -1,    27,     3,     4,     5,     6,
      32,    -1,    -1,    -1,     3,     4,     5,    -1,    -1,    -1,
      42,    18,    44,    -1,    21,    47,    23,    -1,    25,    18,
      27,    20,    21,    22,    -1,    32,    25,    -1,    27,     3,
       4,     5,    -1,    32,    -1,    42,    -1,    44,    -1,    -1,
      47,    -1,    -1,    -1,    18,    -1,    -1,    21,    -1,    -1,
      -1,    25,    26,    27,     3,     4,     5,     6,    32,    -1,
      -1,    -1,     3,     4,     5,    -1,    -1,    -1,    -1,    18,
      -1,    -1,    21,    -1,    -1,    -1,    25,    18,    27,    -1,
      21,    -1,    -1,    32,    25,    -1,    27,    -1,    -1,    -1,
      -1,    32
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,    18,    21,    23,    25,    27,
      32,    42,    44,    47,    49,    51,    54,    55,    56,    57,
      60,    61,    62,    63,    64,    65,    66,    67,    69,    71,
      72,    73,    74,    75,    76,    69,    24,    73,    26,    58,
      67,     3,    27,    52,    53,    70,    21,    21,    21,    13,
      14,    15,    16,    17,    68,    21,    25,    41,    33,    34,
      35,    36,    37,     7,     8,    38,    39,     9,    10,    11,
      12,    40,     6,     0,    71,    22,    24,    26,    28,    29,
      19,    31,    50,    27,    28,    27,    28,    69,    69,    69,
      67,    20,    22,    59,    67,    69,     3,    56,    57,    57,
      57,    60,    60,    61,    61,    61,    61,    62,    62,    63,
      64,    69,     6,    67,    69,    72,     3,     6,    52,    50,
       3,    22,    22,    22,    22,    28,    26,    29,    67,    52,
      72,    72,    72,    67,    66,    43,    72
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
#line 90 "grammar/grammar.y"
    { (yyval.node) = newNodeLamdaDeclaration((yyvsp[(4) - (5)].num), (yyvsp[(2) - (5)].list), (yyvsp[(5) - (5)].list)); ;}
    break;

  case 3:
#line 91 "grammar/grammar.y"
    { (yyval.node) = newNodeLamdaDeclaration((yyvsp[(3) - (4)].num), NULL, (yyvsp[(4) - (4)].list)); ;}
    break;

  case 4:
#line 95 "grammar/grammar.y"
    { (yyval.num) = 0 ;}
    break;

  case 5:
#line 96 "grammar/grammar.y"
    { (yyval.num) = 1 ;}
    break;

  case 6:
#line 101 "grammar/grammar.y"
    { (yyval.node) = newNodeObjectDeclaration(NULL); ;}
    break;

  case 7:
#line 102 "grammar/grammar.y"
    { (yyval.node) = newNodeObjectDeclaration((yyvsp[(2) - (3)].list)); ;}
    break;

  case 8:
#line 106 "grammar/grammar.y"
    { (yyval.list) = newKeyValueList((yyvsp[(1) - (1)].node)); ;}
    break;

  case 9:
#line 107 "grammar/grammar.y"
    { (yyval.list) = addKeyValue((yyvsp[(4) - (4)].list), (yyvsp[(1) - (4)].node)); ;}
    break;

  case 10:
#line 108 "grammar/grammar.y"
    { (yyval.list) = addKeyValue((yyvsp[(3) - (3)].list), (yyvsp[(1) - (3)].node)); ;}
    break;

  case 11:
#line 112 "grammar/grammar.y"
    { (yyval.node) = newNodeKeyValue((yyvsp[(1) - (3)].string), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 12:
#line 117 "grammar/grammar.y"
    { (yyval.list) = newArrayElementList(NULL); ;}
    break;

  case 13:
#line 118 "grammar/grammar.y"
    { (yyval.list) = (yyvsp[(2) - (3)].list); ;}
    break;

  case 14:
#line 123 "grammar/grammar.y"
    { (yyval.node) = newNodeNumber((yyvsp[(1) - (1)].string)); ;}
    break;

  case 15:
#line 124 "grammar/grammar.y"
    { (yyval.node) = newNodeThis(); ;}
    break;

  case 16:
#line 125 "grammar/grammar.y"
    { (yyval.node) = newNodeString((yyvsp[(1) - (1)].string)); ;}
    break;

  case 17:
#line 126 "grammar/grammar.y"
    { (yyval.node) = newNodeArrayDeclaration((yyvsp[(1) - (1)].list)); ;}
    break;

  case 18:
#line 127 "grammar/grammar.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 19:
#line 128 "grammar/grammar.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 20:
#line 129 "grammar/grammar.y"
    { (yyval.node) = (yyvsp[(2) - (3)].node); ;}
    break;

  case 21:
#line 133 "grammar/grammar.y"
    { (yyval.node) = newNodeIdentifier((yyvsp[(1) - (1)].string)); ;}
    break;

  case 22:
#line 134 "grammar/grammar.y"
    { (yyval.node) = newNodeObjectAccessor((yyvsp[(1) - (3)].node), newNodeIdentifier((yyvsp[(3) - (3)].string)));}
    break;

  case 23:
#line 138 "grammar/grammar.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 25:
#line 140 "grammar/grammar.y"
    { (yyval.node) = newNodeFunctionCall((yyvsp[(1) - (3)].node), NULL); ;}
    break;

  case 26:
#line 141 "grammar/grammar.y"
    { (yyval.node) = newNodeFunctionCall((yyvsp[(1) - (4)].node), (yyvsp[(3) - (4)].list)); ;}
    break;

  case 27:
#line 142 "grammar/grammar.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 28:
#line 146 "grammar/grammar.y"
    { (yyval.list) = newArrayElementList((yyvsp[(1) - (1)].node)); ;}
    break;

  case 29:
#line 147 "grammar/grammar.y"
    { (yyval.list) = addArrayElement((yyvsp[(1) - (4)].list), (yyvsp[(4) - (4)].node)); ;}
    break;

  case 30:
#line 148 "grammar/grammar.y"
    { (yyval.list) = addArrayElement((yyvsp[(1) - (3)].list), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 31:
#line 152 "grammar/grammar.y"
    { (yyval.list) = newArgumentList((yyvsp[(1) - (1)].node)); ;}
    break;

  case 32:
#line 153 "grammar/grammar.y"
    { (yyval.list) = newArgumentList(newNodePlaceholder()); ;}
    break;

  case 33:
#line 154 "grammar/grammar.y"
    { (yyval.list) = addArgument((yyvsp[(1) - (3)].list), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 34:
#line 159 "grammar/grammar.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 35:
#line 160 "grammar/grammar.y"
    { (yyval.node) = newNodeOperation((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), "*"); ;}
    break;

  case 36:
#line 161 "grammar/grammar.y"
    { (yyval.node) = newNodeOperation((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), "/"); ;}
    break;

  case 37:
#line 162 "grammar/grammar.y"
    { (yyval.node) = newNodeOperation((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), "%"); ;}
    break;

  case 38:
#line 166 "grammar/grammar.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 39:
#line 167 "grammar/grammar.y"
    { (yyval.node) = newNodeOperation((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), "+"); ;}
    break;

  case 40:
#line 168 "grammar/grammar.y"
    { (yyval.node) = newNodeOperation((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), "-"); ;}
    break;

  case 41:
#line 172 "grammar/grammar.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 42:
#line 173 "grammar/grammar.y"
    { (yyval.node) = newNodeOperation((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), "<"); ;}
    break;

  case 43:
#line 174 "grammar/grammar.y"
    { (yyval.node) = newNodeOperation((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), ">"); ;}
    break;

  case 44:
#line 175 "grammar/grammar.y"
    { (yyval.node) = newNodeOperation((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), "<="); ;}
    break;

  case 45:
#line 176 "grammar/grammar.y"
    { (yyval.node) = newNodeOperation((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), ">="); ;}
    break;

  case 46:
#line 180 "grammar/grammar.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 47:
#line 181 "grammar/grammar.y"
    { (yyval.node) = newNodeOperation((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), "=="); ;}
    break;

  case 48:
#line 182 "grammar/grammar.y"
    { (yyval.node) = newNodeOperation((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), "!="); ;}
    break;

  case 49:
#line 186 "grammar/grammar.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 50:
#line 187 "grammar/grammar.y"
    { (yyval.node) = newNodeOperation((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), "&&"); ;}
    break;

  case 51:
#line 191 "grammar/grammar.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 52:
#line 192 "grammar/grammar.y"
    { (yyval.node) = newNodeOperation((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), "||"); ;}
    break;

  case 53:
#line 196 "grammar/grammar.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 54:
#line 197 "grammar/grammar.y"
    { (yyval.node) = newNodeTernaryOperation((yyvsp[(1) - (5)].node), (yyvsp[(3) - (5)].node), (yyvsp[(5) - (5)].node)); ;}
    break;

  case 55:
#line 201 "grammar/grammar.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 56:
#line 202 "grammar/grammar.y"
    { (yyval.node) = newNodeOperation((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), (yyvsp[(2) - (3)].string)); ;}
    break;

  case 57:
#line 207 "grammar/grammar.y"
    { strcpy((yyval.string), "="); ;}
    break;

  case 58:
#line 208 "grammar/grammar.y"
    { strcpy((yyval.string), "*="); ;}
    break;

  case 59:
#line 209 "grammar/grammar.y"
    { strcpy((yyval.string), "/="); ;}
    break;

  case 60:
#line 210 "grammar/grammar.y"
    { strcpy((yyval.string), "+="); ;}
    break;

  case 61:
#line 211 "grammar/grammar.y"
    { strcpy((yyval.string), "-="); ;}
    break;

  case 62:
#line 215 "grammar/grammar.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 63:
#line 219 "grammar/grammar.y"
    { (yyval.list) = newParameterList(newNodeParameter((yyvsp[(1) - (1)].string))); ;}
    break;

  case 64:
#line 220 "grammar/grammar.y"
    { (yyval.list) = addParameter((yyvsp[(1) - (3)].list), newNodeParameter((yyvsp[(3) - (3)].string))); ;}
    break;

  case 65:
#line 224 "grammar/grammar.y"
    { (yyval.node) = addNodeBlock((yyvsp[(1) - (1)].list)); ;}
    break;

  case 66:
#line 225 "grammar/grammar.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 67:
#line 226 "grammar/grammar.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 68:
#line 227 "grammar/grammar.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 69:
#line 228 "grammar/grammar.y"
    { (yyval.node) = newNodeEndmarked((yyvsp[(1) - (2)].node)); ;}
    break;

  case 70:
#line 229 "grammar/grammar.y"
    { (yyval.node) = addNodeIgnore(); ;}
    break;

  case 71:
#line 235 "grammar/grammar.y"
    { (yyval.list) = newInstructionsList(NULL); ;}
    break;

  case 72:
#line 236 "grammar/grammar.y"
    { (yyval.list) = (yyvsp[(2) - (3)].list); ;}
    break;

  case 73:
#line 241 "grammar/grammar.y"
    { (yyval.list) = (*program = newInstructionsList((yyvsp[(1) - (1)].node))); ;}
    break;

  case 74:
#line 242 "grammar/grammar.y"
    { (yyval.list) = (*program = addInstructions((yyvsp[(1) - (2)].list), (yyvsp[(2) - (2)].node))); ;}
    break;

  case 75:
#line 246 "grammar/grammar.y"
    { (yyval.node) = newNodeIf((yyvsp[(3) - (5)].node), (yyvsp[(5) - (5)].list), NULL); ;}
    break;

  case 76:
#line 247 "grammar/grammar.y"
    { (yyval.node) = newNodeIf((yyvsp[(3) - (7)].node), (yyvsp[(5) - (7)].list), (yyvsp[(7) - (7)].list)); ;}
    break;

  case 77:
#line 251 "grammar/grammar.y"
    { (yyval.node) = newNodeWhile((yyvsp[(3) - (5)].node), (yyvsp[(5) - (5)].list)); ;}
    break;

  case 78:
#line 255 "grammar/grammar.y"
    { (yyval.node) = newNodeReturn((yyvsp[(3) - (4)].node)); ;}
    break;


/* Line 1267 of yacc.c.  */
#line 1955 "grammar.tab.c"
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


#line 258 "grammar/grammar.y"


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

	printf("%s\n", generate_code(program));

	return 0;
}

