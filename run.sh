bison -d parser.y
flex lexical_analyzer.l 
g++ -std=c++11 main.cpp lex.yy.c parser.tab.c convert_AST.cpp
./a.out $1 $2

