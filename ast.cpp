#include <string>
#include <vector>
#include<stdio.h>
#include <stack>
#include "ast.h"

using namespace std;


ast_node* new_node(){
	ast_node* temp = new ast_node;
	return temp;
}

ast_node* new_node(string data){
	ast_node* temp = new ast_node;
	temp->data = data;
	return temp;
}

