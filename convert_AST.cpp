#include "common_header_file.h"
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

//---------------------------------------------------Map for Latex Start Symbols---------------------------------------------------------------------
map<int,string> latex_start={
			{0,"\\documentclass{article} \n\\usepackage{hyperref} \n\\usepackage{comment} \n\\usepackage[utf8]{inputenc}\\usepackage[T1]{fontenc}\\usepackage{enumitem}\\usepackage{graphicx}\n"},
			{1, "\n\\begin{document}\n\\maketitle\n"},
			{2,""},
			{3, "\n\\par\n"},
			{5, "\n\\title{"},
			{6,  ""},
			{7,  "\n\\begin{center}\n"},
			{8,  "\n\\href{"},
			{9,  "\\hfill \\break\n"},
			{10, "{\\fontsize{"},
			{11, "\n\\section{"},
			{12, "\n\\subsection{"},
			{13, "\n\\subsubsection{"},
			{14, "\\textbf{"},
			{15, "\\underline{"},
			{17, "\\textit{"},
			{18, "\\emph{"},
			{19, "\\textt{"},
			{22, "_{"},
			{23, "^{"},
			{24,"\\includegraphics"},
			{25, "\\caption{"},
			{26, "\n"},
			{27, ""},
			{28, "\\begin{comment}\n"},
			{29, "\\begin{itemize}\n"},
			{30, "\n\\begin{enumerate}\n"},
			{31, "\n\\begin{description}[style=unboxed, labelwidth=\\linewidth, font =\\sffamily\\itshape\\bfseries, listparindent =0pt, before =\\sffamily]\n"},
			{32, "\\item "},
			{33, ""},
			{34, "\n\\item[ "},
			{35, "\\begin{figure}[h!]\n\\includegraphics"},
			{36, "\\begin{table}[h!]\n\\centering\n"},
			{37, "\\caption{"},
			{38, "\\begin{tabular}{"}
		 	};
		 	
//---------------------------------------------------Map for Latex End Symbols---------------------------------------------------------------------		 	
map<int,string> latex_end={
			{0,""},
			{1, "\n\\end{document}\n"},
			{2, ""},
			{3, ""},
			{5, "}\n"},
			{6, ""},
			{7, "\n\\end{center}\n"},
			{8, "}"},
			{9, ""},
			{10,""},
			{11, "}\n"},
			{12, "}\n"},
			{13, "}\n"},
			{14, "}\n"},
			{15, "}\n"},
			{16, "}\n"},
			{17, "}\n"},
			{18, "}\n"},
			{19, "}\n"},
			{20, "}\n"},
			{21, "}\n"},
			{22, "}\n"},
			{23, "}\n"},
			{24, "\n"},
			{25, "}\n"},
			{26, "\n"},
			{27, "\n"},
			{28, "\n\\end{comment}\n"},
			{29, "\\end{itemize}\n"},
			{30, "\\end{enumerate}\n"},
			{31, "\\end{description}\n"},
			{32, "\n"},
			{33, "\n"},
			{34, "]\n"},
			{35, "\\end{figure}\n"},
			{36, "\n\\end{table}"},
			{37, "}\n"},
			{38, "\n\\end{tabular}"}
		 	};
		 	
//---------------------------------------------------Map for Image Attributes---------------------------------------------------------------------		 	
map <string,string> img = {
				{"src",""},
				{"width",""},
				{"height",""}
			  };	
//---------------------------------------------------Map for Special Greek Symbols---------------------------------------------------------------------			  
map<string, string> specialwords{
	{"&alpha;","\\alpha"},
	{"&gamma;","\\gamma"},
	{"&delta;","\\delta"},
	{"&epsilon;","\\epsilon"},
	{"&zeta;","\\zeta"},
	{"&eta;","\\eta"},
	{"&theta;","\\theta"},
	{"&kappa;","\\kappa"},
	{"&lambda;","\\lambda"},
	{"&xi;","\\xi"},
	{"&pi;","\\pi"},
	{"&sigma;","\\sigma"},
	{"&upsilon;","\\upsilon"},
	{"&omega;","\\omega"},
	{"&Alpha;","A"},
	{"&Beta;","B"},
	{"&Gamma;","\\Gamma"},
	{"&Delta;","\\Delta"},
	{"&Epsilon;","E"},
	{"&Zeta;","Z"},
	{"&Eta;","H"},
	{"&Theta;","\\Theta"},
	{"&Kappa;","K"},
	{"&Lambda;","\\Lambda"},
	{"&Xi;","\\Xi"},
	{"&Pi;","\\Pi"},
	{"&Sigma;","\\Sigma"},
	{"&Upsilon;","\\Upsilon"},
	{"&Omega;","\\Omega"}

};				 
