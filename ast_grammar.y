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
	struct ast_node* node;
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
	 			


%type		<node>	html_start	content_body	content_head	content_title	center_tag			
%type		<node>	body		p_tag		data		href_tag	br_tag
%type		<node>	font_tag	header_tag	format_tag	subsup_tag	fig_caption
%type		<node>	img_tag		div_tag		li_tag		ul_tag 		ol_tag 
%type		<node>	dl_tag 		dt_tag 		dd_tag		table_tag	table_contents
%type		<node>	caption_data	tr_data
%type		<s>	content_href	content_font	content_img	content_table	
%start			html_start

%%
html_start	:	HTML_S	 content_head	content_body		HTML_E			{
													root = new_node();
													root->node_type = HTML_H;
													root->children.push_back($2);
													root->children.push_back($3);
													
												};



content_head	:	HEAD_S	content_head 	content_title	content_head 	HEAD_E		{
													
													$$ = new_node();
													$$->node_type = HEAD_H;
													string st1("");
													if($2->data.compare(st1)!=0)
														$$->children.push_back($2);
													if($3)
														$$->children.push_back($3);
													if($4->data.compare(st1)!=0)
														$$->children.push_back($4);
													
												}
		|	DATA									{
													$$ = new_node();
													string str($1);
													$$->data = str;
													$$->node_type = DATA_H;
												}	
		|										{	
													$$ = new_node();
													string str("");
													$$->data = str;
													$$->node_type = DATA_H;
												}
		;	

content_title	:	TITLE_S	 data	TITLE_E							{
													$$ = new_node();
													$$->node_type = TITLE_H;
													$$->children.push_back($2);
												};		
				
											
content_body	:	BODY_S	body  BODY_E							{
													$$ = new_node();
													$$->node_type = BODY_H;
													$$->children.push_back($2);
													
												};

		
body		:	body	p_tag	data							{	
													$$ = new_node();
													$$->node_type = CONTENT_H;
													string st1("");
													$$->children.push_back($1);
													if($2)
														$$->children.push_back($2);
													if($3->data.compare(st1)!=0)
														$$->children.push_back($3);	
													//content_children->push_back($3);
												}
		|	body	center_tag	data						{	
													$$ = new_node();
													$$->node_type = CONTENT_H;
													string st1("");
													$$->children.push_back($1);
													if($2)
														$$->children.push_back($2);
													if($3->data.compare(st1)!=0)
														$$->children.push_back($3);	
												}
		|	body	href_tag	data						{	$$ = new_node();
													$$->node_type = CONTENT_H;
													string st1("");
													$$->children.push_back($1);
													if($2)
														$$->children.push_back($2);
													if($3->data.compare(st1)!=0)
														$$->children.push_back($3);	
												}	
		|	body	br_tag		data						{
													$$ = new_node();
													$$->node_type = CONTENT_H;
													string st1("");
													$$->children.push_back($1);
													$$->children.push_back($2);
													if($3->data.compare(st1)!=0)
														$$->children.push_back($3);
															
												}	
		|	body	font_tag	data						{	
													$$ = new_node();
													$$->node_type = CONTENT_H;
													string st1("");
													$$->children.push_back($1);
													if($2)
														$$->children.push_back($2);
													if($3->data.compare(st1)!=0)
														$$->children.push_back($3);
												}
		|	body	header_tag	data						{	
													$$ = new_node();
													$$->node_type = CONTENT_H;
													string st1("");
													$$->children.push_back($1);
													if($2)
														$$->children.push_back($2);
													if($3->data.compare(st1)!=0)
														$$->children.push_back($3);
												}
		|	body	format_tag	data						{	
													$$ = new_node();
													$$->node_type = CONTENT_H;
													string st1("");
													$$->children.push_back($1);
													if($2)
														$$->children.push_back($2);
													if($3->data.compare(st1)!=0)
														$$->children.push_back($3);
												}
		|	body	subsup_tag	data						{	
													$$ = new_node();
													$$->node_type = CONTENT_H;
													string st1("");
													$$->children.push_back($1);
													if($2)
														$$->children.push_back($2);
													if($3->data.compare(st1)!=0)
														$$->children.push_back($3);
												}
		|	body	img_tag		data						{	
													$$ = new_node();
													$$->node_type = CONTENT_H;
													string st1("");
													$$->children.push_back($1);
													if($2)
														$$->children.push_back($2);
													if($3->data.compare(st1)!=0)
														$$->children.push_back($3);
												}
		|	body	div_tag		data						{	
													$$ = new_node();
													$$->node_type = CONTENT_H;
													string st1("");
													$$->children.push_back($1);
													if($2)
														$$->children.push_back($2);
													if($3->data.compare(st1)!=0)
														$$->children.push_back($3);
												}
		|	body	li_tag		data						{	
													$$ = new_node();
													$$->node_type = CONTENT_H;
													string st1("");
													$$->children.push_back($1);
													if($2)
														$$->children.push_back($2);
													if($3->data.compare(st1)!=0)
														$$->children.push_back($3);
												}
		|	body	ul_tag		data						{	
													$$ = new_node();
													$$->node_type = CONTENT_H;
													string st1("");
													$$->children.push_back($1);
													if($2)
														$$->children.push_back($2);
													if($3->data.compare(st1)!=0)
														$$->children.push_back($3);
												}
		|	body	ol_tag		data						{	
													$$ = new_node();
													$$->node_type = CONTENT_H;
													string st1("");
													$$->children.push_back($1);
													if($2)
														$$->children.push_back($2);
													if($3->data.compare(st1)!=0)
														$$->children.push_back($3);
												}
		|	body	dl_tag		data						{	
													$$ = new_node();
													$$->node_type = CONTENT_H;
													string st1("");
													$$->children.push_back($1);
													if($2)
														$$->children.push_back($2);
													if($3->data.compare(st1)!=0)
														$$->children.push_back($3);
												}
		|	body	dd_tag		data						{	
													$$ = new_node();
													$$->node_type = CONTENT_H;
													string st1("");
													$$->children.push_back($1);
													if($2)
														$$->children.push_back($2);
													if($3->data.compare(st1)!=0)
														$$->children.push_back($3);
												}
		|	body	dt_tag		data						{	
													$$ = new_node();
													$$->node_type = CONTENT_H;
													string st1("");
													$$->children.push_back($1);
													if($2)
														$$->children.push_back($2);
													if($3->data.compare(st1)!=0)
														$$->children.push_back($3);
												}
		|	body	table_tag	data						{	
													$$ = new_node();
													$$->node_type = CONTENT_H;
													string st1("");
													$$->children.push_back($1);
													if($2)
														$$->children.push_back($2);
													if($3->data.compare(st1)!=0)
														$$->children.push_back($3);
												}																																																																								
																																																																											
		|	data									{	
														$$=$1;
												}
		;


