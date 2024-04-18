#include <stdio.h>
#define p printf
#define s scanf

//Determinar si un número es par o impar.

int main(void)
{
    int num1;

    p("Ingrese un valor: ");
    s("%d",&num1);

    if(!(num1%2))
    
        p("Es par");
    else
        p("Es impar");
    
    return 0;
}