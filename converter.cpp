#include "ast.h"
#include "converter.h"
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

int section_no = 0;
int subsection_no = 0;

string myString(int n){
    stringstream ss;
    ss<<n;
    return ss.str();
}

string headTitle = "\\documentclass{article} \n\\usepackage{hyperref} \n\\usepackage{comment} \n\\usepackage[utf8]{inputenc}\\usepackage[T1]{fontenc}\\usepackage{enumitem}\\usepackage{graphicx}\n";

converter :: converter(){
    myMapping[0] = "\\par";
    myMapping[1] = "\\begin";
}

string converter :: traversePara(ast_node * root, int type){
    string s = "";
    cout<<"here"<<endl;
    s+=	getMapping(type)+"\n";
    s+=root->data+"\n";
    return s;
}

string converter :: traverseContent(ast_node * root, int type){
    return root->data;
}

string converter :: traverseChildren(ast_node * root){
    string s = "";
    for(int i = 0; i<root->children.size(); i++){
        s+=traversal(root->children[i]);
    }
    return s;
}

string converter :: traverseDefault(ast_node * root, int type){
    string s = "";
    s+=getMapping(type) +"{document}\n";
    s+=traverseChildren(root);
    s+="\\end{document}\n";
    return s;
}

string converter :: traversal(ast_node *root){
    string s = "";
    if(root){
        int type = root->node_type;
        
        string attributes = root->attributes;
        string data = root->data;
        //cout<<"\n tdata"<<data<<endl;

        switch (type) {
            case 0:
            	cout<<"Para"<<endl;
            	cout<<root->data<<endl;
                s+=traversePara(root,type);    
                break;
            case 1:
		cout<<"Body"<<endl;
                s+=traverseDefault(root,type);
                break;
            case 2:
            	cout<<"Data"<<endl;
            	s+=traverseContent(root,type);
                break;
            default:
                cout<<"faslifa"<<data;
        }
    }
    return s;
 }

string converter :: getMapping(int type){
    return myMapping[type];
}

void converter :: printHTML(string s){
    ofstream cout("out.tex");
    cout<<headTitle;
    cout<<s;
}
