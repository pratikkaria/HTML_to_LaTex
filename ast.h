#ifndef _AST_H
#define _AST_H

#include <iostream>
#include <vector>
#include <string>

using namespace std;

enum AST_Node_Type{

	HTML_H,BODY_H, CONTENT_H, P_H, DATA_H, TITLE_H, HEAD_H, HREF_H,  CENTER_H, FONT_H, BR_H, HEADER_H, LIST_H, DIV_H, FORMAT_H, SUBSCRIPT_H, SUPERSCRIPT_H, IMG_H, TABLE_H, CELL_H,
	FIGCAPTION_H
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
