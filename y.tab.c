/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
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
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "translator.y"

#define _GNU_SOURCE

void yyerror (char *s);
#include <stdio.h>     /* C declarations used in actions */
#include <stdlib.h> /* C exit function */
#include <string.h>

int tabSize = 4;
int nTab = 4;

const char*convertToGOTypes(char *type);

#line 85 "y.tab.c"

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

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    MAIN = 258,                    /* MAIN  */
    FOR = 259,                     /* FOR  */
    WHILE = 260,                   /* WHILE  */
    IF = 261,                      /* IF  */
    ELSE = 262,                    /* ELSE  */
    GE = 263,                      /* GE  */
    LE = 264,                      /* LE  */
    EQ = 265,                      /* EQ  */
    NE = 266,                      /* NE  */
    PRINTF = 267,                  /* PRINTF  */
    SCANF = 268,                   /* SCANF  */
    VARIABLE = 269,                /* VARIABLE  */
    TYPE = 270,                    /* TYPE  */
    NUMBER = 271,                  /* NUMBER  */
    STRING = 272                   /* STRING  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define MAIN 258
#define FOR 259
#define WHILE 260
#define IF 261
#define ELSE 262
#define GE 263
#define LE 264
#define EQ 265
#define NE 266
#define PRINTF 267
#define SCANF 268
#define VARIABLE 269
#define TYPE 270
#define NUMBER 271
#define STRING 272

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 15 "translator.y"
char *number; char *variable; char *type; char *string; char *chr; 

#line 175 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_MAIN = 3,                       /* MAIN  */
  YYSYMBOL_FOR = 4,                        /* FOR  */
  YYSYMBOL_WHILE = 5,                      /* WHILE  */
  YYSYMBOL_IF = 6,                         /* IF  */
  YYSYMBOL_ELSE = 7,                       /* ELSE  */
  YYSYMBOL_GE = 8,                         /* GE  */
  YYSYMBOL_LE = 9,                         /* LE  */
  YYSYMBOL_EQ = 10,                        /* EQ  */
  YYSYMBOL_NE = 11,                        /* NE  */
  YYSYMBOL_PRINTF = 12,                    /* PRINTF  */
  YYSYMBOL_SCANF = 13,                     /* SCANF  */
  YYSYMBOL_VARIABLE = 14,                  /* VARIABLE  */
  YYSYMBOL_TYPE = 15,                      /* TYPE  */
  YYSYMBOL_NUMBER = 16,                    /* NUMBER  */
  YYSYMBOL_STRING = 17,                    /* STRING  */
  YYSYMBOL_18_ = 18,                       /* '('  */
  YYSYMBOL_19_ = 19,                       /* ')'  */
  YYSYMBOL_20_ = 20,                       /* '{'  */
  YYSYMBOL_21_ = 21,                       /* '}'  */
  YYSYMBOL_22_ = 22,                       /* ','  */
  YYSYMBOL_23_ = 23,                       /* ';'  */
  YYSYMBOL_24_ = 24,                       /* '>'  */
  YYSYMBOL_25_ = 25,                       /* '<'  */
  YYSYMBOL_26_ = 26,                       /* '+'  */
  YYSYMBOL_27_ = 27,                       /* '-'  */
  YYSYMBOL_28_ = 28,                       /* '*'  */
  YYSYMBOL_29_ = 29,                       /* '/'  */
  YYSYMBOL_30_ = 30,                       /* '='  */
  YYSYMBOL_YYACCEPT = 31,                  /* $accept  */
  YYSYMBOL_program = 32,                   /* program  */
  YYSYMBOL_multiple_functions = 33,        /* multiple_functions  */
  YYSYMBOL_functions = 34,                 /* functions  */
  YYSYMBOL_multi_statements = 35,          /* multi_statements  */
  YYSYMBOL_multiple_arguments = 36,        /* multiple_arguments  */
  YYSYMBOL_typed_multiple_arguments = 37,  /* typed_multiple_arguments  */
  YYSYMBOL_argument = 38,                  /* argument  */
  YYSYMBOL_statement = 39,                 /* statement  */
  YYSYMBOL_multi_lines = 40,               /* multi_lines  */
  YYSYMBOL_line = 41,                      /* line  */
  YYSYMBOL_called_function = 42,           /* called_function  */
  YYSYMBOL_condition = 43,                 /* condition  */
  YYSYMBOL_exp = 44,                       /* exp  */
  YYSYMBOL_assignment = 45                 /* assignment  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




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

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
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
typedef yytype_int8 yy_state_t;

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
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
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

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

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
#define YYFINAL  7
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   248

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  31
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  15
/* YYNRULES -- Number of rules.  */
#define YYNRULES  58
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  125

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   272


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      18,    19,    28,    26,    22,    27,     2,    29,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    23,
      25,    30,    24,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    20,     2,    21,     2,     2,     2,     2,
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
      15,    16,    17
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    35,    35,    43,    46,    47,    48,    51,    57,    63,
      66,    67,    68,    69,    70,    71,    72,    76,    77,    80,
      81,    82,    85,    86,    87,    90,    91,    92,    93,    94,
      97,    98,    99,   102,   103,   104,   105,   108,   109,   110,
     113,   114,   115,   116,   117,   118,   119,   120,   123,   124,
     125,   126,   127,   128,   129,   130,   134,   135,   136
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "MAIN", "FOR", "WHILE",
  "IF", "ELSE", "GE", "LE", "EQ", "NE", "PRINTF", "SCANF", "VARIABLE",
  "TYPE", "NUMBER", "STRING", "'('", "')'", "'{'", "'}'", "','", "';'",
  "'>'", "'<'", "'+'", "'-'", "'*'", "'/'", "'='", "$accept", "program",
  "multiple_functions", "functions", "multi_statements",
  "multiple_arguments", "typed_multiple_arguments", "argument",
  "statement", "multi_lines", "line", "called_function", "condition",
  "exp", "assignment", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-63)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-48)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -5,    -2,    23,    -5,   -63,    14,    25,   -63,   -63,    37,
      37,    60,    22,    43,    36,    49,    53,   -63,   -63,   218,
     -63,   -63,    75,    41,    65,    64,    69,    94,    60,    10,
     218,   218,   218,   218,   186,    60,   186,   101,   102,    63,
     -63,   -63,    75,    75,    75,    75,   115,   122,   123,   136,
       0,   129,   114,   193,   211,   -63,   126,   212,   128,   -63,
     132,    60,    60,   -63,    60,     1,   230,   230,   134,   218,
     130,   -63,   202,   211,   186,   -63,   -63,   -63,   -63,   -63,
     -63,   103,   112,   -63,   131,   135,   218,   140,    88,   148,
     230,    75,   218,   186,   -63,   150,   -63,   -63,   230,    81,
     -63,   218,   218,   218,   218,   218,   218,   -63,   151,    75,
     168,   -63,   146,    12,    75,    75,    75,    75,    75,    75,
     -63,   -63,     1,   157,   -63
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       3,     0,     0,     2,     4,     0,     0,     1,     5,    21,
      21,    24,     0,     0,     0,     0,    49,    48,    22,     0,
      19,    50,    23,     0,     0,     0,     0,     0,    24,     0,
       0,     0,     0,     0,    16,    24,    16,     0,     0,     0,
      17,    55,    51,    52,    53,    54,     0,     0,     0,    27,
      49,     0,     0,    36,    10,    30,    50,     0,     0,    20,
       0,    24,    24,    39,    24,     0,     0,     0,     0,     0,
      56,     7,    36,    15,    16,    11,    31,    35,    34,    33,
       8,     0,     0,    18,     0,     0,     0,     0,    40,     0,
       0,    57,     0,    16,    13,     0,    37,    38,     0,     0,
      28,     0,     0,     0,     0,     0,     0,    25,     0,    58,
       0,    12,     0,    55,    45,    46,    43,    44,    41,    42,
      26,    14,     0,     0,    29
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -63,   -63,   -63,   174,   -34,    44,   169,    -7,   -47,   -46,
      16,   -27,   -56,   -11,   -62
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     2,     3,     4,    52,    39,    12,    40,    53,    54,
      55,    21,    87,    57,    58
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      22,     5,    60,    85,    20,    72,    73,    56,    29,    56,
       1,    89,     6,    72,    73,    84,    51,    22,    28,    42,
      43,    44,    45,     7,    22,    56,    56,    56,    59,    41,
      69,   -47,     9,    56,   108,   -47,    30,    31,    32,    33,
      95,    23,   112,    10,    24,    56,    56,    56,    72,    73,
      22,    22,    11,    22,    26,    88,    88,    83,    91,   110,
     123,    34,    25,    72,    73,    24,    56,    27,    56,    75,
      76,    28,    14,    15,    16,    99,    17,    18,    19,    88,
      35,   109,    63,    56,    36,    64,    37,    88,    94,    76,
     114,   115,   116,   117,   118,   119,   101,   102,   103,   104,
     113,    30,    31,    32,    33,    81,    82,    30,    31,    32,
      33,    38,   105,   106,    30,    31,    32,    33,    46,    47,
      48,    49,    96,    61,    62,    64,    14,    15,    50,    51,
      17,    97,    19,    65,    64,    71,    46,    47,    48,    49,
      66,    67,    68,    70,    14,    15,    50,    51,    17,    77,
      19,    79,    90,    80,    46,    47,    48,    49,    98,   100,
      92,    69,    14,    15,    50,    51,    17,   107,    19,   122,
     120,   111,    46,    47,    48,    49,   124,     8,     0,    13,
      14,    15,    50,    51,    17,     0,    19,     0,     0,   121,
      46,    47,    48,    49,     0,     0,     0,     0,    14,    15,
      50,    51,    17,     0,    19,    14,    15,    50,    51,    17,
       0,    19,     0,    74,    14,    15,    50,    51,    17,     0,
      19,     0,    93,    14,    15,    50,    51,    17,     0,    19,
      14,    15,    16,     0,    17,    78,    19,     0,    30,    31,
      32,    33,    14,    15,    16,     0,    17,     0,    86
};

