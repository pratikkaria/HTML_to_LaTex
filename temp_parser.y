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
%token	<s>	HREF_TITLE	IMG_S		IMG_SRC		IMG_WIDTH	IMG_HEIGHT
%token	<s>	IMG_FIG		IMG_FIG_CAP	DATA		GREEK		TABLE_BORDER
%token	<s>	IMG_E
%type 	<s> 	html_start	content_head 	content_body	content_title	body
%type	<s>	content_href	href_tag	font_tag	data		content_font
%type	<s>	center_tag	br_tag		p_tag		img_tag		content_img
%type	<s>	div_tag		subsup_tag	format_tag	header_tag	table_contents
%type	<s>	content_table	caption_tag	tr_contents	head_tag	table_tag
%type	<s>	list_tag	inner_list_l	inner_list_dl
//header_tag	list_tag
//%type	<s>			format_tag	subsup_tag	img_tag		table_tag
%start		html_start

%%
html_start	:	DOCTYPE HTML_S	content_head	content_body	HTML_E			{
													fprintf(tex_file,"\\document{article}\n");
													fprintf(tex_file,"\\usepackage{hyperref}}\n");
													fprintf(tex_file,"\\begin{document}\n");
												}
		     |	HTML_S	content_head	content_body	HTML_E				{
													fprintf(tex_file,"\\document{article}\n");
													fprintf(tex_file,"\\usepackage{blindwrite}\n");
													fprintf(tex_file,"\\begin{document}\n");
													fprintf(tex_file,"%s\n",$2);
													fprintf(tex_file,"%s",$3);
													printf("%s Final HEAD \n",$2);
													printf("%s Final BODY \n",$3);
												};
	
content_head	:	HEAD_S	content_head 	content_title	content_head 	HEAD_E		{
													char *dat = malloc(150);
													strcpy(dat,$3);
													$$=dat;
												}
		|	DATA									{
													char *dat = malloc(150);
													strcpy(dat,$1);
													printf("Content Head: %s\n",$1);
													$$=dat;
												}	
		|										{	$$="";	}
		;	

content_title	:	TITLE_S	 DATA	TITLE_E							{
													char *dat = malloc(150);
													strcpy(dat,"\\title{");
													strcat(dat,$2);
													strcat(dat,"}");
													printf("Content Title: %s\n",$2);
													$$=dat;
												};
											
content_body	:	BODY_S	body  BODY_E							{
													char *dat = malloc(150);
													strcpy($$,$2);
													printf("Content Body:%s\n",$2);
													
												};

		
body		:	body	href_tag	data						{	$$=$1;	}
		|	body	font_tag	data						{	$$=$1;	}
		|	body	center_tag	data						{	$$=$1;	}
		|	body	br_tag		data						{	$$=$1;	}
		|	body	p_tag		data						{	$$=$1;	}
		|	body	header_tag	data						{	$$=$1;	}	
		|	body	list_tag	data						{	$$=$1;	}
		|	body	div_tag		data						{	$$=$1;	}
		|	body	format_tag	data						{	$$=$1;	}
		|	body	subsup_tag	data						{	$$=$1;	}
		|	body	img_tag		data						{	$$=$1;	}
		|	body	table_tag	data						{	$$=$1;	}
		|	data									{	$$=$1;	}
		;


data		:	DATA									{	
													$$=$1;
													printf("TEXT: %s",$1);							
												}
		|	GREEK									{
													$$=$1;
													printf("GREEK: %s",$1);							
												}
		|										{	$$="";	}
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



content_href	:     content_href	HREF_LINK							{ 	
														char *dat = malloc(150);
														strcat(dat,"link=\"");
														strcat(dat,$2);
														strcat(dat,"\"@");
														strcat(dat,$1);
														$$=dat;
													}
		      | content_href	HREF_TITLE							{ 
														char *dat = malloc(150);
														strcat(dat,"title=\"");
														strcat(dat,$2);
														strcat(dat,"\"@");
														strcat(dat,$1);
														$$=dat;
													}
											
		      |											{	$$="";	}
		      ;	

