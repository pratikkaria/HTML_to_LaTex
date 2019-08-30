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
	 			


%type		<node>	html_start	content_body				
%type		<node>	body		p_tag		data
%start			html_start

%%
html_start	:	HTML_S	 content_head	content_body		HTML_E				{
													root = new_node();
													root->node_type = HTML_H;
													root->children.push_back($2);
													root->children.push_back($3);
													
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
													if($1->data.compare(st1)!=0)
														$$->children.push_back($1);
													if($2)
														$$->children.push_back($2);
													if($3->data.compare(st1)!=0)
														$$->children.push_back($3);	
													//content_children->push_back($3);
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
													ast_node* temp = new_node();
													string str($2);
													temp->data = str;
													temp->node_type = DATA_H;
													content_children->push_back(temp);							
												}
		|	data 	COMMENT								{	
													ast_node* temp = new_node();
													string str($2);
													temp->data = str;
													temp->node_type = DATA_H;
													content_children->push_back(temp);
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
			

		
%%


