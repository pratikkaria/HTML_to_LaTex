/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "temp_parser.y" /* yacc.c:339  */


#include <stdio.h>
#include <string.h>
void yyerror(const char *);

FILE *yyin;
FILE *tex_file;
int yylex();
extern char *yytext;

#line 78 "temp_parser.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "temp_parser.tab.h".  */
#ifndef YY_YY_TEMP_PARSER_TAB_H_INCLUDED
# define YY_YY_TEMP_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    DOCTYPE = 258,
    HTML_S = 259,
    HTML_E = 260,
    HEAD_S = 261,
    HEAD_E = 262,
    TITLE_S = 263,
    TITLE_E = 264,
    BODY_S = 265,
    BODY_E = 266,
    HREF_S = 267,
    HREF_E = 268,
    FONT_S = 269,
    FONT_E = 270,
    CENTER_S = 271,
    CENTER_E = 272,
    BR = 273,
    P_S = 274,
    P_E = 275,
    H1_S = 276,
    H1_E = 277,
    H2_S = 278,
    H2_E = 279,
    H3_S = 280,
    H3_E = 281,
    H4_S = 282,
    H4_E = 283,
    UL_S = 284,
    UL_E = 285,
    LI_S = 286,
    LI_E = 287,
    OL_S = 288,
    OL_E = 289,
    TD_S = 290,
    DL_S = 291,
    TD_E = 292,
    DL_E = 293,
    DT_S = 294,
    DT_E = 295,
    DD_S = 296,
    DD_E = 297,
    DIV_S = 298,
    DIV_E = 299,
    U_S = 300,
    U_E = 301,
    B_S = 302,
    B_E = 303,
    I_S = 304,
    I_E = 305,
    EM_S = 306,
    EM_E = 307,
    TT_S = 308,
    TT_E = 309,
    STRONG_S = 310,
    STRONG_E = 311,
    SMALL_S = 312,
    SMALL_E = 313,
    SUB_S = 314,
    SUB_E = 315,
    SUP_S = 316,
    SUP_E = 317,
    TABLE_S = 318,
    TABLE_E = 319,
    CAPTION_S = 320,
    CAPTION_E = 321,
    TH_S = 322,
    TH_E = 323,
    TR_S = 324,
    TR_E = 325,
    HREF_LINK = 326,
    FONT_SIZE = 327,
    HREF_TITLE = 328,
    IMG_S = 329,
    IMG_SRC = 330,
    IMG_WIDTH = 331,
    IMG_HEIGHT = 332,
    FIG_S = 333,
    DATA = 334,
    GREEK = 335,
    TABLE_BORDER = 336,
    FIG_E = 337,
    IMG_E = 338,
    FIGCAP_S = 339,
    FIGCAP_E = 340,
    BR_S = 341
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 14 "temp_parser.y" /* yacc.c:355  */

	char *s;
	int i;

#line 210 "temp_parser.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_TEMP_PARSER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 227 "temp_parser.tab.c" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
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
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
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
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  8
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1310

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  87
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  30
/* YYNRULES -- Number of rules.  */
#define YYNRULES  71
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  167

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   341

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
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
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    45,    45,    50,    60,    65,    71,    74,    83,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   107,   111,   115,   120,   131,   139,   148,   153,
     164,   172,   179,   191,   201,   202,   206,   214,   225,   226,
     230,   239,   248,   257,   262,   272,   279,   289,   296,   303,
     310,   317,   324,   331,   341,   348,   355,   362,   372,   383,
     391,   394,   400,   408,   411,   414,   419,   421,   423,   425,
     427,   429
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "DOCTYPE", "HTML_S", "HTML_E", "HEAD_S",
  "HEAD_E", "TITLE_S", "TITLE_E", "BODY_S", "BODY_E", "HREF_S", "HREF_E",
  "FONT_S", "FONT_E", "CENTER_S", "CENTER_E", "BR", "P_S", "P_E", "H1_S",
  "H1_E", "H2_S", "H2_E", "H3_S", "H3_E", "H4_S", "H4_E", "UL_S", "UL_E",
  "LI_S", "LI_E", "OL_S", "OL_E", "TD_S", "DL_S", "TD_E", "DL_E", "DT_S",
  "DT_E", "DD_S", "DD_E", "DIV_S", "DIV_E", "U_S", "U_E", "B_S", "B_E",
  "I_S", "I_E", "EM_S", "EM_E", "TT_S", "TT_E", "STRONG_S", "STRONG_E",
  "SMALL_S", "SMALL_E", "SUB_S", "SUB_E", "SUP_S", "SUP_E", "TABLE_S",
  "TABLE_E", "CAPTION_S", "CAPTION_E", "TH_S", "TH_E", "TR_S", "TR_E",
  "HREF_LINK", "FONT_SIZE", "HREF_TITLE", "IMG_S", "IMG_SRC", "IMG_WIDTH",
  "IMG_HEIGHT", "FIG_S", "DATA", "GREEK", "TABLE_BORDER", "FIG_E", "IMG_E",
  "FIGCAP_S", "FIGCAP_E", "BR_S", "$accept", "html_start", "content_head",
  "content_title", "content_body", "body", "data", "href_tag",
  "content_href", "font_tag", "content_font", "p_tag", "center_tag",
  "br_tag", "img_tag", "fig_caption", "content_img", "div_tag",
  "subsup_tag", "format_tag", "header_tag", "table_tag", "content_table",
  "table_contents", "caption_tag", "head_tag", "tr_contents", "list_tag",
  "inner_list_l", "inner_list_dl", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341
};
# endif

