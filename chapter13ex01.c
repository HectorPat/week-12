#include <stdio.h>
#define line 4 /*numero de caracteres*/

int main (){

int Variables[line]={1,2,3,4}; /*contenido de la linea*/ 
int *vaciar; /*asignacion del pointer*/

for (vaciar=&Variables[0]; vaciar <= &Variables[line];++vaciar){
  *vaciar=0; /*hacer operacion a cero*/
}

for (int i=1;i <=line; ++i) /*aplicar a cada numero*/
    printf("variable %d reducido a %d\n",i,Variables[i]);

    return 0;
}
