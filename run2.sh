bison -d ast_grammar.y
flex main_lexer.l 
g++ -std=c++11 main.cpp ast.cpp lex.yy.c ast_grammar.tab.c converter.cpp
./a.out test_case.html making.tex
