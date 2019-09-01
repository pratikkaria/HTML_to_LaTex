#ifndef _AST_H
#define _AST_H
#include<bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

//-------------------------------------------------AST Node Type ENUMS------------------------------------------------------------
enum AST_Node_Type{

	HTML_H,		BODY_H,		 CONTENT_H, 	P_H,	 	DATA_H, 	TITLE_H,	 HEAD_H, 
	CENTER_H, 	A_H,  		 BR_H, 		FONT_H,  	HEADER1_H,	HEADER2_H,	 HEADER3_H,
	HEADER4_H,	UNDERLINE_H, 	 BOLD_H, 	ITALICS_H,	EMPHASIZE_H, 	TELETYPE_H, 	 STRONG_H, 
	SMALL_H, 	SUBSCRIPT_H,	 SUPERSCRIPT_H,	IMG_H, 		FIGCAPTION_H, 	DIV_H,		 GREEK_H,
	COMMENT_H, 	UL_H, 		 OL_H, 		DL_H, 		LI_H, 		DD_H, 		 DT_H, 
	IMG1_H, 	TABLE_H, 	 CAPTION_H, 	T_R, 		T_H, 		T_D 
	
};
//-------------------------------------------------AST Node Structure--------------------------------------------------------------
typedef struct ast_node{
	AST_Node_Type node_type;
	string data;
	string attributes; //A,IMG,FONT,TABLE
	vector<ast_node*> children;
}ast_node;

//----------------------------------------------------Creating AST Nodes------------------------------------------------------------
ast_node* new_node();
ast_node* new_node(string data);

//-------------------------------------------------------All Mappings---------------------------------------------------------------
extern map<int,string> latex_start;
extern map<int,string> latex_end;	
extern map<string,string> img;
extern map<string, string> specialwords;
#endif