#define YYPACT_NINF -59

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-59)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      21,     4,    -5,    55,    -5,    -5,   -59,    11,   -59,    11,
      49,   -35,    61,    63,    -7,    -5,   -59,   -59,    40,   -59,
     -59,   -59,    51,    68,   -59,   -59,   -59,   -35,   -59,   -35,
     -35,   -35,   -35,   -35,    46,    46,   -19,   -35,   -35,   -35,
     -35,   -35,   -35,   -35,   -35,   -35,   -35,   -59,   -59,     7,
     -59,   -35,   -35,   -35,   -35,   -35,   -35,   -35,   -35,   -35,
     -35,   -35,   -35,   -59,   -59,    -9,   -32,    94,   140,   186,
     232,   278,   326,   -35,    52,    50,   -35,   -35,    54,   372,
     418,   464,   510,   556,   602,   648,   694,   742,   794,   -58,
       3,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,
     -59,   -59,   -59,   -59,   -59,   -59,   846,   -59,   898,   -59,
     -59,   -59,   -59,   -59,   -59,   946,   -59,   -59,   994,  1040,
     -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,
     -59,   -35,   -59,    19,   -59,   -59,   -59,     6,    57,   -59,
     -59,   -59,   -59,   -59,  1086,   -26,    30,   -35,   -59,     6,
     -59,   -35,   -35,    65,    26,   -59,  1132,    16,  1178,  1224,
      32,   -59,   -59,   -59,   -59,   -59,   -59
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     6,     0,     6,     6,     5,     0,     1,     0,
       0,    24,     0,     0,     0,     6,    22,    23,     0,    21,
       3,     2,     0,     0,     8,    28,    31,    24,    34,    24,
      24,    24,    24,    24,     0,     0,     0,    24,    24,    24,
      24,    24,    24,    24,    24,    24,    24,    60,    43,     0,
      35,    24,    24,    24,    24,    24,    24,    24,    24,    24,
      24,    24,    24,     7,     4,    24,    24,     0,     0,     0,
       0,     0,     0,    24,     0,     0,    24,    24,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    43,     9,    10,    13,    11,    12,    19,    16,    18,
      17,    14,    20,    15,    26,    27,     0,    30,     0,    33,
      32,    54,    55,    56,    57,     0,    66,    67,     0,     0,
      68,    44,    47,    48,    49,    50,    51,    52,    53,    46,
      45,    24,    59,     0,    40,    42,    41,    39,     0,    25,
      29,    69,    71,    70,     0,     0,     0,    24,    36,    39,
      63,    24,    24,     0,     0,    58,     0,     0,     0,     0,
       0,    62,    38,    37,    65,    64,    61
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -59,   -59,    38,   -59,    96,   -27,   -25,   -59,   -59,   -59,
     -59,   -59,   -59,   -59,   -59,   -42,    18,   -59,   -59,   -59,
     -59,   -59,   -59,   -59,   -59,   -59,   -37,   -59,    87,   -59
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     7,    15,    12,    18,    19,    51,    65,    52,
      66,    53,    54,    55,    56,   148,    90,    57,    58,    59,
      60,    61,    89,   146,   133,   153,   154,    62,    74,    78
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      67,     5,    68,    69,    70,    71,    72,   131,     4,   151,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      76,    11,    77,   132,     1,     2,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   106,   108,
     107,   152,     9,    10,    16,    17,   115,    16,    17,   118,
     119,    24,    25,    23,    26,     8,    27,    14,    28,    29,
      63,    30,   104,    31,   105,    32,    20,    33,    21,    34,
      16,    17,    22,    35,     6,    64,    36,    73,   134,   135,
     136,    91,   116,    37,   117,    38,   137,    39,   145,    40,
     147,    41,   120,    42,   155,    43,   161,    44,   163,    45,
     151,    46,   166,    47,   144,    13,    25,   157,    26,   138,
      27,   109,    28,    29,    48,    30,   160,    31,    49,    32,
     156,    33,    75,    34,   158,   159,    50,    35,     0,     0,
      36,     0,   134,   135,   136,     0,     0,    37,     0,    38,
     149,    39,     0,    40,     0,    41,     0,    42,     0,    43,
       0,    44,    25,    45,    26,    46,    27,    47,    28,    29,
     110,    30,     0,    31,     0,    32,     0,    33,    48,    34,
       0,     0,    49,    35,     0,     0,    36,     0,     0,     0,
      50,     0,     0,    37,     0,    38,     0,    39,     0,    40,
       0,    41,     0,    42,     0,    43,     0,    44,    25,    45,
      26,    46,    27,    47,    28,    29,     0,    30,   111,    31,
       0,    32,     0,    33,    48,    34,     0,     0,    49,    35,
       0,     0,    36,     0,     0,     0,    50,     0,     0,    37,
       0,    38,     0,    39,     0,    40,     0,    41,     0,    42,
       0,    43,     0,    44,    25,    45,    26,    46,    27,    47,
      28,    29,     0,    30,     0,    31,   112,    32,     0,    33,
      48,    34,     0,     0,    49,    35,     0,     0,    36,     0,
       0,     0,    50,     0,     0,    37,     0,    38,     0,    39,
       0,    40,     0,    41,     0,    42,     0,    43,     0,    44,
      25,    45,    26,    46,    27,    47,    28,    29,     0,    30,
       0,    31,     0,    32,   113,    33,    48,    34,     0,     0,
      49,    35,     0,     0,    36,     0,     0,     0,    50,     0,
       0,    37,     0,    38,     0,    39,     0,    40,     0,    41,
       0,    42,     0,    43,     0,    44,     0,    45,    25,    46,
      26,    47,    27,     0,    28,    29,     0,    30,     0,    31,
       0,    32,    48,    33,   114,    34,    49,     0,     0,    35,
       0,     0,    36,     0,    50,     0,     0,     0,     0,    37,
       0,    38,     0,    39,     0,    40,     0,    41,     0,    42,
       0,    43,     0,    44,    25,    45,    26,    46,    27,    47,
      28,    29,     0,    30,     0,    31,     0,    32,     0,    33,
      48,    34,     0,     0,    49,    35,     0,     0,    36,     0,
       0,     0,    50,     0,     0,    37,   121,    38,     0,    39,
       0,    40,     0,    41,     0,    42,     0,    43,     0,    44,
      25,    45,    26,    46,    27,    47,    28,    29,     0,    30,
       0,    31,     0,    32,     0,    33,    48,    34,     0,     0,
      49,    35,     0,     0,    36,     0,     0,     0,    50,     0,
       0,    37,     0,    38,   122,    39,     0,    40,     0,    41,
       0,    42,     0,    43,     0,    44,    25,    45,    26,    46,
      27,    47,    28,    29,     0,    30,     0,    31,     0,    32,
       0,    33,    48,    34,     0,     0,    49,    35,     0,     0,
      36,     0,     0,     0,    50,     0,     0,    37,     0,    38,
       0,    39,   123,    40,     0,    41,     0,    42,     0,    43,
       0,    44,    25,    45,    26,    46,    27,    47,    28,    29,
       0,    30,     0,    31,     0,    32,     0,    33,    48,    34,
       0,     0,    49,    35,     0,     0,    36,     0,     0,     0,
      50,     0,     0,    37,     0,    38,     0,    39,     0,    40,
     124,    41,     0,    42,     0,    43,     0,    44,    25,    45,
      26,    46,    27,    47,    28,    29,     0,    30,     0,    31,
       0,    32,     0,    33,    48,    34,     0,     0,    49,    35,
       0,     0,    36,     0,     0,     0,    50,     0,     0,    37,
       0,    38,     0,    39,     0,    40,     0,    41,   125,    42,
       0,    43,     0,    44,    25,    45,    26,    46,    27,    47,
      28,    29,     0,    30,     0,    31,     0,    32,     0,    33,
      48,    34,     0,     0,    49,    35,     0,     0,    36,     0,
       0,     0,    50,     0,     0,    37,     0,    38,     0,    39,
       0,    40,     0,    41,     0,    42,   126,    43,     0,    44,
      25,    45,    26,    46,    27,    47,    28,    29,     0,    30,
       0,    31,     0,    32,     0,    33,    48,    34,     0,     0,
      49,    35,     0,     0,    36,     0,     0,     0,    50,     0,
       0,    37,     0,    38,     0,    39,     0,    40,     0,    41,
       0,    42,     0,    43,   127,    44,    25,    45,    26,    46,
      27,    47,    28,    29,     0,    30,     0,    31,     0,    32,
       0,    33,    48,    34,     0,     0,    49,    35,     0,     0,
      36,     0,     0,     0,    50,     0,     0,    37,     0,    38,
       0,    39,     0,    40,     0,    41,     0,    42,     0,    43,
       0,    44,   128,    45,    25,    46,    26,    47,    27,     0,
      28,    29,     0,    30,     0,    31,     0,    32,    48,    33,
       0,    34,    49,     0,     0,    35,     0,     0,    36,     0,
      50,     0,     0,     0,     0,    37,     0,    38,     0,    39,
       0,    40,     0,    41,     0,    42,     0,    43,     0,    44,
       0,    45,   129,    46,     0,    47,    25,     0,    26,     0,
      27,     0,    28,    29,     0,    30,    48,    31,     0,    32,
      49,    33,     0,    34,     0,     0,     0,    35,    50,     0,
      36,     0,     0,     0,     0,     0,     0,    37,     0,    38,
       0,    39,     0,    40,     0,    41,     0,    42,     0,    43,
       0,    44,     0,    45,     0,    46,   130,    47,    25,   139,
      26,     0,    27,     0,    28,    29,     0,    30,    48,    31,
       0,    32,    49,    33,     0,    34,     0,     0,     0,    35,
      50,     0,    36,     0,     0,     0,     0,     0,     0,    37,
       0,    38,     0,    39,     0,    40,     0,    41,     0,    42,
       0,    43,     0,    44,     0,    45,     0,    46,     0,    47,
      25,     0,    26,   140,    27,     0,    28,    29,     0,    30,
      48,    31,     0,    32,    49,    33,     0,    34,     0,     0,
       0,    35,    50,     0,    36,     0,     0,     0,     0,     0,
       0,    37,     0,    38,     0,    39,     0,    40,     0,    41,
       0,    42,     0,    43,     0,    44,     0,    45,    25,    46,
      26,    47,    27,     0,    28,    29,     0,    30,     0,    31,
       0,    32,    48,    33,     0,    34,    49,     0,   141,    35,
       0,     0,    36,     0,    50,     0,     0,     0,     0,    37,
       0,    38,     0,    39,     0,    40,     0,    41,     0,    42,
       0,    43,     0,    44,     0,    45,    25,    46,    26,    47,
      27,     0,    28,    29,     0,    30,     0,    31,     0,    32,
      48,    33,     0,    34,    49,     0,     0,    35,     0,     0,
      36,     0,    50,     0,   142,     0,     0,    37,     0,    38,
       0,    39,     0,    40,     0,    41,     0,    42,     0,    43,
       0,    44,    25,    45,    26,    46,    27,    47,    28,    29,
       0,    30,     0,    31,     0,    32,     0,    33,    48,    34,
       0,     0,    49,    35,     0,     0,    36,     0,     0,     0,
      50,     0,   143,    37,     0,    38,     0,    39,     0,    40,
       0,    41,     0,    42,     0,    43,     0,    44,    25,    45,
      26,    46,    27,    47,    28,    29,     0,    30,     0,    31,
       0,    32,     0,    33,    48,    34,     0,     0,    49,    35,
       0,     0,    36,     0,     0,     0,    50,     0,     0,    37,
       0,    38,     0,    39,     0,    40,     0,    41,     0,    42,
       0,    43,     0,    44,    25,    45,    26,    46,    27,    47,
      28,    29,   150,    30,     0,    31,     0,    32,     0,    33,
      48,    34,     0,     0,    49,    35,     0,     0,    36,     0,
       0,     0,    50,     0,     0,    37,     0,    38,     0,    39,
       0,    40,     0,    41,     0,    42,     0,    43,     0,    44,
      25,    45,    26,    46,    27,    47,    28,    29,     0,    30,
       0,    31,     0,    32,     0,    33,    48,    34,     0,     0,
      49,    35,     0,     0,    36,   164,     0,   162,    50,     0,
       0,    37,     0,    38,     0,    39,     0,    40,     0,    41,
       0,    42,     0,    43,     0,    44,    25,    45,    26,    46,
      27,    47,    28,    29,     0,    30,     0,    31,     0,    32,
       0,    33,    48,    34,     0,     0,    49,    35,     0,     0,
      36,     0,     0,     0,    50,     0,     0,    37,     0,    38,
       0,    39,     0,    40,     0,    41,     0,    42,     0,    43,
       0,    44,     0,    45,     0,    46,     0,    47,     0,     0,
       0,     0,   165,     0,     0,     0,     0,     0,    48,     0,
       0,     0,    49,     0,     0,     0,     0,     0,     0,     0,
      50
};

