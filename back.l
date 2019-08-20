
/* Declaration section*/
%{ 
#include<iostream>
using namespace std;
#include<string>
#include <algorithm>
%} 
spac		     [ \t\n]+
punc             (\.|\,|\!|\?%)
word		     ({punc}|[a-zA-Z0-9])+
text		({word}|{spac})+
%% 
"<"[0-9a-zA-Z]+">"{spac}* {	char *p = yytext; 
			std::string s(p); 	
			string su = s.substr(1,s.length()-3);
			transform(su.begin(), su.end(), su.begin(), ::toupper);	
			str.erase(std::remove(su.begin(), su.end(), '\n'), su.end());
			string ret = su.append("_S");
			cout<< "Start Tag      "<< ret<<"\n\n";  
		    }  

"</"[0-9a-zA-Z]+">"{spac}* {	char *p = yytext; 
			std::string s(p); 
			string su = s.substr(2,s.length()-4);
			transform(su.begin(), su.end(), su.begin(), ::toupper);	
			string ret = su.append("_E");
			cout<< "End Tag      "<< ret<<"\n\n";  
		    }


{text}	{printf("Contents -%s\n\n",yytext);}


. ; 
 
%%     
  
int yywrap()
{
	return 1;	
} 
       
int main(int argc, char*argv[]) 
{ 

    yylex();  
  
    return 0; 
} 