//----------------------------------------------------FONT GRAMMER----------------------------------------------

font_tag	:	FONT_S		content_font		body		  FONT_E		{	
														char *dat = malloc(150);
														strcat(dat,$2);
														strcat(dat,$3);
														printf("FONT_ATTR: %s\n",$2);	
														printf("FONT_DATA: %s\n",$3);
														$$=dat;
													};



content_font	:     content_font	FONT_SIZE							{ 	
														char *dat = malloc(150);
														strcat(dat,"size=\"");
														strcat(dat,$2);
														strcat(dat,"\"");
														strcat(dat,$1);
														$$=dat;
													}
		     |											{	$$="";	}
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

center_tag	:	CENTER_S		body		CENTER_E				{
		
														char *dat = malloc(150);
														strcat(dat,$2);
														printf("Center Tag: %s\n",$2);	
														$$=dat;
													};
			
//----------------------------------------------------Break Tag GRAMMER----------------------------------------------			
			
br_tag		:	BR										{	$$=$1;	};


//----------------------------------------------------Image Tag GRAMMER----------------------------------------------	
img_tag		:	IMG_S		content_img		IMG_E			 		{	
														char *dat = malloc(150);
														strcat(dat,$2);
														//strcat(dat,$3);
														printf("IMG_CONTENT: %s\n",$2);	
														//printf("HREF_DATA: %s\n",$3);
														$$=dat;
													};


content_img	:     	content_img	IMG_SRC								{ 	
														char *dat = malloc(150);
														strcat(dat,"src=\"");
														strcat(dat,$2);
														strcat(dat,"\"@");
														strcat(dat,$1);
														//printf("y %s\n",dat);
														$$=dat;	
													}
		       |content_img	IMG_HEIGHT							{
														char *dat = malloc(150);
														strcat(dat,"height=\"");
														strcat(dat,$2);
														strcat(dat,"\"@");
														strcat(dat,$1);
														//printf("y %s\n",dat);
														$$=dat;	
													}
		       |content_img	IMG_WIDTH							{
														char *dat = malloc(150);
														strcat(dat,"width=\"");
														strcat(dat,$2);
														strcat(dat,"\"@");
														strcat(dat,$1);
														//printf("y %s\n",dat);
														$$=dat;	
													}
		       |content_img	IMG_FIG								{
														char *dat = malloc(150);
														strcat(dat,"figure=\"");
														strcat(dat,$2);
														strcat(dat,"\"@");
														strcat(dat,$1);
														//printf("y %s\n",dat);
														$$=dat;	
													}
		       |content_img	IMG_FIG_CAP							{
														char *dat = malloc(150);
														strcat(dat,"caption=\"");
														strcat(dat,$2);
														strcat(dat,"\"@");
														strcat(dat,$1);
														//printf("y %s\n",dat);
														$$=dat;	
													}																														
		       |										{	$$="";	}
		       ;
		      
//----------------------------------------------------DIV Tag GRAMMER----------------------------------------------	

div_tag		:	DIV_S		body		DIV_E						{
		
														char *dat = malloc(150);
														strcat(dat,$2);
														printf("DIV Tag: %s\n",$2);	
														$$=dat;
													};
							
//-------------------------------------Superscript and Subscript Tag GRAMMER---------------------------------------	

subsup_tag	:	SUP_S		body		SUP_E						{
		
														char *dat = malloc(150);
														strcat(dat,$2);
														printf("Superscript Tag: %s\n",$2);	
														$$=dat;
													}
			|SUB_S		body		SUB_E						{
		
														char *dat = malloc(150);
														strcat(dat,$2);
														printf("Subscript Tag: %s\n",$2);	
														$$=dat;
													};
											
//-------------------------------------Formatting Tags GRAMMER-----------------------------------------------------

