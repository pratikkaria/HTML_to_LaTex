
/* Declaration section*/
%{ 
#include<iostream>
using namespace std;
#include<string>
#include <algorithm>
#include"y.tab.h"
%} 
spac		 	[ \t]+
punc             	(\.|\,|\!|\?%)
word		   	({punc}|[a-zA-Z0-9])+
text			({word}|{spac})+([\n]|({word}|{spac}))*({word}|{spac})
special			 {= "./}
link			({word}|{special})
%% 
"<!DOCTYPE"[^>]">"			{
						printf("doctype");
					}


"<a"([ :="./]|[0-9a-zA-Z])*">"		{
						char *p = yytext; 
						int len = strlen( p );
						char t[len+1];
						sscanf(p, "%*[^\"]\"%[^\"]", t);

						cout<<"Start Tag: HREF_S"<<endl;
						return HREF_S;
					}

"</a>"					{	

						cout<<"END Tag: HREF_E"<<endl;
						return HREF_E;
					}


"<font"([ :="./]|[0-9a-zA-Z])*">"	{

						char *p = yytext; 
						int len = strlen( p );
						char t[len+1];
						sscanf(p, "%*[^\"]\"%[^\"]", t);
							
					
						cout<<"End Tag: FONT_S"<<endl;
						return FONT_S;
					}


"</font>"				{
						cout<<"End Tag: FONT_E"<<endl;
						return FONT_E;
					}


"<"([ :=".]|[0-9a-zA-Z])*">"	{	char *p = yytext; 
						std::string s(p); 	
						int count = 0; 

						    for (int i = 0; s[i]; i++) 
							if (s[i]!= ' ' && s[i]!='\n' && s[i]!='\t') 
							    s[count++] = s[i]; 
						string su = s.substr(1,s.length()-2);
						transform(su.begin(), su.end(), su.begin(), ::toupper);	

						string ret = su.append("_S");
						cout<< "Start Tag:"<< ret<<endl; 
						return atoi(ret);
					    }  

"</"([ :=".]|[0-9a-zA-Z])*">" 		{	char *p = yytext; 
							std::string s(p); 

							int count = 0; 

							    for (int i = 0; s[i]; i++) 
								if (s[i] != ' ' && s[i]!='\n' && s[i]!='\t') 
								    s[count++] = s[i]; 
							s[count] = '\0'; 
							string su = s.substr(2,s.length()-3);
							transform(su.begin(), su.end(), su.begin(), ::toupper);	
							string ret = su.append("_E");
							cout<< "End Tag:"<< ret<<endl; 
							
					}


"\n"	;
{text}					{
						printf("Contents -%s\n",yytext);
					}

. ; 
 
%%     
  
int yywrap()
{
	return 1;	
} 

