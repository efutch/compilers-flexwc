/* driver.c - Programa para guiar un wc basado en flex */
/* Escrito por Egdares Futch H. - 2017 */

#include <stdio.h>
#include <stdlib.h>

extern FILE *yyin;
extern int yylex();

int charcounter,wordcounter,linecounter;

int main(int argc, char**argv)
{
	FILE *fp; 

	/* inicializamos contadores */
	charcounter = 0;
	wordcounter = 0;
	linecounter = 0;

	if (argc < 2)
		yyin = stdin;  // Si no hay argumentos en la linea de comandos, lea de stdin
	else
	{
		fp = fopen(argv[1],"r");
		if (!fp)
		{
			puts("File not found");  // Chequeo basico de error
			exit(1);
		}
		else
			yyin = fp;
	}
	while (yylex())
		;   // Consuma input hasta EOF, no importa que encuentra
	printf("lines = %d words= %d chars= %d\n",linecounter,wordcounter,charcounter);
}
