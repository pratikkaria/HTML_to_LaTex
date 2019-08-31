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

map <string,string> img = {
				{"src",""},
				{"width",""},
				{"height",""}
			  };
map<int,string> latex_start={
			{0,"\\documentclass{article} \n\\usepackage{hyperref} \n\\usepackage{comment} \n\\usepackage[utf8]{inputenc}\\usepackage[T1]{fontenc}\\usepackage{enumitem}\\usepackage{graphicx}\n"},
			{1, "\n\\begin{document}\n\\maketitle\n"},
			{2,""},
			{3, "\n\\par\n"},
			{5, "\n\\title{"},
			{6,  ""},
			{7,  "\n\\begin{center}\n"},
			{8,  "\n\\href{"},
			{9,  "\n\\newline"},
			{10, "{\\fontsize{"},
			{11, "\n\\section{"},
			{12, "\n\\subsection{"},
			{13, "\n\\subsubsection{"},
			{14, "\\textbf{"},
			{15, "\\underline{"},
			{17, "\\textit{"},
			{18, "\\emph{"},
			{19, "\\textt{"},
			{22, "_{"},
			{23, "^{"},
			{24,"\\includegraphics"},
			{25, "\\caption{"},
			{26, "\n"},
			{27, "\\"},
			{28, "\\begin{comment}\n"},
			{29, "\\begin{itemize}\n"},
			{30, "\n\\begin{enumerate}\n"},
			{31, "\n\\begin{description}[style=unboxed, labelwidth=\\linewidth, font =\\sffamily\\itshape\\bfseries, listparindent =0pt, before =\\sffamily]\n"},
			{32, "\\item "},
			{33, ""},
			{34, "\n\\item[ "},
			{35, "\\begin{figure}[h!]\n\\includegraphics"}
		 	};
		 	
map<int,string> latex_end={
			{0,""},
			{1, "\n\\end{document}\n"},
			{2, ""},
			{3, ""},
			{5, "}\n"},
			{6, ""},
			{7, "\n\\end{center}\n"},
			{8, "}"},
			{9, ""},
			{10,""},
			{11, "}\n"},
			{12, "}\n"},
			{13, "}\n"},
			{14, "}\n"},
			{15, "}\n"},
			{16, "}\n"},
			{17, "}\n"},
			{18, "}\n"},
			{19, "}\n"},
			{20, "}\n"},
			{21, "}\n"},
			{22, "}\n"},
			{23, "}\n"},
			{24, "\n"},
			{25, "}\n"},
			{26, "\n"},
			{27, "\n"},
			{28, "\n\\end{comment}\n"},
			{29, "\\end{itemize}\n"},
			{30, "\\end{enumerate}\n"},
			{31, "\\end{description}\n"},
			{32, "\n"},
			{33, "\n"},
			{34, "]\n"},
			{35, "\\end{figure}\n"}
		 	};		 	
string s("");
void yyerror(const char *s) {
	cout<<"Parse error!  Message:"<<s<<endl;
	// might as well halt now:
	exit(-1);
}
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

void traversal_main(ast_node* root)
{

	//cout<<root->node_type<<endl;
	if(root->node_type==16 || root->node_type==20)
		s+=latex_start[14];
	else if(root->node_type == 21)
	{
		s+=latex_start[10];
		int second = 5;
		int first = 4;
		s+=to_string(first)+"}"+"{"+to_string(second)+"}\\selectfont ";
	}
	else if(root->node_type!=27)
		s+=latex_start[root->node_type];
		
		
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
	


	for(int i=0;i<root->children.size();i++)
		traversal_main(root->children[i]);


	if(root->node_type==27)
	{
		s+=latex_start[root->node_type];
		s+=root->data+" ";
	}	
	if(root->node_type==4)
		s+=root->data;
	if(root->node_type!=8 &&  root->node_type!=10 && root->node_type!=28 &&  root->node_type!=27)
		s+=latex_end[root->node_type];
	else if(root->node_type!=28 && root->node_type!=27)
		s+="}\n";
	
}
void traversal_main1(ast_node* root)
{
	string str("");
	if(root->node_type==4 && root->data.compare(str)==0)
		return;
	cout<<root->node_type<<endl;
	s+=latex_start[root->node_type];
	if(root->node_type==4)
		s+=root->data;
	for(int i=0;i<root->children.size();i++)
		traversal_main1(root->children[i]);
	cout<<"CHILD END-----------------"<<endl;
	cout<<"Parent"<<root->node_type<<endl;
	if(root->node_type==4)
		cout<<"DA"<<root->data<<endl;

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
	ofstream out(argv[2]);
	traversal_main(root);
	cout<<"Final: "<<endl;
	cout<<s<<endl;
	out<<s;
	/*converter C;
	string s = C.traversal(root);
	C.printHTML(s);*/
}
