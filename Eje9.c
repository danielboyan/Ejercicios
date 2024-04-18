#include <stdio.h>
#define p printf
#define s scanf

//Crear una calculadora que te devuelva las 4 operaciones básicas con dos números.

int main (void){

    float suma,resta,multi,divi,num1,num2;

    p("Ingrese Numero 1: ");
    s("%f",&num1);
    
    p("Ingrese Numero 2: ");
    s("%f",&num2);

    suma = num1 + num2;
    resta = num1 - num2;
    divi = num1 / num2;
    multi = num1 * num2;

    p("El resultado de %f + %f = %f\n",num1,num2,suma);
    p("El resultado de %f - %f = %f\n",num1,num2,resta);
    p("El resultado de %f * %f = %f\n",num1,num2,multi);
    p("El resultado de %f / %f = %f",num1,num2,divi);
    return 0;
}
