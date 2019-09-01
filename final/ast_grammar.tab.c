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
#line 1 "ast_grammar.y" /* yacc.c:339  */

#define YYDEBUG 1
#include<bits/stdc++.h>
#include "ast.h"
using namespace std;
typedef vector<ast_node*> c_ptrs;
extern ast_node* root;
vector<string> labels;
c_ptrs* content_children;
stack<c_ptrs> content_stack;
void yyerror(const char *);
extern FILE *yyin;
FILE *tex_file;
extern int yylex();
extern char *yytext;

#line 83 "ast_grammar.tab.c" /* yacc.c:339  */

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
   by #include "ast_grammar.tab.h".  */
#ifndef YY_YY_AST_GRAMMAR_TAB_H_INCLUDED
# define YY_YY_AST_GRAMMAR_TAB_H_INCLUDED
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
    BR_S = 341,
    HREF_NAME = 342,
    COMMENT = 343
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 19 "ast_grammar.y" /* yacc.c:355  */

	char *s;
	struct ast_node* node;

#line 217 "ast_grammar.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_AST_GRAMMAR_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 234 "ast_grammar.tab.c" /* yacc.c:358  */

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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1560

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  89
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  32
/* YYNRULES -- Number of rules.  */
#define YYNRULES  78
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  172

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   343

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
      85,    86,    87,    88
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    57,    57,    69,    82,    90,    97,   105,   116,   126,
     135,   145,   155,   165,   175,   185,   195,   205,   215,   225,
     235,   245,   255,   265,   276,   282,   292,   302,   312,   325,
     334,   342,   351,   357,   363,   370,   379,   383,   392,   401,
     408,   413,   419,   425,   431,   440,   446,   452,   458,   464,
     470,   476,   485,   490,   497,   505,   516,   521,   530,   539,
     548,   557,   562,   571,   576,   581,   586,   591,   596,   603,
     615,   621,   627,   636,   645,   650,   657,   664,   674
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
  "FIGCAP_S", "FIGCAP_E", "BR_S", "HREF_NAME", "COMMENT", "$accept",
  "html_start", "content_head", "content_title", "content_body", "body",
  "data", "p_tag", "center_tag", "href_tag", "content_href", "br_tag",
  "font_tag", "content_font", "header_tag", "format_tag", "subsup_tag",
  "img_tag", "fig_caption", "content_img", "div_tag", "li_tag", "ul_tag",
  "ol_tag", "dl_tag", "dt_tag", "dd_tag", "table_tag", "content_table",
  "table_contents", "caption_data", "tr_data", YY_NULLPTR
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
     335,   336,   337,   338,   339,   340,   341,   342,   343
};
# endif

