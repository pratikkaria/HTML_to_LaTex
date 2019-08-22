yacc -d -v temp_parser.y
lex lexback.l
gcc lex.yy.c y.tab.c
./a.out test_case.html output.txt
