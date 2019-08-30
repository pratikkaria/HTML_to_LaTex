bison -d -v temp_parser.y
lex lexback.l
g++ lex.yy.c y.tab.c
./a.out test_case.html output.txt
