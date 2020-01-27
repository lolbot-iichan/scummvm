/* A Bison parser, made by GNU Bison 3.5.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2019 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 55 "engines/director/lingo/lingo-gr.y"

#define FORBIDDEN_SYMBOL_ALLOW_ALL

#include "common/endian.h"
#include "common/hash-str.h"
#include "common/rect.h"

#include "director/lingo/lingo.h"
#include "director/lingo/lingo-code.h"
#include "director/lingo/lingo-gr.h"

extern int yylex();
extern int yyparse();

using namespace Director;
void yyerror(const char *s) {
	g_lingo->_hadError = true;
	warning("######################  LINGO: %s at line %d col %d", s, g_lingo->_linenumber, g_lingo->_colnumber);
}

void checkEnd(Common::String *token, const char *expect, bool required) {
	if (required) {
		if (token->compareToIgnoreCase(expect)) {
			Common::String err = Common::String::format("end mismatch. Expected %s but got %s", expect, token->c_str());
			yyerror(err.c_str());
		}
	}
}


#line 101 "engines/director/lingo/lingo-gr.cpp"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_ENGINES_DIRECTOR_LINGO_LINGO_GR_H_INCLUDED
# define YY_YY_ENGINES_DIRECTOR_LINGO_LINGO_GR_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    UNARY = 258,
    CASTREF = 259,
    VOID = 260,
    VAR = 261,
    POINT = 262,
    RECT = 263,
    ARRAY = 264,
    OBJECT = 265,
    REFERENCE = 266,
    INT = 267,
    ARGC = 268,
    ARGCNORET = 269,
    THEENTITY = 270,
    THEENTITYWITHID = 271,
    THEMENUITEMENTITY = 272,
    FLOAT = 273,
    BLTIN = 274,
    FBLTIN = 275,
    RBLTIN = 276,
    ID = 277,
    STRING = 278,
    HANDLER = 279,
    SYMBOL = 280,
    ENDCLAUSE = 281,
    tPLAYACCEL = 282,
    tMETHOD = 283,
    THEOBJECTFIELD = 284,
    tDOWN = 285,
    tELSE = 286,
    tELSIF = 287,
    tEXIT = 288,
    tGLOBAL = 289,
    tGO = 290,
    tIF = 291,
    tINTO = 292,
    tLOOP = 293,
    tMACRO = 294,
    tMOVIE = 295,
    tNEXT = 296,
    tOF = 297,
    tPREVIOUS = 298,
    tPUT = 299,
    tREPEAT = 300,
    tSET = 301,
    tTHEN = 302,
    tTO = 303,
    tWHEN = 304,
    tWITH = 305,
    tWHILE = 306,
    tNLELSE = 307,
    tFACTORY = 308,
    tOPEN = 309,
    tPLAY = 310,
    tDONE = 311,
    tINSTANCE = 312,
    tGE = 313,
    tLE = 314,
    tEQ = 315,
    tNEQ = 316,
    tAND = 317,
    tOR = 318,
    tNOT = 319,
    tMOD = 320,
    tAFTER = 321,
    tBEFORE = 322,
    tCONCAT = 323,
    tCONTAINS = 324,
    tSTARTS = 325,
    tCHAR = 326,
    tITEM = 327,
    tLINE = 328,
    tWORD = 329,
    tSPRITE = 330,
    tINTERSECTS = 331,
    tWITHIN = 332,
    tTELL = 333,
    tPROPERTY = 334,
    tON = 335,
    tENDIF = 336,
    tENDREPEAT = 337,
    tENDTELL = 338
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 86 "engines/director/lingo/lingo-gr.y"

	Common::String *s;
	int i;
	double f;
	int e[2];	// Entity + field
	int code;
	int narg;	/* number of arguments */
	Common::Array<double> *arr;

	struct {
		Common::String *os;
		int oe;
	} objectfield;

#line 252 "engines/director/lingo/lingo-gr.cpp"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_ENGINES_DIRECTOR_LINGO_LINGO_GR_H_INCLUDED  */



#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))

/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
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
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  126
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1658

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  99
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  51
/* YYNRULES -- Number of rules.  */
#define YYNRULES  170
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  363

#define YYUNDEFTOK  2
#define YYMAXUTOK   338


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      92,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    91,    86,     2,
      93,    94,    89,    87,    95,    88,     2,    90,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    98,     2,
      84,     2,    85,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    96,     2,    97,     2,     2,     2,     2,     2,     2,
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
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   135,   135,   136,   137,   139,   140,   141,   143,   149,
     152,   153,   154,   160,   167,   173,   180,   186,   193,   203,
     210,   211,   212,   214,   215,   216,   217,   219,   220,   225,
     236,   253,   265,   267,   272,   276,   281,   285,   295,   306,
     307,   309,   316,   326,   337,   339,   345,   351,   358,   360,
     362,   363,   364,   366,   372,   375,   378,   382,   386,   390,
     392,   393,   394,   397,   400,   403,   411,   417,   422,   423,
     424,   425,   426,   427,   428,   429,   430,   431,   432,   433,
     434,   435,   436,   437,   438,   439,   440,   441,   442,   443,
     444,   445,   447,   448,   449,   450,   451,   452,   453,   454,
     456,   459,   461,   462,   463,   464,   465,   466,   466,   467,
     467,   468,   469,   472,   475,   476,   478,   482,   487,   491,
     496,   500,   512,   513,   514,   515,   519,   523,   528,   529,
     531,   532,   536,   540,   544,   544,   574,   574,   574,   581,
     582,   582,   589,   599,   607,   607,   609,   610,   611,   612,
     614,   615,   616,   618,   620,   628,   629,   630,   632,   633,
     635,   637,   638,   639,   640,   642,   643,   645,   646,   648,
     652
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "UNARY", "CASTREF", "VOID", "VAR",
  "POINT", "RECT", "ARRAY", "OBJECT", "REFERENCE", "INT", "ARGC",
  "ARGCNORET", "THEENTITY", "THEENTITYWITHID", "THEMENUITEMENTITY",
  "FLOAT", "BLTIN", "FBLTIN", "RBLTIN", "ID", "STRING", "HANDLER",
  "SYMBOL", "ENDCLAUSE", "tPLAYACCEL", "tMETHOD", "THEOBJECTFIELD",
  "tDOWN", "tELSE", "tELSIF", "tEXIT", "tGLOBAL", "tGO", "tIF", "tINTO",
  "tLOOP", "tMACRO", "tMOVIE", "tNEXT", "tOF", "tPREVIOUS", "tPUT",
  "tREPEAT", "tSET", "tTHEN", "tTO", "tWHEN", "tWITH", "tWHILE", "tNLELSE",
  "tFACTORY", "tOPEN", "tPLAY", "tDONE", "tINSTANCE", "tGE", "tLE", "tEQ",
  "tNEQ", "tAND", "tOR", "tNOT", "tMOD", "tAFTER", "tBEFORE", "tCONCAT",
  "tCONTAINS", "tSTARTS", "tCHAR", "tITEM", "tLINE", "tWORD", "tSPRITE",
  "tINTERSECTS", "tWITHIN", "tTELL", "tPROPERTY", "tON", "tENDIF",
  "tENDREPEAT", "tENDTELL", "'<'", "'>'", "'&'", "'+'", "'-'", "'*'",
  "'/'", "'%'", "'\\n'", "'('", "')'", "','", "'['", "']'", "':'",
  "$accept", "program", "programline", "asgn", "stmtoneliner",
  "stmtonelinerwithif", "stmt", "tellstart", "ifstmt", "elseifstmtlist",
  "elseifstmt", "ifoneliner", "repeatwhile", "repeatwith", "if", "elseif",
  "begin", "end", "stmtlist", "when", "simpleexpr", "expr", "chunkexpr",
  "reference", "proc", "$@1", "$@2", "globallist", "propertylist",
  "instancelist", "gotofunc", "gotomovie", "playfunc", "$@3", "defn",
  "$@4", "$@5", "$@6", "on", "$@7", "argdef", "endargdef", "argstore",
  "macro", "arglist", "nonemptyarglist", "list", "valuelist", "linearlist",
  "proplist", "proppair", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,    60,    62,    38,    43,    45,    42,
      47,    37,    10,    40,    41,    44,    91,    93,    58
};
# endif

