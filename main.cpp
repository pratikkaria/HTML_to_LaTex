#include<bits/stdc++.h>
#include "ast.h"
#include "converter.h"
// stuff from lex that yacc needs to know about:
using namespace std;

extern int yyparse();
extern FILE *yyin;
extern void init_content_children();
extern void print(ast_node*, int);

ast_node* root;
map<int,string> latex_start={
			{0,"\\documentclass{article}\n"},
			{1, "\\begin{document}\n"},
			{2,""},
			{3, "\\par\n"},
			{5, "\\title{"},
			{6,  ""}
		 	};
		 	
map<int,string> latex_end={
			{0,""},
			{1, "\\end{document}\n"},
			{2, ""},
			{3, ""},
			{5, "}\n"},
			{6, ""}
		 	};		 	
string s("");
void yyerror(const char *s) {
	cout<<"Parse error!  Message:"<<s<<endl;
	// might as well halt now:
	exit(-1);
}

void traversal_main(ast_node* root)
{

	cout<<root->node_type<<endl;
	s+=latex_start[root->node_type];
	if(root->node_type==4)
		s+=root->data+"\n";
	for(int i=0;i<root->children.size();i++)
		traversal_main(root->children[i]);
	s+=latex_end[root->node_type];
}
int main(int argc, char *argv[]) {
	if(argc<2){
		cout<<"error in entering arguments. Correct Format: /compiler <input.txt>";
	}
	yyin = fopen(argv[1], "r");
	//init_content_children();

	// parse through the input until there is no more:
	do {
		yyparse();
	} while (!feof(yyin));
	//cout <<"yoo";
	traversal_main(root);
	cout<<"Final: "<<endl;
	cout<<s<<endl;
	/*converter C;
	string s = C.traversal(root);
	C.printHTML(s);*/
}