data		:	data	DATA								{		
													$$ = new_node();
													string str($2);
													string st1("");
													$$->data = str;
													$$->node_type = DATA_H;
													if($1->data.compare(st1)!=0)
														$$->children.push_back($1);
																	
												}
		|	data	GREEK								{
													$$ = new_node();
													string str($2);
													string st1("");
													cout<<str.substr(1,str.length()-2);
													$$->data = str.substr(1,str.length()-2);
													$$->node_type = GREEK_H;
													if($1->data.compare(st1)!=0)
														$$->children.push_back($1);						
												}
		|	data 	COMMENT								{	
													$$ = new_node();
													string str($2);
													string st1("");
													cout<<"Comment"<<str<<endl;
													$$->data = str;
													$$->node_type = COMMENT_H;
													if($1->data.compare(st1)!=0)
														$$->children.push_back($1);
												}
		|										{
													$$ = new_node();
													string str("");
													$$->data = str;
													$$->node_type = DATA_H;
												}
		;
		


//----------------------------------------------------Paragraph GRAMMER----------------------------------------------


p_tag		:	P_S		body	P_E							{
														$$ = new_node();
														$$->node_type = P_H;
														$$->children.push_back($2);
													}
		;
		
//----------------------------------------------------Center GRAMMER----------------------------------------------			

center_tag	:	CENTER_S		body		CENTER_E				{
		
														$$ = new_node();
														$$->node_type = CENTER_H;
														$$->children.push_back($2);
													};	
													
//----------------------------------------------------HREF GRAMMER----------------------------------------------		
href_tag	:	HREF_S		content_href		body	  HREF_E			{	
														$$ = new_node();
														$$->node_type = A_H;
														$$->children.push_back($3);
														$$->attributes= $2;
													};