format_tag	:	U_S		body		U_E						{
		
														char *dat = malloc(150);
														strcat(dat,$2);
														printf("Underline Tag: %s\n",$2);	
														$$=dat;
													}
			|B_S		body		B_E						{
		
														char *dat = malloc(150);
														strcat(dat,$2);
														printf("Bold Tag: %s\n",$2);	
														$$=dat;
													}
			|I_S		body		I_E						{
		
														char *dat = malloc(150);
														strcat(dat,$2);
														printf("Italics Tag: %s\n",$2);	
														$$=dat;
													}
			|EM_S		body		EM_E						{
		
														char *dat = malloc(150);
														strcat(dat,$2);
														printf("Emphasize Tag: %s\n",$2);	
														$$=dat;
													}
			|TT_S		body		TT_E						{
		
														char *dat = malloc(150);
														strcat(dat,$2);
														printf("Teletype Tag: %s\n",$2);	
														$$=dat;
													}
			|STRONG_S	body		STRONG_E					{
		
														char *dat = malloc(150);
														strcat(dat,$2);
														printf("Strong Tag: %s\n",$2);	
														$$=dat;
													}
			|SMALL_S	body		SMALL_E						{
		
														char *dat = malloc(150);
														strcat(dat,$2);
														printf("Small Tag: %s\n",$2);	
														$$=dat;
													};	
													
//--------------------------------------Heading Tags GRAMMER-----------------------------------------------------																																						
																																							
header_tag	:	H1_S		body		H1_E						{
		
														char *dat = malloc(150);
														strcat(dat,$2);
														printf("H1 Tag: %s\n",$2);	
														$$=dat;
													}
			|H2_S		body		H2_E						{
		
														char *dat = malloc(150);
														strcat(dat,$2);
														printf("H2 Tag: %s\n",$2);	
														$$=dat;
													}
			|H3_S		body		H3_E						{
		
														char *dat = malloc(150);
														strcat(dat,$2);
														printf("H3 Tag: %s\n",$2);	
														$$=dat;
													}
			|H4_S		body		H4_E						{
		
														char *dat = malloc(150);
														strcat(dat,$2);
														printf("H4 Tag: %s\n",$2);	
														$$=dat;
													};
													
//-----------------------------------------Table Tags GRAMMER-----------------------------------------------------																									
										
table_tag	:	TABLE_S		content_table	caption_tag	table_contents	TABLE_E		{		
														char *dat = malloc(150);
														strcat(dat,$2);
														strcat(dat,$3);
														strcat(dat,$4);
														printf("TABLE: %s\n",dat);	
														$$=dat;
													};



content_table	:     	content_table		TABLE_BORDER						{ 	
														char *dat = malloc(150);
														strcat(dat,"border=\"");
														strcat(dat,$2);
														strcat(dat,"\"");
														strcat(dat,$1);
														$$=dat;
													}
		     |											{	$$="";	}
		     ;
		    
table_contents	:    TR_S		head_tag	tr_contents	TR_E				{
														char *dat = malloc(150);
														strcat(dat,$2);
														strcat(dat,$3);
														$$=dat;
													}
		     | TR_S		tr_contents	TR_E						{
														char *dat = malloc(150);
														strcat(dat,$2);
														$$=dat;
													}
		;	


caption_tag	:	CAPTION_S	body		CAPTION_E					{	$$=$2;		};

		
head_tag	:	TH_S		body		TH_E						{	$$=$2;		};

		
tr_contents	:	TD_S		body		TD_E   						{	$$=$2;		};

													
//-----------------------------------------List Tags GRAMMER------------------------------------------------------	

list_tag	:	UL_S		inner_list_l	UL_E						{	$$=$2;		}
							
		|	OL_S		inner_list_l	OL_E						{	$$=$2;		}
		
		|	DL_S		inner_list_dl	DL_E						{	$$=$2;		};
	
inner_list_l	:	LI_S		body		LI_E						{	$$=$2;		};

inner_list_dl	:	DD_S		body		DD_E						{	$$=$2;		}

		|	DT_S		body		DT_E						{	$$=$2;		};
		
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

