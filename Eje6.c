#include <stdio.h>
#define p printf

//Calcula la suma de los números enteros del 1 al 100.
int main(void){

    int num1 = 100,res;

    res = num1*((float)(num1+1)/2);

    p("La Suma de los numeros enteros del 1 al 100 es: %d",res);

    return 0;
}