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
%token	<s>	IMG_FIG		IMG_FIG_CAP	DATA		GREEK		TABLE_BORDER
%type 	<s> 	html_start	content_head 	content_body	content_title	all_tags
%type	<s>	content_href	content_header	take_data
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
												printf("%s Final HEAD \n",$2);
												printf("%s Final BODY \n",$3);
											};
	
content_head	:	HEAD_S	content_head 	content_title	content_head 	HEAD_E	{
												char *dat = malloc(150);
												strcpy(dat,$3);
												$$=dat;
											}
		|	DATA								{
												char *dat = malloc(150);
												strcpy(dat,$1);
												printf("Content Head: %s\n",$1);
												$$=dat;
											}	
		|
		;	

content_title	:	TITLE_S	 DATA	TITLE_E						{
												char *dat = malloc(150);
												strcpy(dat,"\\title{");
												strcat(dat,$2);
												strcat(dat,"}");
												printf("Content Title: %s\n",$2);
												$$=dat;
											};
											
content_body	:	BODY_S	all_tags  BODY_E					{
												char *dat = malloc(150);
												strcpy($$,$2);
												printf("Content Body:%s\n",$2);
													
											};

all_tags	:	all_tags   HREF_S  content_href take_data HREF_E  		{
												char *dat = malloc(150);
												strcat(dat,$3);
												if($1)
													strcat(dat,$1);
												if($5)
													strcat(dat,$5);
												printf("HREF_ATTR: %s\n",$3);	
												printf("HREF_DATA: %s\n",$4);
												$$=dat;
											}
		|	all_tags   P_S	  take_data  P_E				{
												char *dat = malloc(150);
												//strcpy(dat,"\\href{");
												strcat(dat,$3);
												if($1)
													strcat(dat,$1);


												printf("Paragraph: %s\n",dat);
												$$=dat;
											}
		|	all_tags   CENTER_S  take_data  CENTER_E			{
												char *dat = malloc(150);
												strcat(dat,$4);
												if($1)
													strcat(dat,$1);


												printf("Paragraph: %s\n",dat);
												$$=dat;
											}	
		|	all_tags	BR	all_tags				{
												printf("BREAKLINE\n");
												char *dat = malloc(150);
												if($1)
													strcat(dat,$1);
												if($3)
													strcat(dat,$3);
												$$=dat;
											}	
		|	all_tags	content_header	all_tags			{
												char *dat = malloc(150);
												strcat(dat,$2);
												if($1)
													strcat(dat,$1);
												if($3)
													strcat(dat,$3);
												printf("HEADER: %s",dat);
												$$=dat;
											}
		
		|	
		;


content_href	:     content_href	HREF_LINK					{ 	
		      									  char prefix[100];
		      									  snprintf(prefix, 100, "h:\"%s\"@%s", $2,$1);
		      									  
		      									  strcpy($$,prefix);
											  printf("HREF_LINK: %s\n",prefix);
											}
		      | content_href	HREF_TITLE					{ 
		      									  char prefix1[100];
		      										
		      									  snprintf(prefix1, 100, "t:\"%s\"@%s", $2,$1);
											  strcpy($$,prefix1);
											  printf("HREF_TITLE: %s\n",prefix1);
											  
											}
											
		      |
		      ;
		  
content_header	:       all_tags	H1_S	take_data	H1_E	all_tags	{ 	
		      									  char prefix[100];
		      									  snprintf(prefix, 100, "h:\"%s\"@%s", $2,$1);
		      									  
		      									  strcpy($$,prefix);
											  printf("HREF_LINK: %s\n",prefix);
											}
		      | all_tags	H2_S	take_data	H2_E	all_tags	{ 
		      									  char prefix1[100];
		      										
		      									  snprintf(prefix1, 100, "t:\"%s\"@%s", $2,$1);
											  strcpy($$,prefix1);
											  printf("HREF_TITLE: %s\n",prefix1);
											  
											}
		      | all_tags	H3_S	take_data	H3_E	all_tags	{ 
		      									  char prefix1[100];
		      										
		      									  snprintf(prefix1, 100, "t:\"%s\"@%s", $2,$1);
											  strcpy($$,prefix1);
											  printf("HREF_TITLE: %s\n",prefix1);
											}
											  
		      | all_tags	H4_S	all_tags	H4_E	all_tags	{ 
		      									  char prefix1[100];
		      										
		      									  snprintf(prefix1, 100, "t:\"%s\"@%s", $2,$1);
											  strcpy($$,prefix1);
											  printf("HREF_TITLE: %s\n",prefix1);
											}										
		      |
		      ;  
		    
take_data	:	all_tags DATA all_tags						{
												char *dat = malloc(150);
												strcat(dat,$2);
												if($1)
													strcat(dat,$1);
												if($3)
													strcat(dat,$3);	
												$$=dat;
											}
		|	DATA  								{$$=$1;}
	
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