static const yytype_int8 yycheck[] =
{
      11,     3,    36,    65,    11,    52,    52,    34,    19,    36,
      15,    67,    14,    60,    60,    14,    15,    28,    18,    30,
      31,    32,    33,     0,    35,    52,    53,    54,    35,    19,
      30,    19,    18,    60,    90,    23,    26,    27,    28,    29,
      74,    19,    98,    18,    22,    72,    73,    74,    95,    95,
      61,    62,    15,    64,    18,    66,    67,    64,    69,    93,
     122,    20,    19,   110,   110,    22,    93,    18,    95,    53,
      54,    18,    12,    13,    14,    86,    16,    17,    18,    90,
      15,    92,    19,   110,    20,    22,    17,    98,    72,    73,
     101,   102,   103,   104,   105,   106,     8,     9,    10,    11,
      19,    26,    27,    28,    29,    61,    62,    26,    27,    28,
      29,    17,    24,    25,    26,    27,    28,    29,     4,     5,
       6,     7,    19,    22,    22,    22,    12,    13,    14,    15,
      16,    19,    18,    18,    22,    21,     4,     5,     6,     7,
      18,    18,     6,    14,    12,    13,    14,    15,    16,    23,
      18,    23,    18,    21,     4,     5,     6,     7,    23,    19,
      30,    30,    12,    13,    14,    15,    16,    19,    18,    23,
      19,    21,     4,     5,     6,     7,    19,     3,    -1,    10,
      12,    13,    14,    15,    16,    -1,    18,    -1,    -1,    21,
       4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,    13,
      14,    15,    16,    -1,    18,    12,    13,    14,    15,    16,
      -1,    18,    -1,    20,    12,    13,    14,    15,    16,    -1,
      18,    -1,    20,    12,    13,    14,    15,    16,    -1,    18,
      12,    13,    14,    -1,    16,    23,    18,    -1,    26,    27,
      28,    29,    12,    13,    14,    -1,    16,    -1,    18
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    15,    32,    33,    34,     3,    14,     0,    34,    18,
      18,    15,    37,    37,    12,    13,    14,    16,    17,    18,
      38,    42,    44,    19,    22,    19,    18,    18,    18,    44,
      26,    27,    28,    29,    20,    15,    20,    17,    17,    36,
      38,    19,    44,    44,    44,    44,     4,     5,     6,     7,
      14,    15,    35,    39,    40,    41,    42,    44,    45,    38,
      35,    22,    22,    19,    22,    18,    18,    18,     6,    30,
      14,    21,    39,    40,    20,    41,    41,    23,    23,    23,
      21,    36,    36,    38,    14,    45,    18,    43,    44,    43,
      18,    44,    30,    20,    41,    35,    19,    19,    23,    44,
      19,     8,     9,    10,    11,    24,    25,    19,    43,    44,
      35,    21,    43,    19,    44,    44,    44,    44,    44,    44,
      19,    21,    23,    45,    19
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    31,    32,    32,    33,    33,    33,    34,    34,    34,
      35,    35,    35,    35,    35,    35,    35,    36,    36,    37,
      37,    37,    38,    38,    38,    39,    39,    39,    39,    39,
      40,    40,    40,    41,    41,    41,    41,    42,    42,    42,
      43,    43,    43,    43,    43,    43,    43,    43,    44,    44,
      44,    44,    44,    44,    44,    44,    45,    45,    45
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     1,     2,     0,     8,     8,     0,
       1,     2,     4,     3,     5,     2,     0,     1,     3,     2,
       4,     0,     1,     1,     0,     4,     5,     1,     4,     8,
       1,     2,     0,     2,     2,     2,     0,     6,     6,     4,
       1,     3,     3,     3,     3,     3,     3,     3,     1,     1,
       1,     3,     3,     3,     3,     3,     2,     3,     4
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
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
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

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
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
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
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  case 2: /* program: multiple_functions  */
#line 35 "translator.y"
                            {
                printf("package main\n\n");
                printf("import (\n");
                printf("\t\"fmt\"\n");
                printf(")\n\n");

                printf("%s", (yyvsp[0].chr));
                }
#line 1301 "y.tab.c"
    break;

  case 4: /* multiple_functions: functions  */
#line 46 "translator.y"
                              {asprintf(&(yyval.chr), "%s", (yyvsp[0].chr));}
#line 1307 "y.tab.c"
    break;

  case 5: /* multiple_functions: multiple_functions functions  */
#line 47 "translator.y"
                                   {asprintf(&(yyval.chr), "%s\n%s", (yyvsp[-1].chr), (yyvsp[0].chr));}
#line 1313 "y.tab.c"
    break;

  case 6: /* multiple_functions: %empty  */
#line 48 "translator.y"
      {asprintf(&(yyval.chr), "");}
#line 1319 "y.tab.c"
    break;

  case 7: /* functions: TYPE MAIN '(' typed_multiple_arguments ')' '{' multi_statements '}'  */
#line 52 "translator.y"
            { 
                asprintf(&(yyval.chr), "func main() {\n");
                asprintf(&(yyval.chr), "%s%s", (yyval.chr), (yyvsp[-1].chr));
                asprintf(&(yyval.chr), "%s}", (yyval.chr));
            }
#line 1329 "y.tab.c"
    break;

  case 8: /* functions: TYPE VARIABLE '(' typed_multiple_arguments ')' '{' multi_statements '}'  */
#line 58 "translator.y"
            { 
                asprintf(&(yyval.chr), "func %s(%s) %s {\n", (yyvsp[-6].variable), (yyvsp[-4].chr), convertToGOTypes((yyvsp[-7].type)));
                asprintf(&(yyval.chr), "%s%s", (yyval.chr), (yyvsp[-1].chr));
                asprintf(&(yyval.chr), "%s}", (yyval.chr));
            }
#line 1339 "y.tab.c"
    break;

  case 9: /* functions: %empty  */
#line 63 "translator.y"
      {asprintf(&(yyval.chr), "");}
#line 1345 "y.tab.c"
    break;

  case 10: /* multi_statements: multi_lines  */
#line 66 "translator.y"
                              {asprintf(&(yyval.chr), "%s", (yyvsp[0].chr));}
#line 1351 "y.tab.c"
    break;

  case 11: /* multi_statements: statement line  */
#line 67 "translator.y"
                     { asprintf(&(yyval.chr), "%s%s%*s}\n", (yyvsp[-1].chr), (yyvsp[0].chr), nTab - tabSize, ""); nTab-=tabSize; }
#line 1357 "y.tab.c"
    break;

  case 12: /* multi_statements: statement '{' multi_statements '}'  */
#line 68 "translator.y"
                                         { asprintf(&(yyval.chr), "%s%s%*s}\n", (yyvsp[-3].chr), (yyvsp[-1].chr), nTab - tabSize, ""); nTab-=tabSize; }
#line 1363 "y.tab.c"
    break;

  case 13: /* multi_statements: multi_statements statement line  */
#line 69 "translator.y"
                                      { asprintf(&(yyval.chr), "%s%s%s%*s}\n", (yyvsp[-2].chr), (yyvsp[-1].chr), (yyvsp[0].chr), nTab - tabSize, ""); nTab-=tabSize; }
#line 1369 "y.tab.c"
    break;

  case 14: /* multi_statements: multi_statements statement '{' multi_statements '}'  */
#line 70 "translator.y"
                                                          { asprintf(&(yyval.chr), "%s%s%s%*s}\n", (yyvsp[-4].chr), (yyvsp[-3].chr), (yyvsp[-1].chr), nTab - tabSize, "");  nTab-=tabSize; }
#line 1375 "y.tab.c"
    break;

  case 15: /* multi_statements: multi_statements multi_lines  */
#line 71 "translator.y"
                                   { asprintf(&(yyval.chr), "%s%s", (yyvsp[-1].chr), (yyvsp[0].chr)); }
#line 1381 "y.tab.c"
    break;

  case 16: /* multi_statements: %empty  */
#line 72 "translator.y"
      { asprintf(&(yyval.chr), ""); }
#line 1387 "y.tab.c"
    break;

  case 17: /* multiple_arguments: argument  */
#line 76 "translator.y"
                             { asprintf(&(yyval.chr), "%s", (yyvsp[0].chr)); }
#line 1393 "y.tab.c"
    break;

  case 18: /* multiple_arguments: multiple_arguments ',' argument  */
#line 77 "translator.y"
                                      { asprintf(&(yyval.chr), "%s, %s", (yyvsp[-2].chr), (yyvsp[0].chr)); }
#line 1399 "y.tab.c"
    break;

  case 19: /* typed_multiple_arguments: TYPE argument  */
#line 80 "translator.y"
                                        { asprintf(&(yyval.chr), "%s %s", (yyvsp[0].chr), convertToGOTypes((yyvsp[-1].type))); }
#line 1405 "y.tab.c"
    break;

  case 20: /* typed_multiple_arguments: typed_multiple_arguments ',' TYPE argument  */
#line 81 "translator.y"
                                                 { asprintf(&(yyval.chr), "%s, %s %s", (yyvsp[-3].chr), (yyvsp[0].chr), convertToGOTypes((yyvsp[-1].type))); }
#line 1411 "y.tab.c"
    break;

  case 22: /* argument: STRING  */
#line 85 "translator.y"
                 { asprintf(&(yyval.chr), "%s", (yyvsp[0].string)); }
#line 1417 "y.tab.c"
    break;

  case 23: /* argument: exp  */
#line 86 "translator.y"
          { asprintf(&(yyval.chr), "%s", (yyvsp[0].chr)); }
#line 1423 "y.tab.c"
    break;

  case 24: /* argument: %empty  */
#line 87 "translator.y"
      { asprintf(&(yyval.chr), ""); }
#line 1429 "y.tab.c"
    break;

  case 25: /* statement: IF '(' condition ')'  */
#line 90 "translator.y"
                                { asprintf(&(yyval.chr), "%*sif %s {\n", nTab, "", (yyvsp[-1].chr)); nTab+=tabSize; }
#line 1435 "y.tab.c"
    break;

  case 26: /* statement: ELSE IF '(' condition ')'  */
#line 91 "translator.y"
                                { asprintf(&(yyval.chr), "%*selse if %s {\n", nTab, "", (yyvsp[-1].chr)); nTab+=tabSize; }
#line 1441 "y.tab.c"
    break;

  case 27: /* statement: ELSE  */
#line 92 "translator.y"
           { asprintf(&(yyval.chr), "%*selse {\n", nTab, ""); nTab+=tabSize; }
#line 1447 "y.tab.c"
    break;

  case 28: /* statement: WHILE '(' condition ')'  */
#line 93 "translator.y"
                              { asprintf(&(yyval.chr), "%*sfor {\n%*sif %s {\n%*sbreak\n%*s}\n", nTab, "", nTab + tabSize, "", (yyvsp[-1].chr), nTab + tabSize * 2, "", nTab + tabSize, ""); nTab+=tabSize; }
#line 1453 "y.tab.c"
    break;

  case 29: /* statement: FOR '(' assignment ';' condition ';' assignment ')'  */
#line 94 "translator.y"
                                                          { asprintf(&(yyval.chr), "%*sfor %s; %s; %s {\n", nTab, "", (yyvsp[-5].chr), (yyvsp[-3].chr), (yyvsp[-1].chr)); nTab+=tabSize; }
#line 1459 "y.tab.c"
    break;

  case 30: /* multi_lines: line  */
#line 97 "translator.y"
                  { asprintf(&(yyval.chr), "%s", (yyvsp[0].chr)); }
#line 1465 "y.tab.c"
    break;

  case 31: /* multi_lines: multi_lines line  */
#line 98 "translator.y"
                       { asprintf(&(yyval.chr), "%s%s", (yyvsp[-1].chr), (yyvsp[0].chr));}
#line 1471 "y.tab.c"
    break;

  case 32: /* multi_lines: %empty  */
#line 99 "translator.y"
      { asprintf(&(yyval.chr), ""); }
#line 1477 "y.tab.c"
    break;

  case 33: /* line: assignment ';'  */
#line 102 "translator.y"
                     { asprintf(&(yyval.chr), "%*s%s\n", nTab, "", (yyvsp[-1].chr)); }
#line 1483 "y.tab.c"
    break;

  case 34: /* line: exp ';'  */
#line 103 "translator.y"
              { asprintf(&(yyval.chr), "%*s%s\n", nTab, "", (yyvsp[-1].chr)); }
#line 1489 "y.tab.c"
    break;

  case 35: /* line: called_function ';'  */
#line 104 "translator.y"
                          { asprintf(&(yyval.chr), "%*s%s\n", nTab, "", (yyvsp[-1].chr)); }
#line 1495 "y.tab.c"
    break;

  case 36: /* line: %empty  */
#line 105 "translator.y"
      { asprintf(&(yyval.chr), ""); }
#line 1501 "y.tab.c"
    break;

  case 37: /* called_function: PRINTF '(' STRING ',' multiple_arguments ')'  */
#line 108 "translator.y"
                                                              { asprintf(&(yyval.chr), "fmt.Printf(%s, %s)", (yyvsp[-3].string), (yyvsp[-1].chr)); }
#line 1507 "y.tab.c"
    break;

  case 38: /* called_function: SCANF '(' STRING ',' multiple_arguments ')'  */
#line 109 "translator.y"
                                                  { asprintf(&(yyval.chr), "fmt.Scanf(%s, %s)", (yyvsp[-3].string), (yyvsp[-1].chr)); }
#line 1513 "y.tab.c"
    break;

  case 39: /* called_function: VARIABLE '(' multiple_arguments ')'  */
#line 110 "translator.y"
                                          { asprintf(&(yyval.chr), "%s(%s)", (yyvsp[-3].variable), (yyvsp[-1].chr)); }
#line 1519 "y.tab.c"
    break;

  case 40: /* condition: exp  */
#line 113 "translator.y"
               { asprintf(&(yyval.chr), "%s != 0", (yyvsp[0].chr)); }
#line 1525 "y.tab.c"
    break;

  case 41: /* condition: exp '>' exp  */
#line 114 "translator.y"
                  { asprintf(&(yyval.chr), "%s > %s", (yyvsp[-2].chr), (yyvsp[0].chr)); }
#line 1531 "y.tab.c"
    break;

  case 42: /* condition: exp '<' exp  */
#line 115 "translator.y"
                  { asprintf(&(yyval.chr), "%s < %s", (yyvsp[-2].chr), (yyvsp[0].chr)); }
#line 1537 "y.tab.c"
    break;

  case 43: /* condition: exp EQ exp  */
#line 116 "translator.y"
                 { asprintf(&(yyval.chr), "%s == %s", (yyvsp[-2].chr), (yyvsp[0].chr)); }
#line 1543 "y.tab.c"
    break;

  case 44: /* condition: exp NE exp  */
#line 117 "translator.y"
                 { asprintf(&(yyval.chr), "%s != %s", (yyvsp[-2].chr), (yyvsp[0].chr)); }
#line 1549 "y.tab.c"
    break;

  case 45: /* condition: exp GE exp  */
#line 118 "translator.y"
                 { asprintf(&(yyval.chr), "%s >= %s", (yyvsp[-2].chr), (yyvsp[0].chr)); }
#line 1555 "y.tab.c"
    break;

  case 46: /* condition: exp LE exp  */
#line 119 "translator.y"
                 { asprintf(&(yyval.chr), "%s <= %s", (yyvsp[-2].chr), (yyvsp[0].chr)); }
#line 1561 "y.tab.c"
    break;

  case 47: /* condition: '(' exp ')'  */
#line 120 "translator.y"
                  { asprintf(&(yyval.chr), "(%s)", (yyvsp[-1].chr)); }
#line 1567 "y.tab.c"
    break;

  case 48: /* exp: NUMBER  */
#line 123 "translator.y"
            { asprintf(&(yyval.chr), "%s", (yyvsp[0].number)); }
#line 1573 "y.tab.c"
    break;

  case 49: /* exp: VARIABLE  */
#line 124 "translator.y"
               { asprintf(&(yyval.chr), "%s", (yyvsp[0].variable)); }
#line 1579 "y.tab.c"
    break;

  case 50: /* exp: called_function  */
#line 125 "translator.y"
                      { asprintf(&(yyval.chr), "%s", (yyvsp[0].chr)); }
#line 1585 "y.tab.c"
    break;

  case 51: /* exp: exp '+' exp  */
#line 126 "translator.y"
                  {asprintf(&(yyval.chr), "%s + %s", (yyvsp[-2].chr), (yyvsp[0].chr));}
#line 1591 "y.tab.c"
    break;

  case 52: /* exp: exp '-' exp  */
#line 127 "translator.y"
                  {asprintf(&(yyval.chr), "%s - %s", (yyvsp[-2].chr), (yyvsp[0].chr));}
#line 1597 "y.tab.c"
    break;

  case 53: /* exp: exp '*' exp  */
#line 128 "translator.y"
                  {asprintf(&(yyval.chr), "%s * %s", (yyvsp[-2].chr), (yyvsp[0].chr));}
#line 1603 "y.tab.c"
    break;

  case 54: /* exp: exp '/' exp  */
#line 129 "translator.y"
                  {asprintf(&(yyval.chr), "%s / %s", (yyvsp[-2].chr), (yyvsp[0].chr));}
#line 1609 "y.tab.c"
    break;

  case 55: /* exp: '(' exp ')'  */
#line 130 "translator.y"
                  {asprintf(&(yyval.chr), "(%s)", (yyvsp[-1].chr));}
#line 1615 "y.tab.c"
    break;

  case 56: /* assignment: TYPE VARIABLE  */
#line 134 "translator.y"
                          {asprintf(&(yyval.chr), "var %s %s", (yyvsp[0].variable), convertToGOTypes((yyvsp[-1].type)));}
#line 1621 "y.tab.c"
    break;

  case 57: /* assignment: VARIABLE '=' exp  */
#line 135 "translator.y"
                       {asprintf(&(yyval.chr), "%s = %s", (yyvsp[-2].variable), (yyvsp[0].chr));}
#line 1627 "y.tab.c"
    break;

  case 58: /* assignment: TYPE VARIABLE '=' exp  */
#line 136 "translator.y"
                            {asprintf(&(yyval.chr), "%s := %s", (yyvsp[-2].variable), (yyvsp[0].chr));}
#line 1633 "y.tab.c"
    break;


#line 1637 "y.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

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
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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
  ++yynerrs;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 139 "translator.y"


const char *convertToGOTypes(char *string) {
    if(strcmp(string, "float") == 0) {
        return "float64";
    } else if(strcmp(string, "char") == 0) {
        return "byte";
    } else {
        return string;
    }
}