static const yytype_int16 yycheck[] =
{
      27,     6,    29,    30,    31,    32,    33,    65,     4,    35,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      39,    10,    41,    81,     3,     4,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    65,    66,
      72,    67,     4,     5,    79,    80,    73,    79,    80,    76,
      77,    11,    12,    15,    14,     0,    16,     8,    18,    19,
       9,    21,    71,    23,    73,    25,     5,    27,     5,    29,
      79,    80,    79,    33,    79,     7,    36,    31,    75,    76,
      77,    74,    30,    43,    34,    45,    83,    47,    69,    49,
      84,    51,    38,    53,    64,    55,    70,    57,    82,    59,
      35,    61,    70,    63,   131,     9,    12,   149,    14,    91,
      16,    17,    18,    19,    74,    21,   153,    23,    78,    25,
     147,    27,    35,    29,   151,   152,    86,    33,    -1,    -1,
      36,    -1,    75,    76,    77,    -1,    -1,    43,    -1,    45,
      83,    47,    -1,    49,    -1,    51,    -1,    53,    -1,    55,
      -1,    57,    12,    59,    14,    61,    16,    63,    18,    19,
      20,    21,    -1,    23,    -1,    25,    -1,    27,    74,    29,
      -1,    -1,    78,    33,    -1,    -1,    36,    -1,    -1,    -1,
      86,    -1,    -1,    43,    -1,    45,    -1,    47,    -1,    49,
      -1,    51,    -1,    53,    -1,    55,    -1,    57,    12,    59,
      14,    61,    16,    63,    18,    19,    -1,    21,    22,    23,
      -1,    25,    -1,    27,    74,    29,    -1,    -1,    78,    33,
      -1,    -1,    36,    -1,    -1,    -1,    86,    -1,    -1,    43,
      -1,    45,    -1,    47,    -1,    49,    -1,    51,    -1,    53,
      -1,    55,    -1,    57,    12,    59,    14,    61,    16,    63,
      18,    19,    -1,    21,    -1,    23,    24,    25,    -1,    27,
      74,    29,    -1,    -1,    78,    33,    -1,    -1,    36,    -1,
      -1,    -1,    86,    -1,    -1,    43,    -1,    45,    -1,    47,
      -1,    49,    -1,    51,    -1,    53,    -1,    55,    -1,    57,
      12,    59,    14,    61,    16,    63,    18,    19,    -1,    21,
      -1,    23,    -1,    25,    26,    27,    74,    29,    -1,    -1,
      78,    33,    -1,    -1,    36,    -1,    -1,    -1,    86,    -1,
      -1,    43,    -1,    45,    -1,    47,    -1,    49,    -1,    51,
      -1,    53,    -1,    55,    -1,    57,    -1,    59,    12,    61,
      14,    63,    16,    -1,    18,    19,    -1,    21,    -1,    23,
      -1,    25,    74,    27,    28,    29,    78,    -1,    -1,    33,
      -1,    -1,    36,    -1,    86,    -1,    -1,    -1,    -1,    43,
      -1,    45,    -1,    47,    -1,    49,    -1,    51,    -1,    53,
      -1,    55,    -1,    57,    12,    59,    14,    61,    16,    63,
      18,    19,    -1,    21,    -1,    23,    -1,    25,    -1,    27,
      74,    29,    -1,    -1,    78,    33,    -1,    -1,    36,    -1,
      -1,    -1,    86,    -1,    -1,    43,    44,    45,    -1,    47,
      -1,    49,    -1,    51,    -1,    53,    -1,    55,    -1,    57,
      12,    59,    14,    61,    16,    63,    18,    19,    -1,    21,
      -1,    23,    -1,    25,    -1,    27,    74,    29,    -1,    -1,
      78,    33,    -1,    -1,    36,    -1,    -1,    -1,    86,    -1,
      -1,    43,    -1,    45,    46,    47,    -1,    49,    -1,    51,
      -1,    53,    -1,    55,    -1,    57,    12,    59,    14,    61,
      16,    63,    18,    19,    -1,    21,    -1,    23,    -1,    25,
      -1,    27,    74,    29,    -1,    -1,    78,    33,    -1,    -1,
      36,    -1,    -1,    -1,    86,    -1,    -1,    43,    -1,    45,
      -1,    47,    48,    49,    -1,    51,    -1,    53,    -1,    55,
      -1,    57,    12,    59,    14,    61,    16,    63,    18,    19,
      -1,    21,    -1,    23,    -1,    25,    -1,    27,    74,    29,
      -1,    -1,    78,    33,    -1,    -1,    36,    -1,    -1,    -1,
      86,    -1,    -1,    43,    -1,    45,    -1,    47,    -1,    49,
      50,    51,    -1,    53,    -1,    55,    -1,    57,    12,    59,
      14,    61,    16,    63,    18,    19,    -1,    21,    -1,    23,
      -1,    25,    -1,    27,    74,    29,    -1,    -1,    78,    33,
      -1,    -1,    36,    -1,    -1,    -1,    86,    -1,    -1,    43,
      -1,    45,    -1,    47,    -1,    49,    -1,    51,    52,    53,
      -1,    55,    -1,    57,    12,    59,    14,    61,    16,    63,
      18,    19,    -1,    21,    -1,    23,    -1,    25,    -1,    27,
      74,    29,    -1,    -1,    78,    33,    -1,    -1,    36,    -1,
      -1,    -1,    86,    -1,    -1,    43,    -1,    45,    -1,    47,
      -1,    49,    -1,    51,    -1,    53,    54,    55,    -1,    57,
      12,    59,    14,    61,    16,    63,    18,    19,    -1,    21,
      -1,    23,    -1,    25,    -1,    27,    74,    29,    -1,    -1,
      78,    33,    -1,    -1,    36,    -1,    -1,    -1,    86,    -1,
      -1,    43,    -1,    45,    -1,    47,    -1,    49,    -1,    51,
      -1,    53,    -1,    55,    56,    57,    12,    59,    14,    61,
      16,    63,    18,    19,    -1,    21,    -1,    23,    -1,    25,
      -1,    27,    74,    29,    -1,    -1,    78,    33,    -1,    -1,
      36,    -1,    -1,    -1,    86,    -1,    -1,    43,    -1,    45,
      -1,    47,    -1,    49,    -1,    51,    -1,    53,    -1,    55,
      -1,    57,    58,    59,    12,    61,    14,    63,    16,    -1,
      18,    19,    -1,    21,    -1,    23,    -1,    25,    74,    27,
      -1,    29,    78,    -1,    -1,    33,    -1,    -1,    36,    -1,
      86,    -1,    -1,    -1,    -1,    43,    -1,    45,    -1,    47,
      -1,    49,    -1,    51,    -1,    53,    -1,    55,    -1,    57,
      -1,    59,    60,    61,    -1,    63,    12,    -1,    14,    -1,
      16,    -1,    18,    19,    -1,    21,    74,    23,    -1,    25,
      78,    27,    -1,    29,    -1,    -1,    -1,    33,    86,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    43,    -1,    45,
      -1,    47,    -1,    49,    -1,    51,    -1,    53,    -1,    55,
      -1,    57,    -1,    59,    -1,    61,    62,    63,    12,    13,
      14,    -1,    16,    -1,    18,    19,    -1,    21,    74,    23,
      -1,    25,    78,    27,    -1,    29,    -1,    -1,    -1,    33,
      86,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    43,
      -1,    45,    -1,    47,    -1,    49,    -1,    51,    -1,    53,
      -1,    55,    -1,    57,    -1,    59,    -1,    61,    -1,    63,
      12,    -1,    14,    15,    16,    -1,    18,    19,    -1,    21,
      74,    23,    -1,    25,    78,    27,    -1,    29,    -1,    -1,
      -1,    33,    86,    -1,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    43,    -1,    45,    -1,    47,    -1,    49,    -1,    51,
      -1,    53,    -1,    55,    -1,    57,    -1,    59,    12,    61,
      14,    63,    16,    -1,    18,    19,    -1,    21,    -1,    23,
      -1,    25,    74,    27,    -1,    29,    78,    -1,    32,    33,
      -1,    -1,    36,    -1,    86,    -1,    -1,    -1,    -1,    43,
      -1,    45,    -1,    47,    -1,    49,    -1,    51,    -1,    53,
      -1,    55,    -1,    57,    -1,    59,    12,    61,    14,    63,
      16,    -1,    18,    19,    -1,    21,    -1,    23,    -1,    25,
      74,    27,    -1,    29,    78,    -1,    -1,    33,    -1,    -1,
      36,    -1,    86,    -1,    40,    -1,    -1,    43,    -1,    45,
      -1,    47,    -1,    49,    -1,    51,    -1,    53,    -1,    55,
      -1,    57,    12,    59,    14,    61,    16,    63,    18,    19,
      -1,    21,    -1,    23,    -1,    25,    -1,    27,    74,    29,
      -1,    -1,    78,    33,    -1,    -1,    36,    -1,    -1,    -1,
      86,    -1,    42,    43,    -1,    45,    -1,    47,    -1,    49,
      -1,    51,    -1,    53,    -1,    55,    -1,    57,    12,    59,
      14,    61,    16,    63,    18,    19,    -1,    21,    -1,    23,
      -1,    25,    -1,    27,    74,    29,    -1,    -1,    78,    33,
      -1,    -1,    36,    -1,    -1,    -1,    86,    -1,    -1,    43,
      -1,    45,    -1,    47,    -1,    49,    -1,    51,    -1,    53,
      -1,    55,    -1,    57,    12,    59,    14,    61,    16,    63,
      18,    19,    66,    21,    -1,    23,    -1,    25,    -1,    27,
      74,    29,    -1,    -1,    78,    33,    -1,    -1,    36,    -1,
      -1,    -1,    86,    -1,    -1,    43,    -1,    45,    -1,    47,
      -1,    49,    -1,    51,    -1,    53,    -1,    55,    -1,    57,
      12,    59,    14,    61,    16,    63,    18,    19,    -1,    21,
      -1,    23,    -1,    25,    -1,    27,    74,    29,    -1,    -1,
      78,    33,    -1,    -1,    36,    37,    -1,    85,    86,    -1,
      -1,    43,    -1,    45,    -1,    47,    -1,    49,    -1,    51,
      -1,    53,    -1,    55,    -1,    57,    12,    59,    14,    61,
      16,    63,    18,    19,    -1,    21,    -1,    23,    -1,    25,
      -1,    27,    74,    29,    -1,    -1,    78,    33,    -1,    -1,
      36,    -1,    -1,    -1,    86,    -1,    -1,    43,    -1,    45,
      -1,    47,    -1,    49,    -1,    51,    -1,    53,    -1,    55,
      -1,    57,    -1,    59,    -1,    61,    -1,    63,    -1,    -1,
      -1,    -1,    68,    -1,    -1,    -1,    -1,    -1,    74,    -1,
      -1,    -1,    78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      86
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,    88,     4,     6,    79,    89,     0,    89,
      89,    10,    91,    91,     8,    90,    79,    80,    92,    93,
       5,     5,    79,    89,    11,    12,    14,    16,    18,    19,
      21,    23,    25,    27,    29,    33,    36,    43,    45,    47,
      49,    51,    53,    55,    57,    59,    61,    63,    74,    78,
      86,    94,    96,    98,    99,   100,   101,   104,   105,   106,
     107,   108,   114,     9,     7,    95,    97,    92,    92,    92,
      92,    92,    92,    31,   115,   115,    39,    41,   116,    92,
      92,    92,    92,    92,    92,    92,    92,    92,    92,   109,
     103,    74,    93,    93,    93,    93,    93,    93,    93,    93,
      93,    93,    93,    93,    71,    73,    92,    72,    92,    17,
      20,    22,    24,    26,    28,    92,    30,    34,    92,    92,
      38,    44,    46,    48,    50,    52,    54,    56,    58,    60,
      62,    65,    81,   111,    75,    76,    77,    83,   103,    13,
      15,    32,    40,    42,    92,    69,   110,    84,   102,    83,
      66,    35,    67,   112,   113,    64,    92,   102,    92,    92,
     113,    70,    85,    82,    37,    68,    70
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    87,    88,    88,    89,    89,    89,    90,    91,    92,
      92,    92,    92,    92,    92,    92,    92,    92,    92,    92,
      92,    92,    93,    93,    93,    94,    95,    95,    95,    96,
      97,    97,    98,    99,   100,   100,   101,   101,   102,   102,
     103,   103,   103,   103,   104,   105,   105,   106,   106,   106,
     106,   106,   106,   106,   107,   107,   107,   107,   108,   109,
     109,   110,   110,   111,   112,   113,   114,   114,   114,   115,
     116,   116
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     5,     4,     5,     1,     0,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     1,     1,     1,     0,     4,     2,     2,     0,     4,
       2,     0,     3,     3,     1,     1,     4,     6,     3,     0,
       2,     2,     2,     0,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     5,     2,
       0,     4,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
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
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
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
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
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
          yyp++;
          yyformat++;
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
  YYUSE (yytype);
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
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

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
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
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
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
        case 2:
#line 45 "temp_parser.y" /* yacc.c:1646  */
    {
													fprintf(tex_file,"\\document{article}\n");
													fprintf(tex_file,"\\usepackage{hyperref}}\n");
													fprintf(tex_file,"\\begin{document}\n");
												}
#line 1664 "temp_parser.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 50 "temp_parser.y" /* yacc.c:1646  */
    {
													fprintf(tex_file,"\\document{article}\n");
													fprintf(tex_file,"\\usepackage{blindwrite}\n");
													fprintf(tex_file,"\\begin{document}\n");
													fprintf(tex_file,"%s\n",(yyvsp[-2].s));
													fprintf(tex_file,"%s",(yyvsp[-1].s));
													printf("\n%s Final HEAD \n",(yyvsp[-2].s));
													printf("\n%s Final BODY \n",(yyvsp[-1].s));
												}
#line 1678 "temp_parser.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 60 "temp_parser.y" /* yacc.c:1646  */
    {
													char *dat = malloc(2000);
													strcpy(dat,(yyvsp[-2].s));
													(yyval.s)=dat;
												}
#line 1688 "temp_parser.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 65 "temp_parser.y" /* yacc.c:1646  */
    {
													char *dat = malloc(2000);
													strcpy(dat,(yyvsp[0].s));
													printf("\nContent Head: %s\n",(yyvsp[0].s));
													(yyval.s)=dat;
												}
#line 1699 "temp_parser.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 71 "temp_parser.y" /* yacc.c:1646  */
    {	(yyval.s)="";	}
#line 1705 "temp_parser.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 74 "temp_parser.y" /* yacc.c:1646  */
    {
													char *dat = malloc(2000);
													strcpy(dat,"\\title{");
													strcat(dat,(yyvsp[-1].s));
													strcat(dat,"}");
													printf("\nContent Title: %s\n",(yyvsp[-1].s));
													(yyval.s)=dat;
												}
#line 1718 "temp_parser.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 83 "temp_parser.y" /* yacc.c:1646  */
    {
													char *dat = malloc(2000);
													strcpy((yyval.s),(yyvsp[-1].s));
													printf("\nContent Body:%s\n",(yyvsp[-1].s));
													
												}
#line 1729 "temp_parser.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 91 "temp_parser.y" /* yacc.c:1646  */
    {	(yyval.s)=(yyvsp[-2].s);	}
#line 1735 "temp_parser.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 92 "temp_parser.y" /* yacc.c:1646  */
    {	(yyval.s)=(yyvsp[-2].s);	}
#line 1741 "temp_parser.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 93 "temp_parser.y" /* yacc.c:1646  */
    {	(yyval.s)=(yyvsp[-2].s);	}
#line 1747 "temp_parser.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 94 "temp_parser.y" /* yacc.c:1646  */
    {	(yyval.s)=(yyvsp[-2].s);	}
#line 1753 "temp_parser.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 95 "temp_parser.y" /* yacc.c:1646  */
    {	(yyval.s)=(yyvsp[-2].s);	}
#line 1759 "temp_parser.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 96 "temp_parser.y" /* yacc.c:1646  */
    {	(yyval.s)=(yyvsp[-2].s);	}
#line 1765 "temp_parser.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 97 "temp_parser.y" /* yacc.c:1646  */
    {	(yyval.s)=(yyvsp[-2].s);	}
#line 1771 "temp_parser.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 98 "temp_parser.y" /* yacc.c:1646  */
    {	(yyval.s)=(yyvsp[-2].s);	}
#line 1777 "temp_parser.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 99 "temp_parser.y" /* yacc.c:1646  */
    {	(yyval.s)=(yyvsp[-2].s);	}
#line 1783 "temp_parser.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 100 "temp_parser.y" /* yacc.c:1646  */
    {	(yyval.s)=(yyvsp[-2].s);	}
#line 1789 "temp_parser.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 101 "temp_parser.y" /* yacc.c:1646  */
    {	(yyval.s)=(yyvsp[-2].s);	}
#line 1795 "temp_parser.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 102 "temp_parser.y" /* yacc.c:1646  */
    {	(yyval.s)=(yyvsp[-2].s);	}
#line 1801 "temp_parser.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 103 "temp_parser.y" /* yacc.c:1646  */
    {	(yyval.s)=(yyvsp[0].s);	}
#line 1807 "temp_parser.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 107 "temp_parser.y" /* yacc.c:1646  */
    {	
													(yyval.s)=(yyvsp[0].s);
													printf("\nTEXT: %s",(yyvsp[0].s));							
												}
#line 1816 "temp_parser.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 111 "temp_parser.y" /* yacc.c:1646  */
    {
													(yyval.s)=(yyvsp[0].s);
													printf("\nGREEK: %s",(yyvsp[0].s));							
												}
#line 1825 "temp_parser.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 115 "temp_parser.y" /* yacc.c:1646  */
    {	(yyval.s)="";	}
#line 1831 "temp_parser.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 120 "temp_parser.y" /* yacc.c:1646  */
    {	
														char *dat = malloc(2000);
														strcat(dat,(yyvsp[-2].s));
														strcat(dat,(yyvsp[-1].s));
														printf("\nHREF_ATTR: %s\n",(yyvsp[-2].s));	
														printf("\nHREF_DATA: %s\n",(yyvsp[-1].s));
														(yyval.s)=dat;
													}
#line 1844 "temp_parser.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 131 "temp_parser.y" /* yacc.c:1646  */
    { 	
														char *dat = malloc(2000);
														strcat(dat,"link=\"");
														strcat(dat,(yyvsp[0].s));
														strcat(dat,"\"@");
														strcat(dat,(yyvsp[-1].s));
														(yyval.s)=dat;
													}
#line 1857 "temp_parser.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 139 "temp_parser.y" /* yacc.c:1646  */
    { 
														char *dat = malloc(2000);
														strcat(dat,"title=\"");
														strcat(dat,(yyvsp[0].s));
														strcat(dat,"\"@");
														strcat(dat,(yyvsp[-1].s));
														(yyval.s)=dat;
													}
#line 1870 "temp_parser.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 148 "temp_parser.y" /* yacc.c:1646  */
    {	(yyval.s)="";	}
#line 1876 "temp_parser.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 153 "temp_parser.y" /* yacc.c:1646  */
    {	
														char *dat = malloc(2000);
														strcat(dat,(yyvsp[-2].s));
														strcat(dat,(yyvsp[-1].s));
														printf("\nFONT_ATTR: %s\n",(yyvsp[-2].s));	
														printf("\nFONT_DATA: %s\n",(yyvsp[-1].s));
														(yyval.s)=dat;
													}
#line 1889 "temp_parser.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 164 "temp_parser.y" /* yacc.c:1646  */
    { 	
														char *dat = malloc(2000);
														strcat(dat,"size=\"");
														strcat(dat,(yyvsp[0].s));
														strcat(dat,"\"");
														strcat(dat,(yyvsp[-1].s));
														(yyval.s)=dat;
													}
#line 1902 "temp_parser.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 172 "temp_parser.y" /* yacc.c:1646  */
    {	(yyval.s)="";	}
#line 1908 "temp_parser.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 179 "temp_parser.y" /* yacc.c:1646  */
    {
	
														char *dat = malloc(2000);
														strcat(dat,(yyvsp[-1].s));
														printf("\nParagraph: %s\n",(yyvsp[-1].s));	
														(yyval.s)=dat;
													}
#line 1920 "temp_parser.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 191 "temp_parser.y" /* yacc.c:1646  */
    {
		
														char *dat = malloc(2000);
														strcat(dat,(yyvsp[-1].s));
														printf("\nCenter Tag: %s\n",(yyvsp[-1].s));	
														(yyval.s)=dat;
													}
#line 1932 "temp_parser.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 201 "temp_parser.y" /* yacc.c:1646  */
    {	(yyval.s)="";	}
#line 1938 "temp_parser.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 202 "temp_parser.y" /* yacc.c:1646  */
    {	(yyval.s)="";	}
#line 1944 "temp_parser.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 206 "temp_parser.y" /* yacc.c:1646  */
    {	
														char *dat = malloc(2000);
														strcat(dat,(yyvsp[-2].s));
														//strcat(dat,$3);
														printf("\nIMG_CONTENT: %s\n",(yyvsp[-2].s));	
														//printf("\nHREF_DATA: %s\n",$3);
														(yyval.s)=dat;
													}
#line 1957 "temp_parser.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 214 "temp_parser.y" /* yacc.c:1646  */
    {
														char *dat = malloc(2000);
														strcat(dat,(yyvsp[-4].s));
														//strcat(dat,$3);
														printf("\nIMG_CONTENT: %s\n",(yyvsp[-4].s));	
														//printf("\nHREF_DATA: %s\n",$3);
														(yyval.s)=dat;
													}
#line 1970 "temp_parser.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 225 "temp_parser.y" /* yacc.c:1646  */
    {	(yyval.s)=(yyvsp[-1].s);	}
#line 1976 "temp_parser.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 226 "temp_parser.y" /* yacc.c:1646  */
    {	(yyval.s)="";	}
#line 1982 "temp_parser.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 230 "temp_parser.y" /* yacc.c:1646  */
    { 	
														char *dat = malloc(2000);
														strcat(dat,"src=\"");
														strcat(dat,(yyvsp[0].s));
														strcat(dat,"\"@");
														strcat(dat,(yyvsp[-1].s));
														//printf("\ny %s\n",dat);
														(yyval.s)=dat;	
													}
#line 1996 "temp_parser.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 239 "temp_parser.y" /* yacc.c:1646  */
    {
														char *dat = malloc(2000);
														strcat(dat,"height=\"");
														strcat(dat,(yyvsp[0].s));
														strcat(dat,"\"@");
														strcat(dat,(yyvsp[-1].s));
														//printf("\ny %s\n",dat);
														(yyval.s)=dat;	
													}
#line 2010 "temp_parser.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 248 "temp_parser.y" /* yacc.c:1646  */
    {
														char *dat = malloc(2000);
														strcat(dat,"width=\"");
														strcat(dat,(yyvsp[0].s));
														strcat(dat,"\"@");
														strcat(dat,(yyvsp[-1].s));
														//printf("\ny %s\n",dat);
														(yyval.s)=dat;	
													}
#line 2024 "temp_parser.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 257 "temp_parser.y" /* yacc.c:1646  */
    {	(yyval.s)="";	}
#line 2030 "temp_parser.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 262 "temp_parser.y" /* yacc.c:1646  */
    {
		
														char *dat = malloc(2000);
														strcat(dat,(yyvsp[-1].s));
														printf("\nDIV Tag: %s\n",(yyvsp[-1].s));	
														(yyval.s)=dat;
													}
#line 2042 "temp_parser.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 272 "temp_parser.y" /* yacc.c:1646  */
    {
		
														char *dat = malloc(2000);
														strcat(dat,(yyvsp[-1].s));
														printf("\nSuperscript Tag: %s\n",(yyvsp[-1].s));	
														(yyval.s)=dat;
													}
#line 2054 "temp_parser.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 279 "temp_parser.y" /* yacc.c:1646  */
    {
		
														char *dat = malloc(2000);
														strcat(dat,(yyvsp[-1].s));
														printf("\nSubscript Tag: %s\n",(yyvsp[-1].s));	
														(yyval.s)=dat;
													}
#line 2066 "temp_parser.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 289 "temp_parser.y" /* yacc.c:1646  */
    {
		
														char *dat = malloc(2000);
														strcat(dat,(yyvsp[-1].s));
														printf("\nUnderline Tag: %s\n",(yyvsp[-1].s));	
														(yyval.s)=dat;
													}
#line 2078 "temp_parser.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 296 "temp_parser.y" /* yacc.c:1646  */
    {
		
														char *dat = malloc(2000);
														strcat(dat,(yyvsp[-1].s));
														printf("\nBold Tag: %s\n",(yyvsp[-1].s));	
														(yyval.s)=dat;
													}
#line 2090 "temp_parser.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 303 "temp_parser.y" /* yacc.c:1646  */
    {
		
														char *dat = malloc(2000);
														strcat(dat,(yyvsp[-1].s));
														printf("\nItalics Tag: %s\n",(yyvsp[-1].s));	
														(yyval.s)=dat;
													}
#line 2102 "temp_parser.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 310 "temp_parser.y" /* yacc.c:1646  */
    {
		
														char *dat = malloc(2000);
														strcat(dat,(yyvsp[-1].s));
														printf("\nEmphasize Tag: %s\n",(yyvsp[-1].s));	
														(yyval.s)=dat;
													}
#line 2114 "temp_parser.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 317 "temp_parser.y" /* yacc.c:1646  */
    {
		
														char *dat = malloc(2000);
														strcat(dat,(yyvsp[-1].s));
														printf("\nTeletype Tag: %s\n",(yyvsp[-1].s));	
														(yyval.s)=dat;
													}
#line 2126 "temp_parser.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 324 "temp_parser.y" /* yacc.c:1646  */
    {
		
														char *dat = malloc(2000);
														strcat(dat,(yyvsp[-1].s));
														printf("\nStrong Tag: %s\n",(yyvsp[-1].s));	
														(yyval.s)=dat;
													}
#line 2138 "temp_parser.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 331 "temp_parser.y" /* yacc.c:1646  */
    {
		
														char *dat = malloc(2000);
														strcat(dat,(yyvsp[-1].s));
														printf("\nSmall Tag: %s\n",(yyvsp[-1].s));	
														(yyval.s)=dat;
													}
#line 2150 "temp_parser.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 341 "temp_parser.y" /* yacc.c:1646  */
    {
		
														char *dat = malloc(2000);
														strcat(dat,(yyvsp[-1].s));
														printf("\nH1 Tag: %s\n",(yyvsp[-1].s));	
														(yyval.s)=dat;
													}
#line 2162 "temp_parser.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 348 "temp_parser.y" /* yacc.c:1646  */
    {
		
														char *dat = malloc(2000);
														strcat(dat,(yyvsp[-1].s));
														printf("\nH2 Tag: %s\n",(yyvsp[-1].s));	
														(yyval.s)=dat;
													}
#line 2174 "temp_parser.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 355 "temp_parser.y" /* yacc.c:1646  */
    {
		
														char *dat = malloc(2000);
														strcat(dat,(yyvsp[-1].s));
														printf("\nH3 Tag: %s\n",(yyvsp[-1].s));	
														(yyval.s)=dat;
													}
#line 2186 "temp_parser.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 362 "temp_parser.y" /* yacc.c:1646  */
    {
		
														char *dat = malloc(2000);
														strcat(dat,(yyvsp[-1].s));
														printf("\nH4 Tag: %s\n",(yyvsp[-1].s));	
														(yyval.s)=dat;
													}
#line 2198 "temp_parser.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 372 "temp_parser.y" /* yacc.c:1646  */
    {		
														char *dat = malloc(2000);
														strcat(dat,(yyvsp[-3].s));
														strcat(dat,(yyvsp[-2].s));
														strcat(dat,(yyvsp[-1].s));
														printf("\nTABLE: %s\n",dat);	
														(yyval.s)=dat;
													}
#line 2211 "temp_parser.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 383 "temp_parser.y" /* yacc.c:1646  */
    { 	
														char *dat = malloc(2000);
														strcat(dat,"border=\"");
														strcat(dat,(yyvsp[0].s));
														strcat(dat,"\"");
														strcat(dat,(yyvsp[-1].s));
														(yyval.s)=dat;
													}
#line 2224 "temp_parser.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 391 "temp_parser.y" /* yacc.c:1646  */
    {	(yyval.s)="";	}
#line 2230 "temp_parser.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 394 "temp_parser.y" /* yacc.c:1646  */
    {
														char *dat = malloc(2000);
														strcat(dat,(yyvsp[-2].s));
														strcat(dat,(yyvsp[-1].s));
														(yyval.s)=dat;
													}
#line 2241 "temp_parser.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 400 "temp_parser.y" /* yacc.c:1646  */
    {
														char *dat = malloc(2000);
														strcat(dat,(yyvsp[-1].s));
														(yyval.s)=dat;
													}
#line 2251 "temp_parser.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 408 "temp_parser.y" /* yacc.c:1646  */
    {	(yyval.s)=(yyvsp[-1].s);		}
#line 2257 "temp_parser.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 411 "temp_parser.y" /* yacc.c:1646  */
    {	(yyval.s)=(yyvsp[-1].s);		}
#line 2263 "temp_parser.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 414 "temp_parser.y" /* yacc.c:1646  */
    {	(yyval.s)=(yyvsp[-1].s);		}
#line 2269 "temp_parser.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 419 "temp_parser.y" /* yacc.c:1646  */
    {	(yyval.s)=(yyvsp[-1].s);		}
#line 2275 "temp_parser.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 421 "temp_parser.y" /* yacc.c:1646  */
    {	(yyval.s)=(yyvsp[-1].s);		}
#line 2281 "temp_parser.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 423 "temp_parser.y" /* yacc.c:1646  */
    {	(yyval.s)=(yyvsp[-1].s);		}
#line 2287 "temp_parser.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 425 "temp_parser.y" /* yacc.c:1646  */
    {	(yyval.s)=(yyvsp[-1].s);		}
#line 2293 "temp_parser.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 427 "temp_parser.y" /* yacc.c:1646  */
    {	(yyval.s)=(yyvsp[-1].s);		}
#line 2299 "temp_parser.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 429 "temp_parser.y" /* yacc.c:1646  */
    {	(yyval.s)=(yyvsp[-1].s);		}
#line 2305 "temp_parser.tab.c" /* yacc.c:1646  */
    break;


#line 2309 "temp_parser.tab.c" /* yacc.c:1646  */
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

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

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
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

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
#line 431 "temp_parser.y" /* yacc.c:1906  */

int main(int argc,char *argv[])
{
	yyin = fopen(argv[1],"r");
	tex_file = fopen(argv[2],"w+");
	yyparse();
}

void yyerror(const char *s)
{
	printf("\nSyntax Error\n");
}