#define YYPACT_NINF (-269)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-6)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     307,   -82,  -269,  -269,   981,  -269,  1014,  1093,    31,  1126,
    -269,  -269,  -269,  -269,  -269,   -26,  -269,   866,  -269,  -269,
      10,   981,    47,   220,    18,    35,   981,   902,    55,   981,
     981,   981,   981,   981,   981,   981,  -269,  -269,   981,   981,
     981,   386,     7,  -269,  -269,  -269,  -269,  -269,   981,    25,
     981,   708,  -269,  1555,  -269,  -269,  -269,  -269,  -269,  -269,
    -269,  -269,  -269,  -269,    -2,   981,  1555,   981,  1555,    -6,
     981,    -6,  -269,  -269,   981,  1555,    37,   981,  -269,  -269,
      87,  -269,   981,  -269,    72,  -269,   378,  -269,   100,  -269,
     144,   104,  -269,     0,    31,    31,    14,    80,   103,  -269,
    1472,  -269,   378,  -269,  -269,    57,  -269,  1167,  1200,  1233,
    1266,  1522,  1431,   131,   132,  -269,  -269,  1485,    58,    59,
    -269,  1555,    64,    68,    70,  -269,  -269,   471,  1555,   981,
    1555,  -269,  -269,   981,  1555,  -269,  -269,   981,   981,   981,
     981,   981,   981,   981,   981,   981,   981,   981,   981,   981,
     981,   981,   981,   981,   145,   981,   144,  1485,   -30,   981,
      24,    26,   981,    -6,   145,  -269,    75,  1555,   981,  -269,
    -269,    29,   981,   981,  -269,   981,   981,    23,   136,   981,
     981,   981,  -269,   981,  -269,   151,   981,   981,   981,   981,
     981,   981,   981,   981,   981,   981,  -269,  -269,  -269,    79,
    -269,  -269,    31,    31,  -269,   981,    -5,  -269,  -269,  1555,
     133,  -269,  1555,    27,    27,    27,    27,  1568,  1568,  -269,
      17,    27,    27,    27,    27,    17,   -51,   -51,  -269,  -269,
    -269,   -71,  -269,  1555,  -269,  -269,  1555,   -20,   170,  1555,
    -269,  -269,  -269,  1555,  1555,  1555,    27,   981,   981,   171,
    1555,    27,  1555,  1555,  -269,  1555,  1299,  1555,  1332,  1555,
    1365,  1555,  1398,  1555,  1555,   787,  -269,   172,  -269,  -269,
    1555,    58,    59,  -269,   629,    11,  -269,   150,   105,   176,
     105,  -269,   145,  1555,    27,    31,   981,   981,   981,   981,
    -269,   629,  -269,  -269,  -269,   117,   160,   981,   629,   787,
     193,  -269,  -269,  -269,    16,   168,  1555,  1555,  1555,  1555,
    -269,   134,  -269,   981,  1555,  -269,  -269,  -269,   550,   629,
     105,   981,  -269,  1555,  -269,    99,   -23,   196,  -269,  1555,
    -269,   629,  -269,  -269,  -269,   981,   138,  -269,  -269,  -269,
     125,   629,   629,   139,  -269,  1555,  -269,   787,   200,   141,
    -269,   629,   178,  -269,  -269,  -269,   146,  -269,   157,  -269,
     629,  -269,  -269
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,    54,    65,     0,    55,   155,   155,     0,    58,
      57,    56,   134,   140,    67,   106,   107,     0,    46,   136,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   109,   144,     0,     0,
       0,   161,     0,     3,    68,    27,     7,    28,     0,     0,
       0,     0,    60,    21,   101,    61,    22,   103,   104,     6,
      48,    20,    59,     4,    58,     0,    66,   155,   156,   113,
     155,    63,    58,   100,   155,   158,   154,   155,    48,   105,
       0,   122,     0,   123,     0,   124,   125,   127,     0,    32,
     102,     0,    44,     0,     0,     0,     0,     0,     0,   139,
     115,   130,   131,   133,   120,   111,    82,     0,     0,     0,
       0,     0,     0,     0,     0,    87,    88,     0,    57,    56,
     162,   165,     0,   163,   164,   167,     1,     5,    49,     0,
      49,    49,    26,     0,    24,    25,    23,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   146,   155,     0,   156,     0,     0,
       0,     0,     0,   135,   146,   116,   108,   129,     0,   126,
     137,     0,     0,     0,    45,     0,     0,     0,     0,     0,
       0,     0,    53,     0,   132,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    36,    36,   118,   110,
     145,    89,     0,     0,   160,     0,     0,     2,    50,    49,
       0,    33,    49,    78,    79,    76,    77,    80,    81,    73,
      84,    85,    86,    75,    74,    83,    69,    70,    71,    72,
     147,     0,   112,   157,    62,    64,   159,     0,     0,   128,
      48,     8,     9,    10,    11,    15,    13,     0,     0,     0,
      14,    12,    19,   114,   121,    92,     0,    94,     0,    96,
       0,    98,     0,    90,    91,     0,    50,     0,   170,   169,
     166,     0,     0,   168,    49,     0,    50,     0,   153,     0,
     153,   117,   146,    16,    17,     0,     0,     0,     0,     0,
      49,    49,   119,    51,    52,     0,     0,     0,    49,     0,
       0,    50,   148,    50,     0,     0,    93,    95,    97,    99,
      35,     0,    29,     0,    49,    39,    49,   149,   143,   141,
     153,     0,    34,    49,    50,    49,     0,   150,    50,    18,
      50,    49,    48,    47,    40,     0,     0,    48,    43,   151,
     142,   138,    49,     0,    50,    49,    37,     0,     0,     0,
      30,    49,     0,    49,   152,    31,     0,    50,     0,    38,
      49,    42,    41
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -269,  -269,   112,  -269,  -254,  -269,    33,    48,  -269,  -269,
    -269,  -269,  -269,  -269,   175,  -269,   -74,   -50,  -234,  -269,
      -7,    -4,  -269,    76,   195,  -269,  -269,  -269,  -269,  -269,
    -269,   -18,  -269,  -269,  -269,  -269,  -269,  -269,  -269,  -269,
    -158,  -269,  -268,   199,     9,  -269,  -269,  -269,  -269,  -269,
      45
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    42,    43,    44,    45,   131,   294,   265,    47,   325,
     334,   132,    48,    49,    50,   335,   154,   208,   274,    51,
      52,    53,    54,    55,    56,    80,   113,   166,   199,   105,
      57,    87,    58,    77,    59,    88,   240,    78,    60,   114,
     231,   340,   301,    61,   161,    76,    62,   122,   123,   124,
     125
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      66,    73,    68,    68,   164,    75,   237,   126,   337,   103,
      63,   290,   303,    86,   143,    69,    71,    90,   271,    79,
     272,   278,   100,   102,   279,   106,   107,   108,   109,   110,
     111,   112,   291,    46,   115,   116,   117,   121,   152,   153,
      98,   296,   298,     2,   128,   316,   130,   134,   175,     5,
       8,   241,   328,    72,    10,    89,    11,    99,   338,   297,
     176,   156,   179,   157,   232,   159,   157,   318,   169,   319,
     157,   247,   280,    68,   180,   279,   158,   104,   167,   160,
     210,   211,   143,   248,   184,   129,   163,   177,   178,   159,
     331,   155,   143,   353,   341,   144,   342,    91,    92,   127,
      30,    31,    32,    33,   150,   151,   152,   153,   320,   165,
     351,   279,   168,   149,   150,   151,   152,   153,   234,   159,
     235,   159,   170,   360,   304,   209,   174,    41,   181,   212,
     332,   333,   162,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     182,    68,   185,   198,   200,   233,   202,   203,   236,   275,
      46,   204,   277,   205,   239,   206,   282,   230,   243,   244,
     238,   245,   246,   254,   267,   250,   251,   252,   249,   253,
     276,   171,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   281,   285,   292,   268,   269,   299,   302,   312,
     300,   270,   137,   138,   139,   140,   141,   142,   313,   143,
     172,   173,   144,   145,   146,   317,   321,   322,   339,   346,
     348,   350,   354,   355,   295,   357,   133,   359,   147,   148,
     149,   150,   151,   152,   153,    93,    94,    95,   361,   207,
     310,   311,    96,   283,   284,   266,   135,   242,   315,    97,
     136,   273,     0,     0,     0,     0,     0,     0,   344,     0,
       0,     0,     0,   347,   324,     0,   326,     0,     0,     0,
       0,     0,     0,   330,     0,   336,     0,     0,   305,     0,
       0,   343,   306,   307,   308,   309,     0,     0,     0,     0,
       0,     0,   349,   314,     0,   352,     0,     0,     0,     0,
       0,   356,     0,   358,     0,     0,     0,    -5,     1,   323,
     362,     0,     0,     0,     0,     0,     0,   329,     0,     2,
       0,     0,     3,     4,     0,     5,     6,     7,     8,     9,
      10,   345,    11,     0,    12,    13,    14,     0,     0,     0,
      15,    16,    17,    18,     0,     0,    19,     0,    20,     0,
       0,    21,    22,    23,     0,     0,    24,     0,     0,     0,
      25,    26,    27,     0,    28,     0,     0,     0,     0,     0,
       0,    29,     0,     0,     0,     0,     0,     0,    30,    31,
      32,    33,    34,     0,     0,    35,    36,    37,     0,     0,
       0,     0,     0,     0,    38,    39,     0,     0,     2,    -5,
      40,     3,     4,    41,     5,     0,     7,     8,    64,   118,
       0,   119,     0,     0,     0,    14,     0,     0,    82,     0,
      84,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      65,     0,    23,     0,     0,     0,   137,   138,   139,   140,
     141,   142,     0,   143,     0,     0,   144,   145,   146,     0,
      29,     0,     0,     0,     0,     0,     0,    30,    31,    32,
      33,    34,   147,   148,   149,   150,   151,   152,   153,     0,
       0,     0,     0,    38,    39,     0,     0,     0,     0,    40,
       0,     0,    41,     2,   120,     0,     3,     4,     0,     5,
       6,     7,     8,     9,    10,     0,    11,     0,    12,    13,
      14,     0,     0,     0,    15,    16,    17,    18,     0,     0,
      19,     0,    20,     0,     0,    21,    22,    23,     0,     0,
      24,     0,     0,     0,    25,    26,    27,     0,    28,     0,
       0,     0,     0,     0,     0,    29,     0,     0,     0,     0,
       0,     0,    30,    31,    32,    33,    34,     0,     0,    35,
      36,    37,     0,     0,     0,     0,     0,     0,    38,    39,
       0,     0,     2,     0,    40,     3,     4,    41,     5,     6,
       7,     8,     9,    10,     0,    11,   327,    12,     0,    14,
       0,     0,     0,    15,    16,    17,    18,     0,     0,     0,
       0,    20,     0,     0,    21,    22,    23,     0,     0,    24,
       0,     0,     0,     0,    26,    27,     0,    28,     0,     0,
       0,     0,     0,     0,    29,     0,     0,     0,     0,     0,
       0,    30,    31,    32,    33,    34,     0,     0,    35,    36,
       0,     0,     0,     0,     0,     0,     0,    38,    39,     0,
       0,     2,   293,    40,     3,     4,    41,     5,     6,     7,
       8,     9,    10,     0,    11,     0,    12,     0,    14,     0,
       0,     0,    15,    16,    17,    18,     0,     0,     0,     0,
      20,     0,     0,    21,    22,    23,     0,     0,    24,     0,
       0,     0,     0,    26,    27,     0,    28,     0,     0,     0,
       0,     0,     0,    29,     0,     0,     0,     0,     0,     0,
      30,    31,    32,    33,    34,     0,     0,    35,    36,     0,
       0,     0,     0,     0,     0,     0,    38,    39,     0,     0,
       2,   293,    40,     3,     4,    41,     5,     6,     7,     8,
       9,    10,     0,    11,     0,    12,     0,    14,     0,     0,
       0,    15,    16,    17,    18,     0,     0,     0,     0,     0,
       0,     0,    21,     0,    23,     0,     0,     0,     0,     0,
       0,     0,    26,    27,     0,    28,     0,     0,     0,     0,
       0,     0,    29,     0,     0,     0,     0,     0,     0,    30,
      31,    32,    33,    34,     0,     0,     0,    36,     0,     0,
       0,     0,     0,     0,     0,    38,    39,     0,     0,     2,
       0,    40,     3,     4,    41,     5,     6,     7,     8,     9,
      10,     0,    11,     0,    12,     0,    14,     0,     0,     0,
      15,    16,    17,     0,     0,     0,     0,     0,     0,     0,
       0,    21,     0,    23,     0,     0,     0,     0,     0,     0,
       0,    26,    27,     0,    28,     0,     0,     0,     0,     0,
       0,    29,     0,     0,     0,     0,     0,     0,    30,    31,
      32,    33,    34,     0,     0,     0,    36,     0,     0,     0,
       0,     0,     0,     0,    38,    39,     0,     0,     2,     0,
      40,     3,     4,    41,     5,     0,     7,     8,    64,    10,
       0,    11,     0,     0,     0,    14,     0,     0,     0,     0,
       0,     0,     0,     0,    81,     0,    82,    83,    84,    85,
      65,     0,    23,     0,     2,     0,     0,     3,     4,     0,
       5,     0,     7,     8,    64,    10,     0,    11,     0,     0,
      29,    14,     0,     0,     0,     0,     0,    30,    31,    32,
      33,    34,    82,     0,    84,     0,    65,     0,    23,     0,
       0,     0,     0,    38,    39,     0,     0,     0,   101,    40,
       0,     0,    41,     0,     0,     0,    29,     0,     0,     0,
       0,     0,     0,    30,    31,    32,    33,    34,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    38,
      39,     0,     0,     2,     0,    40,     3,     4,    41,     5,
       0,     7,     8,    64,    10,     0,    11,     0,     0,     0,
      14,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    65,     2,    23,     0,     3,
       4,     0,     5,     0,     7,     8,    64,    10,     0,    11,
       0,     0,     0,    14,     0,    29,     0,     0,     0,     0,
       0,     0,    30,    31,    32,    33,    34,     0,    65,     0,
      23,     0,     0,     0,     0,     0,     0,     0,    38,    39,
       0,     0,     0,     0,    40,     0,     0,    41,    29,     0,
       0,     0,     0,     0,     0,    30,    31,    32,    33,    34,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    38,    39,     0,     0,     2,     0,    67,     3,     4,
      41,     5,     0,     7,     8,    64,    10,     0,    11,     0,
       0,     0,    14,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    65,     2,    23,
       0,     3,     4,     0,     5,     0,     7,     8,    64,    10,
       0,    11,     0,     0,     0,    14,     0,    29,     0,     0,
       0,     0,     0,     0,    30,    31,    32,    33,    34,     0,
      65,     0,    23,     0,     0,     0,     0,     0,     0,     0,
      38,    39,     0,     0,     0,     0,    70,     0,     0,    41,
      29,     0,     0,     0,     0,     0,     0,    30,    31,    32,
      33,    34,     0,     0,     0,     0,     0,     0,     0,   186,
       0,     0,     0,    38,    39,   187,     0,     0,     0,    74,
       0,     0,    41,     0,     0,   137,   138,   139,   140,   141,
     142,     0,   143,     0,     0,   144,   145,   146,     0,     0,
       0,     0,   188,     0,     0,     0,     0,     0,   189,     0,
       0,   147,   148,   149,   150,   151,   152,   153,   137,   138,
     139,   140,   141,   142,     0,   143,     0,     0,   144,   145,
     146,     0,     0,     0,     0,   190,     0,     0,     0,     0,
       0,   191,     0,     0,   147,   148,   149,   150,   151,   152,
     153,   137,   138,   139,   140,   141,   142,     0,   143,     0,
       0,   144,   145,   146,     0,     0,     0,     0,   192,     0,
       0,     0,     0,     0,   193,     0,     0,   147,   148,   149,
     150,   151,   152,   153,   137,   138,   139,   140,   141,   142,
       0,   143,     0,     0,   144,   145,   146,     0,     0,     0,
       0,   286,     0,     0,     0,     0,     0,     0,     0,     0,
     147,   148,   149,   150,   151,   152,   153,   137,   138,   139,
     140,   141,   142,     0,   143,     0,     0,   144,   145,   146,
       0,     0,     0,     0,   287,     0,     0,     0,     0,     0,
       0,     0,     0,   147,   148,   149,   150,   151,   152,   153,
     137,   138,   139,   140,   141,   142,     0,   143,     0,     0,
     144,   145,   146,     0,     0,     0,     0,   288,     0,     0,
       0,     0,     0,     0,     0,     0,   147,   148,   149,   150,
     151,   152,   153,   137,   138,   139,   140,   141,   142,     0,
     143,     0,     0,   144,   145,   146,     0,     0,     0,     0,
     289,     0,     0,     0,     0,     0,     0,     0,     0,   147,
     148,   149,   150,   151,   152,   153,   137,   138,   139,   140,
     141,   142,     0,   143,     0,     0,   144,   145,   146,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   196,
       0,     0,   147,   148,   149,   150,   151,   152,   153,   137,
     138,   139,   140,   141,   142,     0,   143,     0,     0,   144,
     145,   146,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   147,   148,   149,   150,   151,
     152,   153,   183,   197,     0,     0,     0,     0,     0,     0,
     137,   138,   139,   140,   141,   142,     0,   143,     0,     0,
     144,   145,   146,   137,   138,   139,   140,   141,   142,     0,
     143,     0,     0,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,     0,     0,     0,     0,     0,     0,   147,
     148,   149,   150,   151,   152,   153,     0,     0,     0,   201,
     137,   138,   139,   140,   141,   142,     0,   143,     0,     0,
     144,   145,   146,     0,     0,     0,     0,     0,   194,   195,
       0,     0,     0,     0,     0,     0,   147,   148,   149,   150,
     151,   152,   153,   137,   138,   139,   140,   141,   142,     0,
     143,     0,     0,   144,   145,   146,   137,   138,   139,   140,
       0,     0,     0,   143,     0,     0,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,     0,     0,     0,     0,
       0,     0,   147,   148,   149,   150,   151,   152,   153
};

