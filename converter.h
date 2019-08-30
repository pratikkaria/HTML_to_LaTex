#ifndef CONVERTER_H
#define CONVERTER_H

#include "ast.h"
#include <map>
#include <string>
using namespace std;


class converter{
    private:
        map<int,string> myMapping;
    public:
        converter();
        string traversal(ast_node * root);
        string traversePara(ast_node *root, int type);
        string traverseDefault(ast_node *root, int type);
        string traverseContent(ast_node *root, int type);
        string traverseChildren(ast_node *root);
        void printHTML(string s);
        string getMapping(int type);
};

#endif
