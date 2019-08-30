%{
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

%}

%union
{
	char *s;
	ast_node* node;
}

%token		<s>	DOCTYPE		HTML_S		HTML_E		HEAD_S		HEAD_E
%token		<s>	TITLE_S		TITLE_E		BODY_S		BODY_E		HREF_S
%token		<s>	HREF_E		FONT_S		FONT_E		CENTER_S	CENTER_E
%token		<s>	BR		P_S		P_E		H1_S		H1_E
%token		<s>	H2_S		H2_E		H3_S		H3_E		H4_S
%token		<s>	H4_E		UL_S		UL_E		LI_S		LI_E
%token		<s>	OL_S		OL_E		TD_S		DL_S		TD_E
%token		<s>	DL_E		DT_S		DT_E		DD_S		DD_E
%token		<s>	DIV_S		DIV_E		U_S		U_E		B_S
%token		<s>	B_E		I_S		I_E		EM_S		EM_E
%token		<s>	TT_S		TT_E		STRONG_S	STRONG_E	SMALL_S
%token		<s>	SMALL_E		SUB_S		SUB_E		SUP_S		SUP_E
%token		<s>	TABLE_S		TABLE_E		CAPTION_S	CAPTION_E	TH_S
%token		<s>	TH_E		TR_S		TR_E		HREF_LINK	FONT_SIZE
%token		<s>	HREF_TITLE	IMG_S		IMG_SRC		IMG_WIDTH	IMG_HEIGHT
%token		<s>	FIG_S		DATA		GREEK		TABLE_BORDER	FIG_E
%token		<s>	IMG_E		FIGCAP_S	FIGCAP_E	BR_S		HREF_NAME
%token		<s>	COMMENT
	 			
%type		<s>	content_href	href_tag	font_tag	content_title	content_body	content	content_font
%type		<s>	center_tag	br_tag		content_head		img_tag		content_img
%type		<s>	div_tag		subsup_tag	format_tag	header_tag	table_contents
%type		<s>	content_table	table_tag	caption_data	
%type		<s>	list_tag	inner_list_l	inner_list_dl	fig_caption	tr_data

%type		<node>	html_start					
%type		<node>	body		p_tag		data
%start			html_start

%%
html_start	:	HTML_S		content		HTML_E					{
													root = $2;
												};


content		:	content_head	content_body						
		;
		
			
content_head	:	HEAD_S	content_head 	content_title	content_head 	HEAD_E		{
													char *dat = (char *)malloc(2000);
													strcpy(dat,$3);
													$$=dat;
													
													
												}
		|	DATA									{
													char *dat = (char *)malloc(2000);
													strcpy(dat,$1);
													//printf("\nContent Head: %s\n",$1);
													$$=dat;
												}	
		|										{	$$=(char *)"";	}
		;	

content_title	:	TITLE_S	 DATA	TITLE_E							{
													char *dat = (char *)malloc(2000);
													strcpy(dat,"\\title{");
													strcat(dat,$2);
													strcat(dat,"}");
													//printf("\nContent Title: %s\n",$2);
													$$=dat;
												};
											
content_body	:	BODY_S	body  BODY_E							{
													char *dat = (char *)malloc(2000);
													strcpy($$,$2);
													//printf("\nContent Body:%s\n",$2);
													
												};

		
body		:	body	href_tag	data						{	
													content_children->push_back($2);	
													content_children->push_back($3);
												}
		|	body	font_tag	data						{	
													content_children->push_back($2);	
													content_children->push_back($3);
												}
		|	body	center_tag	data						{	
													content_children->push_back($2);	
													content_children->push_back($3);
												}
		|	body	br_tag		data						{	
													content_children->push_back($2);	
													content_children->push_back($3);
												}
		|	body	p_tag		data						{	
													content_children->push_back($2);	
													content_children->push_back($3);
												}
		|	body	header_tag	data						{	
													content_children->push_back($2);	
													content_children->push_back($3);
												}	
		|	body	list_tag	data						{	
													content_children->push_back($2);	
													content_children->push_back($3);
												}
		|	body	div_tag		data						{	
													content_children->push_back($2);	
													content_children->push_back($3);
												}
		|	body	format_tag	data						{	
													content_children->push_back($2);	
													content_children->push_back($3);
												}
		|	body	subsup_tag	data						{	
													content_children->push_back($2);	
													content_children->push_back($3);
												}
		|	body	img_tag		data						{	
													content_children->push_back($2);	
													content_children->push_back($3);
												}
		|	body	table_tag	data						{	
													content_children->push_back($2);	
													content_children->push_back($3);
												}
		|	data									{	
													content_children->push_back($1);	
												}
		;


data		:	data	DATA								{		
													ast_node* temp = new_node();
													string str($2);
													temp->data = str;
													temp->node_type = DATA_H;
													content_children->push_back(temp);						
												}
		|	data	GREEK								{
													ast_node* temp = new_node();
													string str($2);
													temp->data = str;
													temp->node_type = DATA_H;
													content_children->push_back(temp);							
												}
		|	data 	COMMENT								{													ast_node* temp = new_node();
													string str($2);
													temp->data = str;
													temp->node_type = DATA_H;
													content_children->push_back(temp);
												}
		|										{													ast_node* temp = new_node();
													string str("");
													temp->data = str;
													temp->node_type = DATA_H;
													content_children->push_back(temp);
												}
		;
		

