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

%token HTML_S	HTML_E	BODY_S	BODY_E	TITLE_S	
%token TITLE_E	HREF_S	HREF_E	BR	P_S	
%token	P_E	H1_S	H1_E	H2_S	H2_E	
%token	H3_S	H3_E	H4_S	H4_E	HEAD_S	HEAD_E
%token 	CENTER_S CENTER_E DIV_S DIV_E FONT_S FONT_E
%token <s> DATA
%type <s> html_start content_head content_body

%%
html_start	:	HTML_S	content_head	content_body	HTML_E	{
										fprintf(tex_file,"\\\\document{article}\n");
										fprintf(tex_file,"\\\\usepackage{blindwrite}\n");
										fprintf(tex_file,"%s\n",$2);
										fprintf(tex_file,"%s\n",$3);
									}	
	
content_head	:	HEAD_S	DATA	HEAD_E		{
								char *dat = malloc(150);
								strcpy(dat,$2);
								$$=dat;
							}

content_body	:	BODY_S	HREF_S	DATA	HREF_E	BODY_E		{
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
