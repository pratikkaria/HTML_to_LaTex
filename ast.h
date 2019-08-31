#ifndef _AST_H
#define _AST_H

#include <iostream>
#include <vector>
#include <string>

using namespace std;

enum AST_Node_Type{

	HTML_H,BODY_H, CONTENT_H, P_H, DATA_H, TITLE_H, HEAD_H, CENTER_H, A_H,  BR_H, FONT_H,  HEADER1_H,HEADER2_H,HEADER3_H,HEADER4_H, 
	UNDERLINE_H, BOLD_H, ITALICS_H, EMPHASIZE_H, TELETYPE_H, STRONG_H, SMALL_H, SUBSCRIPT_H,SUPERSCRIPT_H,IMG_H, FIGCAPTION_H, DIV_H,
	GREEK_H,COMMENT_H, UL_H, OL_H, DL_H, LI_H, DD_H, DT_H, IMG1_H
	
};

typedef struct ast_node{
	AST_Node_Type node_type;
	string data;
	string attributes; //A,IMG,FONT,TABLE
	vector<ast_node*> children;
}ast_node;

ast_node* new_node();
ast_node* new_node(string data);
void init_content_children();
void adopt_content_children(ast_node*);
void print(ast_node* ,int );


#endif
