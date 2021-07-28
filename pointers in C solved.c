#include <stdio.h>
#include <stdlib.h>

void intercambiar(int *a,int *b) /*defino los punteros*/
{

    int x,y;

    x = *a + *b; /* obtener valor del puntero y operacion suma*/
    y = *a - *b; /* obtener valor del puntero y operacion resta*/
    *a = x;  /*intercambio valor*/
    *b =abs(y); /*intercambio valor y asigno absoluto de la resta*/ 

}

int main() 
{
    int a, b;
    int *punteroA = &a, *punteroB = &b; /*asigno los punteros a direcciones enteras nuevamente*/
    
    scanf("%d %d", &a, &b);
    intercambiar(punteroA, punteroB);
    printf("%d\n%d", a, b);

    return 0;
}
