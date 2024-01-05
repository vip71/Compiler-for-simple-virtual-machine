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
#line 1 "parser.y"

#include <stdio.h>
#include "myInstructions.hh"
#include "map.h"
#include "heap.h"
#include "map_heap.h"
#include "handlers.h"
#include "strings.h"
int yylex( void );
extern void yyerror(const char*);

struct Map* result_code_func_map;
struct MapHeap variables;
FILE *file;
int result_code_next_line = 0;
int procedure_variables = 0;
int procedures_declared = 0;
char * current_parsed_proc;
struct Map* current_references;
struct Heap* repeat_until_jumps;
struct Heap* while_repeat_jumps;
struct Heap* while_skip_jumps;
struct Heap* true_if_jumps;
struct Heap* false_if_jumps;
char expression_char;

#line 98 "parser.tab.c"

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

#include "parser.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_PROCEDURE_T = 3,                /* PROCEDURE_T  */
  YYSYMBOL_PROGRAM_T = 4,                  /* PROGRAM_T  */
  YYSYMBOL_IS_T = 5,                       /* IS_T  */
  YYSYMBOL_IN_T = 6,                       /* IN_T  */
  YYSYMBOL_END_T = 7,                      /* END_T  */
  YYSYMBOL_IF_T = 8,                       /* IF_T  */
  YYSYMBOL_THEN_T = 9,                     /* THEN_T  */
  YYSYMBOL_ELSE_T = 10,                    /* ELSE_T  */
  YYSYMBOL_ENDIF_T = 11,                   /* ENDIF_T  */
  YYSYMBOL_REPEAT_T = 12,                  /* REPEAT_T  */
  YYSYMBOL_UNTIL_T = 13,                   /* UNTIL_T  */
  YYSYMBOL_DO_T = 14,                      /* DO_T  */
  YYSYMBOL_WHILE_T = 15,                   /* WHILE_T  */
  YYSYMBOL_ENDWHILE_T = 16,                /* ENDWHILE_T  */
  YYSYMBOL_ASSIGN_T = 17,                  /* ASSIGN_T  */
  YYSYMBOL_NEQ_T = 18,                     /* NEQ_T  */
  YYSYMBOL_GT_T = 19,                      /* GT_T  */
  YYSYMBOL_LT_T = 20,                      /* LT_T  */
  YYSYMBOL_READ_T = 21,                    /* READ_T  */
  YYSYMBOL_WRITE_T = 22,                   /* WRITE_T  */
  YYSYMBOL_TABLE_T = 23,                   /* TABLE_T  */
  YYSYMBOL_ID_T = 24,                      /* ID_T  */
  YYSYMBOL_NUM_T = 25,                     /* NUM_T  */
  YYSYMBOL_26_ = 26,                       /* ';'  */
  YYSYMBOL_27_ = 27,                       /* '('  */
  YYSYMBOL_28_ = 28,                       /* ')'  */
  YYSYMBOL_29_ = 29,                       /* ','  */
  YYSYMBOL_30_ = 30,                       /* '['  */
  YYSYMBOL_31_ = 31,                       /* ']'  */
  YYSYMBOL_32_ = 32,                       /* '+'  */
  YYSYMBOL_33_ = 33,                       /* '-'  */
  YYSYMBOL_34_ = 34,                       /* '*'  */
  YYSYMBOL_35_ = 35,                       /* '/'  */
  YYSYMBOL_36_ = 36,                       /* '%'  */
  YYSYMBOL_37_ = 37,                       /* '='  */
  YYSYMBOL_38_ = 38,                       /* '>'  */
  YYSYMBOL_39_ = 39,                       /* '<'  */
  YYSYMBOL_YYACCEPT = 40,                  /* $accept  */
  YYSYMBOL_expression = 41,                /* expression  */
  YYSYMBOL_program_all = 42,               /* program_all  */
  YYSYMBOL_43_1 = 43,                      /* $@1  */
  YYSYMBOL_procedures = 44,                /* procedures  */
  YYSYMBOL_45_2 = 45,                      /* $@2  */
  YYSYMBOL_46_3 = 46,                      /* $@3  */
  YYSYMBOL_main = 47,                      /* main  */
  YYSYMBOL_48_4 = 48,                      /* $@4  */
  YYSYMBOL_49_5 = 49,                      /* $@5  */
  YYSYMBOL_50_6 = 50,                      /* $@6  */
  YYSYMBOL_commands = 51,                  /* commands  */
  YYSYMBOL_command = 52,                   /* command  */
  YYSYMBOL_53_7 = 53,                      /* $@7  */
  YYSYMBOL_54_8 = 54,                      /* $@8  */
  YYSYMBOL_55_9 = 55,                      /* $@9  */
  YYSYMBOL_56_10 = 56,                     /* $@10  */
  YYSYMBOL_57_11 = 57,                     /* $@11  */
  YYSYMBOL_endif = 58,                     /* endif  */
  YYSYMBOL_59_12 = 59,                     /* $@12  */
  YYSYMBOL_proc_head = 60,                 /* proc_head  */
  YYSYMBOL_61_13 = 61,                     /* $@13  */
  YYSYMBOL_proc_call = 62,                 /* proc_call  */
  YYSYMBOL_declarations = 63,              /* declarations  */
  YYSYMBOL_args_decl = 64,                 /* args_decl  */
  YYSYMBOL_args = 65,                      /* args  */
  YYSYMBOL_66_14 = 66,                     /* $@14  */
  YYSYMBOL_67_15 = 67,                     /* $@15  */
  YYSYMBOL_condition = 68,                 /* condition  */
  YYSYMBOL_69_16 = 69,                     /* $@16  */
  YYSYMBOL_70_17 = 70,                     /* $@17  */
  YYSYMBOL_71_18 = 71,                     /* $@18  */
  YYSYMBOL_72_19 = 72,                     /* $@19  */
  YYSYMBOL_73_20 = 73,                     /* $@20  */
  YYSYMBOL_74_21 = 74,                     /* $@21  */
  YYSYMBOL_value = 75,                     /* value  */
  YYSYMBOL_identifier = 76                 /* identifier  */
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
typedef yytype_uint8 yy_state_t;

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
#define YYFINAL  9
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   198

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  40
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  37
/* YYNRULES -- Number of rules.  */
#define YYNRULES  69
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  138

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   280


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
       2,     2,     2,     2,     2,     2,     2,    36,     2,     2,
      27,    28,    34,    32,    29,    33,     2,    35,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    26,
      39,    37,    38,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    30,     2,    31,     2,     2,     2,     2,     2,     2,
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
      25
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    66,    66,    68,    68,    70,    70,    72,    72,    74,
      76,    76,    76,    78,    78,    81,    82,    84,    84,    85,
      85,    86,    86,    86,    87,    87,    88,    89,    90,    92,
      92,    95,    98,    98,   100,   102,   103,   104,   105,   107,
     108,   109,   110,   112,   113,   115,   116,   116,   117,   117,
     118,   119,   120,   122,   122,   123,   123,   124,   124,   125,
     125,   126,   126,   127,   127,   129,   130,   133,   134,   135
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
  "\"end of file\"", "error", "\"invalid token\"", "PROCEDURE_T",
  "PROGRAM_T", "IS_T", "IN_T", "END_T", "IF_T", "THEN_T", "ELSE_T",
  "ENDIF_T", "REPEAT_T", "UNTIL_T", "DO_T", "WHILE_T", "ENDWHILE_T",
  "ASSIGN_T", "NEQ_T", "GT_T", "LT_T", "READ_T", "WRITE_T", "TABLE_T",
  "ID_T", "NUM_T", "';'", "'('", "')'", "','", "'['", "']'", "'+'", "'-'",
  "'*'", "'/'", "'%'", "'='", "'>'", "'<'", "$accept", "expression",
  "program_all", "$@1", "procedures", "$@2", "$@3", "main", "$@4", "$@5",
  "$@6", "commands", "command", "$@7", "$@8", "$@9", "$@10", "$@11",
  "endif", "$@12", "proc_head", "$@13", "proc_call", "declarations",
  "args_decl", "args", "$@14", "$@15", "condition", "$@16", "$@17", "$@18",
  "$@19", "$@20", "$@21", "value", "identifier", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-74)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-14)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -17,   -26,   -74,    17,   -74,    31,   162,   -74,   -14,   -74,
     -11,    32,   -74,   -74,   -17,   -17,   -17,    14,    19,   -74,
      48,    55,   -74,   -17,   -17,   -74,   -74,   -74,   -74,   -74,
      34,    38,    61,   -74,   -74,    -2,    39,    65,    43,    38,
      67,    50,   -74,     3,    52,   169,    57,    76,    43,   169,
     -74,   -74,    16,    53,   -17,   -74,   -74,    71,   -17,   -24,
      44,   -74,    72,    74,    69,   169,    91,    68,    77,   -74,
     -74,    93,    10,   169,   -17,    78,    87,    79,   -74,   -74,
     -74,   -74,    89,   104,   169,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   138,   101,   -74,   -74,   -74,    13,
     -17,    86,   -74,   115,   169,   -17,   -17,   -17,   -17,   -17,
     -17,   -17,   -74,   -74,    94,    95,   -74,   -74,   123,   -74,
     -74,   -74,   -74,   -74,   -74,    98,   169,   -74,   -74,   -74,
     -74,   -74,   -74,   149,   169,   -74,   164,   -74
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       9,    67,    65,     0,     2,     3,    45,    66,     0,     1,
       0,     0,    46,    48,     0,     0,     0,     0,     0,    32,
       0,     0,     4,     0,     0,    50,    51,    52,    69,    68,
       0,     7,    10,    47,    49,     0,    37,     0,     5,     0,
       0,     0,    41,     0,     0,     0,     0,     0,    11,     0,
      42,    33,     0,     0,     0,    24,    21,     0,     0,    67,
       0,    16,     0,     0,    35,     0,     0,     0,     0,    39,
      38,     0,     0,     0,     0,     0,     0,     0,     8,    15,
      26,    17,     0,     0,     0,    14,    40,    19,    55,    63,
      61,    53,    57,    59,     0,     0,    27,    28,    44,     0,
       9,     0,     6,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    22,    34,     0,     0,    36,    12,     0,    56,
      64,    62,    54,    58,    60,     0,     0,    43,    18,    29,
      31,    20,    25,     0,     0,    23,     0,    30
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -74,    20,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -47,   -48,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,    90,   -74,   -74,   -74,   -74,   -73,   -74,
     -74,   -74,   -74,   -74,   -74,     0,   -40
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     3,     4,    11,     5,    47,    37,    22,    39,    66,
      40,    60,    61,   100,   104,    74,   126,    73,   131,   134,
      20,    30,    62,    38,    43,    99,    23,    24,    71,   108,
     105,   109,   110,   107,   106,    72,     7
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       6,    95,    67,    77,     8,    63,     8,     1,     2,    63,
      17,    18,    79,    19,    25,    26,    27,     9,    83,    79,
      63,    41,    42,    33,    34,    63,    94,    63,    88,    89,
      90,    51,    52,    63,    10,    79,    21,   103,   125,    68,
      69,   113,   114,    63,    63,    28,    79,    91,    92,    93,
      29,    78,    54,    31,    63,    79,    55,   118,    76,    56,
      32,    35,    36,    63,    63,    57,    58,   -13,    59,    44,
      79,    45,    46,    49,    50,    85,    54,    53,    63,   133,
      55,    64,    65,    56,    70,    79,    63,   136,    79,    57,
      58,    81,    59,    63,    63,    75,    63,    84,    80,    82,
       6,    86,    87,    98,    96,   119,   120,   121,   122,   123,
     124,   102,    54,    97,   101,   112,    55,   116,   127,    56,
     115,   128,   117,    54,   132,    57,    58,    55,    59,    48,
      56,    54,     0,   129,   130,    55,    57,    58,    56,    59,
       0,     0,     0,     0,    57,    58,    54,    59,     0,     0,
      55,   111,     0,    56,     0,     0,     0,    54,     0,    57,
      58,    55,    59,     0,    56,   135,     0,     0,     0,     0,
      57,    58,    54,    59,     0,   137,    55,    54,     0,    56,
       0,    55,     0,     0,    56,    57,    58,     0,    59,     0,
      57,    58,     0,    59,    12,    13,    14,    15,    16
};

