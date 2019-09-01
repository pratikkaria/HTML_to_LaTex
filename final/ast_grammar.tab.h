/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

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
#line 19 "ast_grammar.y" /* yacc.c:1909  */

	char *s;
	struct ast_node* node;

#line 148 "ast_grammar.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_AST_GRAMMAR_TAB_H_INCLUDED  */
