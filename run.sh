yacc -d parser.y
lex lexical_analyzer.l
gcc lex.yy.c y.tab.c
./a.out test_case.html output.txt
