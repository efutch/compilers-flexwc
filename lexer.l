%{
#include <stdio.h>

extern int charcounter;
extern int wordcounter;
extern int linecounter;
%}

word		[^\n ]+

%%

{word}		{ ++wordcounter; charcounter += yyleng; }
\n		{ ++linecounter; ++charcounter; }
.		{ ++charcounter; }