static const yytype_int16 yycheck[] =
{
       0,    74,    49,    27,    30,    45,    30,    24,    25,    49,
      24,    25,    60,    24,    14,    15,    16,     0,    65,    67,
      60,    23,    24,    23,    24,    65,    73,    67,    18,    19,
      20,    28,    29,    73,     3,    83,     4,    84,   111,    23,
      24,    28,    29,    83,    84,    31,    94,    37,    38,    39,
      31,     7,     8,     5,    94,   103,    12,   104,    58,    15,
       5,    27,    24,   103,   104,    21,    22,     6,    24,    30,
     118,     6,    29,     6,    24,     7,     8,    25,   118,   126,
      12,    24,     6,    15,    31,   133,   126,   134,   136,    21,
      22,    17,    24,   133,   134,    24,   136,     6,    26,    30,
     100,    24,     9,    24,    26,   105,   106,   107,   108,   109,
     110,     7,     8,    26,    25,    14,    12,    31,    24,    15,
     100,    26,     7,     8,    26,    21,    22,    12,    24,    39,
      15,     8,    -1,    10,    11,    12,    21,    22,    15,    24,
      -1,    -1,    -1,    -1,    21,    22,     8,    24,    -1,    -1,
      12,    13,    -1,    15,    -1,    -1,    -1,     8,    -1,    21,
      22,    12,    24,    -1,    15,    16,    -1,    -1,    -1,    -1,
      21,    22,     8,    24,    -1,    11,    12,     8,    -1,    15,
      -1,    12,    -1,    -1,    15,    21,    22,    -1,    24,    -1,
      21,    22,    -1,    24,    32,    33,    34,    35,    36
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    24,    25,    41,    42,    44,    75,    76,    30,     0,
       3,    43,    32,    33,    34,    35,    36,    24,    25,    24,
      60,     4,    47,    66,    67,    75,    75,    75,    31,    31,
      61,     5,     5,    75,    75,    27,    24,    46,    63,    48,
      50,    23,    24,    64,    30,     6,    29,    45,    63,     6,
      24,    28,    29,    25,     8,    12,    15,    21,    22,    24,
      51,    52,    62,    76,    24,     6,    49,    51,    23,    24,
      31,    68,    75,    57,    55,    24,    75,    27,     7,    52,
      26,    17,    30,    51,     6,     7,    24,     9,    18,    19,
      20,    37,    38,    39,    51,    68,    26,    26,    24,    65,
      53,    25,     7,    51,    54,    70,    74,    73,    69,    71,
      72,    13,    14,    28,    29,    41,    31,     7,    51,    75,
      75,    75,    75,    75,    75,    68,    56,    24,    26,    10,
      11,    58,    26,    51,    59,    16,    51,    11
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    40,    41,    43,    42,    45,    44,    46,    44,    44,
      48,    49,    47,    50,    47,    51,    51,    53,    52,    54,
      52,    55,    56,    52,    57,    52,    52,    52,    52,    59,
      58,    58,    61,    60,    62,    63,    63,    63,    63,    64,
      64,    64,    64,    65,    65,    41,    66,    41,    67,    41,
      41,    41,    41,    69,    68,    70,    68,    71,    68,    72,
      68,    73,    68,    74,    68,    75,    75,    76,    76,    76
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     3,     0,     9,     0,     8,     0,
       0,     0,     8,     0,     6,     2,     1,     0,     5,     0,
       6,     0,     0,     7,     0,     6,     2,     3,     3,     0,
       4,     1,     0,     5,     4,     3,     6,     1,     4,     3,
       4,     1,     2,     3,     1,     1,     0,     4,     0,     4,
       3,     3,     3,     0,     4,     0,     4,     0,     4,     0,
       4,     0,     4,     0,     4,     1,     1,     1,     4,     4
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
  case 3: /* $@1: %empty  */
#line 68 "parser.y"
                         {prepend_to_file(file,concat(right_padding(append_int_to_string("JUMP ",result_code_next_line),20),"\n"));}
#line 1260 "parser.tab.c"
    break;

  case 5: /* $@2: %empty  */
#line 70 "parser.y"
                                                                 {handle_declarations(&variables, &procedure_variables, &procedures_declared);}
#line 1266 "parser.tab.c"
    break;

  case 6: /* procedures: procedures PROCEDURE_T proc_head IS_T declarations $@2 IN_T commands END_T  */
#line 71 "parser.y"
                                                                 {handle_procedure_end(&result_code_next_line, file);}
#line 1272 "parser.tab.c"
    break;

  case 7: /* $@3: %empty  */
#line 72 "parser.y"
                                                                 {handle_declarations(&variables, &procedure_variables, &procedures_declared);}
#line 1278 "parser.tab.c"
    break;

  case 8: /* procedures: procedures PROCEDURE_T proc_head IS_T $@3 IN_T commands END_T  */
#line 73 "parser.y"
                                                                 {handle_procedure_end(&result_code_next_line, file);}
#line 1284 "parser.tab.c"
    break;

  case 10: /* $@4: %empty  */
#line 76 "parser.y"
                             {handle_procedure_declaration_start(&variables, &procedure_variables);}
#line 1290 "parser.tab.c"
    break;

  case 11: /* $@5: %empty  */
#line 76 "parser.y"
                                                                                                                  {addToTopMap(&variables,"!all_variables!",procedure_variables);current_parsed_proc="main";procedures_declared++;addToMap(result_code_func_map,"main",result_code_next_line);handle_heap_init(procedure_variables,&result_code_next_line, file);}
#line 1296 "parser.tab.c"
    break;

  case 12: /* main: PROGRAM_T IS_T $@4 declarations $@5 IN_T commands END_T  */
#line 77 "parser.y"
                                          {append_to_result_code("HALT\n",&result_code_next_line, file);}
#line 1302 "parser.tab.c"
    break;

  case 13: /* $@6: %empty  */
#line 78 "parser.y"
                             {handle_procedure_declaration_start(&variables, &procedure_variables);addToTopMap(&variables,"!all_variables!",procedure_variables);current_parsed_proc="main";procedures_declared++;addToMap(result_code_func_map,"main",result_code_next_line);handle_heap_init(procedure_variables,&result_code_next_line, file);}
#line 1308 "parser.tab.c"
    break;

  case 14: /* main: PROGRAM_T IS_T $@6 IN_T commands END_T  */
#line 79 "parser.y"
                                          {append_to_result_code("HALT\n",&result_code_next_line, file);}
#line 1314 "parser.tab.c"
    break;

  case 17: /* $@7: %empty  */
#line 84 "parser.y"
                                  {copy_register("b","d",&result_code_next_line,file);}
#line 1320 "parser.tab.c"
    break;

  case 18: /* command: identifier ASSIGN_T $@7 expression ';'  */
#line 84 "parser.y"
                                                                                                       {count_expression(expression_char,&result_code_next_line,file);}
#line 1326 "parser.tab.c"
    break;

  case 19: /* $@8: %empty  */
#line 85 "parser.y"
                                    {count_expression(expression_char,&result_code_next_line,file);push(false_if_jumps,ftell(file));append_to_result_code(concat(right_padding("JZERO ?",30),"\n"),&result_code_next_line,file);}
#line 1332 "parser.tab.c"
    break;

  case 21: /* $@9: %empty  */
#line 86 "parser.y"
                      {push(while_repeat_jumps,result_code_next_line);}
#line 1338 "parser.tab.c"
    break;

  case 22: /* $@10: %empty  */
#line 86 "parser.y"
                                                                                       {count_expression(expression_char,&result_code_next_line,file);push(while_skip_jumps,ftell(file));append_to_result_code(concat(right_padding("JZERO ?",30),"\n"),&result_code_next_line,file);}
#line 1344 "parser.tab.c"
    break;

  case 23: /* command: WHILE_T $@9 condition DO_T $@10 commands ENDWHILE_T  */
#line 86 "parser.y"
                                                                                                                                                                                                                                                                                                           {append_to_result_code(concat(append_int_to_string("JPOS ",pop(while_repeat_jumps)),"\n"),&result_code_next_line,file);overwrite_file(file,concat(right_padding(append_int_to_string("JZERO ",result_code_next_line),30),"\n"),pop(while_skip_jumps));}
#line 1350 "parser.tab.c"
    break;

  case 24: /* $@11: %empty  */
#line 87 "parser.y"
                       {push(repeat_until_jumps,result_code_next_line);}
#line 1356 "parser.tab.c"
    break;

  case 25: /* command: REPEAT_T $@11 commands UNTIL_T condition ';'  */
#line 87 "parser.y"
                                                                                                        {count_expression(expression_char,&result_code_next_line,file);append_to_result_code(concat(append_int_to_string("JPOS ",pop(repeat_until_jumps)),"\n"),&result_code_next_line,file);}
#line 1362 "parser.tab.c"
    break;

  case 28: /* command: WRITE_T value ';'  */
#line 90 "parser.y"
                                {append_to_result_code("GET b\n",&result_code_next_line,file);append_to_result_code("WRITE\n",&result_code_next_line,file);}
#line 1368 "parser.tab.c"
    break;

  case 29: /* $@12: %empty  */
#line 92 "parser.y"
              {  push(true_if_jumps,ftell(file));append_to_result_code(concat(right_padding("JUMP ?",30),"\n"),&result_code_next_line,file);
                overwrite_file(file,concat(right_padding(append_int_to_string("JZERO ",result_code_next_line),30),"\n"),pop(false_if_jumps));}
#line 1375 "parser.tab.c"
    break;

  case 30: /* endif: ELSE_T $@12 commands ENDIF_T  */
#line 94 "parser.y"
                                 {overwrite_file(file,concat(right_padding(append_int_to_string("JUMP ",result_code_next_line),30),"\n"),pop(true_if_jumps));}
#line 1381 "parser.tab.c"
    break;

  case 31: /* endif: ENDIF_T  */
#line 95 "parser.y"
               {overwrite_file(file,concat(right_padding(append_int_to_string("JZERO ",result_code_next_line),30),"\n"),pop(false_if_jumps));}
#line 1387 "parser.tab.c"
    break;

  case 32: /* $@13: %empty  */
#line 98 "parser.y"
                 {handle_procedure_declaration_start(&variables, &procedure_variables);}
#line 1393 "parser.tab.c"
    break;

  case 33: /* proc_head: ID_T $@13 '(' args_decl ')'  */
#line 98 "parser.y"
                                                                                                           {current_parsed_proc=(yyvsp[-4].string);handle_procedure_head(result_code_func_map,(yyvsp[-4].string),result_code_next_line);}
#line 1399 "parser.tab.c"
    break;

  case 34: /* proc_call: ID_T '(' args ')'  */
#line 100 "parser.y"
                              {handle_procedure_call(current_parsed_proc,(yyvsp[-3].string),result_code_func_map,&variables,current_references,&result_code_next_line,file);current_references=createMap();}
#line 1405 "parser.tab.c"
    break;

  case 35: /* declarations: declarations ',' ID_T  */
#line 102 "parser.y"
                                                    {handle_variable_declaration(&variables,(yyvsp[0].string),&procedure_variables,1);}
#line 1411 "parser.tab.c"
    break;

  case 36: /* declarations: declarations ',' ID_T '[' NUM_T ']'  */
#line 103 "parser.y"
                                                    {handle_variable_declaration(&variables,(yyvsp[-3].string),&procedure_variables,(yyvsp[-1].number));}
#line 1417 "parser.tab.c"
    break;

  case 37: /* declarations: ID_T  */
#line 104 "parser.y"
                                                    {handle_variable_declaration(&variables,(yyvsp[0].string),&procedure_variables,1);}
#line 1423 "parser.tab.c"
    break;

  case 38: /* declarations: ID_T '[' NUM_T ']'  */
#line 105 "parser.y"
                                                    {handle_variable_declaration(&variables,(yyvsp[-3].string),&procedure_variables,(yyvsp[-1].number));}
#line 1429 "parser.tab.c"
    break;

  case 39: /* args_decl: args_decl ',' ID_T  */
#line 107 "parser.y"
                                         {handle_variable_declaration(&variables,concat("*",(yyvsp[0].string)),&procedure_variables,1);}
#line 1435 "parser.tab.c"
    break;

  case 40: /* args_decl: args_decl ',' TABLE_T ID_T  */
#line 108 "parser.y"
                                         {handle_variable_declaration(&variables,concat("*",(yyvsp[0].string)),&procedure_variables,1);}
#line 1441 "parser.tab.c"
    break;

  case 41: /* args_decl: ID_T  */
#line 109 "parser.y"
                                         {handle_variable_declaration(&variables,concat("*",(yyvsp[0].string)),&procedure_variables,1);}
#line 1447 "parser.tab.c"
    break;

  case 42: /* args_decl: TABLE_T ID_T  */
#line 110 "parser.y"
                                         {handle_variable_declaration(&variables,concat("*",(yyvsp[0].string)),&procedure_variables,1);}
#line 1453 "parser.tab.c"
    break;

  case 43: /* args: args ',' ID_T  */
#line 112 "parser.y"
                        {addToMap(current_references,(yyvsp[0].string),get_parameter_location(lookAtHeap(&variables),(yyvsp[0].string)));}
#line 1459 "parser.tab.c"
    break;

  case 44: /* args: ID_T  */
#line 113 "parser.y"
                        {addToMap(current_references,(yyvsp[0].string),get_parameter_location(lookAtHeap(&variables),(yyvsp[0].string)));}
#line 1465 "parser.tab.c"
    break;

  case 45: /* expression: value  */
#line 115 "parser.y"
                            {expression_char='_';}
#line 1471 "parser.tab.c"
    break;

  case 46: /* $@14: %empty  */
#line 116 "parser.y"
                            {expression_char='+';copy_register("b","c",&result_code_next_line,file);}
#line 1477 "parser.tab.c"
    break;

  case 48: /* $@15: %empty  */
#line 117 "parser.y"
                            {expression_char='-';copy_register("b","c",&result_code_next_line,file);}
#line 1483 "parser.tab.c"
    break;

  case 53: /* $@16: %empty  */
#line 122 "parser.y"
                                {expression_char='=';copy_register("b","c",&result_code_next_line,file);}
#line 1489 "parser.tab.c"
    break;

  case 55: /* $@17: %empty  */
#line 123 "parser.y"
                                {expression_char='!';copy_register("b","c",&result_code_next_line,file);}
#line 1495 "parser.tab.c"
    break;

  case 57: /* $@18: %empty  */
#line 124 "parser.y"
                                {expression_char='>';copy_register("b","c",&result_code_next_line,file);}
#line 1501 "parser.tab.c"
    break;

  case 59: /* $@19: %empty  */
#line 125 "parser.y"
                                {expression_char='<';copy_register("b","c",&result_code_next_line,file);}
#line 1507 "parser.tab.c"
    break;

  case 61: /* $@20: %empty  */
#line 126 "parser.y"
                                {expression_char='{';copy_register("b","c",&result_code_next_line,file);}
#line 1513 "parser.tab.c"
    break;

  case 63: /* $@21: %empty  */
#line 127 "parser.y"
                                {expression_char='}';copy_register("b","c",&result_code_next_line,file);}
#line 1519 "parser.tab.c"
    break;

  case 65: /* value: NUM_T  */
#line 129 "parser.y"
             {printf("loading value %llu\n",(yyvsp[0].number));set_register("b",(yyvsp[0].number),&result_code_next_line,file);}
#line 1525 "parser.tab.c"
    break;

  case 66: /* value: identifier  */
#line 130 "parser.y"
                    {get_pointer_value("b",&result_code_next_line,file);}
#line 1531 "parser.tab.c"
    break;

  case 67: /* identifier: ID_T  */
#line 133 "parser.y"
                                     {get_pointer("b",(yyvsp[0].string), 0,lookAtHeap(&variables),&result_code_next_line,file);}
#line 1537 "parser.tab.c"
    break;

  case 68: /* identifier: ID_T '[' NUM_T ']'  */
#line 134 "parser.y"
                                     {get_pointer("b",(yyvsp[-3].string), (yyvsp[-1].number),lookAtHeap(&variables),&result_code_next_line,file);}
#line 1543 "parser.tab.c"
    break;

  case 69: /* identifier: ID_T '[' ID_T ']'  */
#line 135 "parser.y"
                                     {get_pointer_table_variant((yyvsp[-3].string), (yyvsp[-1].string),lookAtHeap(&variables),&result_code_next_line,file);}
#line 1549 "parser.tab.c"
    break;


#line 1553 "parser.tab.c"

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

#line 136 "parser.y"


int main() {
    //code for init of variables
    variables.size = 0;
    result_code_func_map = createMap();
    repeat_until_jumps = createHeap();
    while_repeat_jumps = createHeap();
    while_skip_jumps = createHeap();
    true_if_jumps = createHeap();
    false_if_jumps = createHeap();

    current_references=createMap();

    file = fopen("example.txt", "w");
    if (file == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }
    append_to_result_code(concat(right_padding("JUMP ?",20),"\n"), &result_code_next_line, file);
    yyparse();
    fclose(file);

    printf("\nfinal version of function map\n");
    printMap(result_code_func_map);
    //printf("\n");
    //printMap(removeFromHeap(&variables));
    //printf("\n");
    //printMap(removeFromHeap(&variables));
    //printf("\n");
    //printMap(removeFromHeap(&variables));
    //printf("\n");
    //printMap(removeFromHeap(&variables));
    //printf("\n");
    //printMap(removeFromHeap(&variables));
    //printf("\n");
    //printMap(removeFromHeap(&variables));
    //printf("\n");
    printf("result code next line: %d\n",result_code_next_line);
    return 0;
}
