#include<bits/stdc++.h>
#include "common_header_file.h"

using namespace std;

extern int yyparse();
extern FILE *yyin;

ast_node* root;
string s("");
int border;

//------------------------------------------Functions for Node Creation-------------------------------------------------------
ast_node* new_node(){
	ast_node* temp = new ast_node;
	return temp;
}

ast_node* new_node(string data){
	ast_node* temp = new ast_node;
	temp->data = data;
	return temp;
}
//------------------------------------------YYError Function------------------------------------------------------------------
void yyerror(const char *s) {
	cout<<"Parse error!  Message:"<<s<<endl;
	// might as well halt now:
	exit(-1);
}
//-----------------------------------Functions for Collecting Image Tag Attributes--------------------------------------------
void show_stack(stack <string> s, stack <string> s1) 
{ 
    while (!s.empty()) 
    { 
        string s2 = s.top(); 
        string s3 = s1.top();
        size_t start = s2.find_first_not_of(" ");
        s2 = s2.substr(start);
        img[s2] = s3;
        s.pop();
        s1.pop();
    } 
} 
//-----------------------------------Functions for Extracting Image Tag Attributes--------------------------------------------
void put_image_attributes(string s)
{
	string delimiter = "=";
	size_t pos = 0;
	string token,token1;
	stack <string> key;
	stack <string> value;
	vector<string> data;
	while ((pos = s.find(delimiter)) != std::string::npos) 
	{
		    token = s.substr(0, pos);
		    data.push_back(token);
		    s.erase(0, pos + delimiter.length());
	}
	for(int i=0;i<data.size();i++)
	{
		if(i==0)
			key.push(data[i]);
		else
		{
			pos=data[i].find(",");
			token = data[i].substr(0,pos);
			token1 = data[i].substr(pos+1,data[i].length()-1);
			value.push(token);
			key.push(token1);
		}
	}
	value.push(s.substr(0,s.find(",")));
	show_stack(key, value);
	
}

//--------------------------------Functions for Adding Parameters in Latex File for Table---------------------------------------
void add_cols(ast_node* root)
{
	int num_cols=root->children[0]->children.size();
	if(num_cols>0)
	{
		for(int i=1;i<=num_cols;i++)
		{
			if(border==0)
				s+="c ";
			else
				s+="|c";
		}
		if(border==0)
			s+="}\n";
		else
			s+="|}\n";
	}
	else
		s+" }\n";
	
	
}

//---------------------------------Function for Traversal of the created AST------------------------------------------------------
void traversal_main(ast_node* root)
{

	//--------------------------------------------------LATEX START ADD--------------------------------------------------------
	if(root->node_type==16 || root->node_type==20)
		s+=latex_start[14];
	else if(root->node_type == 21)
	{
		s+=latex_start[10];
		int second = 5;
		int first = 4;
		s+=to_string(first)+"}"+"{"+to_string(second)+"}\\selectfont ";
	}
	else if(root->node_type==36)
	{
		s+=latex_start[root->node_type];
		if(root->attributes!="")
			border = stoi(root->attributes);
		else
			border = 0;
		
	}
	else if(root->node_type==37)
	{
		s+=latex_start[root->node_type]+root->data;
	}
	else if(root->node_type==38)
	{
		if(border>0)
			s+="\\hline\n";
		s+=root->data;
	}
	else if(root->node_type!=27)
		s+=latex_start[root->node_type];
		
	
	
	//--------------------------------------------------LATEX DATA ADD--------------------------------------------------------	
	if(root->node_type==24 || root->node_type==35)
	{
		put_image_attributes(root->attributes);
		string x("");
		string st1("");
		if(img["height"].compare(st1)!=0 && img["width"].compare(st1)!=0 )
			x+="[height="+img["height"]+",width="+img["width"]+"]";
		else if(img["width"].compare(st1)!=0)
			x+="[width="+img["width"]+"]";
		else if(img["height"].compare(st1)!=0)
			x+="[height="+img["height"]+"]";
		x+="{"+img["src"]+"}";
		s+=x+"\n";
		img["src"]="";
		img["height"]="";
		img["width"]="";
		
	}
	else if(root->node_type==28)
	{
		s+=root->data;
		s+=latex_end[root->node_type];
	}
	else if(root->node_type==8)
	{
		s+=root->attributes;
		s+=latex_end[root->node_type];
		s+="{";
	}
	else if(root->node_type==10)
	{
		int second = (int)(stoi(root->attributes)*1.2);
		s+=root->attributes+"}"+"{"+to_string(second)+"}\\selectfont ";
	}
	else if(root->node_type==33)
		s+=root->data+"\n";
	else if(root->node_type==40 || root->node_type==39)
	{
		for(int i=0;i<root->children.size()-1;i++)
			s+=root->children[i]->data+" & ";
		if(border==0)
			s+=root->children[root->children.size()-1]->data +" \\\\\n";
		else
			s+=root->children[root->children.size()-1]->data +" \\\\\n\\hline\n";
		if(root->node_type==39)
		{
			if(border>0)
				s+="\\hline\n";
			else
				s+="\n";
		}
		return;
	}
	

	//--------------------------------------------------DFS LOOP-------------------------------------------------------	
	for(int i=0;i<root->children.size();i++)
	{
		if(root->children[i]->node_type==38 && (i==0||i==1))
		{
			s+=latex_start[root->children[i]->node_type];
			add_cols(root->children[i]);
		}
		traversal_main(root->children[i]);
	}
	//--------------------------------------------------LATEX END ADD------------------------------------------------------	
	if(root->node_type==27)
	{
		s+=latex_start[root->node_type];
		s+=root->data+"\\ ";
	}	
	if(root->node_type==4)
		s+=root->data;
	if(root->node_type!=8 &&  root->node_type!=10 && root->node_type!=28 &&  root->node_type!=27)
		s+=latex_end[root->node_type];
	else if(root->node_type!=28 && root->node_type!=27)
		s+="}\n";
	
}

//----------------------------------------------------MAIN FUNCTION for the parser--------------------------------------------
int main(int argc, char *argv[]) {
	if(argc<2){
		cout<<"error in entering arguments. Correct Format: ./run.sh input.html output.tex";
	}
	yyin = fopen(argv[1], "r");

	// parse through the input until there is no more:
	do {
		yyparse();
	} while (!feof(yyin));
	ofstream out(argv[2]);
	traversal_main(root);
	out<<s;
}
