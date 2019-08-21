%{

#include <stdio.h>
#include <string.h>
void yyerror(const char *);

FILE *yyin;
FILE *tex_file;
int yylex();
extern char *yytext;
%}

%union
{
	char *s;
	int i;
}

%token	<s>	DOCTYPE		HTML_S		HTML_E		HEAD_S		HEAD_E
%token	<s>	TITLE_S		TITLE_E		BODY_S		BODY_E		HREF_S
%token	<s>	HREF_E		FONT_S		FONT_E		CENTER_S	CENTER_E
%token	<s>	BR		P_S		P_E		H1_S		H1_E
%token	<s>	H2_S		H2_E		H3_S		H3_E		H4_S
%token	<s>	H4_E		UL_S		UL_E		LI_S		LI_E
%token	<s>	OL_S		OL_E		TD_S		DL_S		TD_E
%token	<s>	DL_E		DT_S		DT_E		DD_S		DD_E
%token	<s>	DIV_S		DIV_E		U_S		U_E		B_S
%token	<s>	B_E		I_S		I_E		EM_S		EM_E
%token	<s>	TT_S		TT_E		STRONG_S	STRONG_E	SMALL_S
%token	<s>	SMALL_E		SUB_S		SUB_E		SUP_S		SUP_E
%token	<s>	TABLE_S		TABLE_E		CAPTION_S	CAPTION_E	TH_S
%token	<s>	TH_E		TR_S		TR_E		HREF_LINK	FONT_SIZE
%token	<s>	HREF_TITLE	IMG_MAIN	IMG_SRC		IMG_WIDTH	IMG_HEIGHT
%token	<s>	IMG_FIG		IMG_FIG_CAP	END_TAG		GREEK
%token 	<s> 	DATA
%type 	<s> 	html_start	content_head 	content_body	content_title
%type	<s>	content_href
%start		html_start

%%
html_start	:	DOCTYPE HTML_S	content_head	content_body	HTML_E		{
												fprintf(tex_file,"\\document{article}\n");
												fprintf(tex_file,"\\usepackage{hyperref}}\n");
												fprintf(tex_file,"\\begin{document}\n");
											}
		     |	HTML_S	content_head	content_body	HTML_E			{
												fprintf(tex_file,"\\document{article}\n");
												fprintf(tex_file,"\\usepackage{blindwrite}\n");
												fprintf(tex_file,"\\begin{document}\n");
												fprintf(tex_file,"%s\n",$2);
												fprintf(tex_file,"%s",$3);
											}
	
content_head	:	HEAD_S	content_title	HEAD_E					{
												char *dat = malloc(150);
												strcpy(dat,$2);
												$$=dat;
											}

content_title	:	TITLE_S	 DATA	TITLE_E						{
												char *dat = malloc(150);
												strcpy(dat,"\\title{");
												strcat(dat,$2);
												strcat(dat,"}");
												$$=dat;
											}

content_body	:	BODY_S	HREF_S	content_href  DATA HREF_E  BODY_E		{
												char *dat = malloc(150);
												strcpy(dat,"\\href{");
												printf("yylval1 %s\n",$3);
												printf("yylval2 %s\n",$4);
												strcat(dat,$3);
												strcat(dat,"}{");		
												strcat(dat,"}");
												$$=dat;
											}


content_href	:     END_TAG								{ 	$$="";
												printf("DATA : %s\n",$$);
											}
		      |	HREF_LINK	content_href					{ 	
		      									  char prefix[100];
		      									  snprintf(prefix, 100, "h:\"%s\"@%s", $1,$2);
		      									  
		      									  strcpy($$,prefix);
											  printf("prefix: %s\n",prefix);
											}
		      | HREF_TITLE	content_href					{ char prefix1[100];
		      										
		      									  snprintf(prefix1, 100, "t:\"%s\"@%s", $1,$2);
											  strcpy($$,prefix1);
											  
											}
		      ;
		      
		      
	
%%
int main(int argc,char *argv[])
{
	yyin = fopen(argv[1],"r");
	tex_file = fopen(argv[2],"w+");
	yyparse();
}

void yyerror(const char *s)
{
	printf("Syntax Error\n");
}