static const yytype_int16 yycheck[] =
{
       4,     8,     6,     7,    78,     9,   164,     0,    31,    27,
      92,   265,   280,    17,    65,     6,     7,    21,    23,    45,
      25,    92,    26,    27,    95,    29,    30,    31,    32,    33,
      34,    35,   266,     0,    38,    39,    40,    41,    89,    90,
      22,    30,   276,    12,    48,   299,    50,    51,    48,    18,
      21,    22,   320,    22,    23,    45,    25,    22,    81,    48,
      60,    65,    48,    67,    94,    95,    70,   301,    86,   303,
      74,    48,    92,    77,    60,    95,    67,    22,    82,    70,
     130,   131,    65,    60,   102,    60,    77,    94,    95,    95,
     324,    93,    65,   347,   328,    68,   330,    50,    51,    92,
      71,    72,    73,    74,    87,    88,    89,    90,    92,    22,
     344,    95,    40,    86,    87,    88,    89,    90,    94,    95,
      94,    95,    22,   357,   282,   129,    22,    96,    48,   133,
      31,    32,    95,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
      47,   155,    95,    22,    22,   159,    98,    98,   162,   209,
     127,    97,   212,    95,   168,    95,   240,    22,   172,   173,
      95,   175,   176,    22,    95,   179,   180,   181,    42,   183,
      47,    37,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,    22,    22,    22,   202,   203,    47,    22,    82,
      95,   205,    58,    59,    60,    61,    62,    63,    48,    65,
      66,    67,    68,    69,    70,    22,    48,    83,    22,    81,
      95,    82,    22,    82,   274,    47,    51,    81,    84,    85,
      86,    87,    88,    89,    90,    15,    16,    17,    81,   127,
     290,   291,    22,   247,   248,   197,    51,   171,   298,    29,
      51,   206,    -1,    -1,    -1,    -1,    -1,    -1,   332,    -1,
      -1,    -1,    -1,   337,   314,    -1,   316,    -1,    -1,    -1,
      -1,    -1,    -1,   323,    -1,   325,    -1,    -1,   285,    -1,
      -1,   331,   286,   287,   288,   289,    -1,    -1,    -1,    -1,
      -1,    -1,   342,   297,    -1,   345,    -1,    -1,    -1,    -1,
      -1,   351,    -1,   353,    -1,    -1,    -1,     0,     1,   313,
     360,    -1,    -1,    -1,    -1,    -1,    -1,   321,    -1,    12,
      -1,    -1,    15,    16,    -1,    18,    19,    20,    21,    22,
      23,   335,    25,    -1,    27,    28,    29,    -1,    -1,    -1,
      33,    34,    35,    36,    -1,    -1,    39,    -1,    41,    -1,
      -1,    44,    45,    46,    -1,    -1,    49,    -1,    -1,    -1,
      53,    54,    55,    -1,    57,    -1,    -1,    -1,    -1,    -1,
      -1,    64,    -1,    -1,    -1,    -1,    -1,    -1,    71,    72,
      73,    74,    75,    -1,    -1,    78,    79,    80,    -1,    -1,
      -1,    -1,    -1,    -1,    87,    88,    -1,    -1,    12,    92,
      93,    15,    16,    96,    18,    -1,    20,    21,    22,    23,
      -1,    25,    -1,    -1,    -1,    29,    -1,    -1,    40,    -1,
      42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      44,    -1,    46,    -1,    -1,    -1,    58,    59,    60,    61,
      62,    63,    -1,    65,    -1,    -1,    68,    69,    70,    -1,
      64,    -1,    -1,    -1,    -1,    -1,    -1,    71,    72,    73,
      74,    75,    84,    85,    86,    87,    88,    89,    90,    -1,
      -1,    -1,    -1,    87,    88,    -1,    -1,    -1,    -1,    93,
      -1,    -1,    96,    12,    98,    -1,    15,    16,    -1,    18,
      19,    20,    21,    22,    23,    -1,    25,    -1,    27,    28,
      29,    -1,    -1,    -1,    33,    34,    35,    36,    -1,    -1,
      39,    -1,    41,    -1,    -1,    44,    45,    46,    -1,    -1,
      49,    -1,    -1,    -1,    53,    54,    55,    -1,    57,    -1,
      -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,    -1,    -1,
      -1,    -1,    71,    72,    73,    74,    75,    -1,    -1,    78,
      79,    80,    -1,    -1,    -1,    -1,    -1,    -1,    87,    88,
      -1,    -1,    12,    -1,    93,    15,    16,    96,    18,    19,
      20,    21,    22,    23,    -1,    25,    26,    27,    -1,    29,
      -1,    -1,    -1,    33,    34,    35,    36,    -1,    -1,    -1,
      -1,    41,    -1,    -1,    44,    45,    46,    -1,    -1,    49,
      -1,    -1,    -1,    -1,    54,    55,    -1,    57,    -1,    -1,
      -1,    -1,    -1,    -1,    64,    -1,    -1,    -1,    -1,    -1,
      -1,    71,    72,    73,    74,    75,    -1,    -1,    78,    79,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,    88,    -1,
      -1,    12,    92,    93,    15,    16,    96,    18,    19,    20,
      21,    22,    23,    -1,    25,    -1,    27,    -1,    29,    -1,
      -1,    -1,    33,    34,    35,    36,    -1,    -1,    -1,    -1,
      41,    -1,    -1,    44,    45,    46,    -1,    -1,    49,    -1,
      -1,    -1,    -1,    54,    55,    -1,    57,    -1,    -1,    -1,
      -1,    -1,    -1,    64,    -1,    -1,    -1,    -1,    -1,    -1,
      71,    72,    73,    74,    75,    -1,    -1,    78,    79,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    87,    88,    -1,    -1,
      12,    92,    93,    15,    16,    96,    18,    19,    20,    21,
      22,    23,    -1,    25,    -1,    27,    -1,    29,    -1,    -1,
      -1,    33,    34,    35,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    44,    -1,    46,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    54,    55,    -1,    57,    -1,    -1,    -1,    -1,
      -1,    -1,    64,    -1,    -1,    -1,    -1,    -1,    -1,    71,
      72,    73,    74,    75,    -1,    -1,    -1,    79,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    87,    88,    -1,    -1,    12,
      -1,    93,    15,    16,    96,    18,    19,    20,    21,    22,
      23,    -1,    25,    -1,    27,    -1,    29,    -1,    -1,    -1,
      33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    44,    -1,    46,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    54,    55,    -1,    57,    -1,    -1,    -1,    -1,    -1,
      -1,    64,    -1,    -1,    -1,    -1,    -1,    -1,    71,    72,
      73,    74,    75,    -1,    -1,    -1,    79,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    87,    88,    -1,    -1,    12,    -1,
      93,    15,    16,    96,    18,    -1,    20,    21,    22,    23,
      -1,    25,    -1,    -1,    -1,    29,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    38,    -1,    40,    41,    42,    43,
      44,    -1,    46,    -1,    12,    -1,    -1,    15,    16,    -1,
      18,    -1,    20,    21,    22,    23,    -1,    25,    -1,    -1,
      64,    29,    -1,    -1,    -1,    -1,    -1,    71,    72,    73,
      74,    75,    40,    -1,    42,    -1,    44,    -1,    46,    -1,
      -1,    -1,    -1,    87,    88,    -1,    -1,    -1,    56,    93,
      -1,    -1,    96,    -1,    -1,    -1,    64,    -1,    -1,    -1,
      -1,    -1,    -1,    71,    72,    73,    74,    75,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,
      88,    -1,    -1,    12,    -1,    93,    15,    16,    96,    18,
      -1,    20,    21,    22,    23,    -1,    25,    -1,    -1,    -1,
      29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    44,    12,    46,    -1,    15,
      16,    -1,    18,    -1,    20,    21,    22,    23,    -1,    25,
      -1,    -1,    -1,    29,    -1,    64,    -1,    -1,    -1,    -1,
      -1,    -1,    71,    72,    73,    74,    75,    -1,    44,    -1,
      46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,    88,
      -1,    -1,    -1,    -1,    93,    -1,    -1,    96,    64,    -1,
      -1,    -1,    -1,    -1,    -1,    71,    72,    73,    74,    75,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    87,    88,    -1,    -1,    12,    -1,    93,    15,    16,
      96,    18,    -1,    20,    21,    22,    23,    -1,    25,    -1,
      -1,    -1,    29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,    12,    46,
      -1,    15,    16,    -1,    18,    -1,    20,    21,    22,    23,
      -1,    25,    -1,    -1,    -1,    29,    -1,    64,    -1,    -1,
      -1,    -1,    -1,    -1,    71,    72,    73,    74,    75,    -1,
      44,    -1,    46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      87,    88,    -1,    -1,    -1,    -1,    93,    -1,    -1,    96,
      64,    -1,    -1,    -1,    -1,    -1,    -1,    71,    72,    73,
      74,    75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      -1,    -1,    -1,    87,    88,    48,    -1,    -1,    -1,    93,
      -1,    -1,    96,    -1,    -1,    58,    59,    60,    61,    62,
      63,    -1,    65,    -1,    -1,    68,    69,    70,    -1,    -1,
      -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,    48,    -1,
      -1,    84,    85,    86,    87,    88,    89,    90,    58,    59,
      60,    61,    62,    63,    -1,    65,    -1,    -1,    68,    69,
      70,    -1,    -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,
      -1,    48,    -1,    -1,    84,    85,    86,    87,    88,    89,
      90,    58,    59,    60,    61,    62,    63,    -1,    65,    -1,
      -1,    68,    69,    70,    -1,    -1,    -1,    -1,    42,    -1,
      -1,    -1,    -1,    -1,    48,    -1,    -1,    84,    85,    86,
      87,    88,    89,    90,    58,    59,    60,    61,    62,    63,
      -1,    65,    -1,    -1,    68,    69,    70,    -1,    -1,    -1,
      -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      84,    85,    86,    87,    88,    89,    90,    58,    59,    60,
      61,    62,    63,    -1,    65,    -1,    -1,    68,    69,    70,
      -1,    -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    84,    85,    86,    87,    88,    89,    90,
      58,    59,    60,    61,    62,    63,    -1,    65,    -1,    -1,
      68,    69,    70,    -1,    -1,    -1,    -1,    42,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    84,    85,    86,    87,
      88,    89,    90,    58,    59,    60,    61,    62,    63,    -1,
      65,    -1,    -1,    68,    69,    70,    -1,    -1,    -1,    -1,
      42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,
      85,    86,    87,    88,    89,    90,    58,    59,    60,    61,
      62,    63,    -1,    65,    -1,    -1,    68,    69,    70,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,
      -1,    -1,    84,    85,    86,    87,    88,    89,    90,    58,
      59,    60,    61,    62,    63,    -1,    65,    -1,    -1,    68,
      69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    84,    85,    86,    87,    88,
      89,    90,    50,    92,    -1,    -1,    -1,    -1,    -1,    -1,
      58,    59,    60,    61,    62,    63,    -1,    65,    -1,    -1,
      68,    69,    70,    58,    59,    60,    61,    62,    63,    -1,
      65,    -1,    -1,    68,    69,    70,    84,    85,    86,    87,
      88,    89,    90,    -1,    -1,    -1,    -1,    -1,    -1,    84,
      85,    86,    87,    88,    89,    90,    -1,    -1,    -1,    94,
      58,    59,    60,    61,    62,    63,    -1,    65,    -1,    -1,
      68,    69,    70,    -1,    -1,    -1,    -1,    -1,    76,    77,
      -1,    -1,    -1,    -1,    -1,    -1,    84,    85,    86,    87,
      88,    89,    90,    58,    59,    60,    61,    62,    63,    -1,
      65,    -1,    -1,    68,    69,    70,    58,    59,    60,    61,
      -1,    -1,    -1,    65,    -1,    -1,    68,    69,    70,    84,
      85,    86,    87,    88,    89,    90,    -1,    -1,    -1,    -1,
      -1,    -1,    84,    85,    86,    87,    88,    89,    90
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,    12,    15,    16,    18,    19,    20,    21,    22,
      23,    25,    27,    28,    29,    33,    34,    35,    36,    39,
      41,    44,    45,    46,    49,    53,    54,    55,    57,    64,
      71,    72,    73,    74,    75,    78,    79,    80,    87,    88,
      93,    96,   100,   101,   102,   103,   105,   107,   111,   112,
     113,   118,   119,   120,   121,   122,   123,   129,   131,   133,
     137,   142,   145,    92,    22,    44,   120,    93,   120,   143,
      93,   143,    22,   119,    93,   120,   144,   132,   136,    45,
     124,    38,    40,    41,    42,    43,   120,   130,   134,    45,
     120,    50,    51,    15,    16,    17,    22,    29,    22,    22,
     120,    56,   120,   130,    22,   128,   120,   120,   120,   120,
     120,   120,   120,   125,   138,   120,   120,   120,    23,    25,
      98,   120,   146,   147,   148,   149,     0,    92,   120,    60,
     120,   104,   110,   113,   120,   123,   142,    58,    59,    60,
      61,    62,    63,    65,    68,    69,    70,    84,    85,    86,
      87,    88,    89,    90,   115,    93,   120,   120,   143,    95,
     143,   143,    95,   143,   115,    22,   126,   120,    40,   130,
      22,    37,    66,    67,    22,    48,    60,   119,   119,    48,
      60,    48,    47,    50,   130,    95,    42,    48,    42,    48,
      42,    48,    42,    48,    76,    77,    48,    92,    22,   127,
      22,    94,    98,    98,    97,    95,    95,   101,   116,   120,
     116,   116,   120,   120,   120,   120,   120,   120,   120,   120,
     120,   120,   120,   120,   120,   120,   120,   120,   120,   120,
      22,   139,    94,   120,    94,    94,   120,   139,    95,   120,
     135,    22,   122,   120,   120,   120,   120,    48,    60,    42,
     120,   120,   120,   120,    22,   120,   120,   120,   120,   120,
     120,   120,   120,   120,   120,   106,   106,    95,   119,   119,
     120,    23,    25,   149,   117,   116,    47,   116,    92,    95,
      92,    22,   115,   120,   120,    22,    42,    42,    42,    42,
     103,   117,    22,    92,   105,   116,    30,    48,   117,    47,
      95,   141,    22,   141,   139,   119,   120,   120,   120,   120,
     116,   116,    82,    48,   120,   116,   103,    22,   117,   117,
      92,    48,    83,   120,   116,   108,   116,    26,   141,   120,
     116,   117,    31,    32,   109,   114,   116,    31,    81,    22,
     140,   117,   117,   116,   115,   120,    81,   115,    95,   116,
      82,   117,   116,   103,    22,    82,   116,    47,   116,    81,
     117,    81,   116
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    99,   100,   100,   100,   101,   101,   101,   102,   102,
     102,   102,   102,   102,   102,   102,   102,   102,   102,   102,
     103,   103,   103,   104,   104,   104,   104,   105,   105,   105,
     105,   105,   105,   105,   105,   105,   106,   107,   107,   108,
     108,   109,   110,   110,   111,   112,   113,   114,   115,   116,
     117,   117,   117,   118,   119,   119,   119,   119,   119,   119,
     120,   120,   120,   120,   120,   120,   120,   120,   120,   120,
     120,   120,   120,   120,   120,   120,   120,   120,   120,   120,
     120,   120,   120,   120,   120,   120,   120,   120,   120,   120,
     120,   120,   121,   121,   121,   121,   121,   121,   121,   121,
     122,   122,   123,   123,   123,   123,   123,   124,   123,   125,
     123,   123,   123,   123,   123,   123,   126,   126,   127,   127,
     128,   128,   129,   129,   129,   129,   129,   129,   130,   130,
     131,   131,   131,   131,   132,   131,   134,   135,   133,   133,
     136,   133,   133,   133,   138,   137,   139,   139,   139,   139,
     140,   140,   140,   141,   142,   143,   143,   143,   144,   144,
     145,   146,   146,   146,   146,   147,   147,   148,   148,   149,
     149
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     3,     1,     2,     0,     1,     1,     4,     4,
       4,     4,     4,     4,     4,     4,     5,     5,     8,     4,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     6,
      10,    11,     2,     3,     7,     6,     0,     9,    12,     0,
       2,     6,    11,     7,     2,     3,     1,     1,     0,     0,
       0,     2,     2,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     4,     2,     4,     1,     2,     1,     1,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     2,     3,     3,     3,     3,     2,     2,     3,
       4,     4,     4,     6,     4,     6,     4,     6,     4,     6,
       2,     1,     2,     1,     1,     2,     1,     0,     3,     0,
       3,     2,     4,     2,     4,     2,     1,     3,     1,     3,
       1,     3,     2,     2,     2,     2,     3,     2,     3,     2,
       2,     2,     3,     2,     0,     3,     0,     0,     9,     2,
       0,     7,     8,     6,     0,     3,     0,     1,     3,     4,
       0,     1,     3,     0,     2,     0,     1,     3,     1,     3,
       3,     0,     1,     1,     1,     1,     3,     1,     3,     3,
       3
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

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
#ifndef YYINITDEPTH
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
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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
            else
              goto append;

          append:
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  switch (yytype)
    {
    case 19: /* BLTIN  */
#line 130 "engines/director/lingo/lingo-gr.y"
            { delete ((*yyvaluep).s); }
#line 1691 "engines/director/lingo/lingo-gr.cpp"
        break;

    case 20: /* FBLTIN  */
#line 130 "engines/director/lingo/lingo-gr.y"
            { delete ((*yyvaluep).s); }
#line 1697 "engines/director/lingo/lingo-gr.cpp"
        break;

    case 21: /* RBLTIN  */
#line 130 "engines/director/lingo/lingo-gr.y"
            { delete ((*yyvaluep).s); }
#line 1703 "engines/director/lingo/lingo-gr.cpp"
        break;

    case 22: /* ID  */
#line 130 "engines/director/lingo/lingo-gr.y"
            { delete ((*yyvaluep).s); }
#line 1709 "engines/director/lingo/lingo-gr.cpp"
        break;

    case 23: /* STRING  */
#line 130 "engines/director/lingo/lingo-gr.y"
            { delete ((*yyvaluep).s); }
#line 1715 "engines/director/lingo/lingo-gr.cpp"
        break;

    case 24: /* HANDLER  */
#line 130 "engines/director/lingo/lingo-gr.y"
            { delete ((*yyvaluep).s); }
#line 1721 "engines/director/lingo/lingo-gr.cpp"
        break;

    case 25: /* SYMBOL  */
#line 130 "engines/director/lingo/lingo-gr.y"
            { delete ((*yyvaluep).s); }
#line 1727 "engines/director/lingo/lingo-gr.cpp"
        break;

    case 26: /* ENDCLAUSE  */
#line 130 "engines/director/lingo/lingo-gr.y"
            { delete ((*yyvaluep).s); }
#line 1733 "engines/director/lingo/lingo-gr.cpp"
        break;

    case 27: /* tPLAYACCEL  */
#line 130 "engines/director/lingo/lingo-gr.y"
            { delete ((*yyvaluep).s); }
#line 1739 "engines/director/lingo/lingo-gr.cpp"
        break;

    case 28: /* tMETHOD  */
#line 130 "engines/director/lingo/lingo-gr.y"
            { delete ((*yyvaluep).s); }
#line 1745 "engines/director/lingo/lingo-gr.cpp"
        break;

    case 29: /* THEOBJECTFIELD  */
#line 131 "engines/director/lingo/lingo-gr.y"
            { delete ((*yyvaluep).objectfield).os; }
#line 1751 "engines/director/lingo/lingo-gr.cpp"
        break;

    case 137: /* on  */
#line 130 "engines/director/lingo/lingo-gr.y"
            { delete ((*yyvaluep).s); }
#line 1757 "engines/director/lingo/lingo-gr.cpp"
        break;

      default:
        break;
    }
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
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
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 4:
#line 137 "engines/director/lingo/lingo-gr.y"
                                { yyerrok; }
#line 2027 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 8:
#line 143 "engines/director/lingo/lingo-gr.y"
                                        {
		g_lingo->code1(LC::c_varpush);
		g_lingo->codeString((yyvsp[0].s)->c_str());
		g_lingo->code1(LC::c_assign);
		(yyval.code) = (yyvsp[-2].code);
		delete (yyvsp[0].s); }
#line 2038 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 9:
#line 149 "engines/director/lingo/lingo-gr.y"
                                                {
		g_lingo->code1(LC::c_assign);
		(yyval.code) = (yyvsp[-2].code); }
#line 2046 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 10:
#line 152 "engines/director/lingo/lingo-gr.y"
                                                { (yyval.code) = g_lingo->code1(LC::c_after); }
#line 2052 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 11:
#line 153 "engines/director/lingo/lingo-gr.y"
                                                { (yyval.code) = g_lingo->code1(LC::c_before); }
#line 2058 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 12:
#line 154 "engines/director/lingo/lingo-gr.y"
                                                {
		g_lingo->code1(LC::c_varpush);
		g_lingo->codeString((yyvsp[-2].s)->c_str());
		g_lingo->code1(LC::c_assign);
		(yyval.code) = (yyvsp[0].code);
		delete (yyvsp[-2].s); }
#line 2069 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 13:
#line 160 "engines/director/lingo/lingo-gr.y"
                                        {
		g_lingo->code1(LC::c_intpush);
		g_lingo->codeInt(0); // Put dummy id
		g_lingo->code1(LC::c_theentityassign);
		g_lingo->codeInt((yyvsp[-2].e)[0]);
		g_lingo->codeInt((yyvsp[-2].e)[1]);
		(yyval.code) = (yyvsp[0].code); }
#line 2081 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 14:
#line 167 "engines/director/lingo/lingo-gr.y"
                                                {
		g_lingo->code1(LC::c_varpush);
		g_lingo->codeString((yyvsp[-2].s)->c_str());
		g_lingo->code1(LC::c_assign);
		(yyval.code) = (yyvsp[0].code);
		delete (yyvsp[-2].s); }
#line 2092 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 15:
#line 173 "engines/director/lingo/lingo-gr.y"
                                        {
		g_lingo->code1(LC::c_intpush);
		g_lingo->codeInt(0); // Put dummy id
		g_lingo->code1(LC::c_theentityassign);
		g_lingo->codeInt((yyvsp[-2].e)[0]);
		g_lingo->codeInt((yyvsp[-2].e)[1]);
		(yyval.code) = (yyvsp[0].code); }
#line 2104 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 16:
#line 180 "engines/director/lingo/lingo-gr.y"
                                                        {
		g_lingo->code1(LC::c_swap);
		g_lingo->code1(LC::c_theentityassign);
		g_lingo->codeInt((yyvsp[-3].e)[0]);
		g_lingo->codeInt((yyvsp[-3].e)[1]);
		(yyval.code) = (yyvsp[0].code); }
#line 2115 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 17:
#line 186 "engines/director/lingo/lingo-gr.y"
                                                        {
		g_lingo->code1(LC::c_swap);
		g_lingo->code1(LC::c_theentityassign);
		g_lingo->codeInt((yyvsp[-3].e)[0]);
		g_lingo->codeInt((yyvsp[-3].e)[1]);
		(yyval.code) = (yyvsp[0].code); }
#line 2126 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 18:
#line 193 "engines/director/lingo/lingo-gr.y"
                                                                        {
		if (!(yyvsp[-3].s)->equalsIgnoreCase("menu")) {
			error("LEXER: keyword 'menu' expected");
		}

		warning("STUB: menuItem entity");
		g_lingo->code1(LC::c_themenuitementityassign);
		g_lingo->codeInt((yyvsp[-6].e)[0]);
		g_lingo->codeInt((yyvsp[-6].e)[1]);
		(yyval.code) = (yyvsp[0].code); }
#line 2141 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 19:
#line 203 "engines/director/lingo/lingo-gr.y"
                                        {
		g_lingo->code1(LC::c_objectfieldassign);
		g_lingo->codeString((yyvsp[-2].objectfield).os->c_str());
		g_lingo->codeInt((yyvsp[-2].objectfield).oe);
		delete (yyvsp[-2].objectfield).os;
		(yyval.code) = (yyvsp[0].code); }
#line 2152 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 29:
#line 225 "engines/director/lingo/lingo-gr.y"
                                                                        {
		inst body = 0, end = 0;
		WRITE_UINT32(&body, (yyvsp[-3].code) - (yyvsp[-5].code));
		WRITE_UINT32(&end, (yyvsp[-1].code) - (yyvsp[-5].code));
		(*g_lingo->_currentScript)[(yyvsp[-5].code) + 1] = body;	/* body of loop */
		(*g_lingo->_currentScript)[(yyvsp[-5].code) + 2] = end; }
#line 2163 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 30:
#line 236 "engines/director/lingo/lingo-gr.y"
                                                                                           {
		inst init = 0, finish = 0, body = 0, end = 0, inc = 0;
		WRITE_UINT32(&init, (yyvsp[-7].code) - (yyvsp[-9].code));
		WRITE_UINT32(&finish, (yyvsp[-4].code) - (yyvsp[-9].code));
		WRITE_UINT32(&body, (yyvsp[-2].code) - (yyvsp[-9].code));
		WRITE_UINT32(&end, (yyvsp[-1].code) - (yyvsp[-9].code));
		WRITE_UINT32(&inc, 1);
		(*g_lingo->_currentScript)[(yyvsp[-9].code) + 1] = init;		/* initial count value */
		(*g_lingo->_currentScript)[(yyvsp[-9].code) + 2] = finish;	/* final count value */
		(*g_lingo->_currentScript)[(yyvsp[-9].code) + 3] = body;		/* body of loop */
		(*g_lingo->_currentScript)[(yyvsp[-9].code) + 4] = inc;		/* increment */
		(*g_lingo->_currentScript)[(yyvsp[-9].code) + 5] = end; }
#line 2180 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 31:
#line 253 "engines/director/lingo/lingo-gr.y"
                                                                                                 {
		inst init = 0, finish = 0, body = 0, end = 0, inc = 0;
		WRITE_UINT32(&init, (yyvsp[-8].code) - (yyvsp[-10].code));
		WRITE_UINT32(&finish, (yyvsp[-4].code) - (yyvsp[-10].code));
		WRITE_UINT32(&body, (yyvsp[-2].code) - (yyvsp[-10].code));
		WRITE_UINT32(&end, (yyvsp[-1].code) - (yyvsp[-10].code));
		WRITE_UINT32(&inc, (uint32)-1);
		(*g_lingo->_currentScript)[(yyvsp[-10].code) + 1] = init;		/* initial count value */
		(*g_lingo->_currentScript)[(yyvsp[-10].code) + 2] = finish;	/* final count value */
		(*g_lingo->_currentScript)[(yyvsp[-10].code) + 3] = body;		/* body of loop */
		(*g_lingo->_currentScript)[(yyvsp[-10].code) + 4] = inc;		/* increment */
		(*g_lingo->_currentScript)[(yyvsp[-10].code) + 5] = end; }
#line 2197 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 32:
#line 265 "engines/director/lingo/lingo-gr.y"
                        {
		g_lingo->code1(LC::c_nextRepeat); }
#line 2204 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 33:
#line 267 "engines/director/lingo/lingo-gr.y"
                                      {
		inst end = 0;
		WRITE_UINT32(&end, (yyvsp[0].code) - (yyvsp[-2].code));
		g_lingo->code1(STOP);
		(*g_lingo->_currentScript)[(yyvsp[-2].code) + 1] = end; }
#line 2214 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 34:
#line 272 "engines/director/lingo/lingo-gr.y"
                                                          {
		inst end;
		WRITE_UINT32(&end, (yyvsp[-1].code) - (yyvsp[-3].code));
		(*g_lingo->_currentScript)[(yyvsp[-3].code) + 1] = end; }
#line 2223 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 35:
#line 276 "engines/director/lingo/lingo-gr.y"
                                                    {
		inst end;
		WRITE_UINT32(&end, (yyvsp[0].code) - (yyvsp[-2].code));
		(*g_lingo->_currentScript)[(yyvsp[-2].code) + 1] = end; }
#line 2232 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 36:
#line 281 "engines/director/lingo/lingo-gr.y"
                                                        {
		(yyval.code) = g_lingo->code1(LC::c_tellcode);
		g_lingo->code1(STOP); }
#line 2240 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 37:
#line 285 "engines/director/lingo/lingo-gr.y"
                                                                                       {
		inst then = 0, else1 = 0, end = 0;
		WRITE_UINT32(&then, (yyvsp[-6].code) - (yyvsp[-8].code));
		WRITE_UINT32(&else1, (yyvsp[-3].code) - (yyvsp[-8].code));
		WRITE_UINT32(&end, (yyvsp[-1].code) - (yyvsp[-8].code));
		(*g_lingo->_currentScript)[(yyvsp[-8].code) + 1] = then;	/* thenpart */
		(*g_lingo->_currentScript)[(yyvsp[-8].code) + 2] = else1;/* elsepart */
		(*g_lingo->_currentScript)[(yyvsp[-8].code) + 3] = end;	/* end, if cond fails */

		g_lingo->processIf((yyvsp[-8].code), (yyvsp[-1].code) - (yyvsp[-8].code), 0); }
#line 2255 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 38:
#line 295 "engines/director/lingo/lingo-gr.y"
                                                                                                              {
		inst then = 0, else1 = 0, end = 0;
		WRITE_UINT32(&then, (yyvsp[-9].code) - (yyvsp[-11].code));
		WRITE_UINT32(&else1, (yyvsp[-6].code) - (yyvsp[-11].code));
		WRITE_UINT32(&end, (yyvsp[-1].code) - (yyvsp[-11].code));
		(*g_lingo->_currentScript)[(yyvsp[-11].code) + 1] = then;	/* thenpart */
		(*g_lingo->_currentScript)[(yyvsp[-11].code) + 2] = else1;/* elsepart */
		(*g_lingo->_currentScript)[(yyvsp[-11].code) + 3] = end;	/* end, if cond fails */

		g_lingo->processIf((yyvsp[-11].code), (yyvsp[-1].code) - (yyvsp[-11].code), (yyvsp[-3].code) - (yyvsp[-11].code)); }
#line 2270 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 41:
#line 309 "engines/director/lingo/lingo-gr.y"
                                                        {
		inst then = 0;
		WRITE_UINT32(&then, (yyvsp[-3].code) - (yyvsp[-5].code));
		(*g_lingo->_currentScript)[(yyvsp[-5].code) + 1] = then;	/* thenpart */

		g_lingo->codeLabel((yyvsp[-5].code)); }
#line 2281 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 42:
#line 316 "engines/director/lingo/lingo-gr.y"
                                                                                                         {
		inst then = 0, else1 = 0, end = 0;
		WRITE_UINT32(&then, (yyvsp[-8].code) - (yyvsp[-10].code));
		WRITE_UINT32(&else1, (yyvsp[-5].code) - (yyvsp[-10].code));
		WRITE_UINT32(&end, (yyvsp[-1].code) - (yyvsp[-10].code));
		(*g_lingo->_currentScript)[(yyvsp[-10].code) + 1] = then;	/* thenpart */
		(*g_lingo->_currentScript)[(yyvsp[-10].code) + 2] = else1;/* elsepart */
		(*g_lingo->_currentScript)[(yyvsp[-10].code) + 3] = end;	/* end, if cond fails */

		g_lingo->processIf((yyvsp[-10].code), (yyvsp[-1].code) - (yyvsp[-10].code), (yyvsp[-3].code) - (yyvsp[-10].code)); }
#line 2296 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 43:
#line 326 "engines/director/lingo/lingo-gr.y"
                                                                   {
		inst then = 0, else1 = 0, end = 0;
		WRITE_UINT32(&then, (yyvsp[-4].code) - (yyvsp[-6].code));
		WRITE_UINT32(&else1, 0);
		WRITE_UINT32(&end, (yyvsp[-1].code) - (yyvsp[-6].code));
		(*g_lingo->_currentScript)[(yyvsp[-6].code) + 1] = then;	/* thenpart */
		(*g_lingo->_currentScript)[(yyvsp[-6].code) + 2] = else1;/* elsepart */
		(*g_lingo->_currentScript)[(yyvsp[-6].code) + 3] = end;	/* end, if cond fails */

		g_lingo->processIf((yyvsp[-6].code), (yyvsp[-1].code) - (yyvsp[-6].code), (yyvsp[-1].code) - (yyvsp[-6].code)); }
#line 2311 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 44:
#line 337 "engines/director/lingo/lingo-gr.y"
                                        { (yyval.code) = g_lingo->code3(LC::c_repeatwhilecode, STOP, STOP); }
#line 2317 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 45:
#line 339 "engines/director/lingo/lingo-gr.y"
                                                {
		(yyval.code) = g_lingo->code3(LC::c_repeatwithcode, STOP, STOP);
		g_lingo->code3(STOP, STOP, STOP);
		g_lingo->codeString((yyvsp[0].s)->c_str());
		delete (yyvsp[0].s); }
#line 2327 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 46:
#line 345 "engines/director/lingo/lingo-gr.y"
                                                {
		(yyval.code) = g_lingo->code1(LC::c_ifcode);
		g_lingo->code3(STOP, STOP, STOP);
		g_lingo->code1(0);  // Do not skip end
		g_lingo->codeLabel(0); }
#line 2337 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 47:
#line 351 "engines/director/lingo/lingo-gr.y"
                                        {
		inst skipEnd;
		WRITE_UINT32(&skipEnd, 1); // We have to skip end to avoid multiple executions
		(yyval.code) = g_lingo->code1(LC::c_ifcode);
		g_lingo->code3(STOP, STOP, STOP);
		g_lingo->code1(skipEnd); }
#line 2348 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 48:
#line 358 "engines/director/lingo/lingo-gr.y"
                                { (yyval.code) = g_lingo->_currentScript->size(); }
#line 2354 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 49:
#line 360 "engines/director/lingo/lingo-gr.y"
                                { g_lingo->code1(STOP); (yyval.code) = g_lingo->_currentScript->size(); }
#line 2360 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 50:
#line 362 "engines/director/lingo/lingo-gr.y"
                                                { (yyval.code) = g_lingo->_currentScript->size(); }
#line 2366 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 53:
#line 366 "engines/director/lingo/lingo-gr.y"
                                {
		(yyval.code) = g_lingo->code1(LC::c_whencode);
		g_lingo->code1(STOP);
		g_lingo->codeString((yyvsp[-1].s)->c_str());
		delete (yyvsp[-1].s); }
#line 2376 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 54:
#line 372 "engines/director/lingo/lingo-gr.y"
                        {
		(yyval.code) = g_lingo->code1(LC::c_intpush);
		g_lingo->codeInt((yyvsp[0].i)); }
#line 2384 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 55:
#line 375 "engines/director/lingo/lingo-gr.y"
                        {
		(yyval.code) = g_lingo->code1(LC::c_floatpush);
		g_lingo->codeFloat((yyvsp[0].f)); }
#line 2392 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 56:
#line 378 "engines/director/lingo/lingo-gr.y"
                        {											// D3
		(yyval.code) = g_lingo->code1(LC::c_symbolpush);
		g_lingo->codeString((yyvsp[0].s)->c_str());
		delete (yyvsp[0].s); }
#line 2401 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 57:
#line 382 "engines/director/lingo/lingo-gr.y"
                                {
		(yyval.code) = g_lingo->code1(LC::c_stringpush);
		g_lingo->codeString((yyvsp[0].s)->c_str());
		delete (yyvsp[0].s); }
#line 2410 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 58:
#line 386 "engines/director/lingo/lingo-gr.y"
                        {
		(yyval.code) = g_lingo->code1(LC::c_eval);
		g_lingo->codeString((yyvsp[0].s)->c_str());
		delete (yyvsp[0].s); }
#line 2419 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 60:
#line 392 "engines/director/lingo/lingo-gr.y"
                 { (yyval.code) = (yyvsp[0].code); }
#line 2425 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 62:
#line 394 "engines/director/lingo/lingo-gr.y"
                                 {
		g_lingo->codeFunc((yyvsp[-3].s), (yyvsp[-1].narg));
		delete (yyvsp[-3].s); }
#line 2433 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 63:
#line 397 "engines/director/lingo/lingo-gr.y"
                                {
		g_lingo->codeFunc((yyvsp[-1].s), (yyvsp[0].narg));
		delete (yyvsp[-1].s); }
#line 2441 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 64:
#line 400 "engines/director/lingo/lingo-gr.y"
                                {
		(yyval.code) = g_lingo->codeFunc((yyvsp[-3].s), (yyvsp[-1].narg));
		delete (yyvsp[-3].s); }
#line 2449 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 65:
#line 403 "engines/director/lingo/lingo-gr.y"
                        {
		(yyval.code) = g_lingo->code1(LC::c_intpush);
		g_lingo->codeInt(0); // Put dummy id
		g_lingo->code1(LC::c_theentitypush);
		inst e = 0, f = 0;
		WRITE_UINT32(&e, (yyvsp[0].e)[0]);
		WRITE_UINT32(&f, (yyvsp[0].e)[1]);
		g_lingo->code2(e, f); }
#line 2462 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 66:
#line 411 "engines/director/lingo/lingo-gr.y"
                               {
		(yyval.code) = g_lingo->code1(LC::c_theentitypush);
		inst e = 0, f = 0;
		WRITE_UINT32(&e, (yyvsp[-1].e)[0]);
		WRITE_UINT32(&f, (yyvsp[-1].e)[1]);
		g_lingo->code2(e, f); }
#line 2473 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 67:
#line 417 "engines/director/lingo/lingo-gr.y"
                         {
		g_lingo->code1(LC::c_objectfieldpush);
		g_lingo->codeString((yyvsp[0].objectfield).os->c_str());
		g_lingo->codeInt((yyvsp[0].objectfield).oe);
		delete (yyvsp[0].objectfield).os; }
#line 2483 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 69:
#line 423 "engines/director/lingo/lingo-gr.y"
                                                { g_lingo->code1(LC::c_add); }
#line 2489 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 70:
#line 424 "engines/director/lingo/lingo-gr.y"
                                                { g_lingo->code1(LC::c_sub); }
#line 2495 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 71:
#line 425 "engines/director/lingo/lingo-gr.y"
                                                { g_lingo->code1(LC::c_mul); }
#line 2501 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 72:
#line 426 "engines/director/lingo/lingo-gr.y"
                                                { g_lingo->code1(LC::c_div); }
#line 2507 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 73:
#line 427 "engines/director/lingo/lingo-gr.y"
                                                { g_lingo->code1(LC::c_mod); }
#line 2513 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 74:
#line 428 "engines/director/lingo/lingo-gr.y"
                                                { g_lingo->code1(LC::c_gt); }
#line 2519 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 75:
#line 429 "engines/director/lingo/lingo-gr.y"
                                                { g_lingo->code1(LC::c_lt); }
#line 2525 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 76:
#line 430 "engines/director/lingo/lingo-gr.y"
                                                { g_lingo->code1(LC::c_eq); }
#line 2531 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 77:
#line 431 "engines/director/lingo/lingo-gr.y"
                                                { g_lingo->code1(LC::c_neq); }
#line 2537 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 78:
#line 432 "engines/director/lingo/lingo-gr.y"
                                                { g_lingo->code1(LC::c_ge); }
#line 2543 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 79:
#line 433 "engines/director/lingo/lingo-gr.y"
                                                { g_lingo->code1(LC::c_le); }
#line 2549 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 80:
#line 434 "engines/director/lingo/lingo-gr.y"
                                                { g_lingo->code1(LC::c_and); }
#line 2555 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 81:
#line 435 "engines/director/lingo/lingo-gr.y"
                                                { g_lingo->code1(LC::c_or); }
#line 2561 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 82:
#line 436 "engines/director/lingo/lingo-gr.y"
                                        { g_lingo->code1(LC::c_not); }
#line 2567 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 83:
#line 437 "engines/director/lingo/lingo-gr.y"
                                                { g_lingo->code1(LC::c_ampersand); }
#line 2573 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 84:
#line 438 "engines/director/lingo/lingo-gr.y"
                                                { g_lingo->code1(LC::c_concat); }
#line 2579 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 85:
#line 439 "engines/director/lingo/lingo-gr.y"
                                        { g_lingo->code1(LC::c_contains); }
#line 2585 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 86:
#line 440 "engines/director/lingo/lingo-gr.y"
                                                { g_lingo->code1(LC::c_starts); }
#line 2591 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 87:
#line 441 "engines/director/lingo/lingo-gr.y"
                                    { (yyval.code) = (yyvsp[0].code); }
#line 2597 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 88:
#line 442 "engines/director/lingo/lingo-gr.y"
                                    { (yyval.code) = (yyvsp[0].code); g_lingo->code1(LC::c_negate); }
#line 2603 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 89:
#line 443 "engines/director/lingo/lingo-gr.y"
                                                { (yyval.code) = (yyvsp[-1].code); }
#line 2609 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 90:
#line 444 "engines/director/lingo/lingo-gr.y"
                                                { g_lingo->code1(LC::c_intersects); }
#line 2615 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 91:
#line 445 "engines/director/lingo/lingo-gr.y"
                                                        { g_lingo->code1(LC::c_within); }
#line 2621 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 92:
#line 447 "engines/director/lingo/lingo-gr.y"
                                                        { g_lingo->code1(LC::c_charOf); }
#line 2627 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 93:
#line 448 "engines/director/lingo/lingo-gr.y"
                                                { g_lingo->code1(LC::c_charToOf); }
#line 2633 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 94:
#line 449 "engines/director/lingo/lingo-gr.y"
                                                        { g_lingo->code1(LC::c_itemOf); }
#line 2639 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 95:
#line 450 "engines/director/lingo/lingo-gr.y"
                                                { g_lingo->code1(LC::c_itemToOf); }
#line 2645 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 96:
#line 451 "engines/director/lingo/lingo-gr.y"
                                                        { g_lingo->code1(LC::c_lineOf); }
#line 2651 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 97:
#line 452 "engines/director/lingo/lingo-gr.y"
                                                { g_lingo->code1(LC::c_lineToOf); }
#line 2657 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 98:
#line 453 "engines/director/lingo/lingo-gr.y"
                                                        { g_lingo->code1(LC::c_wordOf); }
#line 2663 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 99:
#line 454 "engines/director/lingo/lingo-gr.y"
                                                { g_lingo->code1(LC::c_wordToOf); }
#line 2669 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 100:
#line 456 "engines/director/lingo/lingo-gr.y"
                                        {
		g_lingo->codeFunc((yyvsp[-1].s), 1);
		delete (yyvsp[-1].s); }
#line 2677 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 102:
#line 461 "engines/director/lingo/lingo-gr.y"
                                        { g_lingo->code1(LC::c_printtop); }
#line 2683 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 105:
#line 464 "engines/director/lingo/lingo-gr.y"
                                        { g_lingo->code1(LC::c_exitRepeat); }
#line 2689 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 106:
#line 465 "engines/director/lingo/lingo-gr.y"
                                                { g_lingo->code1(LC::c_procret); }
#line 2695 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 107:
#line 466 "engines/director/lingo/lingo-gr.y"
                  { g_lingo->_indef = kStateInArgs; }
#line 2701 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 108:
#line 466 "engines/director/lingo/lingo-gr.y"
                                                                 { g_lingo->_indef = kStateNone; }
#line 2707 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 109:
#line 467 "engines/director/lingo/lingo-gr.y"
                    { g_lingo->_indef = kStateInArgs; }
#line 2713 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 110:
#line 467 "engines/director/lingo/lingo-gr.y"
                                                                     { g_lingo->_indef = kStateNone; }
#line 2719 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 112:
#line 469 "engines/director/lingo/lingo-gr.y"
                                                {
		g_lingo->codeFunc((yyvsp[-3].s), (yyvsp[-1].narg));
		delete (yyvsp[-3].s); }
#line 2727 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 113:
#line 472 "engines/director/lingo/lingo-gr.y"
                                        {
		g_lingo->codeFunc((yyvsp[-1].s), (yyvsp[0].narg));
		delete (yyvsp[-1].s); }
#line 2735 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 114:
#line 475 "engines/director/lingo/lingo-gr.y"
                                { g_lingo->code1(LC::c_open); }
#line 2741 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 115:
#line 476 "engines/director/lingo/lingo-gr.y"
                                        { g_lingo->code2(LC::c_voidpush, LC::c_open); }
#line 2747 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 116:
#line 478 "engines/director/lingo/lingo-gr.y"
                                                {
		g_lingo->code1(LC::c_global);
		g_lingo->codeString((yyvsp[0].s)->c_str());
		delete (yyvsp[0].s); }
#line 2756 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 117:
#line 482 "engines/director/lingo/lingo-gr.y"
                                                {
		g_lingo->code1(LC::c_global);
		g_lingo->codeString((yyvsp[0].s)->c_str());
		delete (yyvsp[0].s); }
#line 2765 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 118:
#line 487 "engines/director/lingo/lingo-gr.y"
                                                {
		g_lingo->code1(LC::c_property);
		g_lingo->codeString((yyvsp[0].s)->c_str());
		delete (yyvsp[0].s); }
#line 2774 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 119:
#line 491 "engines/director/lingo/lingo-gr.y"
                                        {
		g_lingo->code1(LC::c_property);
		g_lingo->codeString((yyvsp[0].s)->c_str());
		delete (yyvsp[0].s); }
#line 2783 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 120:
#line 496 "engines/director/lingo/lingo-gr.y"
                                                {
		g_lingo->code1(LC::c_instance);
		g_lingo->codeString((yyvsp[0].s)->c_str());
		delete (yyvsp[0].s); }
#line 2792 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 121:
#line 500 "engines/director/lingo/lingo-gr.y"
                                        {
		g_lingo->code1(LC::c_instance);
		g_lingo->codeString((yyvsp[0].s)->c_str());
		delete (yyvsp[0].s); }
#line 2801 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 122:
#line 512 "engines/director/lingo/lingo-gr.y"
                                                { g_lingo->code1(LC::c_gotoloop); }
#line 2807 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 123:
#line 513 "engines/director/lingo/lingo-gr.y"
                                                        { g_lingo->code1(LC::c_gotonext); }
#line 2813 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 124:
#line 514 "engines/director/lingo/lingo-gr.y"
                                                { g_lingo->code1(LC::c_gotoprevious); }
#line 2819 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 125:
#line 515 "engines/director/lingo/lingo-gr.y"
                                        {
		g_lingo->code1(LC::c_intpush);
		g_lingo->codeInt(1);
		g_lingo->code1(LC::c_goto); }
#line 2828 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 126:
#line 519 "engines/director/lingo/lingo-gr.y"
                                {
		g_lingo->code1(LC::c_intpush);
		g_lingo->codeInt(3);
		g_lingo->code1(LC::c_goto); }
#line 2837 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 127:
#line 523 "engines/director/lingo/lingo-gr.y"
                                                {
		g_lingo->code1(LC::c_intpush);
		g_lingo->codeInt(2);
		g_lingo->code1(LC::c_goto); }
#line 2846 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 130:
#line 531 "engines/director/lingo/lingo-gr.y"
                                        { g_lingo->code1(LC::c_playdone); }
#line 2852 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 131:
#line 532 "engines/director/lingo/lingo-gr.y"
                                        {
		g_lingo->code1(LC::c_intpush);
		g_lingo->codeInt(1);
		g_lingo->code1(LC::c_play); }
#line 2861 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 132:
#line 536 "engines/director/lingo/lingo-gr.y"
                                {
		g_lingo->code1(LC::c_intpush);
		g_lingo->codeInt(3);
		g_lingo->code1(LC::c_play); }
#line 2870 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 133:
#line 540 "engines/director/lingo/lingo-gr.y"
                                                        {
		g_lingo->code1(LC::c_intpush);
		g_lingo->codeInt(2);
		g_lingo->code1(LC::c_play); }
#line 2879 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 134:
#line 544 "engines/director/lingo/lingo-gr.y"
                     { g_lingo->codeSetImmediate(true); }
#line 2885 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 135:
#line 544 "engines/director/lingo/lingo-gr.y"
                                                                        {
		g_lingo->codeSetImmediate(false);
		g_lingo->codeFunc((yyvsp[-2].s), (yyvsp[0].narg));
		delete (yyvsp[-2].s); }
#line 2894 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 136:
#line 574 "engines/director/lingo/lingo-gr.y"
             { g_lingo->_indef = kStateInArgs; }
#line 2900 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 137:
#line 574 "engines/director/lingo/lingo-gr.y"
                                                    { g_lingo->_currentFactory.clear(); }
#line 2906 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 138:
#line 575 "engines/director/lingo/lingo-gr.y"
                                                                        {
		g_lingo->code1(LC::c_procret);
		g_lingo->define(*(yyvsp[-6].s), (yyvsp[-4].code), (yyvsp[-3].narg));
		g_lingo->clearArgStack();
		g_lingo->_indef = kStateNone;
		delete (yyvsp[-6].s); }
#line 2917 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 139:
#line 581 "engines/director/lingo/lingo-gr.y"
                        { g_lingo->codeFactory(*(yyvsp[0].s)); delete (yyvsp[0].s); }
#line 2923 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 140:
#line 582 "engines/director/lingo/lingo-gr.y"
                  { g_lingo->_indef = kStateInArgs; }
#line 2929 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 141:
#line 583 "engines/director/lingo/lingo-gr.y"
                                                                        {
		g_lingo->code1(LC::c_procret);
		g_lingo->define(*(yyvsp[-6].s), (yyvsp[-4].code), (yyvsp[-3].narg) + 1, &g_lingo->_currentFactory);
		g_lingo->clearArgStack();
		g_lingo->_indef = kStateNone;
		delete (yyvsp[-6].s); }
#line 2940 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 142:
#line 589 "engines/director/lingo/lingo-gr.y"
                                                                     {	// D3
		g_lingo->code1(LC::c_procret);
		g_lingo->define(*(yyvsp[-7].s), (yyvsp[-6].code), (yyvsp[-5].narg));
		g_lingo->clearArgStack();
		g_lingo->_indef = kStateNone;
		g_lingo->_ignoreMe = false;

		checkEnd((yyvsp[-1].s), (yyvsp[-7].s)->c_str(), false);
		delete (yyvsp[-7].s);
		delete (yyvsp[-1].s); }
#line 2955 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 143:
#line 599 "engines/director/lingo/lingo-gr.y"
                                                 {	// D4. No 'end' clause
		g_lingo->code1(LC::c_procret);
		g_lingo->define(*(yyvsp[-5].s), (yyvsp[-4].code), (yyvsp[-3].narg));
		g_lingo->_indef = kStateNone;
		g_lingo->clearArgStack();
		g_lingo->_ignoreMe = false;
		delete (yyvsp[-5].s); }
#line 2967 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 144:
#line 607 "engines/director/lingo/lingo-gr.y"
         { g_lingo->_indef = kStateInArgs; }
#line 2973 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 145:
#line 607 "engines/director/lingo/lingo-gr.y"
                                                { (yyval.s) = (yyvsp[0].s); g_lingo->_currentFactory.clear(); g_lingo->_ignoreMe = true; }
#line 2979 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 146:
#line 609 "engines/director/lingo/lingo-gr.y"
                                { (yyval.narg) = 0; }
#line 2985 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 147:
#line 610 "engines/director/lingo/lingo-gr.y"
                                                { g_lingo->codeArg((yyvsp[0].s)); (yyval.narg) = 1; delete (yyvsp[0].s); }
#line 2991 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 148:
#line 611 "engines/director/lingo/lingo-gr.y"
                                        { g_lingo->codeArg((yyvsp[0].s)); (yyval.narg) = (yyvsp[-2].narg) + 1; delete (yyvsp[0].s); }
#line 2997 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 149:
#line 612 "engines/director/lingo/lingo-gr.y"
                                { g_lingo->codeArg((yyvsp[0].s)); (yyval.narg) = (yyvsp[-3].narg) + 1; delete (yyvsp[0].s); }
#line 3003 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 151:
#line 615 "engines/director/lingo/lingo-gr.y"
                                                { delete (yyvsp[0].s); }
#line 3009 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 152:
#line 616 "engines/director/lingo/lingo-gr.y"
                                        { delete (yyvsp[0].s); }
#line 3015 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 153:
#line 618 "engines/director/lingo/lingo-gr.y"
                                        { g_lingo->codeArgStore(); g_lingo->_indef = kStateInDef; }
#line 3021 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 154:
#line 620 "engines/director/lingo/lingo-gr.y"
                                {
		g_lingo->code1(LC::c_call);
		g_lingo->codeString((yyvsp[-1].s)->c_str());
		inst numpar = 0;
		WRITE_UINT32(&numpar, (yyvsp[0].narg));
		g_lingo->code1(numpar);
		delete (yyvsp[-1].s); }
#line 3033 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 155:
#line 628 "engines/director/lingo/lingo-gr.y"
                                { (yyval.narg) = 0; }
#line 3039 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 156:
#line 629 "engines/director/lingo/lingo-gr.y"
                                                { (yyval.narg) = 1; }
#line 3045 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 157:
#line 630 "engines/director/lingo/lingo-gr.y"
                                        { (yyval.narg) = (yyvsp[-2].narg) + 1; }
#line 3051 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 158:
#line 632 "engines/director/lingo/lingo-gr.y"
                                        { (yyval.narg) = 1; }
#line 3057 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 159:
#line 633 "engines/director/lingo/lingo-gr.y"
                                        { (yyval.narg) = (yyvsp[-2].narg) + 1; }
#line 3063 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 160:
#line 635 "engines/director/lingo/lingo-gr.y"
                                { (yyval.code) = (yyvsp[-1].code); }
#line 3069 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 161:
#line 637 "engines/director/lingo/lingo-gr.y"
                                { (yyval.code) = g_lingo->code2(LC::c_arraypush, 0); }
#line 3075 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 162:
#line 638 "engines/director/lingo/lingo-gr.y"
                                                { (yyval.code) = g_lingo->code2(LC::c_proparraypush, 0); }
#line 3081 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 163:
#line 639 "engines/director/lingo/lingo-gr.y"
                     { (yyval.code) = g_lingo->code1(LC::c_arraypush); (yyval.code) = g_lingo->codeInt((yyvsp[0].narg)); }
#line 3087 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 164:
#line 640 "engines/director/lingo/lingo-gr.y"
                         { (yyval.code) = g_lingo->code1(LC::c_proparraypush); (yyval.code) = g_lingo->codeInt((yyvsp[0].narg)); }
#line 3093 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 165:
#line 642 "engines/director/lingo/lingo-gr.y"
                                        { (yyval.narg) = 1; }
#line 3099 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 166:
#line 643 "engines/director/lingo/lingo-gr.y"
                                { (yyval.narg) = (yyvsp[-2].narg) + 1; }
#line 3105 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 167:
#line 645 "engines/director/lingo/lingo-gr.y"
                                        { (yyval.narg) = 1; }
#line 3111 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 168:
#line 646 "engines/director/lingo/lingo-gr.y"
                                { (yyval.narg) = (yyvsp[-2].narg) + 1; }
#line 3117 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 169:
#line 648 "engines/director/lingo/lingo-gr.y"
                                {
		g_lingo->code1(LC::c_symbolpush);
		g_lingo->codeString((yyvsp[-2].s)->c_str());
		delete (yyvsp[-2].s); }
#line 3126 "engines/director/lingo/lingo-gr.cpp"
    break;

  case 170:
#line 652 "engines/director/lingo/lingo-gr.y"
                                {
		g_lingo->code1(LC::c_stringpush);
		g_lingo->codeString((yyvsp[-2].s)->c_str());
		delete (yyvsp[-2].s); }
#line 3135 "engines/director/lingo/lingo-gr.cpp"
    break;


#line 3139 "engines/director/lingo/lingo-gr.cpp"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
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

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
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

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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


#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
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
  return yyresult;
}
#line 658 "engines/director/lingo/lingo-gr.y"