#define YYPACT_NINF -101

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-101)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -101,    28,    -3,  -101,  -101,  -101,  -101,  -101,    25,    17,
    -101,    36,  -101,   108,   -49,  -101,    34,  -101,  -101,  -101,
    -101,  -101,  -101,  -101,  -101,  -101,  -101,  -101,  -101,  -101,
    -101,  -101,  -101,  -101,  -101,  -101,  -101,  -101,  -101,  -101,
    -101,  -101,  -101,   -33,  -101,   -25,  -101,  -101,  -101,  -101,
    -101,  -101,  -101,  -101,  -101,  -101,  -101,  -101,  -101,  -101,
    -101,  -101,  -101,  -101,  -101,  -101,   -44,   -21,   156,   202,
     248,   294,   340,   388,   434,   482,   528,   574,   622,   668,
     714,   760,   806,   852,   898,   944,   990,  1036,  1084,  1136,
    -101,   -13,   -43,  -101,   -49,   -49,   -49,   -49,   -49,   -49,
     -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,
     -49,    15,    46,  -101,  -101,  -101,  1188,  -101,  1240,  -101,
    -101,  -101,  -101,  -101,  -101,  -101,  -101,  -101,  -101,  -101,
    -101,  -101,  -101,  -101,  -101,  -101,  -101,  -101,  -101,  -101,
    -101,  -101,  -101,  -101,  -101,  -101,   -30,   -39,  -101,  -101,
    -101,  -101,  1286,   -19,  -101,  -101,   -30,  -101,  -101,  -101,
    1332,   -27,    -9,  -101,  -101,  -101,  -101,  -101,  1407,  1453,
    -101,  -101
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
      28,     0,     0,     1,    28,    25,    26,    27,     0,     4,
      28,     0,    28,     0,    24,     2,     0,     6,    35,    40,
      28,    36,    28,    28,    28,    28,    28,    28,    28,    28,
      28,    28,    28,    28,    28,    28,    28,    28,    28,    28,
      28,    28,    28,    71,    61,     0,    37,    28,    28,    28,
      28,    28,    28,    28,    28,    28,    28,    28,    28,    28,
      28,    28,    28,    28,    28,    28,    28,    28,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      70,    75,     0,    61,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    22,    21,
      23,     0,     0,    32,    33,    34,     0,    39,     0,    30,
      29,    41,    42,    43,    44,    64,    63,    65,    66,    67,
      68,    62,    45,    46,    47,    48,    49,    50,    51,    53,
      52,    28,    73,    58,    60,    59,    57,     0,     5,     3,
      31,    38,     0,     0,    28,    54,    57,    74,    69,    78,
       0,     0,     0,    56,    55,    28,    28,    72,     0,     0,
      77,    76
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -101,  -101,    13,  -101,  -101,   -20,  1495,  -101,  -101,  -101,
    -101,  -101,  -101,  -101,  -101,  -101,  -101,  -101,  -100,   -36,
    -101,  -101,  -101,  -101,  -101,  -101,  -101,  -101,  -101,  -101,
    -101,  -101
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     8,    65,    11,    13,    14,    47,    48,    49,
      66,    50,    51,    67,    52,    53,    54,    55,   155,    92,
      56,    57,    58,    59,    60,    61,    62,    63,    91,   153,
     142,   162
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      68,     4,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    12,   148,    16,   165,   113,     3,   114,
       5,     6,   143,   144,   145,    10,   143,   144,   145,     7,
     146,    15,    64,   115,   156,   158,   116,   118,    90,    93,
     159,   117,   141,   149,   154,   164,   161,   147,   166,     0,
       0,   167,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     5,     6,   112,     0,
       0,     0,     0,     0,     0,     7,     0,     0,     0,     0,
       0,     0,     0,     0,     5,     6,     5,     6,     0,     0,
       0,     0,     0,     7,     0,     7,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    17,
      18,   152,    19,     0,    20,     0,    21,    22,     0,    23,
       0,    24,     0,    25,   160,    26,     0,    27,     0,    28,
       0,    29,     0,     0,    30,   168,   169,    31,     0,    32,
       0,    33,     0,    34,     0,    35,     0,    36,     0,    37,
       0,    38,     0,    39,     0,    40,     0,    41,    18,    42,
      19,    43,    20,   119,    21,    22,     0,    23,     0,    24,
       0,    25,    44,    26,     0,    27,    45,    28,     0,    29,
       0,     0,    30,     0,    46,    31,     0,    32,     0,    33,
       0,    34,     0,    35,     0,    36,     0,    37,     0,    38,
       0,    39,     0,    40,    18,    41,    19,    42,    20,    43,
      21,    22,   120,    23,     0,    24,     0,    25,     0,    26,
      44,    27,     0,    28,    45,    29,     0,     0,    30,     0,
       0,    31,    46,    32,     0,    33,     0,    34,     0,    35,
       0,    36,     0,    37,     0,    38,     0,    39,     0,    40,
      18,    41,    19,    42,    20,    43,    21,    22,     0,    23,
     121,    24,     0,    25,     0,    26,    44,    27,     0,    28,
      45,    29,     0,     0,    30,     0,     0,    31,    46,    32,
       0,    33,     0,    34,     0,    35,     0,    36,     0,    37,
       0,    38,     0,    39,     0,    40,    18,    41,    19,    42,
      20,    43,    21,    22,     0,    23,     0,    24,   122,    25,
       0,    26,    44,    27,     0,    28,    45,    29,     0,     0,
      30,     0,     0,    31,    46,    32,     0,    33,     0,    34,
       0,    35,     0,    36,     0,    37,     0,    38,     0,    39,
       0,    40,    18,    41,    19,    42,    20,    43,    21,    22,
       0,    23,     0,    24,     0,    25,   123,    26,    44,    27,
       0,    28,    45,    29,     0,     0,    30,     0,     0,    31,
      46,    32,     0,    33,     0,    34,     0,    35,     0,    36,
       0,    37,     0,    38,     0,    39,     0,    40,     0,    41,
      18,    42,    19,    43,    20,     0,    21,    22,     0,    23,
       0,    24,     0,    25,    44,    26,   124,    27,    45,    28,
       0,    29,     0,     0,    30,     0,    46,    31,     0,    32,
       0,    33,     0,    34,     0,    35,     0,    36,     0,    37,
       0,    38,     0,    39,     0,    40,    18,    41,    19,    42,
      20,    43,    21,    22,     0,    23,     0,    24,     0,    25,
       0,    26,    44,    27,   125,    28,    45,    29,     0,     0,
      30,     0,     0,    31,    46,    32,     0,    33,     0,    34,
       0,    35,     0,    36,     0,    37,     0,    38,     0,    39,
       0,    40,     0,    41,    18,    42,    19,    43,    20,     0,
      21,    22,     0,    23,     0,    24,     0,    25,    44,    26,
       0,    27,    45,    28,   126,    29,     0,     0,    30,     0,
      46,    31,     0,    32,     0,    33,     0,    34,     0,    35,
       0,    36,     0,    37,     0,    38,     0,    39,     0,    40,
      18,    41,    19,    42,    20,    43,    21,    22,     0,    23,
       0,    24,     0,    25,     0,    26,    44,    27,     0,    28,
      45,    29,   127,     0,    30,     0,     0,    31,    46,    32,
       0,    33,     0,    34,     0,    35,     0,    36,     0,    37,
       0,    38,     0,    39,     0,    40,    18,    41,    19,    42,
      20,    43,    21,    22,     0,    23,     0,    24,     0,    25,
       0,    26,    44,    27,     0,    28,    45,    29,     0,     0,
      30,     0,   128,    31,    46,    32,     0,    33,     0,    34,
       0,    35,     0,    36,     0,    37,     0,    38,     0,    39,
       0,    40,     0,    41,    18,    42,    19,    43,    20,     0,
      21,    22,     0,    23,     0,    24,     0,    25,    44,    26,
       0,    27,    45,    28,     0,    29,     0,     0,    30,     0,
      46,    31,   129,    32,     0,    33,     0,    34,     0,    35,
       0,    36,     0,    37,     0,    38,     0,    39,     0,    40,
      18,    41,    19,    42,    20,    43,    21,    22,     0,    23,
       0,    24,     0,    25,     0,    26,    44,    27,     0,    28,
      45,    29,     0,     0,    30,     0,     0,    31,    46,    32,
     130,    33,     0,    34,     0,    35,     0,    36,     0,    37,
       0,    38,     0,    39,     0,    40,    18,    41,    19,    42,
      20,    43,    21,    22,     0,    23,     0,    24,     0,    25,
       0,    26,    44,    27,     0,    28,    45,    29,     0,     0,
      30,     0,     0,    31,    46,    32,     0,    33,   131,    34,
       0,    35,     0,    36,     0,    37,     0,    38,     0,    39,
       0,    40,    18,    41,    19,    42,    20,    43,    21,    22,
       0,    23,     0,    24,     0,    25,     0,    26,    44,    27,
       0,    28,    45,    29,     0,     0,    30,     0,     0,    31,
      46,    32,     0,    33,     0,    34,   132,    35,     0,    36,
       0,    37,     0,    38,     0,    39,     0,    40,    18,    41,
      19,    42,    20,    43,    21,    22,     0,    23,     0,    24,
       0,    25,     0,    26,    44,    27,     0,    28,    45,    29,
       0,     0,    30,     0,     0,    31,    46,    32,     0,    33,
       0,    34,     0,    35,   133,    36,     0,    37,     0,    38,
       0,    39,     0,    40,    18,    41,    19,    42,    20,    43,
      21,    22,     0,    23,     0,    24,     0,    25,     0,    26,
      44,    27,     0,    28,    45,    29,     0,     0,    30,     0,
       0,    31,    46,    32,     0,    33,     0,    34,     0,    35,
       0,    36,   134,    37,     0,    38,     0,    39,     0,    40,
      18,    41,    19,    42,    20,    43,    21,    22,     0,    23,
       0,    24,     0,    25,     0,    26,    44,    27,     0,    28,
      45,    29,     0,     0,    30,     0,     0,    31,    46,    32,
       0,    33,     0,    34,     0,    35,     0,    36,     0,    37,
     135,    38,     0,    39,     0,    40,    18,    41,    19,    42,
      20,    43,    21,    22,     0,    23,     0,    24,     0,    25,
       0,    26,    44,    27,     0,    28,    45,    29,     0,     0,
      30,     0,     0,    31,    46,    32,     0,    33,     0,    34,
       0,    35,     0,    36,     0,    37,     0,    38,   136,    39,
       0,    40,    18,    41,    19,    42,    20,    43,    21,    22,
       0,    23,     0,    24,     0,    25,     0,    26,    44,    27,
       0,    28,    45,    29,     0,     0,    30,     0,     0,    31,
      46,    32,     0,    33,     0,    34,     0,    35,     0,    36,
       0,    37,     0,    38,     0,    39,   137,    40,    18,    41,
      19,    42,    20,    43,    21,    22,     0,    23,     0,    24,
       0,    25,     0,    26,    44,    27,     0,    28,    45,    29,
       0,     0,    30,     0,     0,    31,    46,    32,     0,    33,
       0,    34,     0,    35,     0,    36,     0,    37,     0,    38,
       0,    39,     0,    40,   138,    41,    18,    42,    19,    43,
      20,     0,    21,    22,     0,    23,     0,    24,     0,    25,
      44,    26,     0,    27,    45,    28,     0,    29,     0,     0,
      30,     0,    46,    31,     0,    32,     0,    33,     0,    34,
       0,    35,     0,    36,     0,    37,     0,    38,     0,    39,
       0,    40,     0,    41,   139,    42,     0,    43,    18,     0,
      19,     0,    20,     0,    21,    22,     0,    23,    44,    24,
       0,    25,    45,    26,     0,    27,     0,    28,     0,    29,
      46,     0,    30,     0,     0,    31,     0,    32,     0,    33,
       0,    34,     0,    35,     0,    36,     0,    37,     0,    38,
       0,    39,     0,    40,     0,    41,     0,    42,   140,    43,
      18,   150,    19,     0,    20,     0,    21,    22,     0,    23,
      44,    24,     0,    25,    45,    26,     0,    27,     0,    28,
       0,    29,    46,     0,    30,     0,     0,    31,     0,    32,
       0,    33,     0,    34,     0,    35,     0,    36,     0,    37,
       0,    38,     0,    39,     0,    40,     0,    41,     0,    42,
       0,    43,    18,     0,    19,   151,    20,     0,    21,    22,
       0,    23,    44,    24,     0,    25,    45,    26,     0,    27,
       0,    28,     0,    29,    46,     0,    30,     0,     0,    31,
       0,    32,     0,    33,     0,    34,     0,    35,     0,    36,
       0,    37,     0,    38,     0,    39,     0,    40,    18,    41,
      19,    42,    20,    43,    21,    22,     0,    23,     0,    24,
       0,    25,     0,    26,    44,    27,     0,    28,    45,    29,
       0,     0,    30,     0,     0,    31,    46,    32,     0,    33,
       0,    34,     0,    35,     0,    36,     0,    37,     0,    38,
       0,    39,     0,    40,    18,    41,    19,    42,    20,    43,
      21,    22,   157,    23,     0,    24,     0,    25,     0,    26,
      44,    27,     0,    28,    45,    29,     0,     0,    30,     0,
       0,    31,    46,    32,     0,    33,     0,    34,     0,    35,
       0,    36,     0,    37,     0,    38,     0,    39,     0,    40,
       0,    41,     0,    42,     0,    43,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    44,     0,     0,     0,
      45,     0,     0,     0,     0,     0,     0,   163,    46,    18,
       0,    19,     0,    20,     0,    21,    22,     0,    23,     0,
      24,     0,    25,     0,    26,     0,    27,     0,    28,     0,
      29,     0,     0,    30,   170,     0,    31,     0,    32,     0,
      33,     0,    34,     0,    35,     0,    36,     0,    37,     0,
      38,     0,    39,     0,    40,    18,    41,    19,    42,    20,
      43,    21,    22,     0,    23,     0,    24,     0,    25,     0,
      26,    44,    27,     0,    28,    45,    29,     0,     0,    30,
       0,     0,    31,    46,    32,     2,    33,     0,    34,     9,
      35,     0,    36,     0,    37,     0,    38,     9,    39,     0,
      40,     0,    41,     0,    42,     0,    43,     0,     0,     0,
       0,   171,     0,     0,     0,     0,     0,    44,     0,     0,
       0,    45,     0,     0,     0,     0,     0,     0,     0,    46,
       0,     0,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
       9
};

