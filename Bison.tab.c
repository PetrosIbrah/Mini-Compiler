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
#line 2 "Bison.y"

/* C code, includes, defines, global variables and function Declarations */
        #include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
        #define YYSTYPE char *

        void PrintWarningS (char* s);
        int yylex(void);
        void TheEnd();
        void yyerror(char *);
        void FatalErrMsg(char *s);

        extern char *yytext;
        extern FILE *yyin;
        int FatalError = 0;
        int WordWarnings = 0;
        int SyntaxWarnings = 0;
        int SyntaxErrorCount = 0;
        int line=1;
        int bs = 0;
        int WordErrors = 0;
        int CorrectSyntax = 0;
        int CorrectWords = 0;
        int LeftSide = 0, RightSide = 0;
        int content_counter = 0;

#line 99 "Bison.tab.c"

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

#include "Bison.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_INTEGER = 3,                    /* INTEGER  */
  YYSYMBOL_VARIABLE = 4,                   /* VARIABLE  */
  YYSYMBOL_FLOAT = 5,                      /* FLOAT  */
  YYSYMBOL_STRING = 6,                     /* STRING  */
  YYSYMBOL_SDOUBLE = 7,                    /* SDOUBLE  */
  YYSYMBOL_SLONG = 8,                      /* SLONG  */
  YYSYMBOL_SSHORT = 9,                     /* SSHORT  */
  YYSYMBOL_SINT = 10,                      /* SINT  */
  YYSYMBOL_SFLOAT = 11,                    /* SFLOAT  */
  YYSYMBOL_SSTRING = 12,                   /* SSTRING  */
  YYSYMBOL_ASSIGNOP = 13,                  /* ASSIGNOP  */
  YYSYMBOL_PLUS = 14,                      /* PLUS  */
  YYSYMBOL_MINUS = 15,                     /* MINUS  */
  YYSYMBOL_TIMES = 16,                     /* TIMES  */
  YYSYMBOL_DIVIDE = 17,                    /* DIVIDE  */
  YYSYMBOL_PLUSPLUS = 18,                  /* PLUSPLUS  */
  YYSYMBOL_OPERATOR = 19,                  /* OPERATOR  */
  YYSYMBOL_EQUALTO = 20,                   /* EQUALTO  */
  YYSYMBOL_NOTEQUAL = 21,                  /* NOTEQUAL  */
  YYSYMBOL_GREATERTHANOREQUAL = 22,        /* GREATERTHANOREQUAL  */
  YYSYMBOL_LESSTHANOREQUAL = 23,           /* LESSTHANOREQUAL  */
  YYSYMBOL_GREATERTHAN = 24,               /* GREATERTHAN  */
  YYSYMBOL_LESSTHAN = 25,                  /* LESSTHAN  */
  YYSYMBOL_IF = 26,                        /* IF  */
  YYSYMBOL_WHILE = 27,                     /* WHILE  */
  YYSYMBOL_FOR = 28,                       /* FOR  */
  YYSYMBOL_SCAN = 29,                      /* SCAN  */
  YYSYMBOL_PRINT = 30,                     /* PRINT  */
  YYSYMBOL_LEN = 31,                       /* LEN  */
  YYSYMBOL_CMP = 32,                       /* CMP  */
  YYSYMBOL_FUNC = 33,                      /* FUNC  */
  YYSYMBOL_LP = 34,                        /* LP  */
  YYSYMBOL_RP = 35,                        /* RP  */
  YYSYMBOL_LB = 36,                        /* LB  */
  YYSYMBOL_RB = 37,                        /* RB  */
  YYSYMBOL_LSB = 38,                       /* LSB  */
  YYSYMBOL_RSB = 39,                       /* RSB  */
  YYSYMBOL_KEYWORD = 40,                   /* KEYWORD  */
  YYSYMBOL_UNKNOWN = 41,                   /* UNKNOWN  */
  YYSYMBOL_WHITESPACE = 42,                /* WHITESPACE  */
  YYSYMBOL_ENDOFFILE = 43,                 /* ENDOFFILE  */
  YYSYMBOL_DELIMITER = 44,                 /* DELIMITER  */
  YYSYMBOL_BNL = 45,                       /* BNL  */
  YYSYMBOL_TOKEN_ERROR = 46,               /* TOKEN_ERROR  */
  YYSYMBOL_NEWLINE = 47,                   /* NEWLINE  */
  YYSYMBOL_COMMENT = 48,                   /* COMMENT  */
  YYSYMBOL_COMMA = 49,                     /* COMMA  */
  YYSYMBOL_YYACCEPT = 50,                  /* $accept  */
  YYSYMBOL_program = 51,                   /* program  */
  YYSYMBOL_Syntax = 52,                    /* Syntax  */
  YYSYMBOL_program2 = 53,                  /* program2  */
  YYSYMBOL_Syntax2 = 54,                   /* Syntax2  */
  YYSYMBOL_Faults = 55,                    /* Faults  */
  YYSYMBOL_decl = 56,                      /* decl  */
  YYSYMBOL_aid = 57,                       /* aid  */
  YYSYMBOL_int1 = 58,                      /* int1  */
  YYSYMBOL_float1 = 59,                    /* float1  */
  YYSYMBOL_string1 = 60,                   /* string1  */
  YYSYMBOL_aid1 = 61,                      /* aid1  */
  YYSYMBOL_int_list = 62,                  /* int_list  */
  YYSYMBOL_float_list = 63,                /* float_list  */
  YYSYMBOL_string_list = 64,               /* string_list  */
  YYSYMBOL_aid_list1 = 65,                 /* aid_list1  */
  YYSYMBOL_numbarr = 66,                   /* numbarr  */
  YYSYMBOL_scan_func = 67,                 /* scan_func  */
  YYSYMBOL_stringlen = 68,                 /* stringlen  */
  YYSYMBOL_len_func = 69,                  /* len_func  */
  YYSYMBOL_len_func2 = 70,                 /* len_func2  */
  YYSYMBOL_cmp_func = 71,                  /* cmp_func  */
  YYSYMBOL_cmp_func2 = 72,                 /* cmp_func2  */
  YYSYMBOL_print_func = 73,                /* print_func  */
  YYSYMBOL_func_name = 74,                 /* func_name  */
  YYSYMBOL_func_list = 75,                 /* func_list  */
  YYSYMBOL_func_content = 76,              /* func_content  */
  YYSYMBOL_func_func = 77,                 /* func_func  */
  YYSYMBOL_tim_list = 78,                  /* tim_list  */
  YYSYMBOL_func_call = 79,                 /* func_call  */
  YYSYMBOL_expr = 80,                      /* expr  */
  YYSYMBOL_expr_func = 81,                 /* expr_func  */
  YYSYMBOL_type = 82,                      /* type  */
  YYSYMBOL_val = 83,                       /* val  */
  YYSYMBOL_tim = 84,                       /* tim  */
  YYSYMBOL_tim2 = 85,                      /* tim2  */
  YYSYMBOL_tim_list2 = 86,                 /* tim_list2  */
  YYSYMBOL_aid_list2 = 87,                 /* aid_list2  */
  YYSYMBOL_assign = 88,                    /* assign  */
  YYSYMBOL_cmp_list = 89,                  /* cmp_list  */
  YYSYMBOL_compare = 90,                   /* compare  */
  YYSYMBOL_mergarr = 91,                   /* mergarr  */
  YYSYMBOL_if_content = 92,                /* if_content  */
  YYSYMBOL_if_func = 93,                   /* if_func  */
  YYSYMBOL_while_content = 94,             /* while_content  */
  YYSYMBOL_while_loop = 95,                /* while_loop  */
  YYSYMBOL_for_assign = 96,                /* for_assign  */
  YYSYMBOL_for_content = 97,               /* for_content  */
  YYSYMBOL_for_loop = 98                   /* for_loop  */
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
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   590

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  50
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  49
/* YYNRULES -- Number of rules.  */
#define YYNRULES  175
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  372

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   304


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
      45,    46,    47,    48,    49
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    43,    43,    44,    45,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    66,    67,    68,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    88,    89,    90,    91,    92,    93,    98,    99,   103,
     104,   105,   106,   107,   109,   110,   111,   112,   113,   114,
     115,   116,   118,   119,   120,   121,   125,   127,   131,   132,
     133,   134,   135,   136,   137,   139,   144,   145,   146,   148,
     149,   150,   154,   155,   156,   157,   158,   159,   161,   166,
     167,   168,   169,   170,   171,   173,   174,   175,   176,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   198,   199,   200,   201,   202,   203,
     205,   206,   207,   209,   210,   211,   212,   214,   215,   216,
     217,   218,   219,   220,   221,   223,   224,   229,   230,   235,
     241,   242,   243,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   269,   273,   274,   275,
     276,   280,   281,   282,   292,   296,   297,   299,   303,   304,
     306,   307,   308,   310,   311,   312
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
  "\"end of file\"", "error", "\"invalid token\"", "INTEGER", "VARIABLE",
  "FLOAT", "STRING", "SDOUBLE", "SLONG", "SSHORT", "SINT", "SFLOAT",
  "SSTRING", "ASSIGNOP", "PLUS", "MINUS", "TIMES", "DIVIDE", "PLUSPLUS",
  "OPERATOR", "EQUALTO", "NOTEQUAL", "GREATERTHANOREQUAL",
  "LESSTHANOREQUAL", "GREATERTHAN", "LESSTHAN", "IF", "WHILE", "FOR",
  "SCAN", "PRINT", "LEN", "CMP", "FUNC", "LP", "RP", "LB", "RB", "LSB",
  "RSB", "KEYWORD", "UNKNOWN", "WHITESPACE", "ENDOFFILE", "DELIMITER",
  "BNL", "TOKEN_ERROR", "NEWLINE", "COMMENT", "COMMA", "$accept",
  "program", "Syntax", "program2", "Syntax2", "Faults", "decl", "aid",
  "int1", "float1", "string1", "aid1", "int_list", "float_list",
  "string_list", "aid_list1", "numbarr", "scan_func", "stringlen",
  "len_func", "len_func2", "cmp_func", "cmp_func2", "print_func",
  "func_name", "func_list", "func_content", "func_func", "tim_list",
  "func_call", "expr", "expr_func", "type", "val", "tim", "tim2",
  "tim_list2", "aid_list2", "assign", "cmp_list", "compare", "mergarr",
  "if_content", "if_func", "while_content", "while_loop", "for_assign",
  "for_content", "for_loop", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-248)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-171)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -248,   296,  -248,   159,  -248,    38,  -248,  -248,  -248,  -248,
    -248,  -248,  -248,    71,   145,    -6,    18,    20,    21,    67,
      93,   133,   127,   495,  -248,   201,  -248,  -248,  -248,  -248,
     177,  -248,  -248,  -248,  -248,   113,  -248,   180,  -248,  -248,
    -248,   469,  -248,   203,   488,     4,  -248,   258,  -248,  -248,
    -248,  -248,  -248,  -248,  -248,  -248,  -248,  -248,  -248,  -248,
    -248,   121,   166,     7,    74,   111,   156,    64,  -248,   191,
    -248,  -248,  -248,  -248,  -248,  -248,  -248,  -248,   150,   160,
     163,   182,  -248,  -248,   115,   205,   211,  -248,  -248,   453,
     453,   453,   453,   453,   453,   453,   453,   453,   453,  -248,
    -248,    97,   173,   173,   173,   173,    76,   222,   453,   453,
     453,   453,   453,   453,  -248,  -248,   213,   500,   313,  -248,
     340,   204,   231,   110,   170,   226,   236,  -248,   224,  -248,
    -248,   232,   495,   249,    22,   257,   259,  -248,   246,  -248,
    -248,    13,   263,   277,  -248,    73,   123,   279,   299,   312,
     302,   314,   303,   334,   327,   222,   315,   322,   332,  -248,
     495,   138,   488,   333,  -248,  -248,  -248,  -248,   335,   130,
    -248,   512,   512,   512,   512,   512,   512,   512,   512,   512,
     512,   527,  -248,  -248,  -248,  -248,  -248,  -248,  -248,    89,
    -248,   384,   384,   384,   384,   384,   384,  -248,   320,   342,
     346,   348,  -248,   407,   349,   109,  -248,   339,  -248,   198,
     215,   217,   272,   357,   379,   222,   381,   382,   101,   281,
     318,   345,  -248,  -248,  -248,   203,  -248,   423,   392,   161,
     203,   396,  -248,   397,  -248,   435,  -248,   436,  -248,   391,
     410,   432,   438,  -248,  -248,  -248,   430,   527,   462,  -248,
      76,   229,   440,  -248,  -248,  -248,  -248,  -248,  -248,  -248,
    -248,  -248,  -248,  -248,  -248,  -248,  -248,  -248,  -248,  -248,
    -248,  -248,  -248,   471,  -248,   388,   472,  -248,   474,   209,
     483,   484,  -248,  -248,  -248,  -248,  -248,  -248,  -248,   169,
    -248,  -248,   429,  -248,   499,   501,   502,   503,   504,  -248,
     497,   443,  -248,   312,   314,   334,   222,   496,   498,   505,
     506,  -248,  -248,  -248,  -248,   507,  -248,   508,  -248,   509,
    -248,   407,   205,   513,   514,   510,    76,  -248,  -248,  -248,
    -248,  -248,   434,   516,  -248,   203,   439,   458,   459,   460,
    -248,  -248,  -248,  -248,  -248,  -248,  -248,   517,   138,  -248,
    -248,  -248,   193,  -248,   518,  -248,   515,   519,   520,   521,
    -248,   522,   523,   524,  -248,  -248,  -248,  -248,  -248,  -248,
    -248,  -248
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     1,    41,   120,   122,   121,   115,   116,   117,
     114,   118,   119,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    20,    44,    21,     2,     3,     5,
       0,   137,     7,     8,    10,     0,    11,     0,     9,    12,
      13,     0,    14,     0,   155,     0,     6,     0,    15,    16,
      17,    18,    19,    42,    43,    99,   101,   100,   102,   104,
     103,     0,     0,     0,     0,     0,     0,     0,    89,     0,
      50,    53,    51,    52,    54,    56,    58,    60,     0,     0,
       0,     0,    45,    46,     0,     0,     0,    69,    76,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   113,
      49,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   156,   122,     0,     0,     0,    24,
       0,    49,     0,     0,     0,     0,     0,   127,    49,   128,
      68,     0,     0,     0,     0,     0,     0,   135,     0,    68,
      75,     0,     0,     0,    79,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   120,   122,   121,   125,
       0,     0,     0,     0,   141,   123,   126,   124,     0,     0,
      95,   105,   106,   107,   108,   154,   153,   152,   151,   150,
     149,     0,    47,   109,   110,   111,   112,   130,   129,     0,
     138,   148,   147,   146,   145,   144,   143,    24,    24,     0,
       0,     0,    24,     0,     0,     0,    67,     0,    88,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    71,    70,    81,     0,    80,     0,     0,     0,
       0,     0,    55,     0,    57,     0,    59,     0,    61,     0,
       0,     0,     0,   140,   139,    98,     0,     0,     0,   142,
       0,     0,     0,    24,   163,    39,    40,    22,    23,    25,
      27,    28,    30,    31,    29,    32,    33,    26,    34,    35,
      36,    37,    38,     0,    24,     0,     0,    24,     0,     0,
       0,     0,    66,   131,   132,   133,   134,    83,    82,     0,
      85,    86,     0,   136,     0,     0,     0,     0,     0,    24,
       0,     0,    90,     0,     0,     0,     0,     0,     0,     0,
       0,    97,    96,    48,   164,     0,   167,     0,   173,     0,
      24,     0,   169,     0,     0,     0,     0,    72,    73,    74,
      78,    77,     0,     0,    24,     0,     0,     0,     0,     0,
      62,    63,    64,    65,   162,   166,   174,     0,   168,    24,
      24,    84,     0,    94,     0,    91,     0,     0,     0,     0,
     175,     0,     0,     0,    93,   157,   158,   159,   160,   171,
     172,    87
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -248,  -248,  -248,  -113,  -248,   540,   542,   -42,   395,   394,
     400,   -21,   -83,   -91,  -112,  -117,   557,   559,   -59,   565,
     511,   566,   525,   568,  -248,  -248,   237,  -248,  -248,   569,
      -1,   571,  -137,   -58,   -81,  -191,  -103,  -248,     3,   -48,
       8,   572,  -186,   573,   301,   576,  -248,  -247,   577
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     1,    27,   275,   257,   258,   259,    30,    74,    75,
      76,    31,    78,    79,    80,    81,   260,   261,   134,   262,
      35,   263,    37,   264,    69,   229,   333,    39,   169,   265,
     117,   266,    43,    44,   163,   137,   138,    45,   267,    47,
     268,   269,   252,   270,   200,   271,   281,   276,   272
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      41,   101,    77,   189,    46,   170,   199,   143,   146,    48,
     230,   121,   254,   118,   120,   212,    70,   106,    72,    73,
     211,   123,   126,   133,   142,   145,   162,   293,    61,   221,
     319,   162,   162,   162,   162,   162,   162,   162,   162,   162,
     162,   210,   122,   242,   183,   184,   185,   186,   241,   209,
     220,   -49,    62,   107,    63,    64,   -49,   214,   219,   293,
     191,   192,   193,   194,   195,   196,   124,   315,   100,   240,
     139,   215,   -49,   347,    55,    56,    57,   239,   100,   127,
     187,   129,   188,   161,   251,   251,   190,   -53,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   289,   144,
     248,    65,   361,   362,   127,   187,   129,   130,   224,   125,
     181,    77,   132,   121,   127,   128,   129,   130,   156,   157,
     158,   159,   225,   203,     4,   115,     6,    66,    85,    13,
      14,    68,   205,   249,   238,    13,    14,   132,   250,    77,
     251,   182,    20,    21,   278,   162,   131,   132,    58,    59,
      60,   160,    89,    90,    91,    92,   116,    87,   226,   292,
     100,   199,   139,   279,   335,   246,   312,    67,   298,     4,
     115,     6,   227,     4,   115,     6,     4,   115,     6,   247,
      13,    14,   243,   297,    13,    14,   332,   148,   302,   339,
      84,   140,   141,   338,    77,    85,   300,   150,    41,   149,
     152,   119,   161,    53,   325,   204,    54,   100,   280,   151,
     301,    86,   153,   337,   165,   166,   167,   159,   155,   154,
     336,   332,   321,   352,    88,   147,    71,   322,   363,  -161,
       3,   155,     4,     5,     6,   283,     7,     8,     9,    10,
      11,    12,   250,    13,    14,    82,   168,   149,    83,   164,
      41,   197,   284,   -53,   285,    15,    16,    17,    18,    19,
      20,    21,  -161,   162,   151,    23,   153,  -161,  -161,   202,
     206,   207,   255,  -130,    41,    25,   208,   256,   108,   109,
     110,   111,   112,   113,   213,    77,     7,     8,     9,    10,
      11,    12,   216,   355,   217,   218,     2,     3,   222,     4,
       5,     6,   114,     7,     8,     9,    10,    11,    12,   286,
      13,    14,   223,   231,   228,    70,   233,   235,   294,    72,
     348,   155,    15,    16,    17,    18,    19,    20,    21,    22,
     149,    41,    23,   108,   109,   110,   111,   112,   113,    24,
      73,   237,    25,     3,    26,     4,     5,     6,   198,     7,
       8,     9,    10,    11,    12,   295,    13,    14,   253,  -123,
     108,   109,   110,   111,   112,   113,  -126,   151,    15,    16,
      17,    18,    19,    20,    21,   201,  -124,   244,    23,   245,
    -165,  -165,   296,   282,   273,   255,   274,   277,    25,     3,
     256,     4,     5,     6,   153,     7,     8,     9,    10,    11,
      12,   287,    13,    14,   108,   109,   110,   111,   112,   113,
     156,   157,   158,   159,    15,    16,    17,    18,    19,    20,
      21,    13,    14,   288,    23,   290,   291,  -170,   307,   139,
     299,   255,   303,   304,    25,     3,   256,     4,     5,     6,
     149,     7,     8,     9,    10,    11,    12,   308,    13,    14,
       7,     8,     9,    10,    11,    12,     4,   115,     6,   151,
      15,    16,    17,    18,    19,    20,    21,    13,    14,   309,
      23,   305,   306,   -92,   311,   310,   356,   255,   326,   314,
      25,   153,   256,    89,    90,    91,    92,   155,   149,    93,
      94,    95,    96,    97,    98,   357,   358,   359,    70,    71,
      72,    73,   102,   103,   104,   105,   313,   151,   153,   155,
     316,   318,   320,    99,    89,    90,    91,    92,   323,   324,
      93,    94,    95,    96,    97,    98,    89,    90,    91,    92,
     165,   166,   167,   159,   327,   334,   328,   329,   330,   331,
     340,    28,   341,    29,   232,   234,   344,   345,   346,   342,
     343,   349,   350,   236,   351,   353,   360,   364,    32,   365,
      33,   369,   370,   366,   367,   368,    34,    36,   371,    38,
      40,   354,    42,    49,    50,   317,   135,    51,    52,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     136
};

