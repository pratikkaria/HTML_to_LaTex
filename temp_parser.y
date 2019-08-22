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
%type 	<s> 	html_start	content_head 	content_body	content_title	body
%type	<s>	content_href	href_tag	font_tag	data		content_font
%type	<s>	center_tag	br_tag		p_tag		
//header_tag	list_tag
//%type	<s>	div_tag		format_tag	subsup_tag	img_tag		table_tag
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
		|									{	$$="";	}
		;	

content_title	:	TITLE_S	 DATA	TITLE_E						{
												char *dat = malloc(150);
												strcpy(dat,"\\title{");
												strcat(dat,$2);
												strcat(dat,"}");
												printf("Content Title: %s\n",$2);
												$$=dat;
											};
											
content_body	:	BODY_S	body  BODY_E						{
												char *dat = malloc(150);
												strcpy($$,$2);
												printf("Content Body:%s\n",$2);
													
											};

		
body		:	body	href_tag	data							{	$$=$1;	}
		|	body	font_tag	data							{	$$=$1;	}
		|	body	center_tag	data							{	$$=$1;	}
		|	body	br_tag		data							{	$$=$1;	}
		|	body	p_tag		data							{	$$=$1;	}
//		|	body	header_tag								{	$$=$1;	}	
//		|	list_tag									{	$$=$1;	}
//		|	div_tag										{	$$=$1;	}
//		|	format_tag									{	$$=$1;	}
//		|	subsup_tag									{	$$=$1;	}
//		|	img_tag										{	$$=$1;	}
//		|	table_tag									{	$$=$1;	}
		|	data										{	$$=$1;	}
		;


data		:	DATA										{	$$=$1;
														printf("DECIDER: %s",$1);							
													}
		|											{	$$="";	}
		;
		

//----------------------------------------------------HREF GRAMMER----------------------------------------------		
href_tag	:	HREF_S		content_href		body	  HREF_E			{	
															char *dat = malloc(150);
															strcat(dat,$2);
															strcat(dat,$3);
															printf("HREF_ATTR: %s\n",$2);	
															printf("HREF_DATA: %s\n",$3);
															$$=dat;
														};



content_href	:     content_href	HREF_LINK								{ 	
						      									char prefix[100];
						      									snprintf(prefix, 100, "h:\"%s\"@%s", $2,$1);
						      									
						      									strcpy($$,prefix);
															printf("HREF_LINK: %s\n",prefix);
														}
		      | content_href	HREF_TITLE								{ 
						      									char prefix[100];
						      									snprintf(prefix, 100, "h:\"%s\"@%s", $2,$1);
						      									
						      									strcpy($$,prefix);
															printf("HREF_LINK: %s\n",prefix);
														}
											
		      |												{	$$="";	}
		      ;	

//----------------------------------------------------FONT GRAMMER----------------------------------------------

font_tag	:	FONT_S		content_font		body		  FONT_E			{	
															char *dat = malloc(150);
															strcat(dat,$2);
															strcat(dat,$3);
															printf("FONT_ATTR: %s\n",$2);	
															printf("FONT_DATA: %s\n",$3);
															$$=dat;
														};



content_font	:     content_font	FONT_SIZE								{ 	
						      									char prefix[100];
						      									snprintf(prefix, 100, "h:\"%s\"@%s", $2,$1);
						      									
						      									strcpy($$,prefix);
															printf("FONT_SIZE: %s\n",prefix);
														}
		     |												{	$$="";	}
		     ;	


//----------------------------------------------------Paragraph GRAMMER----------------------------------------------


p_tag		:	P_S		body	P_E							{
		
															char *dat = malloc(150);
															strcat(dat,$2);
															printf("Paragraph: %s\n",$2);	
															$$=dat;
														}
		;
			
			
//----------------------------------------------------Center GRAMMER----------------------------------------------			

center_tag	:	CENTER_S		body		CENTER_E					{
		
															char *dat = malloc(150);
															strcat(dat,$2);
															printf("Center Tag: %s\n",$2);	
															$$=dat;
														};
			
//----------------------------------------------------Break Tag GRAMMER----------------------------------------------			
			
br_tag		:	BR											{	$$=$1;	};


//----------------------------------------------------Header Tag GRAMMER----------------------------------------------	

		
														
/*take_data	:	body	DATA										{
															char *dat = malloc(150);
															strcat(dat,$2);
														}		
		|	DATA	body
		;

*/	
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

