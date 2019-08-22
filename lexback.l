
/* Declaration section*/
%{ 
#include<stdio.h>
#include<string.h>
#include"y.tab.h"
%} 
%option			caseless
spac		 	[ \t]+
punc             	(\"|\'|\.|\,|\!|\?%)
word		   	({punc}|[a-zA-Z0-9]|[=#;.])+
text			({word}|{spac})+([\n]|({word}|{spac}))*({word}|{spac})
special			 {= "./}
link			({word}|{special})
comment_end		"-->"
greek			"&"{word}";"
%x			href
%x			sizetag
%x			table
%x			src
%% 
([ ]|[\t]|[\n])*			;
"<!doctype"[^>]">"			{
						return DOCTYPE;
					}
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


"<a"[ ]*				{
						printf("HREF_S\n");
						BEGIN href;
						return HREF_S;
					}
					
<href>{

		"href=\""([ #:=./]|[0-9a-zA-Z])*"\""[ ]*		{
										char *p = yytext; 
										int len = strlen( p );
										char t[len+1];
										sscanf(p, "%*[^\"]\"%[^\"]", t);
										printf("LINK %s\n",t);
										yylval.s = (char *)malloc(100);
										strcpy(yylval.s,t);
										return HREF_LINK;
								}

		"title=\""([ #:=./]|[0-9a-zA-Z])*"\""[ ]*		{
										char *p = yytext; 
										int len = strlen( p );
										char t[len+1];
										sscanf(p, "%*[^\"]\"%[^\"]", t);
										//printf("TITLE %s\n",t);
										yylval.s = (char *)malloc(100);
										strcpy(yylval.s,t);
										return HREF_TITLE;
								}

		">"						{
										BEGIN 0;
										
								}

}


"</a>"					{	
						printf("HREF_E\n");
						return HREF_E;
					}


"<font"[ ]*				{
						printf("FONT_S\n\n");

						BEGIN sizetag;
						return FONT_S;
					}

<sizetag>([ :="./]|[0-9a-zA-Z])*">"	{
						printf("FONT_S\n\n");
						char *p = yytext; 
						int len = strlen( p );
						char t[len+1];
						sscanf(p, "%*[^\"]\"%[^\"]", t);
						
						printf("%s\n",t);
						BEGIN 0;
						return FONT_SIZE;
					}

"<img"[ ]*				{
						printf("IMG Begin\n");
						BEGIN src;
						return IMG_S;
					}



<src>{

		"src=\""([ :=#./]|[0-9a-zA-Z])*"\""[ ]*		{
									printf("SRC\n\n");
									char *p = yytext; 
									int len = strlen( p );
									char t[len+1];
									sscanf(p, "%*[^\"]\"%[^\"]", t);
						
									printf("%s\n",t);
									yylval.s = (char *)malloc(100);
									strcpy(yylval.s,t);
									return IMG_SRC;
								}

		"width=\""([ :=./]|[0-9a-zA-Z])*"\""[ ]*	{
									printf("WIDTH\n\n");
									char *p = yytext; 
									int len = strlen( p );
									char t[len+1];
									sscanf(p, "%*[^\"]\"%[^\"]", t);
						
									printf("%s\n",t);
									yylval.s = (char *)malloc(100);
									strcpy(yylval.s,t);
									return IMG_WIDTH;
								}
					

		"height=\""([ :=./]|[0-9a-zA-Z])*"\""[ ]*	{
									printf("HEIGHT\n\n");
									char *p = yytext; 
									int len = strlen( p );
									char t[len+1];
									sscanf(p, "%*[^\"]\"%[^\"]", t);
						
									printf("%s\n",t);
									yylval.s = (char *)malloc(100);
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
						printf("FIG_S");
						return FIG_S;
					}

"</figure>"				{
						printf("FIG_E");
						return FIG_E;
					}

"<figcaption>"				{
						printf("FIGCAP_S");
						return FIGCAP_S;
					}		

"</figcaption>"				{
						printf("FIGCAP_E");
						return FIGCAP_E;
					}

"</font>"				{
						printf("FONT_E\n\n");
						return FONT_E;
					}


"<center>"				{
						printf("CENTER_S\n");
						return CENTER_S;
					}


"</center>"				{
						printf("CENTER_E\n");
						return CENTER_E;
					}


"<div>"					{
						printf("DIV_S\n");
						return DIV_S;
					}


"</div>"				{
						printf("DIV_E\n");
						return DIV_E;
					}




"<br"[ \t\n]*"/>"			{
						printf("BR\n");
						return BR;
					}

"<br"[ \t\n]*">"			{
						printf("BR\n");
						return BR;
					}

"<p>"					{
						printf("P_S\n");
						return P_S;
					}


"</p>"					{
						printf("P_E\n");
						return P_E;
					}


"<h1>"					{
						printf("H1_S\n");
						return H1_S;
					}


"</h1>"					{
						printf("H1_E\n");
						return H1_E;
					}


"<h2>"					{
						printf("H2_S\n");
						return H2_S;
					}


"</h2>"					{
						printf("H2_E\n");
						return H2_E;
					}


"<h3>"					{
						printf("H3_S\n");
						return H3_S;
					}


"<h4>"					{
						printf("H4_S\n");
						return H4_S;
					}


"</h4>"					{
						printf("H4_E\n");
						return H4_E;
					}
	

"<ul>"					{
						printf("UL_S\n");
						return UL_S;
					}


"</ul>"					{
						printf("UL_E\n");
						return UL_E;
					}

"<li>"					{
						printf("LI_S\n");
						return LI_S;
					}


"</li>"					{
						printf("LI_E\n");
						return LI_E;
					}

"<ol>"					{
						printf("OL_S\n");
						return OL_S;
					}


"</ol>"					{
						printf("OL_E\n");
						return OL_E;
					}

"<dt>"					{
						printf("DT_S\n");
						return DT_S;
					}


"</dt>"					{
						printf("DT_E\n");
						return DT_E;
					}

"<dl>"					{
						printf("DL_S\n");
						return DL_S;
					}


"</dl>"					{
						printf("DL_E\n");
						return DL_E;
					}

"<dd>"					{
						printf("DD_S\n");
						return DD_S;
					}


"</dd>"					{
						printf("DD_E\n");
						return DD_E;
					}


"<u>"					{
						printf("U_S\n");
						return U_S;
					}

"</u>"					{
						printf("U_E\n");
						return U_E;
					}

"<b>"					{
						printf("B_S\n");
						return B_S;
					}

"</b>"					{
						printf("B_E\n");
						return B_E;
					}

"<i>"					{
						printf("I_S\n");
						return I_S;
					}

"</i>"					{
						printf("I_E\n");
						return I_E;
					}

"<em>"					{
						printf("EM_S\n");
						return EM_S;
					}

"</em>"					{
						printf("EM_E\n");
						return EM_E;
					}					

"<tt>"					{
						printf("TT_S\n");
						return TT_S;
					}

"</tt>"					{
						printf("TT_E\n");
						return TT_E;
					}
					
					
"<strong>"				{
						printf("STRONG_S\n");
						return STRONG_S;
					}

"</strong>"				{
						printf("STRONG_E\n");
						return STRONG_E;
					}


"<small>"				{
						printf("SMALL_S\n");
						return SMALL_S;
					}

"</small>"				{
						printf("SMALL_E\n");
						return SMALL_E;
					}			
					
					
		
"<sub>"					{
						printf("SUB_S\n");
						return SUB_S;
					}
					

"</sub>"				{
						printf("SUB_E\n");
						return SUB_E;
					}
					
"<sup>"					{
						printf("SUP_S\n");
						return SUP_S;
					}
					

"</sup>"				{
						printf("SUP_E\n");
						return SUP_E;
					}
					
"<table"[ ]*				{
						printf("TABLE_S\n");
						BEGIN table;
						return TABLE_S;
					}

<table>{

		"border=\""([ :=./]|[0-9a-zA-Z])*"\""[ ]*	{
									printf("BORDER\n\n");
									char *p = yytext; 
									int len = strlen( p );
									char t[len+1];
									sscanf(p, "%*[^\"]\"%[^\"]", t);
									yylval.s = (char *)malloc(100);
									strcpy(yylval.s,t);
									printf("%s",t);

									return TABLE_BORDER;
								}

		">"						{
										BEGIN 0;
								}	


}
					

"</table>"				{
						printf("TABLE_E\n");
						return TABLE_E;
					}
					

"<caption>"				{
						printf("CAPTION_S\n");
						return CAPTION_S;
					}
					

"</caption>"				{
						printf("CAPTION_E\n");
						return CAPTION_E;
					}
					

"<th>"					{
						printf("TH_S\n");
						return TH_S;
					}
					

"</th>"					{
						printf("TH_E\n");
						return TH_E;
					}
					

"<tr>"					{
						printf("TR_S\n");
						return TR_S;
					}
					

"</tr>"					{
						printf("TR_E\n");
						return TR_E;
					}
					
					
"<td>"					{
						printf("TD_S\n");
						return TD_S;
					}
					

"</td>"					{
						printf("TD_E\n");
						return TD_E;
					}
					


										
					
{text}					{
						printf("Contents -%s\n",yytext);
						yylval.s = strdup(yytext);
						return DATA;
					}



{greek}					return GREEK;


. 					;


%%     
  
int yywrap()
{
	return 1;	
} 
/*int main(int argc,char *argv[])
{
	yyin = fopen(argv[1],"r");
	//tex_file = fopen(argv[2],"w+");
	yylex();
}  */   

