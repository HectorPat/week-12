#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

char *dato(char *S);  /*asignacion del pointer*/

int main()
{
	char frase[] = " dialogo xd"; 
  printf ("la frase es \" dialogo xd\" \n" );
	printf("el primer caracter con dato es '%c'\n", *dato(frase)); 

	return 0;
}

char *dato(char *S) 
{
	
	while (*S != '\0') { /*mientras el caracter no este vacio*/
		
		if (! isspace(*S)) 
	
			return S; 
		++S; /*asignar ese dato*/
	}

	return 0;
}
