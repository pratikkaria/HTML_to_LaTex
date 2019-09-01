
/* Declaration section*/
%{ 
#include<stdio.h>
#include<string.h>
#include"parser.tab.h"
#include<bits/stdc++.h>
using namespace std;
%} 
%option			caseless
spac		 	[ \t]+
punc             	(\:|\,|\"|\\|\'|\.|\,|\!|\?%)
word		   	({punc}|[a-zA-Z0-9]|[\:{};/#=_^@$/\%~])+
amper			("& ")
text			({word}|{spac}|{amper})+([\n]|({word}|{spac}|{amper}))*
special			 {= "./}
link			({word}|{special})
comment_end		"-->"
greek			"&"[A-Za-z]+";"
%x			href
%x			sizetag
%x			table
%x			src
%x			comment
%% 

([ ]|[\t]|[\n])*			;





"<!DOC"[^>]*">"				;
"<html>"				{	
						return HTML_S;
					}


"</html>"				{
						return HTML_E;
					}


"<head>"				{	
						return HEAD_S;
					}


"</head>"				{
						return HEAD_E;
					}


"<body>"				{
						return BODY_S;
					}


"</body>"				{	
						return BODY_E;
					}


"<title>"				{
						return TITLE_S;
					}


"</title>"				{
						return TITLE_E;
					}


"<a"[ ]*				{
						BEGIN href;
						return HREF_S;
					}
					
<href>{

      "href="["\""|"\'"]([ :=./#]|[0-9a-zA-Z])*["\""|"\'"][ ]*		{
										char *p = yytext; 
										string str(p);
										
										int len = strlen( p );
										char t[len+1],t1[len+1];
										yylval.s = (char *)malloc(100);									
										int pos = str.find('\'');
										int pos1 = str.find('\"');
									
										if(pos>=0)								
											sscanf(p,"%*[^']'%[^']'",t);
										else 
											sscanf(p, "%*[^\"]\"%[^\"]", t);
										
										strcpy(yylval.s,t);
									
										return HREF_LINK;
									}

       "title="["\""|"\'"]([ :=./]|[0-9a-zA-Z])*["\""|"\'"][ ]*		{
										char *p = yytext; 
										string str(p);
										int len = strlen( p );
										char t[len+1],t1[len+1];
										yylval.s = (char *)malloc(100);									
										int pos = str.find('\'');
										int pos1 = str.find('\"');
										if(pos>=0)								
											sscanf(p,"%*[^']'%[^']'",t);
										else 
											sscanf(p, "%*[^\"]\"%[^\"]", t);
										
										strcpy(yylval.s,t);
										return HREF_TITLE;
									}
	"name="["\""|"\'"]([ :=./]|[0-9a-zA-Z])*["\""|"\'"][ ]*		{
										char *p = yytext; 
										string str(p);
										int len = strlen( p );
										char t[len+1],t1[len+1];
										yylval.s = (char *)malloc(100);									
										int pos = str.find('\'');
										int pos1 = str.find('\"');
										if(pos>=0)								
											sscanf(p,"%*[^']'%[^']'",t);
										else 
											sscanf(p, "%*[^\"]\"%[^\"]", t);
										
										strcpy(yylval.s,t);
										return HREF_NAME;
									}

		">"							{
											BEGIN 0;
										
									}

}


"</a>"					{
						return HREF_E;
					}


"<font"[ ]*				{
						

						BEGIN sizetag;
						return FONT_S;
					}

<sizetag>{

	"size="["\""|"\'"]([ :=./#]|[0-9a-zA-Z])*["\""|"\'"][ ]*		{
										char *p = yytext; 
										string str(p);
										int len = strlen( p );
										char t[len+1],t1[len+1];
										yylval.s = (char *)malloc(100);	
										int pos = str.find('\'');
										int pos1 = str.find('\"');
										if(pos>=0)								
											sscanf(p,"%*[^']'%[^']'",t);
										else 
											sscanf(p, "%*[^\"]\"%[^\"]", t);
										
										strcpy(yylval.s,t);
										return FONT_SIZE;
									}
		">"							{
											BEGIN 0;
										
									}

}
"<img"[ ]*				{
						
						BEGIN src;
						return IMG_S;
					}



<src>{

       "src="["\""|"\'"]([ :=./_]|[0-9a-zA-Z])*["\""|"\'"][ ]*	{
									
									char *p = yytext; 
									string str(p);
									int len = strlen( p );
									char t[len+1],t1[len+1];
									yylval.s = (char *)malloc(100);									
									int pos = str.find('\'');
									int pos1 = str.find('\"');
									if(pos>=0)								
										sscanf(p,"%*[^']'%[^']'",t);
									else 
										sscanf(p, "%*[^\"]\"%[^\"]", t);
									
									strcpy(yylval.s,t);
									return IMG_SRC;
								}

      "width="["\""|"\'"]([ :=./]|[0-9a-zA-Z])*["\""|"\'"][ ]*	{
									
									char *p = yytext; 
									string str(p);
									int len = strlen( p );
									char t[len+1],t1[len+1];
									yylval.s = (char *)malloc(100);									
									int pos = str.find('\'');
									int pos1 = str.find('\"');
									if(pos>=0)								
										sscanf(p,"%*[^']'%[^']'",t);
									else 
										sscanf(p, "%*[^\"]\"%[^\"]", t);
									
									strcpy(yylval.s,t);
									return IMG_WIDTH;
								}
					

     "height="["\""|"\'"]([ :=./]|[0-9a-zA-Z])*["\""|"\'"][ ]*	{
									
									char *p = yytext; 
									string str(p);
									int len = strlen( p );
									char t[len+1],t1[len+1];
									yylval.s = (char *)malloc(100);									
									int pos = str.find('\'');
									int pos1 = str.find('\"');
									if(pos>=0)								
										sscanf(p,"%*[^']'%[^']'",t);
									else 
										sscanf(p, "%*[^\"]\"%[^\"]", t);
									
									strcpy(yylval.s,t);								
									return IMG_HEIGHT;
								}
					

		"/>"						{	
														
										BEGIN 0;
										return IMG_E;
								}

		">"						{	
														
										BEGIN 0;
										return IMG_E;
								}

}

"<figure>"				{
						return FIG_S;
					}

"</figure>"				{
						return FIG_E;
					}

"<figcaption>"				{
						return FIGCAP_S;
					}		

"</figcaption>"				{
						return FIGCAP_E;
					}

"</font>"				{
						return FONT_E;
					}


"<center>"				{
						return CENTER_S;
					}


"</center>"				{
						return CENTER_E;
					}


"<div>"					{
						return DIV_S;
					}


"</div>"				{
						return DIV_E;
					}




"<br"[ \t\n]*"/>"			{
						return BR;
					}

"<br"[ \t\n]*">"			{
						return BR;
					}

"<p>"					{
						return P_S;
					}


"</p>"					{
						return P_E;
					}


"<h1>"					{
						return H1_S;
					}


"</h1>"					{
						return H1_E;
					}


"<h2>"					{
						return H2_S;
					}


"</h2>"					{
						return H2_E;
					}


"<h3>"					{
						return H3_S;
					}

"</h3>"					{
						return H3_E;
					}
					
"<h4>"					{
						return H4_S;
					}


"</h4>"					{
						return H4_E;
					}
	

"<ul>"					{
						return UL_S;
					}


"</ul>"					{
						return UL_E;
					}

"<li>"					{
						return LI_S;
					}


"</li>"					{
						return LI_E;
					}

"<ol>"					{
						return OL_S;
					}


"</ol>"					{
						return OL_E;
					}

"<dt>"					{
						return DT_S;
					}


"</dt>"					{
						return DT_E;
					}

"<dl>"					{
						return DL_S;
					}


"</dl>"					{
						return DL_E;
					}

"<dd>"					{
						return DD_S;
					}


"</dd>"					{
						return DD_E;
					}


"<u>"					{
						return U_S;
					}

"</u>"					{
						return U_E;
					}

"<b>"					{
						return B_S;
					}

"</b>"					{
						return B_E;
					}

"<i>"					{
						return I_S;
					}

"</i>"					{
						return I_E;
					}

"<em>"					{
						return EM_S;
					}

"</em>"					{
						return EM_E;
					}					

"<tt>"					{
						return TT_S;
					}

"</tt>"					{
						return TT_E;
					}
					
					
"<strong>"				{
						return STRONG_S;
					}

"</strong>"				{
						return STRONG_E;
					}


"<small>"				{
						return SMALL_S;
					}

"</small>"				{
						return SMALL_E;
					}			
					
					
		
"<sub>"					{
						return SUB_S;
					}
					

"</sub>"				{
						return SUB_E;
					}
					
"<sup>"					{
						return SUP_S;
					}
					

"</sup>"				{
						return SUP_E;
					}
					
"<table"[ ]*				{
						BEGIN table;
						return TABLE_S;
					}

<table>{

     "border="["\""|"\'"]([ :=./]|[0-9a-zA-Z])*["\""|"\'"][ ]*	{
									
									char *p = yytext; 
									string str(p);
									int len = strlen( p );
									char t[len+1],t1[len+1];
									yylval.s = (char *)malloc(100);									
									int pos = str.find('\'');
									int pos1 = str.find('\"');
									if(pos>=0)								
										sscanf(p,"%*[^']'%[^']'",t);
									else 
										sscanf(p, "%*[^\"]\"%[^\"]", t);
									
									strcpy(yylval.s,t);		
									return TABLE_BORDER;
								}

		">"						{
										BEGIN 0;
								}	


}
					

"</table>"				{
						return TABLE_E;
					}
					

"<caption>"				{
						return CAPTION_S;
					}
					

"</caption>"				{
						return CAPTION_E;
					}
					

"<th>"					{
						return TH_S;
					}
					

"</th>"					{
						return TH_E;
					}
					

"<tr>"					{
						return TR_S;
					}
					

"</tr>"					{
						return TR_E;
					}
					
					
"<td>"					{
						return TD_S;
					}
					

"</td>"					{
						return TD_E;
					}
					

"<!--"[ ]*				{
						BEGIN comment;
					}
				
<comment>{

	([A-Za-z0-9]|[ \t]|{punc}|[\\\/<>.:{}<>;:#&]|[\n])*[\n]*	{
										
										yylval.s = (char *)malloc(100);	
										yylval.s = yytext;
										return COMMENT;
										
									}
	[\n]*"-->"							{
										BEGIN 0;
									}


}
										

{greek}					{	
						
						yylval.s = strdup(yytext);
						return GREEK;
					}
										
{text}					{
						
						
						yylval.s = strdup(yytext);
						string str(yylval.s);
						char find_vec[] = {'\\','_','#','%','$','&','{','}','~','^'};
						vector<string> replace_vec = {"\\textbackslash","\\_","\\#","\\%","\\$","\\&","\\{","\\}","\\sim","\\hat{}"};
						int pos;
						string str1(str);
						string str2("");
						for(int i=0;i<replace_vec.size();i++)
						{
							for (int j=0;j<str1.length();j++)
							{
								if(str1[j]==find_vec[i])
									str2+=replace_vec[i];
								else
									str2+=str1[j];
							}
							str1=str2;
							str2="";
									
	   					}
	   					yylval.s = strdup(str1.c_str());

						return DATA;
					}







. 					{ 
						yylval.s=strdup(yytext);
						return DATA;
					}


%%     
  
int yywrap()
{
	return 1;	
} 
 