content_href	:     content_href	HREF_LINK							{ 	
														char *dat = (char *)malloc(2000);
														strcat(dat,$2);
														strcat(dat,$1);
														$$=dat;
													}
		      | content_href	HREF_TITLE							{ 
														char *dat = (char *)malloc(2000);
														strcat(dat,"");
														strcat(dat,$1);
														$$=dat;
													}
		      | content_href	HREF_NAME							{ 
														char *dat = (char *)malloc(2000);
														strcat(dat,"");
														strcat(dat,$1);
														$$=dat;
													}
											
		      |											{	
		      												char *dat = (char *)malloc(2000);
														strcat(dat,"");
														$$=dat;
		      											}
		      ;	
		      
//----------------------------------------------------Break Tag GRAMMER----------------------------------------------			
			
br_tag		:	BR  										{	
														$$ = new_node();
														$$->node_type = BR_H;										
													}	
		|	BR_S										{	
														$$ = new_node();
														$$->node_type = BR_H;
													}
		;	
		
		
//----------------------------------------------------FONT GRAMMER----------------------------------------------

font_tag	:	FONT_S		content_font		body		  FONT_E		{	
														$$ = new_node();
														$$->node_type = FONT_H;
														$$->children.push_back($3);
														$$->attributes= $2;
													};



content_font	:     content_font	FONT_SIZE							{ 	
														char *dat = (char *)malloc(2000);
														strcat(dat,$2);
														strcat(dat,$1);
														$$=dat;
													}
		     |											{	$$=(char *)"";	}
		     ;				      															

//--------------------------------------Heading Tags GRAMMER-----------------------------------------------------																																						
																																							
header_tag	:	H1_S		body		H1_E						{
		
														$$ = new_node();
														$$->node_type = HEADER1_H;
														$$->children.push_back($2);
													}
			|H2_S		body		H2_E						{
		
														$$ = new_node();
														$$->node_type = HEADER2_H;
														$$->children.push_back($2);
													}
			|H3_S		body		H3_E						{
		
														$$ = new_node();
														$$->node_type = HEADER3_H;
														$$->children.push_back($2);
													}
			|H4_S		body		H4_E						{
		
														$$ = new_node();
														$$->node_type = HEADER4_H;
														$$->children.push_back($2);
													};	
													
//-------------------------------------Formatting Tags GRAMMER-----------------------------------------------------

format_tag	:	U_S		body		U_E						{
		
														$$ = new_node();
														$$->node_type = UNDERLINE_H;
														$$->children.push_back($2);
													}
			|B_S		body		B_E						{
		
														$$ = new_node();
														$$->node_type = BOLD_H;
														$$->children.push_back($2);
													}
			|I_S		body		I_E						{
		
														$$ = new_node();
														$$->node_type = ITALICS_H;
														$$->children.push_back($2);
													}
			|EM_S		body		EM_E						{
		
														$$ = new_node();
														$$->node_type = EMPHASIZE_H;
														$$->children.push_back($2);
													}
			|TT_S		body		TT_E						{
		
														$$ = new_node();
														$$->node_type = TELETYPE_H;
														$$->children.push_back($2);
													}
			|STRONG_S	body		STRONG_E					{
		
														$$ = new_node();
														$$->node_type = STRONG_H;
														$$->children.push_back($2);
													}
			|SMALL_S	body		SMALL_E						{
		
														$$ = new_node();
														$$->node_type = SMALL_H;
														$$->children.push_back($2);
													};	
												
//-------------------------------------Superscript and Subscript Tag GRAMMER---------------------------------------	

subsup_tag	:	SUP_S		body		SUP_E						{
														$$ = new_node();
														$$->node_type = SUPERSCRIPT_H;
														$$->children.push_back($2);
													}
			|SUB_S		body		SUB_E						{
														$$ = new_node();
														$$->node_type = SUBSCRIPT_H;
														$$->children.push_back($2);
													};
													
//----------------------------------------------------Image Tag GRAMMER----------------------------------------------	
img_tag		:	IMG_S		content_img	IMG_E		fig_caption			{	
														$$ = new_node();
														$$->node_type = IMG_H;
														string st1("");
														if($4->data.compare(st1)!=0)
															$$->children.push_back($4);
														$$->attributes= $2;
													}
		|	FIG_S	IMG_S	content_img	IMG_E	fig_caption	FIG_E			{
														$$ = new_node();
														string st1("");
														$$->node_type = IMG1_H;
														if($5->data.compare(st1)!=0 || $5->children.size()>0)
															$$->children.push_back($5);
														$$->attributes= $3;
													};
		
		
		
