yacc -d temp1.y
lex lexfile.l
gcc lex.yy.c y.tab.c
./a.out temp1.html temp1.txt
