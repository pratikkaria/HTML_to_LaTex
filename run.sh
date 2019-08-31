bison -d -v main_parser.y
lex main_lexer.l
g++ lex.yy.c main_parser.tab.c
./a.out test_case.html output.txt