//----------------------------------------------------HREF GRAMMER----------------------------------------------		
href_tag	:	HREF_S		content_href		body	  HREF_E			{	
														char *dat = (char *)malloc(2000);
														strcat(dat,$2);
														strcat(dat,$3);
														//printf("\nHREF_ATTR: %s\n",$2);	
														//printf("\nHREF_DATA: %s\n",$3);
														$$=dat;
													};



content_href	:     content_href	HREF_LINK							{ 	
														char *dat = (char *)malloc(2000);
														strcat(dat,"link=\"");
														strcat(dat,$2);
														strcat(dat,"\"@");
														strcat(dat,$1);
														$$=dat;
													}
		      | content_href	HREF_TITLE							{ 
														char *dat = (char *)malloc(2000);
														strcat(dat,"title=\"");
														strcat(dat,$2);
														strcat(dat,"\"@");
														strcat(dat,$1);
														$$=dat;
													}
		      | content_href	HREF_NAME							{ 
														char *dat = (char *)malloc(2000);
														strcat(dat,"name=\"");
														strcat(dat,$2);
														strcat(dat,"\"@");
														strcat(dat,$1);
														$$=dat;
													}
											
		      |											{	$$=(char *)"";	}
		      ;	

//----------------------------------------------------FONT GRAMMER----------------------------------------------

font_tag	:	FONT_S		content_font		body		  FONT_E		{	
														char *dat = (char *)malloc(2000);
														strcat(dat,$2);
														strcat(dat,$3);
														//printf("\nFONT_ATTR: %s\n",$2);	
														//printf("\nFONT_DATA: %s\n",$3);
														$$=dat;
													};



content_font	:     content_font	FONT_SIZE							{ 	
														char *dat = (char *)malloc(2000);
														strcat(dat,"size=\"");
														strcat(dat,$2);
														strcat(dat,"\"");
														strcat(dat,$1);
														$$=dat;
													}
		     |											{	$$=(char *)"";	}
		     ;	


//----------------------------------------------------Paragraph GRAMMER----------------------------------------------


p_tag		:	P_S		body	P_E							{
	
														$$ = new_node();
														$$->node_type = P_H;
														adopt_content_children($$);
													}
		;
			
			
//----------------------------------------------------Center GRAMMER----------------------------------------------			

center_tag	:	CENTER_S		body		CENTER_E				{
	
														$$ = new_node();
														$$->node_type = CENTER_H;
														adopt_content_children($$);
													};
			
//----------------------------------------------------Break Tag GRAMMER----------------------------------------------			
			
br_tag		:	BR  										{	$$=(char *)"";	}	
		|	BR_S										{	$$=(char *)"";	};


//----------------------------------------------------Image Tag GRAMMER----------------------------------------------	
img_tag		:	IMG_S		content_img	IMG_E		fig_caption			{	
														char *dat = (char *)malloc(2000);
														strcat(dat,$2);
														//strcat(dat,$3);
														//printf("\nIMG_CONTENT: %s\n",$2);	
														////printf("\nHREF_DATA: %s\n",$3);
														$$=dat;
													}
		|	FIG_S	IMG_S	content_img	IMG_E	fig_caption	FIG_E			{
														char *dat = (char *)malloc(2000);
														strcat(dat,$2);
														//strcat(dat,$3);
														//printf("\nIMG_CONTENT: %s\n",$2);	
														////printf("\nHREF_DATA: %s\n",$3);
														$$=dat;
													};
		
		
		
fig_caption	:	FIGCAP_S	body	FIGCAP_E						{	$$=$2;	}
		|											{	$$=(char *)"";	}
		;		


content_img	:     	content_img	IMG_SRC								{ 	
														char *dat = (char *)malloc(2000);
														strcat(dat,"src=\"");
														strcat(dat,$2);
														strcat(dat,"\"@");
														strcat(dat,$1);
														////printf("\ny %s\n",dat);
														$$=dat;	
													}
		       |content_img	IMG_HEIGHT							{
														char *dat = (char *)malloc(2000);
														strcat(dat,"height=\"");
														strcat(dat,$2);
														strcat(dat,"\"@");
														strcat(dat,$1);
														////printf("\ny %s\n",dat);
														$$=dat;	
													}
		       |content_img	IMG_WIDTH							{
														char *dat = (char *)malloc(2000);
														strcat(dat,"width=\"");
														strcat(dat,$2);
														strcat(dat,"\"@");
														strcat(dat,$1);
														////printf("\ny %s\n",dat);
														$$=dat;	
													}																														
		       |										{	$$=(char *)"";	}
		       ;
		      
//----------------------------------------------------DIV Tag GRAMMER----------------------------------------------	

div_tag		:	DIV_S		body		DIV_E						{
		
														char *dat = (char *)malloc(2000);
														strcat(dat,$2);
														//printf("\nDIV Tag: %s\n",$2);	
														$$=dat;
													};
							
