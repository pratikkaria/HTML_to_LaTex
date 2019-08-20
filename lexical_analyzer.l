
/* Declaration section*/
%{ 
#include<stdio.h>
#include<string.h>
#include"y.tab.h"
%} 
spac		 	[ \t]+
punc             	(\.|\,|\!|\?%)
word		   	({punc}|[a-zA-Z0-9])+
text			({word}|{spac})+([\n]|({word}|{spac}))*({word}|{spac})
special			 {= "./}
link			({word}|{special})
%% 
"<html>"				{	
						printf("HTML_S\n");
						return HTML_S;
					}
"</html>"				{	
						printf("HTML_E\n");
						return HTML_E;
					}
"<head>"				{	
						printf("HEAD_S\n");
						return HEAD_S;
					}
"</head>"				{	
						printf("HEAD_E\n");
						return HEAD_E;
					}
"<body>"				{	
						printf("BODY_S\n");
						return BODY_S;
					}
"</body>"				{	
						printf("BODY_E\n");
						return BODY_E;
					}
"<title>"				{
						printf("TITLE_S\n");
						return TITLE_S;
					}
"</title>"				{
						printf("TITLE_E\n");
						return TITLE_E;
					}
"<a"([ ="./]|[0-9a-zA-Z])*">"		{
						printf("HREF_S\n");
						char *p = yytext; 
						int len = strlen( p );
						char t[len+1];
						sscanf(p, "%*[^\"]\"%[^\"]", t);
							
						printf("%s\n",t);
						return HREF_S;
					}
"</a>"					{	
						printf("HREF_E\n");
						return HREF_E;
					}
"<center>"				{
						printf("CENTER_S");
						return CENTER_S;
					}
"</center>"				{
						printf("CENTER_E");
						return CENTER_E;
					}
"<div>"					{
						printf("DIV_S");
						return DIV_S;
					}
"</div>"				{
						printf("DIV_E");
						return DIV_E;
					}
"<font"([ ="./]|[0-9a-zA-Z])*">"	{
						printf("FONT_S\n");
						char *p = yytext; 
						int len = strlen( p );
						char t[len+1];
						sscanf(p, "%*[^\"]\"%[^\"]", t);
							
						printf("%s\n",t);
						return FONT_S;
					}
"</font>"				{
						printf("FONT_E\n");
						return FONT_E;
					}
"<br/>"					{
						printf("BR");
						return BR;
					}
"<p>"					{
						printf("P_S");
						return P_S;
					}
"</p>"					{
						printf("P_E");
						return P_E;
					}
"<h1>"					{
						printf("H1_S");
						return H1_S;
					}
"</h1>"					{
						printf("H1_E");
						return H1_E;
					}
"<h2>"					{
						printf("H2_S");
						return H2_S;
					}
"</h2>"					{
						printf("H2_E");
						return H2_E;
					}
"<h3>"					{
						printf("H3_S");
						return H3_S;
					}
"<h4>"					{
						printf("H4_S");
						return H4_S;
					}
"</h4>"					{
						printf("H4_E");
						return H4_E;
					}
	
{text}					{
						printf("Contents -%s\n",yytext);
						yylval.s = strdup(yytext);
						return DATA;
					}
"\n"					;
. 					;
%%     
  
int yywrap()
{
	return 1;	
} 
      

