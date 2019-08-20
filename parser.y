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

%token		DOCTYPE		HTML_S		HTML_E		HEAD_S		HEAD_E
%token		TITLE_S		TITLE_E		BODY_S		BODY_E		HREF_S
%token		HREF_E		FONT_S		FONT_E		CENTER_S	CENTER_E
%token		BR		P_S		P_E		H1_S		H1_E
%token		H2_S		H2_E		H3_S		H3_E		H4_S
%token		H4_E		UL_S		UL_E		LI_S		LI_E
%token		OL_S		OL_E		TD_S		DL_S		TD_E
%token		DL_E		DT_S		DT_E		DD_S		DD_E
%token		DIV_S		DIV_E		U_S		U_E		B_S
%token		B_E		I_S		I_E		EM_S		EM_E
%token		TT_S		TT_E		STRONG_S	STRONG_E	SMALL_S
%token		SMALL_E		SUB_S		SUB_E		SUP_S		SUP_E
%token		TABLE_S		TABLE_E		CAPTION_S	CAPTION_E	TH_S
%token		TH_E		TR_S		TR_E				
%token 		<s> 		DATA
%type 		<s> 		html_start	content_head 	content_body
%start		html_start


%%
html_start	:	DOCTYPE HTML_S	content_head	content_body	HTML_E		{
												fprintf(tex_file,"\\\\document{article}\n");
												fprintf(tex_file,"\\\\usepackage{blindwrite}\n");
												fprintf(tex_file,"%s\n",$3);
												fprintf(tex_file,"%s\n",$4);
											}
		     |	HTML_S	content_head	content_body	HTML_E			{
												fprintf(tex_file,"\\\\document{article}\n");
												fprintf(tex_file,"\\\\usepackage{blindwrite}\n");
												fprintf(tex_file,"%s\n",$2);
												fprintf(tex_file,"%s\n",$3);
											}
	
content_head	:	HEAD_S	DATA	HEAD_E						{
												char *dat = malloc(150);
												strcpy(dat,$2);
												$$=dat;
											}

content_body	:	BODY_S	HREF_S	DATA	HREF_E	BODY_E				{
												char *dat = malloc(150);
												strcpy(dat,$3);
												$$=dat;
											}

							
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