fig_caption	:	FIGCAP_S	body	FIGCAP_E						{	
														$$ = new_node();
														$$->node_type = FIGCAPTION_H;
														$$->children.push_back($2);
													}
		|											{
														string str1("");
														$$ = new_node();
														$$->node_type = FIGCAPTION_H;
														$$->data=str1;	
													}
		;		


content_img	:     	content_img	IMG_SRC								{ 	
														char *dat = (char *)malloc(2000);
														strcat(dat,"src=");
														strcat(dat,$2);
														strcat(dat,",");
														strcat(dat,$1);
														////printf("\ny %s\n",dat);
														$$=dat;	
													}
		       |content_img	IMG_HEIGHT							{
														char *dat = (char *)malloc(2000);
														strcat(dat,"height=");
														strcat(dat,$2);
														strcat(dat,"cm, ");
														strcat(dat,$1);
														////printf("\ny %s\n",dat);
														$$=dat;	
													}
		       |content_img	IMG_WIDTH							{
														char *dat = (char *)malloc(2000);
														strcat(dat,"width=");
														strcat(dat,$2);
														strcat(dat,"cm,");
														strcat(dat,$1);
														////printf("\ny %s\n",dat);
														$$=dat;	
													}																														
		       |										{	$$=(char *)"";	}
		       ;
		       
//----------------------------------------------------DIV Tag GRAMMER----------------------------------------------	

div_tag		:	DIV_S		body		DIV_E						{
														$$ = new_node();
														$$->node_type = DIV_H;
														$$->children.push_back($2);
													};
									       				
//-----------------------------------------List Tags GRAMMER------------------------------------------------------	


li_tag 		:	LI_S		body		LI_E						{
														$$ = new_node();
														$$->node_type = LI_H;
														$$->children.push_back($2);
													};
ul_tag		: 	UL_S		body		UL_E						{
														$$ = new_node();
														$$->node_type = UL_H;
														$$->children.push_back($2);
													};
ol_tag		:	OL_S		body		OL_E						{
														$$ = new_node();
														$$->node_type = OL_H;
														$$->children.push_back($2);
													};
dl_tag		:	DL_S		body		DL_E						{
														$$ = new_node();
														$$->node_type = DL_H;
														$$->children.push_back($2);
													};
dt_tag		:	DT_S		body		DT_E						{
														$$ = new_node();
														$$->node_type = DT_H;
														$$->children.push_back($2);
													};
dd_tag		:	DD_S		body		DD_E						{
														$$ = new_node();
														$$->node_type = DD_H;
														$$->children.push_back($2);
													};
													
//-----------------------------------------Table Tags GRAMMER-----------------------------------------------------																									
table_tag	:	TABLE_S		content_table	caption_data	table_contents	TABLE_E		{	
														$$ = new_node();
														string str1("");
														$$->node_type = TABLE_H;
														if($3->data.compare(str1)!=0)
															$$->children.push_back($3);
														$$->children.push_back($4);
														$$->attributes= $2;
														
														
													};

content_table	:     	TABLE_BORDER									{
														char *dat = (char *)malloc(2000);
														
														strcat(dat,$1);
														$$=dat;
													}
		 |											{	$$=(char *)"";	}
		 ;
		     
		     
		     
	    
table_contents	:  	table_contents	TR_S	tr_data	 TR_E						{
														$$ = new_node();
														$$->node_type = T_R;
														string st1("");
														$$->children=$1->children;
														$$->children.push_back($3);
														//cout<<"children1:"<<$$->children.size()<<endl;
															
													}
		|											{
														$$ = new_node();
														$$->node_type = DATA_H;
														$$->data="";	
													}													
		;	



caption_data	:	CAPTION_S	body	CAPTION_E						{	
														$$ = new_node();
														$$->node_type = CAPTION_H;
														$$->data = $2->data;	
													}
		|											{	
														$$ = new_node();
														$$->node_type = DATA_H;
														$$->data="";
													}
		;

tr_data		:	tr_data		TH_S		body		TH_E				{
														$$ = new_node();
														$$->node_type = T_H;
														string st1("");
														$$->children=$1->children;
														$$->children.push_back($3);	
													}
		|	tr_data		TD_S		body		TD_E				{
														$$ = new_node();
														$$->node_type = T_D;
														string st1("");
														$$->children=$1->children;
														$$->children.push_back($3);
														
														//cout<<"children2:"<<$$->children.size()<<endl;
															
													}
		|											{
														$$ = new_node();
														$$->node_type = DATA_H;
														$$->data="";	
													}
		;													


%%