static const yytype_int16 yycheck[] =
{
      20,     4,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,     6,     9,    12,    35,    71,     0,    73,
      79,    80,    75,    76,    77,    10,    75,    76,    77,    88,
      83,     5,     8,    87,    83,    64,    66,    67,    81,    74,
      69,    72,    65,     7,    84,    82,   156,    93,    67,    -1,
      -1,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    79,    80,    65,    -1,
      -1,    -1,    -1,    -1,    -1,    88,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    79,    80,    79,    80,    -1,    -1,
      -1,    -1,    -1,    88,    -1,    88,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    11,
      12,   141,    14,    -1,    16,    -1,    18,    19,    -1,    21,
      -1,    23,    -1,    25,   154,    27,    -1,    29,    -1,    31,
      -1,    33,    -1,    -1,    36,   165,   166,    39,    -1,    41,
      -1,    43,    -1,    45,    -1,    47,    -1,    49,    -1,    51,
      -1,    53,    -1,    55,    -1,    57,    -1,    59,    12,    61,
      14,    63,    16,    17,    18,    19,    -1,    21,    -1,    23,
      -1,    25,    74,    27,    -1,    29,    78,    31,    -1,    33,
      -1,    -1,    36,    -1,    86,    39,    -1,    41,    -1,    43,
      -1,    45,    -1,    47,    -1,    49,    -1,    51,    -1,    53,
      -1,    55,    -1,    57,    12,    59,    14,    61,    16,    63,
      18,    19,    20,    21,    -1,    23,    -1,    25,    -1,    27,
      74,    29,    -1,    31,    78,    33,    -1,    -1,    36,    -1,
      -1,    39,    86,    41,    -1,    43,    -1,    45,    -1,    47,
      -1,    49,    -1,    51,    -1,    53,    -1,    55,    -1,    57,
      12,    59,    14,    61,    16,    63,    18,    19,    -1,    21,
      22,    23,    -1,    25,    -1,    27,    74,    29,    -1,    31,
      78,    33,    -1,    -1,    36,    -1,    -1,    39,    86,    41,
      -1,    43,    -1,    45,    -1,    47,    -1,    49,    -1,    51,
      -1,    53,    -1,    55,    -1,    57,    12,    59,    14,    61,
      16,    63,    18,    19,    -1,    21,    -1,    23,    24,    25,
      -1,    27,    74,    29,    -1,    31,    78,    33,    -1,    -1,
      36,    -1,    -1,    39,    86,    41,    -1,    43,    -1,    45,
      -1,    47,    -1,    49,    -1,    51,    -1,    53,    -1,    55,
      -1,    57,    12,    59,    14,    61,    16,    63,    18,    19,
      -1,    21,    -1,    23,    -1,    25,    26,    27,    74,    29,
      -1,    31,    78,    33,    -1,    -1,    36,    -1,    -1,    39,
      86,    41,    -1,    43,    -1,    45,    -1,    47,    -1,    49,
      -1,    51,    -1,    53,    -1,    55,    -1,    57,    -1,    59,
      12,    61,    14,    63,    16,    -1,    18,    19,    -1,    21,
      -1,    23,    -1,    25,    74,    27,    28,    29,    78,    31,
      -1,    33,    -1,    -1,    36,    -1,    86,    39,    -1,    41,
      -1,    43,    -1,    45,    -1,    47,    -1,    49,    -1,    51,
      -1,    53,    -1,    55,    -1,    57,    12,    59,    14,    61,
      16,    63,    18,    19,    -1,    21,    -1,    23,    -1,    25,
      -1,    27,    74,    29,    30,    31,    78,    33,    -1,    -1,
      36,    -1,    -1,    39,    86,    41,    -1,    43,    -1,    45,
      -1,    47,    -1,    49,    -1,    51,    -1,    53,    -1,    55,
      -1,    57,    -1,    59,    12,    61,    14,    63,    16,    -1,
      18,    19,    -1,    21,    -1,    23,    -1,    25,    74,    27,
      -1,    29,    78,    31,    32,    33,    -1,    -1,    36,    -1,
      86,    39,    -1,    41,    -1,    43,    -1,    45,    -1,    47,
      -1,    49,    -1,    51,    -1,    53,    -1,    55,    -1,    57,
      12,    59,    14,    61,    16,    63,    18,    19,    -1,    21,
      -1,    23,    -1,    25,    -1,    27,    74,    29,    -1,    31,
      78,    33,    34,    -1,    36,    -1,    -1,    39,    86,    41,
      -1,    43,    -1,    45,    -1,    47,    -1,    49,    -1,    51,
      -1,    53,    -1,    55,    -1,    57,    12,    59,    14,    61,
      16,    63,    18,    19,    -1,    21,    -1,    23,    -1,    25,
      -1,    27,    74,    29,    -1,    31,    78,    33,    -1,    -1,
      36,    -1,    38,    39,    86,    41,    -1,    43,    -1,    45,
      -1,    47,    -1,    49,    -1,    51,    -1,    53,    -1,    55,
      -1,    57,    -1,    59,    12,    61,    14,    63,    16,    -1,
      18,    19,    -1,    21,    -1,    23,    -1,    25,    74,    27,
      -1,    29,    78,    31,    -1,    33,    -1,    -1,    36,    -1,
      86,    39,    40,    41,    -1,    43,    -1,    45,    -1,    47,
      -1,    49,    -1,    51,    -1,    53,    -1,    55,    -1,    57,
      12,    59,    14,    61,    16,    63,    18,    19,    -1,    21,
      -1,    23,    -1,    25,    -1,    27,    74,    29,    -1,    31,
      78,    33,    -1,    -1,    36,    -1,    -1,    39,    86,    41,
      42,    43,    -1,    45,    -1,    47,    -1,    49,    -1,    51,
      -1,    53,    -1,    55,    -1,    57,    12,    59,    14,    61,
      16,    63,    18,    19,    -1,    21,    -1,    23,    -1,    25,
      -1,    27,    74,    29,    -1,    31,    78,    33,    -1,    -1,
      36,    -1,    -1,    39,    86,    41,    -1,    43,    44,    45,
      -1,    47,    -1,    49,    -1,    51,    -1,    53,    -1,    55,
      -1,    57,    12,    59,    14,    61,    16,    63,    18,    19,
      -1,    21,    -1,    23,    -1,    25,    -1,    27,    74,    29,
      -1,    31,    78,    33,    -1,    -1,    36,    -1,    -1,    39,
      86,    41,    -1,    43,    -1,    45,    46,    47,    -1,    49,
      -1,    51,    -1,    53,    -1,    55,    -1,    57,    12,    59,
      14,    61,    16,    63,    18,    19,    -1,    21,    -1,    23,
      -1,    25,    -1,    27,    74,    29,    -1,    31,    78,    33,
      -1,    -1,    36,    -1,    -1,    39,    86,    41,    -1,    43,
      -1,    45,    -1,    47,    48,    49,    -1,    51,    -1,    53,
      -1,    55,    -1,    57,    12,    59,    14,    61,    16,    63,
      18,    19,    -1,    21,    -1,    23,    -1,    25,    -1,    27,
      74,    29,    -1,    31,    78,    33,    -1,    -1,    36,    -1,
      -1,    39,    86,    41,    -1,    43,    -1,    45,    -1,    47,
      -1,    49,    50,    51,    -1,    53,    -1,    55,    -1,    57,
      12,    59,    14,    61,    16,    63,    18,    19,    -1,    21,
      -1,    23,    -1,    25,    -1,    27,    74,    29,    -1,    31,
      78,    33,    -1,    -1,    36,    -1,    -1,    39,    86,    41,
      -1,    43,    -1,    45,    -1,    47,    -1,    49,    -1,    51,
      52,    53,    -1,    55,    -1,    57,    12,    59,    14,    61,
      16,    63,    18,    19,    -1,    21,    -1,    23,    -1,    25,
      -1,    27,    74,    29,    -1,    31,    78,    33,    -1,    -1,
      36,    -1,    -1,    39,    86,    41,    -1,    43,    -1,    45,
      -1,    47,    -1,    49,    -1,    51,    -1,    53,    54,    55,
      -1,    57,    12,    59,    14,    61,    16,    63,    18,    19,
      -1,    21,    -1,    23,    -1,    25,    -1,    27,    74,    29,
      -1,    31,    78,    33,    -1,    -1,    36,    -1,    -1,    39,
      86,    41,    -1,    43,    -1,    45,    -1,    47,    -1,    49,
      -1,    51,    -1,    53,    -1,    55,    56,    57,    12,    59,
      14,    61,    16,    63,    18,    19,    -1,    21,    -1,    23,
      -1,    25,    -1,    27,    74,    29,    -1,    31,    78,    33,
      -1,    -1,    36,    -1,    -1,    39,    86,    41,    -1,    43,
      -1,    45,    -1,    47,    -1,    49,    -1,    51,    -1,    53,
      -1,    55,    -1,    57,    58,    59,    12,    61,    14,    63,
      16,    -1,    18,    19,    -1,    21,    -1,    23,    -1,    25,
      74,    27,    -1,    29,    78,    31,    -1,    33,    -1,    -1,
      36,    -1,    86,    39,    -1,    41,    -1,    43,    -1,    45,
      -1,    47,    -1,    49,    -1,    51,    -1,    53,    -1,    55,
      -1,    57,    -1,    59,    60,    61,    -1,    63,    12,    -1,
      14,    -1,    16,    -1,    18,    19,    -1,    21,    74,    23,
      -1,    25,    78,    27,    -1,    29,    -1,    31,    -1,    33,
      86,    -1,    36,    -1,    -1,    39,    -1,    41,    -1,    43,
      -1,    45,    -1,    47,    -1,    49,    -1,    51,    -1,    53,
      -1,    55,    -1,    57,    -1,    59,    -1,    61,    62,    63,
      12,    13,    14,    -1,    16,    -1,    18,    19,    -1,    21,
      74,    23,    -1,    25,    78,    27,    -1,    29,    -1,    31,
      -1,    33,    86,    -1,    36,    -1,    -1,    39,    -1,    41,
      -1,    43,    -1,    45,    -1,    47,    -1,    49,    -1,    51,
      -1,    53,    -1,    55,    -1,    57,    -1,    59,    -1,    61,
      -1,    63,    12,    -1,    14,    15,    16,    -1,    18,    19,
      -1,    21,    74,    23,    -1,    25,    78,    27,    -1,    29,
      -1,    31,    -1,    33,    86,    -1,    36,    -1,    -1,    39,
      -1,    41,    -1,    43,    -1,    45,    -1,    47,    -1,    49,
      -1,    51,    -1,    53,    -1,    55,    -1,    57,    12,    59,
      14,    61,    16,    63,    18,    19,    -1,    21,    -1,    23,
      -1,    25,    -1,    27,    74,    29,    -1,    31,    78,    33,
      -1,    -1,    36,    -1,    -1,    39,    86,    41,    -1,    43,
      -1,    45,    -1,    47,    -1,    49,    -1,    51,    -1,    53,
      -1,    55,    -1,    57,    12,    59,    14,    61,    16,    63,
      18,    19,    66,    21,    -1,    23,    -1,    25,    -1,    27,
      74,    29,    -1,    31,    78,    33,    -1,    -1,    36,    -1,
      -1,    39,    86,    41,    -1,    43,    -1,    45,    -1,    47,
      -1,    49,    -1,    51,    -1,    53,    -1,    55,    -1,    57,
      -1,    59,    -1,    61,    -1,    63,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    74,    -1,    -1,    -1,
      78,    -1,    -1,    -1,    -1,    -1,    -1,    85,    86,    12,
      -1,    14,    -1,    16,    -1,    18,    19,    -1,    21,    -1,
      23,    -1,    25,    -1,    27,    -1,    29,    -1,    31,    -1,
      33,    -1,    -1,    36,    37,    -1,    39,    -1,    41,    -1,
      43,    -1,    45,    -1,    47,    -1,    49,    -1,    51,    -1,
      53,    -1,    55,    -1,    57,    12,    59,    14,    61,    16,
      63,    18,    19,    -1,    21,    -1,    23,    -1,    25,    -1,
      27,    74,    29,    -1,    31,    78,    33,    -1,    -1,    36,
      -1,    -1,    39,    86,    41,     0,    43,    -1,    45,     4,
      47,    -1,    49,    -1,    51,    -1,    53,    12,    55,    -1,
      57,    -1,    59,    -1,    61,    -1,    63,    -1,    -1,    -1,
      -1,    68,    -1,    -1,    -1,    -1,    -1,    74,    -1,    -1,
      -1,    78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,
      -1,    -1,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    90,    95,     0,     4,    79,    80,    88,    91,    95,
      10,    93,     6,    94,    95,     5,    91,    11,    12,    14,
      16,    18,    19,    21,    23,    25,    27,    29,    31,    33,
      36,    39,    41,    43,    45,    47,    49,    51,    53,    55,
      57,    59,    61,    63,    74,    78,    86,    96,    97,    98,
     100,   101,   103,   104,   105,   106,   109,   110,   111,   112,
     113,   114,   115,   116,     8,    92,    99,   102,    94,    94,
      94,    94,    94,    94,    94,    94,    94,    94,    94,    94,
      94,    94,    94,    94,    94,    94,    94,    94,    94,    94,
      81,   117,   108,    74,    95,    95,    95,    95,    95,    95,
      95,    95,    95,    95,    95,    95,    95,    95,    95,    95,
      95,    95,    91,    71,    73,    87,    94,    72,    94,    17,
      20,    22,    24,    26,    28,    30,    32,    34,    38,    40,
      42,    44,    46,    48,    50,    52,    54,    56,    58,    60,
      62,    65,   119,    75,    76,    77,    83,   108,     9,     7,
      13,    15,    94,   118,    84,   107,    83,    66,    64,    69,
      94,   107,   120,    85,    82,    35,    67,    70,    94,    94,
      37,    68
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    89,    90,    91,    91,    92,    93,    94,    94,    94,
      94,    94,    94,    94,    94,    94,    94,    94,    94,    94,
      94,    94,    94,    94,    94,    95,    95,    95,    95,    96,
      97,    98,    99,    99,    99,    99,   100,   100,   101,   102,
     102,   103,   103,   103,   103,   104,   104,   104,   104,   104,
     104,   104,   105,   105,   106,   106,   107,   107,   108,   108,
     108,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   117,   118,   118,   119,   119,   120,   120,   120
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     5,     6,     1,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     1,     2,     2,     2,     0,     3,
       3,     4,     2,     2,     2,     0,     1,     1,     4,     2,
       0,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     4,     6,     3,     0,     2,     2,
       2,     0,     3,     3,     3,     3,     3,     3,     3,     5,
       1,     0,     4,     0,     3,     0,     4,     4,     0
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
#line 57 "ast_grammar.y" /* yacc.c:1646  */
    {
													root = new_node();
													root->node_type = HTML_H;
													string st1("");
													root->data="";
													root->children.push_back((yyvsp[-2].node));
													root->children.push_back((yyvsp[-1].node));
													
												}
#line 1730 "ast_grammar.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 69 "ast_grammar.y" /* yacc.c:1646  */
    {
													
													(yyval.node) = new_node();
													(yyval.node)->node_type = HEAD_H;
													string st1("");
													if((yyvsp[-3].node)->data.compare(st1)!=0)
														(yyval.node)->children.push_back((yyvsp[-3].node));
													if((yyvsp[-2].node))
														(yyval.node)->children.push_back((yyvsp[-2].node));
													if((yyvsp[-1].node)->data.compare(st1)!=0)
														(yyval.node)->children.push_back((yyvsp[-1].node));
													
												}
#line 1748 "ast_grammar.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 82 "ast_grammar.y" /* yacc.c:1646  */
    {
													(yyval.node) = new_node();
													
													(yyval.node)->data = (yyvsp[0].node)->data;
													(yyval.node)->node_type = DATA_H;
												}
#line 1759 "ast_grammar.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 90 "ast_grammar.y" /* yacc.c:1646  */
    {
													(yyval.node) = new_node();
													(yyval.node)->node_type = TITLE_H;
													(yyval.node)->children.push_back((yyvsp[-1].node));
												}
#line 1769 "ast_grammar.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 97 "ast_grammar.y" /* yacc.c:1646  */
    {
													(yyval.node) = new_node();
													(yyval.node)->node_type = BODY_H;
													(yyval.node)->children.push_back((yyvsp[-1].node));
													
												}
#line 1780 "ast_grammar.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 105 "ast_grammar.y" /* yacc.c:1646  */
    {	
													(yyval.node) = new_node();
													(yyval.node)->node_type = CONTENT_H;
													string st1("");
													(yyval.node)->children.push_back((yyvsp[-2].node));
													if((yyvsp[-1].node))
														(yyval.node)->children.push_back((yyvsp[-1].node));
													if((yyvsp[0].node)->data.compare(st1)!=0)
														(yyval.node)->children.push_back((yyvsp[0].node));	
													//content_children->push_back($3);
												}
#line 1796 "ast_grammar.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 116 "ast_grammar.y" /* yacc.c:1646  */
    {	
													(yyval.node) = new_node();
													(yyval.node)->node_type = CONTENT_H;
													string st1("");
													(yyval.node)->children.push_back((yyvsp[-2].node));
													if((yyvsp[-1].node))
														(yyval.node)->children.push_back((yyvsp[-1].node));
													if((yyvsp[0].node)->data.compare(st1)!=0)
														(yyval.node)->children.push_back((yyvsp[0].node));	
												}
#line 1811 "ast_grammar.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 126 "ast_grammar.y" /* yacc.c:1646  */
    {	(yyval.node) = new_node();
													(yyval.node)->node_type = CONTENT_H;
													string st1("");
													(yyval.node)->children.push_back((yyvsp[-2].node));
													if((yyvsp[-1].node))
														(yyval.node)->children.push_back((yyvsp[-1].node));
													if((yyvsp[0].node)->data.compare(st1)!=0)
														(yyval.node)->children.push_back((yyvsp[0].node));	
												}
#line 1825 "ast_grammar.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 135 "ast_grammar.y" /* yacc.c:1646  */
    {
													(yyval.node) = new_node();
													(yyval.node)->node_type = CONTENT_H;
													string st1("");
													(yyval.node)->children.push_back((yyvsp[-2].node));
													(yyval.node)->children.push_back((yyvsp[-1].node));
													if((yyvsp[0].node)->data.compare(st1)!=0)
														(yyval.node)->children.push_back((yyvsp[0].node));
															
												}
#line 1840 "ast_grammar.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 145 "ast_grammar.y" /* yacc.c:1646  */
    {	
													(yyval.node) = new_node();
													(yyval.node)->node_type = CONTENT_H;
													string st1("");
													(yyval.node)->children.push_back((yyvsp[-2].node));
													if((yyvsp[-1].node))
														(yyval.node)->children.push_back((yyvsp[-1].node));
													if((yyvsp[0].node)->data.compare(st1)!=0)
														(yyval.node)->children.push_back((yyvsp[0].node));
												}
#line 1855 "ast_grammar.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 155 "ast_grammar.y" /* yacc.c:1646  */
    {	
													(yyval.node) = new_node();
													(yyval.node)->node_type = CONTENT_H;
													string st1("");
													(yyval.node)->children.push_back((yyvsp[-2].node));
													if((yyvsp[-1].node))
														(yyval.node)->children.push_back((yyvsp[-1].node));
													if((yyvsp[0].node)->data.compare(st1)!=0)
														(yyval.node)->children.push_back((yyvsp[0].node));
												}
#line 1870 "ast_grammar.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 165 "ast_grammar.y" /* yacc.c:1646  */
    {	
													(yyval.node) = new_node();
													(yyval.node)->node_type = CONTENT_H;
													string st1("");
													(yyval.node)->children.push_back((yyvsp[-2].node));
													if((yyvsp[-1].node))
														(yyval.node)->children.push_back((yyvsp[-1].node));
													if((yyvsp[0].node)->data.compare(st1)!=0)
														(yyval.node)->children.push_back((yyvsp[0].node));
												}
#line 1885 "ast_grammar.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 175 "ast_grammar.y" /* yacc.c:1646  */
    {	
													(yyval.node) = new_node();
													(yyval.node)->node_type = CONTENT_H;
													string st1("");
													(yyval.node)->children.push_back((yyvsp[-2].node));
													if((yyvsp[-1].node))
														(yyval.node)->children.push_back((yyvsp[-1].node));
													if((yyvsp[0].node)->data.compare(st1)!=0)
														(yyval.node)->children.push_back((yyvsp[0].node));
												}
#line 1900 "ast_grammar.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 185 "ast_grammar.y" /* yacc.c:1646  */
    {	
													(yyval.node) = new_node();
													(yyval.node)->node_type = CONTENT_H;
													string st1("");
													(yyval.node)->children.push_back((yyvsp[-2].node));
													if((yyvsp[-1].node))
														(yyval.node)->children.push_back((yyvsp[-1].node));
													if((yyvsp[0].node)->data.compare(st1)!=0)
														(yyval.node)->children.push_back((yyvsp[0].node));
												}
#line 1915 "ast_grammar.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 195 "ast_grammar.y" /* yacc.c:1646  */
    {	
													(yyval.node) = new_node();
													(yyval.node)->node_type = CONTENT_H;
													string st1("");
													(yyval.node)->children.push_back((yyvsp[-2].node));
													if((yyvsp[-1].node))
														(yyval.node)->children.push_back((yyvsp[-1].node));
													if((yyvsp[0].node)->data.compare(st1)!=0)
														(yyval.node)->children.push_back((yyvsp[0].node));
												}
#line 1930 "ast_grammar.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 205 "ast_grammar.y" /* yacc.c:1646  */
    {	
													(yyval.node) = new_node();
													(yyval.node)->node_type = CONTENT_H;
													string st1("");
													(yyval.node)->children.push_back((yyvsp[-2].node));
													if((yyvsp[-1].node))
														(yyval.node)->children.push_back((yyvsp[-1].node));
													if((yyvsp[0].node)->data.compare(st1)!=0)
														(yyval.node)->children.push_back((yyvsp[0].node));
												}
#line 1945 "ast_grammar.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 215 "ast_grammar.y" /* yacc.c:1646  */
    {	
													(yyval.node) = new_node();
													(yyval.node)->node_type = CONTENT_H;
													string st1("");
													(yyval.node)->children.push_back((yyvsp[-2].node));
													if((yyvsp[-1].node))
														(yyval.node)->children.push_back((yyvsp[-1].node));
													if((yyvsp[0].node)->data.compare(st1)!=0)
														(yyval.node)->children.push_back((yyvsp[0].node));
												}
#line 1960 "ast_grammar.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 225 "ast_grammar.y" /* yacc.c:1646  */
    {	
													(yyval.node) = new_node();
													(yyval.node)->node_type = CONTENT_H;
													string st1("");
													(yyval.node)->children.push_back((yyvsp[-2].node));
													if((yyvsp[-1].node))
														(yyval.node)->children.push_back((yyvsp[-1].node));
													if((yyvsp[0].node)->data.compare(st1)!=0)
														(yyval.node)->children.push_back((yyvsp[0].node));
												}
#line 1975 "ast_grammar.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 235 "ast_grammar.y" /* yacc.c:1646  */
    {	
													(yyval.node) = new_node();
													(yyval.node)->node_type = CONTENT_H;
													string st1("");
													(yyval.node)->children.push_back((yyvsp[-2].node));
													if((yyvsp[-1].node))
														(yyval.node)->children.push_back((yyvsp[-1].node));
													if((yyvsp[0].node)->data.compare(st1)!=0)
														(yyval.node)->children.push_back((yyvsp[0].node));
												}
#line 1990 "ast_grammar.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 245 "ast_grammar.y" /* yacc.c:1646  */
    {	
													(yyval.node) = new_node();
													(yyval.node)->node_type = CONTENT_H;
													string st1("");
													(yyval.node)->children.push_back((yyvsp[-2].node));
													if((yyvsp[-1].node))
														(yyval.node)->children.push_back((yyvsp[-1].node));
													if((yyvsp[0].node)->data.compare(st1)!=0)
														(yyval.node)->children.push_back((yyvsp[0].node));
												}
#line 2005 "ast_grammar.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 255 "ast_grammar.y" /* yacc.c:1646  */
    {	
													(yyval.node) = new_node();
													(yyval.node)->node_type = CONTENT_H;
													string st1("");
													(yyval.node)->children.push_back((yyvsp[-2].node));
													if((yyvsp[-1].node))
														(yyval.node)->children.push_back((yyvsp[-1].node));
													if((yyvsp[0].node)->data.compare(st1)!=0)
														(yyval.node)->children.push_back((yyvsp[0].node));
												}
#line 2020 "ast_grammar.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 265 "ast_grammar.y" /* yacc.c:1646  */
    {	
													(yyval.node) = new_node();
													(yyval.node)->node_type = CONTENT_H;
													string st1("");
													(yyval.node)->children.push_back((yyvsp[-2].node));
													if((yyvsp[-1].node))
														(yyval.node)->children.push_back((yyvsp[-1].node));
													if((yyvsp[0].node)->data.compare(st1)!=0)
														(yyval.node)->children.push_back((yyvsp[0].node));
												}
#line 2035 "ast_grammar.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 276 "ast_grammar.y" /* yacc.c:1646  */
    {	
														(yyval.node)=(yyvsp[0].node);
												}
#line 2043 "ast_grammar.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 282 "ast_grammar.y" /* yacc.c:1646  */
    {		
													(yyval.node) = new_node();
													string str((yyvsp[0].s));
													string st1("");
													(yyval.node)->data = str;
													(yyval.node)->node_type = DATA_H;
													if((yyvsp[-1].node)->data.compare(st1)!=0)
														(yyval.node)->children.push_back((yyvsp[-1].node));
																	
												}
#line 2058 "ast_grammar.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 292 "ast_grammar.y" /* yacc.c:1646  */
    {
													(yyval.node) = new_node();
													string str((yyvsp[0].s));
													string st1("");
													
													(yyval.node)->data = str.substr(1,str.length()-2);
													(yyval.node)->node_type = GREEK_H;
													if((yyvsp[-1].node)->data.compare(st1)!=0)
														(yyval.node)->children.push_back((yyvsp[-1].node));						
												}
#line 2073 "ast_grammar.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 302 "ast_grammar.y" /* yacc.c:1646  */
    {	
													(yyval.node) = new_node();
													string str((yyvsp[0].s));
													string st1("");
													
													(yyval.node)->data = str;
													(yyval.node)->node_type = COMMENT_H;
													if((yyvsp[-1].node)->data.compare(st1)!=0)
														(yyval.node)->children.push_back((yyvsp[-1].node));
												}
#line 2088 "ast_grammar.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 312 "ast_grammar.y" /* yacc.c:1646  */
    {
													(yyval.node) = new_node();
													string str("");
													(yyval.node)->data = str;
													(yyval.node)->node_type = DATA_H;
												}
#line 2099 "ast_grammar.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 325 "ast_grammar.y" /* yacc.c:1646  */
    {
														(yyval.node) = new_node();
														(yyval.node)->node_type = P_H;
														(yyval.node)->children.push_back((yyvsp[-1].node));
													}
#line 2109 "ast_grammar.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 334 "ast_grammar.y" /* yacc.c:1646  */
    {
		
														(yyval.node) = new_node();
														(yyval.node)->node_type = CENTER_H;
														(yyval.node)->children.push_back((yyvsp[-1].node));
													}
#line 2120 "ast_grammar.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 342 "ast_grammar.y" /* yacc.c:1646  */
    {	
														(yyval.node) = new_node();
														(yyval.node)->node_type = A_H;
														(yyval.node)->children.push_back((yyvsp[-1].node));
														(yyval.node)->attributes= (yyvsp[-2].s);
													}
#line 2131 "ast_grammar.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 351 "ast_grammar.y" /* yacc.c:1646  */
    { 	
														char *dat = (char *)malloc(2000);
														strcat(dat,(yyvsp[0].s));
														strcat(dat,(yyvsp[-1].s));
														(yyval.s)=dat;
													}
#line 2142 "ast_grammar.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 357 "ast_grammar.y" /* yacc.c:1646  */
    { 
														char *dat = (char *)malloc(2000);
														strcat(dat,"");
														strcat(dat,(yyvsp[-1].s));
														(yyval.s)=dat;
													}
#line 2153 "ast_grammar.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 363 "ast_grammar.y" /* yacc.c:1646  */
    { 
														char *dat = (char *)malloc(2000);
														strcat(dat,"");
														strcat(dat,(yyvsp[-1].s));
														(yyval.s)=dat;
													}
#line 2164 "ast_grammar.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 370 "ast_grammar.y" /* yacc.c:1646  */
    {	
		      												char *dat = (char *)malloc(2000);
														strcat(dat,"");
														(yyval.s)=dat;
		      											}
#line 2174 "ast_grammar.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 379 "ast_grammar.y" /* yacc.c:1646  */
    {	
														(yyval.node) = new_node();
														(yyval.node)->node_type = BR_H;										
													}
#line 2183 "ast_grammar.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 383 "ast_grammar.y" /* yacc.c:1646  */
    {	
														(yyval.node) = new_node();
														(yyval.node)->node_type = BR_H;
													}
#line 2192 "ast_grammar.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 392 "ast_grammar.y" /* yacc.c:1646  */
    {	
														(yyval.node) = new_node();
														(yyval.node)->node_type = FONT_H;
														(yyval.node)->children.push_back((yyvsp[-1].node));
														(yyval.node)->attributes= (yyvsp[-2].s);
													}
#line 2203 "ast_grammar.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 401 "ast_grammar.y" /* yacc.c:1646  */
    { 	
														char *dat = (char *)malloc(2000);
													
														strcat(dat,(yyvsp[0].s));
														strcat(dat,(yyvsp[-1].s));
														(yyval.s)=dat;
													}
#line 2215 "ast_grammar.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 408 "ast_grammar.y" /* yacc.c:1646  */
    {	(yyval.s)=(char *)"";	}
#line 2221 "ast_grammar.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 413 "ast_grammar.y" /* yacc.c:1646  */
    {
		
														(yyval.node) = new_node();
														(yyval.node)->node_type = HEADER1_H;
														(yyval.node)->children.push_back((yyvsp[-1].node));
													}
#line 2232 "ast_grammar.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 419 "ast_grammar.y" /* yacc.c:1646  */
    {
		
														(yyval.node) = new_node();
														(yyval.node)->node_type = HEADER2_H;
														(yyval.node)->children.push_back((yyvsp[-1].node));
													}
#line 2243 "ast_grammar.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 425 "ast_grammar.y" /* yacc.c:1646  */
    {
		
														(yyval.node) = new_node();
														(yyval.node)->node_type = HEADER3_H;
														(yyval.node)->children.push_back((yyvsp[-1].node));
													}
#line 2254 "ast_grammar.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 431 "ast_grammar.y" /* yacc.c:1646  */
    {
		
														(yyval.node) = new_node();
														(yyval.node)->node_type = HEADER4_H;
														(yyval.node)->children.push_back((yyvsp[-1].node));
													}
#line 2265 "ast_grammar.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 440 "ast_grammar.y" /* yacc.c:1646  */
    {
		
														(yyval.node) = new_node();
														(yyval.node)->node_type = UNDERLINE_H;
														(yyval.node)->children.push_back((yyvsp[-1].node));
													}
#line 2276 "ast_grammar.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 446 "ast_grammar.y" /* yacc.c:1646  */
    {
		
														(yyval.node) = new_node();
														(yyval.node)->node_type = BOLD_H;
														(yyval.node)->children.push_back((yyvsp[-1].node));
													}
#line 2287 "ast_grammar.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 452 "ast_grammar.y" /* yacc.c:1646  */
    {
		
														(yyval.node) = new_node();
														(yyval.node)->node_type = ITALICS_H;
														(yyval.node)->children.push_back((yyvsp[-1].node));
													}
#line 2298 "ast_grammar.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 458 "ast_grammar.y" /* yacc.c:1646  */
    {
		
														(yyval.node) = new_node();
														(yyval.node)->node_type = EMPHASIZE_H;
														(yyval.node)->children.push_back((yyvsp[-1].node));
													}
#line 2309 "ast_grammar.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 464 "ast_grammar.y" /* yacc.c:1646  */
    {
		
														(yyval.node) = new_node();
														(yyval.node)->node_type = TELETYPE_H;
														(yyval.node)->children.push_back((yyvsp[-1].node));
													}
#line 2320 "ast_grammar.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 470 "ast_grammar.y" /* yacc.c:1646  */
    {
		
														(yyval.node) = new_node();
														(yyval.node)->node_type = STRONG_H;
														(yyval.node)->children.push_back((yyvsp[-1].node));
													}
#line 2331 "ast_grammar.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 476 "ast_grammar.y" /* yacc.c:1646  */
    {
		
														(yyval.node) = new_node();
														(yyval.node)->node_type = SMALL_H;
														(yyval.node)->children.push_back((yyvsp[-1].node));
													}
#line 2342 "ast_grammar.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 485 "ast_grammar.y" /* yacc.c:1646  */
    {
														(yyval.node) = new_node();
														(yyval.node)->node_type = SUPERSCRIPT_H;
														(yyval.node)->children.push_back((yyvsp[-1].node));
													}
#line 2352 "ast_grammar.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 490 "ast_grammar.y" /* yacc.c:1646  */
    {
														(yyval.node) = new_node();
														(yyval.node)->node_type = SUBSCRIPT_H;
														(yyval.node)->children.push_back((yyvsp[-1].node));
													}
#line 2362 "ast_grammar.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 497 "ast_grammar.y" /* yacc.c:1646  */
    {	
														(yyval.node) = new_node();
														(yyval.node)->node_type = IMG_H;
														string st1("");
														if((yyvsp[0].node)->data.compare(st1)!=0)
															(yyval.node)->children.push_back((yyvsp[0].node));
														(yyval.node)->attributes= (yyvsp[-2].s);
													}
#line 2375 "ast_grammar.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 505 "ast_grammar.y" /* yacc.c:1646  */
    {
														(yyval.node) = new_node();
														string st1("");
														(yyval.node)->node_type = IMG1_H;
														if((yyvsp[-1].node)->data.compare(st1)!=0 || (yyvsp[-1].node)->children.size()>0)
															(yyval.node)->children.push_back((yyvsp[-1].node));
														(yyval.node)->attributes= (yyvsp[-3].s);
													}
#line 2388 "ast_grammar.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 516 "ast_grammar.y" /* yacc.c:1646  */
    {	
														(yyval.node) = new_node();
														(yyval.node)->node_type = FIGCAPTION_H;
														(yyval.node)->children.push_back((yyvsp[-1].node));
													}
#line 2398 "ast_grammar.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 521 "ast_grammar.y" /* yacc.c:1646  */
    {
														string str1("");
														(yyval.node) = new_node();
														(yyval.node)->node_type = FIGCAPTION_H;
														(yyval.node)->data=str1;	
													}
#line 2409 "ast_grammar.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 530 "ast_grammar.y" /* yacc.c:1646  */
    { 	
														char *dat = (char *)malloc(2000);
														strcat(dat,"src=");
														strcat(dat,(yyvsp[0].s));
														strcat(dat,",");
														strcat(dat,(yyvsp[-1].s));
														////printf("\ny %s\n",dat);
														(yyval.s)=dat;	
													}
#line 2423 "ast_grammar.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 539 "ast_grammar.y" /* yacc.c:1646  */
    {
														char *dat = (char *)malloc(2000);
														strcat(dat,"height=");
														strcat(dat,(yyvsp[0].s));
														strcat(dat,"cm, ");
														strcat(dat,(yyvsp[-1].s));
														////printf("\ny %s\n",dat);
														(yyval.s)=dat;	
													}
#line 2437 "ast_grammar.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 548 "ast_grammar.y" /* yacc.c:1646  */
    {
														char *dat = (char *)malloc(2000);
														strcat(dat,"width=");
														strcat(dat,(yyvsp[0].s));
														strcat(dat,"cm,");
														strcat(dat,(yyvsp[-1].s));
														////printf("\ny %s\n",dat);
														(yyval.s)=dat;	
													}
#line 2451 "ast_grammar.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 557 "ast_grammar.y" /* yacc.c:1646  */
    {	(yyval.s)=(char *)"";	}
#line 2457 "ast_grammar.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 562 "ast_grammar.y" /* yacc.c:1646  */
    {
														(yyval.node) = new_node();
														(yyval.node)->node_type = DIV_H;
														(yyval.node)->children.push_back((yyvsp[-1].node));
													}
#line 2467 "ast_grammar.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 571 "ast_grammar.y" /* yacc.c:1646  */
    {
														(yyval.node) = new_node();
														(yyval.node)->node_type = LI_H;
														(yyval.node)->children.push_back((yyvsp[-1].node));
													}
#line 2477 "ast_grammar.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 576 "ast_grammar.y" /* yacc.c:1646  */
    {
														(yyval.node) = new_node();
														(yyval.node)->node_type = UL_H;
														(yyval.node)->children.push_back((yyvsp[-1].node));
													}
#line 2487 "ast_grammar.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 581 "ast_grammar.y" /* yacc.c:1646  */
    {
														(yyval.node) = new_node();
														(yyval.node)->node_type = OL_H;
														(yyval.node)->children.push_back((yyvsp[-1].node));
													}
#line 2497 "ast_grammar.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 586 "ast_grammar.y" /* yacc.c:1646  */
    {
														(yyval.node) = new_node();
														(yyval.node)->node_type = DL_H;
														(yyval.node)->children.push_back((yyvsp[-1].node));
													}
#line 2507 "ast_grammar.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 591 "ast_grammar.y" /* yacc.c:1646  */
    {
														(yyval.node) = new_node();
														(yyval.node)->node_type = DT_H;
														(yyval.node)->children.push_back((yyvsp[-1].node));
													}
#line 2517 "ast_grammar.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 596 "ast_grammar.y" /* yacc.c:1646  */
    {
														(yyval.node) = new_node();
														(yyval.node)->node_type = DD_H;
														(yyval.node)->children.push_back((yyvsp[-1].node));
													}
#line 2527 "ast_grammar.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 603 "ast_grammar.y" /* yacc.c:1646  */
    {	
														(yyval.node) = new_node();
														string str1("");
														(yyval.node)->node_type = TABLE_H;
														if((yyvsp[-2].node)->data.compare(str1)!=0)
															(yyval.node)->children.push_back((yyvsp[-2].node));
														(yyval.node)->children.push_back((yyvsp[-1].node));
														(yyval.node)->attributes= (yyvsp[-3].s);
														
														
													}
#line 2543 "ast_grammar.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 615 "ast_grammar.y" /* yacc.c:1646  */
    {
														char *dat = (char *)malloc(2000);
														
														strcat(dat,(yyvsp[0].s));
														(yyval.s)=dat;
													}
#line 2554 "ast_grammar.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 621 "ast_grammar.y" /* yacc.c:1646  */
    {	(yyval.s)=(char *)"";	}
#line 2560 "ast_grammar.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 627 "ast_grammar.y" /* yacc.c:1646  */
    {
														(yyval.node) = new_node();
														(yyval.node)->node_type = T_R;
														string st1("");
														(yyval.node)->children=(yyvsp[-3].node)->children;
														(yyval.node)->children.push_back((yyvsp[-1].node));
												
															
													}
#line 2574 "ast_grammar.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 636 "ast_grammar.y" /* yacc.c:1646  */
    {
														(yyval.node) = new_node();
														(yyval.node)->node_type = DATA_H;
														(yyval.node)->data="";	
													}
#line 2584 "ast_grammar.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 645 "ast_grammar.y" /* yacc.c:1646  */
    {	
														(yyval.node) = new_node();
														(yyval.node)->node_type = CAPTION_H;
														(yyval.node)->data = (yyvsp[-1].node)->data;	
													}
#line 2594 "ast_grammar.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 650 "ast_grammar.y" /* yacc.c:1646  */
    {	
														(yyval.node) = new_node();
														(yyval.node)->node_type = DATA_H;
														(yyval.node)->data="";
													}
#line 2604 "ast_grammar.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 657 "ast_grammar.y" /* yacc.c:1646  */
    {
														(yyval.node) = new_node();
														(yyval.node)->node_type = T_H;
														string st1("");
														(yyval.node)->children=(yyvsp[-3].node)->children;
														(yyval.node)->children.push_back((yyvsp[-1].node));	
													}
#line 2616 "ast_grammar.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 664 "ast_grammar.y" /* yacc.c:1646  */
    {
														(yyval.node) = new_node();
														(yyval.node)->node_type = T_D;
														string st1("");
														(yyval.node)->children=(yyvsp[-3].node)->children;
														(yyval.node)->children.push_back((yyvsp[-1].node));
														
														
															
													}
#line 2631 "ast_grammar.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 674 "ast_grammar.y" /* yacc.c:1646  */
    {
														(yyval.node) = new_node();
														(yyval.node)->node_type = DATA_H;
														(yyval.node)->data="";	
													}
#line 2641 "ast_grammar.tab.c" /* yacc.c:1646  */
    break;


#line 2645 "ast_grammar.tab.c" /* yacc.c:1646  */
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
#line 682 "ast_grammar.y" /* yacc.c:1906  */