//-------------------------------------Superscript and Subscript Tag GRAMMER---------------------------------------	

subsup_tag	:	SUP_S		body		SUP_E						{
		
														char *dat = (char *)malloc(2000);
														strcat(dat,$2);
														//printf("\nSuperscript Tag: %s\n",$2);	
														$$=dat;
													}
			|SUB_S		body		SUB_E						{
		
														char *dat = (char *)malloc(2000);
														strcat(dat,$2);
														//printf("\nSubscript Tag: %s\n",$2);	
														$$=dat;
													};
											
//-------------------------------------Formatting Tags GRAMMER-----------------------------------------------------

format_tag	:	U_S		body		U_E						{
		
														char *dat = (char *)malloc(2000);
														strcat(dat,$2);
														//printf("\nUnderline Tag: %s\n",$2);	
														$$=dat;
													}
			|B_S		body		B_E						{
		
														char *dat = (char *)malloc(2000);
														strcat(dat,$2);
														//printf("\nBold Tag: %s\n",$2);	
														$$=dat;
													}
			|I_S		body		I_E						{
		
														char *dat = (char *)malloc(2000);
														strcat(dat,$2);
														//printf("\nItalics Tag: %s\n",$2);	
														$$=dat;
													}
			|EM_S		body		EM_E						{
		
														char *dat = (char *)malloc(2000);
														strcat(dat,$2);
														//printf("\nEmphasize Tag: %s\n",$2);	
														$$=dat;
													}
			|TT_S		body		TT_E						{
		
														char *dat = (char *)malloc(2000);
														strcat(dat,$2);
														//printf("\nTeletype Tag: %s\n",$2);	
														$$=dat;
													}
			|STRONG_S	body		STRONG_E					{
		
														char *dat = (char *)malloc(2000);
														strcat(dat,$2);
														//printf("\nStrong Tag: %s\n",$2);	
														$$=dat;
													}
			|SMALL_S	body		SMALL_E						{
		
														char *dat = (char *)malloc(2000);
														strcat(dat,$2);
														//printf("\nSmall Tag: %s\n",$2);	
														$$=dat;
													};	
													
//--------------------------------------Heading Tags GRAMMER-----------------------------------------------------																																						
																																							
header_tag	:	H1_S		body		H1_E						{
		
														char *dat = (char *)malloc(2000);
														strcat(dat,$2);
														//printf("\nH1 Tag: %s\n",$2);	
														$$=dat;
													}
			|H2_S		body		H2_E						{
		
														char *dat = (char *)malloc(2000);
														strcat(dat,$2);
														//printf("\nH2 Tag: %s\n",$2);	
														$$=dat;
													}
			|H3_S		body		H3_E						{
		
														char *dat = (char *)malloc(2000);
														strcat(dat,$2);
														//printf("\nH3 Tag: %s\n",$2);	
														$$=dat;
													}
			|H4_S		body		H4_E						{
		
														char *dat = (char *)malloc(2000);
														strcat(dat,$2);
														//printf("\nH4 Tag: %s\n",$2);	
														$$=dat;
													};
													
//-----------------------------------------Table Tags GRAMMER-----------------------------------------------------																									
table_tag	:	TABLE_S		content_table	caption_data	table_contents	TABLE_E		{	};

content_table	:     	TABLE_BORDER									{
																												char *dat = (char *)malloc(2000);
														strcat(dat,"src=\"");
														strcat(dat,$1);
														strcat(dat,"\"@");
														//strcat(dat,$1);
														////printf("\ny %s\n",dat);
														$$=dat;	
													}
		 |											{	$$=(char *)"";	}
		 ;
		     
		     
		     
	    
table_contents	:  	table_contents	TR_S	tr_data	 TR_E					
		|											{	$$=(char *)"";	}													
		;	



caption_data	:	CAPTION_S	body	CAPTION_E						{	$$=$2;	}
		|											{	$$=(char *)"";	}
		;

tr_data		:	tr_data		TH_S		body		TH_E		
		|	tr_data		TD_S		body		TD_E	
		|											{	$$=(char *)"";	}
		;
									
//-----------------------------------------List Tags GRAMMER------------------------------------------------------	

list_tag	:	UL_S		inner_list_l	UL_E						{	$$=$2;		}
							
		|	OL_S		inner_list_l	OL_E						{	$$=$2;		}
		
		|	DL_S		inner_list_dl	DL_E						{	$$=$2;		};
	
	
inner_list_l	:	inner_list_l	LI_S		body		LI_E				{	$$=$3;		}
		|	inner_list_l	UL_S		inner_list_l		UL_E			{	$$=$3;		}
		|	inner_list_l	OL_S		inner_list_l		OL_E			{	$$=$3;		}
		|	inner_list_l	DL_S		inner_list_dl	DL_E				{	$$=$3;		}
		|											{	$$=(char *)"";		}
		;

inner_list_dl	:	DD_S		body		DD_E	inner_list_dl				{	$$=$2;		}

		|	DT_S		body		DT_E	inner_list_dl				{	$$=$2;		}
		|											{	$$=(char *)"";		}
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
	printf("\nSyntax Error\n");
}