static const yytype_int16 yycheck[] =
{
       1,    43,    23,   106,     1,    86,   119,    66,    67,     1,
     147,     4,   198,    61,    62,   132,     3,    13,     5,     6,
     132,    63,    64,    65,    66,    67,    84,   218,    34,   141,
     277,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,   132,    35,   160,   102,   103,   104,   105,   160,   132,
     141,    13,    34,    49,    34,    34,    18,    35,   141,   250,
     108,   109,   110,   111,   112,   113,    63,   253,     4,   160,
       6,    49,    34,   320,     3,     4,     5,   160,     4,     3,
       4,     5,     6,    84,   197,   198,   107,    49,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,   215,    35,
     181,    34,   349,   350,     3,     4,     5,     6,    35,    35,
      13,   132,    36,     4,     3,     4,     5,     6,     3,     4,
       5,     6,    49,    13,     3,     4,     5,    34,    18,    14,
      15,     4,   124,    44,   155,    14,    15,    36,    49,   160,
     253,    44,    31,    32,    35,   203,    35,    36,     3,     4,
       5,    36,    14,    15,    16,    17,    35,    44,    35,   218,
       4,   274,     6,   205,   301,    35,   247,    34,   227,     3,
       4,     5,    49,     3,     4,     5,     3,     4,     5,    49,
      14,    15,    44,   225,    14,    15,   299,    37,   230,   306,
      13,    35,    36,   305,   215,    18,    35,    37,   199,    49,
      37,    35,   203,    44,    35,    35,    47,     4,   205,    49,
      49,    34,    49,   304,     3,     4,     5,     6,    49,    37,
     303,   334,    13,   326,    44,    34,     4,    18,    35,     0,
       1,    49,     3,     4,     5,    37,     7,     8,     9,    10,
      11,    12,    49,    14,    15,    44,    35,    49,    47,    44,
     251,    38,    37,    49,    37,    26,    27,    28,    29,    30,
      31,    32,    33,   321,    49,    36,    49,    38,    39,    38,
      44,    35,    43,    49,   275,    46,    44,    48,    20,    21,
      22,    23,    24,    25,    35,   306,     7,     8,     9,    10,
      11,    12,    35,   335,    35,    49,     0,     1,    35,     3,
       4,     5,    44,     7,     8,     9,    10,    11,    12,    37,
      14,    15,    35,    14,    35,     3,    14,    14,    37,     5,
     321,    49,    26,    27,    28,    29,    30,    31,    32,    33,
      49,   332,    36,    20,    21,    22,    23,    24,    25,    43,
       6,    14,    46,     1,    48,     3,     4,     5,    35,     7,
       8,     9,    10,    11,    12,    37,    14,    15,    38,    44,
      20,    21,    22,    23,    24,    25,    44,    49,    26,    27,
      28,    29,    30,    31,    32,    35,    44,    44,    36,    44,
      38,    39,    37,    44,    38,    43,    38,    38,    46,     1,
      48,     3,     4,     5,    49,     7,     8,     9,    10,    11,
      12,    44,    14,    15,    20,    21,    22,    23,    24,    25,
       3,     4,     5,     6,    26,    27,    28,    29,    30,    31,
      32,    14,    15,    44,    36,    44,    44,    39,    37,     6,
      38,    43,    36,    36,    46,     1,    48,     3,     4,     5,
      49,     7,     8,     9,    10,    11,    12,    37,    14,    15,
       7,     8,     9,    10,    11,    12,     3,     4,     5,    49,
      26,    27,    28,    29,    30,    31,    32,    14,    15,    37,
      36,    36,    36,    39,    44,    37,    37,    43,    49,    39,
      46,    49,    48,    14,    15,    16,    17,    49,    49,    20,
      21,    22,    23,    24,    25,    37,    37,    37,     3,     4,
       5,     6,    14,    15,    16,    17,    44,    49,    49,    49,
      39,    39,    38,    44,    14,    15,    16,    17,    35,    35,
      20,    21,    22,    23,    24,    25,    14,    15,    16,    17,
       3,     4,     5,     6,    35,    38,    35,    35,    35,    35,
      44,     1,    44,     1,   149,   151,    39,    39,    39,    44,
      44,    38,    38,   153,    44,    39,    39,    39,     1,    44,
       1,    39,    39,    44,    44,    44,     1,     1,    44,     1,
       1,   334,     1,     1,     1,   274,    65,     1,     1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      65
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    51,     0,     1,     3,     4,     5,     7,     8,     9,
      10,    11,    12,    14,    15,    26,    27,    28,    29,    30,
      31,    32,    33,    36,    43,    46,    48,    52,    55,    56,
      57,    61,    66,    67,    69,    70,    71,    72,    73,    77,
      79,    80,    81,    82,    83,    87,    88,    89,    90,    91,
      93,    95,    98,    44,    47,     3,     4,     5,     3,     4,
       5,    34,    34,    34,    34,    34,    34,    34,     4,    74,
       3,     4,     5,     6,    58,    59,    60,    61,    62,    63,
      64,    65,    44,    47,    13,    18,    34,    44,    44,    14,
      15,    16,    17,    20,    21,    22,    23,    24,    25,    44,
       4,    57,    14,    15,    16,    17,    13,    49,    20,    21,
      22,    23,    24,    25,    44,     4,    35,    80,    89,    35,
      89,     4,    35,    57,    88,    35,    57,     3,     4,     5,
       6,    35,    36,    57,    68,    70,    72,    85,    86,     6,
      35,    36,    57,    68,    35,    57,    68,    34,    37,    49,
      37,    49,    37,    49,    37,    49,     3,     4,     5,     6,
      36,    80,    83,    84,    44,     3,     4,     5,    35,    78,
      84,    80,    80,    80,    80,    80,    80,    80,    80,    80,
      80,    13,    44,    83,    83,    83,    83,     4,     6,    86,
      61,    89,    89,    89,    89,    89,    89,    38,    35,    53,
      94,    35,    38,    13,    35,    90,    44,    35,    44,    62,
      63,    64,    65,    35,    35,    49,    35,    35,    49,    62,
      63,    64,    35,    35,    35,    49,    35,    49,    35,    75,
      82,    14,    58,    14,    59,    14,    60,    14,    61,    62,
      63,    64,    65,    44,    44,    44,    35,    49,    84,    44,
      49,    53,    92,    38,    92,    43,    48,    54,    55,    56,
      66,    67,    69,    71,    73,    79,    81,    88,    90,    91,
      93,    95,    98,    38,    38,    53,    97,    38,    35,    57,
      88,    96,    44,    37,    37,    37,    37,    44,    44,    65,
      44,    44,    68,    85,    37,    37,    37,    57,    68,    38,
      35,    49,    57,    36,    36,    36,    36,    37,    37,    37,
      37,    44,    84,    44,    39,    92,    39,    94,    39,    97,
      38,    13,    18,    35,    35,    35,    49,    35,    35,    35,
      35,    35,    53,    76,    38,    82,    62,    63,    64,    65,
      44,    44,    44,    44,    39,    39,    39,    97,    80,    38,
      38,    44,    86,    39,    76,    57,    37,    37,    37,    37,
      39,    97,    97,    35,    39,    44,    44,    44,    44,    39,
      39,    44
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    50,    51,    51,    51,    52,    52,    52,    52,    52,
      52,    52,    52,    52,    52,    52,    52,    52,    52,    52,
      52,    52,    53,    53,    53,    54,    54,    54,    54,    54,
      54,    54,    54,    54,    54,    54,    54,    54,    54,    54,
      54,    55,    55,    55,    55,    55,    55,    56,    56,    57,
      58,    59,    60,    61,    62,    62,    63,    63,    64,    64,
      65,    65,    66,    66,    66,    66,    67,    67,    68,    69,
      70,    70,    70,    70,    70,    70,    71,    72,    72,    72,
      72,    72,    73,    73,    73,    73,    73,    73,    73,    74,
      75,    75,    76,    77,    77,    78,    78,    79,    79,    80,
      80,    80,    80,    80,    80,    80,    80,    80,    80,    80,
      80,    80,    80,    81,    82,    82,    82,    82,    82,    82,
      83,    83,    83,    84,    84,    84,    84,    85,    85,    85,
      85,    85,    85,    85,    85,    86,    86,    87,    87,    88,
      88,    88,    88,    89,    89,    89,    89,    89,    89,    89,
      89,    89,    89,    89,    89,    89,    90,    91,    91,    91,
      91,    92,    93,    93,    93,    94,    95,    95,    96,    96,
      97,    98,    98,    98,    98,    98
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     2,     0,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     2,     0,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     2,     1,     2,     2,     3,     5,     1,
       1,     1,     1,     1,     1,     3,     1,     3,     1,     3,
       1,     3,     6,     6,     6,     6,     5,     4,     1,     2,
       4,     4,     6,     6,     6,     3,     2,     6,     6,     3,
       4,     4,     5,     5,     7,     5,     5,     9,     4,     1,
       2,     4,     1,     8,     7,     1,     3,     5,     4,     2,
       2,     2,     2,     2,     2,     3,     3,     3,     3,     3,
       3,     3,     3,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     3,     3,     3,     1,     3,     1,     3,     4,
       4,     3,     4,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     1,     2,     8,     8,     8,
       8,     1,     7,     5,     6,     1,     7,     6,     3,     2,
       1,     9,     9,     6,     7,     8
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
  case 5: /* Syntax: decl  */
#line 47 "Bison.y"
                        {CorrectSyntax++;}
#line 1478 "Bison.tab.c"
    break;

  case 6: /* Syntax: assign  */
#line 48 "Bison.y"
                        {CorrectSyntax++;}
#line 1484 "Bison.tab.c"
    break;

  case 7: /* Syntax: numbarr  */
#line 49 "Bison.y"
                        {CorrectSyntax++;}
#line 1490 "Bison.tab.c"
    break;

  case 8: /* Syntax: scan_func  */
#line 50 "Bison.y"
                        {CorrectSyntax++;}
#line 1496 "Bison.tab.c"
    break;

  case 9: /* Syntax: print_func  */
#line 51 "Bison.y"
                        {CorrectSyntax++;}
#line 1502 "Bison.tab.c"
    break;

  case 10: /* Syntax: len_func  */
#line 52 "Bison.y"
                        {CorrectSyntax++;}
#line 1508 "Bison.tab.c"
    break;

  case 11: /* Syntax: cmp_func  */
#line 53 "Bison.y"
                        {CorrectSyntax++;}
#line 1514 "Bison.tab.c"
    break;

  case 12: /* Syntax: func_func  */
#line 54 "Bison.y"
                        {CorrectSyntax++;}
#line 1520 "Bison.tab.c"
    break;

  case 13: /* Syntax: func_call  */
#line 55 "Bison.y"
                        {CorrectSyntax++;}
#line 1526 "Bison.tab.c"
    break;

  case 14: /* Syntax: expr_func  */
#line 56 "Bison.y"
                        {CorrectSyntax++;}
#line 1532 "Bison.tab.c"
    break;

  case 15: /* Syntax: compare  */
#line 57 "Bison.y"
                        {CorrectSyntax++;}
#line 1538 "Bison.tab.c"
    break;

  case 16: /* Syntax: mergarr  */
#line 58 "Bison.y"
                        {CorrectSyntax++;}
#line 1544 "Bison.tab.c"
    break;

  case 17: /* Syntax: if_func  */
#line 59 "Bison.y"
                        {CorrectSyntax++;}
#line 1550 "Bison.tab.c"
    break;

  case 18: /* Syntax: while_loop  */
#line 60 "Bison.y"
                        {CorrectSyntax++;}
#line 1556 "Bison.tab.c"
    break;

  case 19: /* Syntax: for_loop  */
#line 61 "Bison.y"
                        {CorrectSyntax++;}
#line 1562 "Bison.tab.c"
    break;

  case 20: /* Syntax: ENDOFFILE  */
#line 62 "Bison.y"
                        {TheEnd();}
#line 1568 "Bison.tab.c"
    break;

  case 25: /* Syntax2: decl  */
#line 70 "Bison.y"
                       {CorrectSyntax++;}
#line 1574 "Bison.tab.c"
    break;

  case 26: /* Syntax2: assign  */
#line 71 "Bison.y"
                       {CorrectSyntax++;}
#line 1580 "Bison.tab.c"
    break;

  case 27: /* Syntax2: numbarr  */
#line 72 "Bison.y"
                       {CorrectSyntax++;}
#line 1586 "Bison.tab.c"
    break;

  case 28: /* Syntax2: scan_func  */
#line 73 "Bison.y"
                       {CorrectSyntax++;}
#line 1592 "Bison.tab.c"
    break;

  case 29: /* Syntax2: print_func  */
#line 74 "Bison.y"
                       {CorrectSyntax++;}
#line 1598 "Bison.tab.c"
    break;

  case 30: /* Syntax2: len_func  */
#line 75 "Bison.y"
                       {CorrectSyntax++;}
#line 1604 "Bison.tab.c"
    break;

  case 31: /* Syntax2: cmp_func  */
#line 76 "Bison.y"
                       {CorrectSyntax++;}
#line 1610 "Bison.tab.c"
    break;

  case 32: /* Syntax2: func_call  */
#line 77 "Bison.y"
                       {CorrectSyntax++;}
#line 1616 "Bison.tab.c"
    break;

  case 33: /* Syntax2: expr_func  */
#line 78 "Bison.y"
                       {CorrectSyntax++;}
#line 1622 "Bison.tab.c"
    break;

  case 34: /* Syntax2: compare  */
#line 79 "Bison.y"
                       {CorrectSyntax++;}
#line 1628 "Bison.tab.c"
    break;

  case 35: /* Syntax2: mergarr  */
#line 80 "Bison.y"
                       {CorrectSyntax++;}
#line 1634 "Bison.tab.c"
    break;

  case 36: /* Syntax2: if_func  */
#line 81 "Bison.y"
                       {CorrectSyntax++;}
#line 1640 "Bison.tab.c"
    break;

  case 37: /* Syntax2: while_loop  */
#line 82 "Bison.y"
                       {CorrectSyntax++;}
#line 1646 "Bison.tab.c"
    break;

  case 38: /* Syntax2: for_loop  */
#line 83 "Bison.y"
                       {CorrectSyntax++;}
#line 1652 "Bison.tab.c"
    break;

  case 39: /* Syntax2: ENDOFFILE  */
#line 84 "Bison.y"
                       {TheEnd();}
#line 1658 "Bison.tab.c"
    break;

  case 42: /* Faults: error DELIMITER  */
#line 89 "Bison.y"
                                { yyerrok; }
#line 1664 "Bison.tab.c"
    break;

  case 43: /* Faults: error NEWLINE  */
#line 90 "Bison.y"
                                { yyerrok; }
#line 1670 "Bison.tab.c"
    break;

  case 44: /* Faults: TOKEN_ERROR  */
#line 91 "Bison.y"
                                { yyerrok; }
#line 1676 "Bison.tab.c"
    break;

  case 45: /* Faults: TOKEN_ERROR DELIMITER  */
#line 92 "Bison.y"
                                { yyerrok; }
#line 1682 "Bison.tab.c"
    break;

  case 46: /* Faults: TOKEN_ERROR NEWLINE  */
#line 93 "Bison.y"
                                { yyerrok; }
#line 1688 "Bison.tab.c"
    break;

  case 47: /* decl: type aid DELIMITER  */
#line 98 "Bison.y"
                                       { printf("\n\t### Line: %d - Declaration\n", line); }
#line 1694 "Bison.tab.c"
    break;

  case 48: /* decl: type aid ASSIGNOP tim DELIMITER  */
#line 99 "Bison.y"
                                       { printf("\n\t### Line: %d - Declaration and Assignment\n", line); }
#line 1700 "Bison.tab.c"
    break;

  case 49: /* aid: VARIABLE  */
#line 103 "Bison.y"
                   { yyval = strdup(yytext); }
#line 1706 "Bison.tab.c"
    break;

  case 50: /* int1: INTEGER  */
#line 104 "Bison.y"
                   { yyval = strdup(yytext); }
#line 1712 "Bison.tab.c"
    break;

  case 51: /* float1: FLOAT  */
#line 105 "Bison.y"
                   { yyval = strdup(yytext); }
#line 1718 "Bison.tab.c"
    break;

  case 52: /* string1: STRING  */
#line 106 "Bison.y"
                   { yyval = strdup(yytext); }
#line 1724 "Bison.tab.c"
    break;

  case 53: /* aid1: VARIABLE  */
#line 107 "Bison.y"
                   { yyval = "VARIABLE"; }
#line 1730 "Bison.tab.c"
    break;

  case 54: /* int_list: int1  */
#line 109 "Bison.y"
                   { yyval = strdup(yyvsp[0]); }
#line 1736 "Bison.tab.c"
    break;

  case 55: /* int_list: int_list COMMA int1  */
#line 110 "Bison.y"
                                  { yyval = strdup(yyvsp[-2]); }
#line 1742 "Bison.tab.c"
    break;

  case 56: /* float_list: float1  */
#line 111 "Bison.y"
                     { yyval = strdup(yyvsp[0]); }
#line 1748 "Bison.tab.c"
    break;

  case 57: /* float_list: float_list COMMA float1  */
#line 112 "Bison.y"
                                      { yyval = strdup(yyvsp[-2]); }
#line 1754 "Bison.tab.c"
    break;

  case 58: /* string_list: string1  */
#line 113 "Bison.y"
                      { yyval = strdup(yyvsp[0]); }
#line 1760 "Bison.tab.c"
    break;

  case 59: /* string_list: string_list COMMA string1  */
#line 114 "Bison.y"
                                        { yyval = strdup(yyvsp[-2]); }
#line 1766 "Bison.tab.c"
    break;

  case 60: /* aid_list1: aid1  */
#line 115 "Bison.y"
                   { yyval = strdup(yyvsp[0]); }
#line 1772 "Bison.tab.c"
    break;

  case 61: /* aid_list1: aid_list1 COMMA aid1  */
#line 116 "Bison.y"
                                   { yyval = strdup(yyvsp[-2]);}
#line 1778 "Bison.tab.c"
    break;

  case 62: /* numbarr: aid ASSIGNOP LB int_list RB DELIMITER  */
#line 118 "Bison.y"
                                                   { printf("\n\t### Line: %d - Int array Assignment\n", line); }
#line 1784 "Bison.tab.c"
    break;

  case 63: /* numbarr: aid ASSIGNOP LB float_list RB DELIMITER  */
#line 119 "Bison.y"
                                                   { printf("\n\t### Line: %d - Float array Assignment\n", line); }
#line 1790 "Bison.tab.c"
    break;

  case 64: /* numbarr: aid ASSIGNOP LB string_list RB DELIMITER  */
#line 120 "Bison.y"
                                                   { printf("\n\t### Line: %d - String array Assignment\n", line); }
#line 1796 "Bison.tab.c"
    break;

  case 65: /* numbarr: aid ASSIGNOP LB aid_list1 RB DELIMITER  */
#line 121 "Bison.y"
                                                   { LeftSide = 0; printf("\n\t### Line: %d - Variable array Assignment\n", line); }
#line 1802 "Bison.tab.c"
    break;

  case 66: /* scan_func: SCAN LP aid RP DELIMITER  */
#line 125 "Bison.y"
                                     { printf("\n\t### Line: %d - Scan function\n", line); }
#line 1808 "Bison.tab.c"
    break;

  case 67: /* scan_func: SCAN LP RP DELIMITER  */
#line 127 "Bison.y"
                                     { PrintWarningS("Scan Empty"); SyntaxWarnings++; }
#line 1814 "Bison.tab.c"
    break;

  case 68: /* stringlen: STRING  */
#line 131 "Bison.y"
                   { yyval = strdup(yytext);  }
#line 1820 "Bison.tab.c"
    break;

  case 70: /* len_func2: LEN LP stringlen RP  */
#line 133 "Bison.y"
                                              { printf("\n\t### Line: %d - String Length\n", line); }
#line 1826 "Bison.tab.c"
    break;

  case 71: /* len_func2: LEN LP aid RP  */
#line 134 "Bison.y"
                                              { printf("\n\t### Line: %d - Variable Length\n", line); }
#line 1832 "Bison.tab.c"
    break;

  case 72: /* len_func2: LEN LP LB int_list RB RP  */
#line 135 "Bison.y"
                                              { printf("\n\t### Line: %d - Int array Length\n", line); }
#line 1838 "Bison.tab.c"
    break;

  case 73: /* len_func2: LEN LP LB float_list RB RP  */
#line 136 "Bison.y"
                                              { printf("\n\t### Line: %d - Float array Length\n", line); }
#line 1844 "Bison.tab.c"
    break;

  case 74: /* len_func2: LEN LP LB string_list RB RP  */
#line 137 "Bison.y"
                                              { printf("\n\t### Line: %d - String array Length\n", line); }
#line 1850 "Bison.tab.c"
    break;

  case 75: /* len_func2: LEN LP RP  */
#line 139 "Bison.y"
                                              { PrintWarningS("Empty Len"); SyntaxWarnings++;}
#line 1856 "Bison.tab.c"
    break;

  case 77: /* cmp_func2: CMP LP stringlen COMMA stringlen RP  */
#line 145 "Bison.y"
                                                 { printf("\n\t### Line: %d - Strings comparison\n", line); }
#line 1862 "Bison.tab.c"
    break;

  case 78: /* cmp_func2: CMP LP aid COMMA aid RP  */
#line 146 "Bison.y"
                                                 { printf("\n\t### Line: %d - Variables comparison\n", line); }
#line 1868 "Bison.tab.c"
    break;

  case 79: /* cmp_func2: CMP LP RP  */
#line 148 "Bison.y"
                                                 { PrintWarningS("Empty Cmp"); SyntaxWarnings++;}
#line 1874 "Bison.tab.c"
    break;

  case 80: /* cmp_func2: CMP LP stringlen RP  */
#line 149 "Bison.y"
                                                 { PrintWarningS("Invalid Number of Parameters for Cmp"); SyntaxWarnings++;}
#line 1880 "Bison.tab.c"
    break;

  case 81: /* cmp_func2: CMP LP aid RP  */
#line 150 "Bison.y"
                                                 { PrintWarningS("Invalid Number of Parameters for Cmp"); SyntaxWarnings++;}
#line 1886 "Bison.tab.c"
    break;

  case 82: /* print_func: PRINT LP stringlen RP DELIMITER  */
#line 154 "Bison.y"
                                                             { printf("\n\t### Line: %d - String print\n", line); }
#line 1892 "Bison.tab.c"
    break;

  case 83: /* print_func: PRINT LP aid RP DELIMITER  */
#line 155 "Bison.y"
                                                             { printf("\n\t### Line: %d - Variable print\n", line); }
#line 1898 "Bison.tab.c"
    break;

  case 84: /* print_func: PRINT LP stringlen COMMA aid_list1 RP DELIMITER  */
#line 156 "Bison.y"
                                                             { printf("\n\t### Line: %d - String with variable print\n", line); }
#line 1904 "Bison.tab.c"
    break;

  case 85: /* print_func: PRINT LP len_func2 RP DELIMITER  */
#line 157 "Bison.y"
                                                             { printf("\n\t### Line: %d - Len print\n", line); }
#line 1910 "Bison.tab.c"
    break;

  case 86: /* print_func: PRINT LP cmp_func2 RP DELIMITER  */
#line 158 "Bison.y"
                                                             { printf("\n\t### Line: %d - Cmp print\n", line); }
#line 1916 "Bison.tab.c"
    break;

  case 87: /* print_func: PRINT LP tim_list2 COMMA stringlen COMMA tim_list2 RP DELIMITER  */
#line 159 "Bison.y"
                                                                             { printf("\n\t### Line: %d - Variable, String and Value print\n", line); }
#line 1922 "Bison.tab.c"
    break;

  case 88: /* print_func: PRINT LP RP DELIMITER  */
#line 161 "Bison.y"
                                                             { PrintWarningS("Empty Print"); SyntaxWarnings++;}
#line 1928 "Bison.tab.c"
    break;

  case 89: /* func_name: VARIABLE  */
#line 166 "Bison.y"
                        { yyval = strdup(yytext); }
#line 1934 "Bison.tab.c"
    break;

  case 90: /* func_list: type aid  */
#line 167 "Bison.y"
                        { yyval = strdup(yyvsp[-1]); }
#line 1940 "Bison.tab.c"
    break;

  case 91: /* func_list: func_list COMMA type aid  */
#line 168 "Bison.y"
                                        { yyval = strdup(yyvsp[-3]); }
#line 1946 "Bison.tab.c"
    break;

  case 93: /* func_func: FUNC func_name LP func_list RP LSB func_content RSB  */
#line 170 "Bison.y"
                                                                   { printf("\n\t### Line: %d - Function\n", line); }
#line 1952 "Bison.tab.c"
    break;

  case 94: /* func_func: FUNC func_name LP RP LSB func_content RSB  */
#line 171 "Bison.y"
                                                                   { printf("\n\t### Line: %d - Function\n", line); }
#line 1958 "Bison.tab.c"
    break;

  case 95: /* tim_list: tim  */
#line 173 "Bison.y"
               { yyval = strdup(yyvsp[0]); }
#line 1964 "Bison.tab.c"
    break;

  case 96: /* tim_list: tim_list COMMA tim  */
#line 174 "Bison.y"
                              { yyval = strdup(yyvsp[-2]); }
#line 1970 "Bison.tab.c"
    break;

  case 97: /* func_call: aid LP tim_list RP DELIMITER  */
#line 175 "Bison.y"
                                         { printf("\n\t### Line: %d - Function call\n", line); }
#line 1976 "Bison.tab.c"
    break;

  case 98: /* func_call: aid LP RP DELIMITER  */
#line 176 "Bison.y"
                                         { printf("\n\t### Line: %d - Function call\n", line); }
#line 1982 "Bison.tab.c"
    break;

  case 113: /* expr_func: expr DELIMITER  */
#line 194 "Bison.y"
                           { printf("\n\t### Line: %d - Expression\n", line); }
#line 1988 "Bison.tab.c"
    break;

  case 114: /* type: SINT  */
#line 198 "Bison.y"
                   { yyval = strdup(yytext); }
#line 1994 "Bison.tab.c"
    break;

  case 115: /* type: SDOUBLE  */
#line 199 "Bison.y"
                   { yyval = strdup(yytext); }
#line 2000 "Bison.tab.c"
    break;

  case 116: /* type: SLONG  */
#line 200 "Bison.y"
                   { yyval = strdup(yytext); }
#line 2006 "Bison.tab.c"
    break;

  case 117: /* type: SSHORT  */
#line 201 "Bison.y"
                   { yyval = strdup(yytext); }
#line 2012 "Bison.tab.c"
    break;

  case 118: /* type: SFLOAT  */
#line 202 "Bison.y"
                   { yyval = strdup(yytext); }
#line 2018 "Bison.tab.c"
    break;

  case 119: /* type: SSTRING  */
#line 203 "Bison.y"
                   { yyval = strdup(yytext); }
#line 2024 "Bison.tab.c"
    break;

  case 120: /* val: INTEGER  */
#line 205 "Bison.y"
                   { yyval = "SINT"; }
#line 2030 "Bison.tab.c"
    break;

  case 121: /* val: FLOAT  */
#line 206 "Bison.y"
                   { yyval = "SFLOAT"; }
#line 2036 "Bison.tab.c"
    break;

  case 122: /* val: VARIABLE  */
#line 207 "Bison.y"
                   { yyval = strdup(yytext); }
#line 2042 "Bison.tab.c"
    break;

  case 123: /* tim: INTEGER  */
#line 209 "Bison.y"
                   { yyval = "SINT"; }
#line 2048 "Bison.tab.c"
    break;

  case 124: /* tim: FLOAT  */
#line 210 "Bison.y"
                   { yyval = "SFLOAT"; }
#line 2054 "Bison.tab.c"
    break;

  case 125: /* tim: STRING  */
#line 211 "Bison.y"
                   { yyval = "SSTRING"; }
#line 2060 "Bison.tab.c"
    break;

  case 126: /* tim: VARIABLE  */
#line 212 "Bison.y"
                   { yyval = strdup(yytext); }
#line 2066 "Bison.tab.c"
    break;

  case 127: /* tim2: INTEGER  */
#line 214 "Bison.y"
                            { yyval = "SINT"; }
#line 2072 "Bison.tab.c"
    break;

  case 128: /* tim2: FLOAT  */
#line 215 "Bison.y"
                            { yyval = "SFLOAT"; }
#line 2078 "Bison.tab.c"
    break;

  case 129: /* tim2: STRING  */
#line 216 "Bison.y"
                            { yyval = "SSTRING"; }
#line 2084 "Bison.tab.c"
    break;

  case 130: /* tim2: VARIABLE  */
#line 217 "Bison.y"
                            { yyval = strdup(yytext); }
#line 2090 "Bison.tab.c"
    break;

  case 131: /* tim2: LB int_list RB  */
#line 218 "Bison.y"
                            { yyval = strdup(yytext); }
#line 2096 "Bison.tab.c"
    break;

  case 132: /* tim2: LB float_list RB  */
#line 219 "Bison.y"
                            { yyval = strdup(yytext); }
#line 2102 "Bison.tab.c"
    break;

  case 133: /* tim2: LB string_list RB  */
#line 220 "Bison.y"
                            { yyval = strdup(yytext); }
#line 2108 "Bison.tab.c"
    break;

  case 134: /* tim2: LB aid_list1 RB  */
#line 221 "Bison.y"
                            { yyval = strdup(yytext); }
#line 2114 "Bison.tab.c"
    break;

  case 135: /* tim_list2: tim2  */
#line 223 "Bison.y"
                 { yyval = strdup(yyvsp[0]); }
#line 2120 "Bison.tab.c"
    break;

  case 136: /* tim_list2: tim_list2 COMMA tim2  */
#line 224 "Bison.y"
                                { 
                RightSide++;
                yyval = strdup(yyvsp[-2]);
         }
#line 2129 "Bison.tab.c"
    break;

  case 137: /* aid_list2: aid1  */
#line 229 "Bison.y"
                 { yyval = strdup(yyvsp[0]); }
#line 2135 "Bison.tab.c"
    break;

  case 138: /* aid_list2: aid_list2 COMMA aid1  */
#line 230 "Bison.y"
                                 { 
                LeftSide++;
                yyval = strdup(yyvsp[-2]);
          }
#line 2144 "Bison.tab.c"
    break;

  case 139: /* assign: aid ASSIGNOP tim DELIMITER  */
#line 235 "Bison.y"
                                     {
		if (!strcmp(yyvsp[-1], "SINT"))         { printf("\n\t### Line: %d - Int value assignment\n", line); }
                else if (!strcmp(yyvsp[-1], "SFLOAT"))  { printf("\n\t### Line: %d - Float value assignment\n", line); }
                else if (!strcmp(yyvsp[-1], "SSTRING")) { printf("\n\t### Line: %d - String value assignment\n", line); }
		else                             { printf("\n\t### Line: %d - Variable assignment\n", line); }
	}
#line 2155 "Bison.tab.c"
    break;

  case 140: /* assign: aid ASSIGNOP expr DELIMITER  */
#line 241 "Bison.y"
                                      { printf("\n\t### Line: %d - Expression assignment\n", line); }
#line 2161 "Bison.tab.c"
    break;

  case 141: /* assign: aid PLUSPLUS DELIMITER  */
#line 242 "Bison.y"
                                      { printf("\n\t### Line: %d - Counter assignment\n", line); }
#line 2167 "Bison.tab.c"
    break;

  case 142: /* assign: aid_list2 ASSIGNOP tim_list2 DELIMITER  */
#line 243 "Bison.y"
                                                 { 
                yyerrok;
                printf("\n\t### Line: %d - MultiExpression assignment\n", line);
                if ( LeftSide != RightSide ) {
                        SyntaxErrorCount++;
                        printf("\nError: syntax error");
                }
                LeftSide = 0; RightSide = 0;
        }
#line 2181 "Bison.tab.c"
    break;

  case 156: /* compare: cmp_list DELIMITER  */
#line 269 "Bison.y"
                            { printf("\n\t### Line: %d - Comparison\n", line); }
#line 2187 "Bison.tab.c"
    break;

  case 157: /* mergarr: LB int_list RB PLUS LB int_list RB DELIMITER  */
#line 273 "Bison.y"
                                                             { printf("\n\t### Line: %d - Int array merge\n", line); }
#line 2193 "Bison.tab.c"
    break;

  case 158: /* mergarr: LB float_list RB PLUS LB float_list RB DELIMITER  */
#line 274 "Bison.y"
                                                             { printf("\n\t### Line: %d - Float array merge\n", line); }
#line 2199 "Bison.tab.c"
    break;

  case 159: /* mergarr: LB string_list RB PLUS LB string_list RB DELIMITER  */
#line 275 "Bison.y"
                                                             { printf("\n\t### Line: %d - String array merge\n", line); }
#line 2205 "Bison.tab.c"
    break;

  case 160: /* mergarr: LB aid_list1 RB PLUS LB aid_list1 RB DELIMITER  */
#line 276 "Bison.y"
                                                             { printf("\n\t### Line: %d - Variable array merge\n", line); }
#line 2211 "Bison.tab.c"
    break;

  case 161: /* if_content: program2  */
#line 280 "Bison.y"
                      { content_counter++; }
#line 2217 "Bison.tab.c"
    break;

  case 162: /* if_func: IF LP cmp_list RP LSB if_content RSB  */
#line 281 "Bison.y"
                                               { printf("\n\t### Line: %d - If function\n", line); }
#line 2223 "Bison.tab.c"
    break;

  case 163: /* if_func: IF LP cmp_list RP if_content  */
#line 283 "Bison.y"
        {
                printf("\n\t### Line: %d - If function\n", line);
                if ( content_counter > 1 ) {
                        printf("\nError: syntax error");
                        return 0;
                }
                content_counter = 0;
        }
#line 2236 "Bison.tab.c"
    break;

  case 164: /* if_func: IF LP RP LSB if_content RSB  */
#line 292 "Bison.y"
                                      { PrintWarningS("If Empty"); SyntaxWarnings++;}
#line 2242 "Bison.tab.c"
    break;

  case 166: /* while_loop: WHILE LP cmp_list RP LSB while_content RSB  */
#line 297 "Bison.y"
                                                        { printf("\n\t### Line: %d - While loop\n", line); }
#line 2248 "Bison.tab.c"
    break;

  case 167: /* while_loop: WHILE LP RP while_content LSB RSB  */
#line 299 "Bison.y"
                                            { PrintWarningS("While Empty"); SyntaxWarnings++;}
#line 2254 "Bison.tab.c"
    break;

  case 168: /* for_assign: aid ASSIGNOP expr  */
#line 303 "Bison.y"
                               { printf("\n\t### Line: %d - For loop expression assignment\n", line); }
#line 2260 "Bison.tab.c"
    break;

  case 169: /* for_assign: aid PLUSPLUS  */
#line 304 "Bison.y"
                               { printf("\n\t### Line: %d - For loop expression assignment\n", line); }
#line 2266 "Bison.tab.c"
    break;

  case 171: /* for_loop: FOR LP assign compare assign RP LSB for_content RSB  */
#line 307 "Bison.y"
                                                                   { printf("\n\t### Line: %d - For loop\n", line); }
#line 2272 "Bison.tab.c"
    break;

  case 172: /* for_loop: FOR LP assign compare for_assign RP LSB for_content RSB  */
#line 308 "Bison.y"
                                                                   { printf("\n\t### Line: %d - For loop\n", line); }
#line 2278 "Bison.tab.c"
    break;

  case 173: /* for_loop: FOR LP RP LSB for_content RSB  */
#line 310 "Bison.y"
                                                       { PrintWarningS("For Empty"); SyntaxWarnings++;}
#line 2284 "Bison.tab.c"
    break;

  case 174: /* for_loop: FOR LP assign RP LSB for_content RSB  */
#line 311 "Bison.y"
                                                       { PrintWarningS("For Syntax"); SyntaxWarnings++;}
#line 2290 "Bison.tab.c"
    break;

  case 175: /* for_loop: FOR LP assign compare RP LSB for_content RSB  */
#line 312 "Bison.y"
                                                       { PrintWarningS("For Syntax"); SyntaxWarnings++;}
#line 2296 "Bison.tab.c"
    break;


#line 2300 "Bison.tab.c"

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

#line 313 "Bison.y"

/* End Of Syntax Rules */
/* ====================================================================== */

/* Main C code */
/* ====================================================================== */
/* Main function for opening Files and parsing */
/* Using yyparse() to start the Syntax analyzer */
int main(int argc,char **argv){
	int i;
	if(argc == 2)
		yyin=fopen(argv[1],"r");
	else
		yyin=stdin;
	yyparse();
	return 0;
}

/* Syntax warning printing function */
void PrintWarningS (char* s){
    printf("\tWarning line %d, %s\n",line, s);
    return;
}

/* Ending Funtion */
/* Stopping the program properly when the end of file has been reached or */
/* stoping the program immediately once encoutering a fatal error */
void TheEnd(){
        printf("==========================================\n");
        printf("CORRECT WORDS: %d\t\t\t\t\t\t||\n", CorrectWords);
        printf("CORRECT SYNTAX: %d\t\t\t\t\t\t||\n", CorrectSyntax);
        printf("WORD ERRORS: %d\t\t\t\t\t\t\t||\n", WordErrors); 
        printf("SYNTAX ERRORS: %d\t\t\t\t\t\t||\n", SyntaxErrorCount);  
        printf("----------------------------------------||\n");
        printf("WORD WARNINGS: %d\t\t\t\t\t\t||\n", WordWarnings); 
        printf("SYNTAX WARNINGS: %d\t\t\t\t\t\t||\n", SyntaxWarnings); 
        printf("==========================================\n");
        if (WordErrors==0 && SyntaxErrorCount==0 && FatalError==0){
                printf("PARSING SUCCEEDED.\n");
        } else {
                printf("PARSING FAILED.\n");
        }
        exit(0);
} 

/* Error printing Function */
/* Modifying yyerror */
void yyerror(char *s) {
        printf("Error: %s\n", s);
        SyntaxErrorCount++;
}

/* End of C Main Code */
/* ====================================================================== */
