#include <stdio.h>
#define p printf
#define s scanf

//Crear una calculadora que te devuelva las 4 operaciones básicas con dos números.

int main (void){

    float suma,resta,multi,divi,num1,num2,num3;

    p("Ingrese Numero 1: ");
    s("%f",&num1);
    
    p("Ingrese Numero 2: ");
    s("%f",&num2);
    
    p("Ingrese Numero 3: ");
    s("%f",&num3);

    suma = num1 + num2 + num3;
    resta = num1 - num2 - num3;
    divi = num1 / num2 / num3;
    multi = num1 * num2 * num3;

    p("El resultado de %f + %f + %f = %f\n",num1,num2,num3,suma);
    p("El resultado de %f - %f - %f = %f\n",num1,num2,num3,resta);
    p("El resultado de %f * %f * %f = %f\n",num1,num2,num3,multi);
    p("El resultado de %f / %f / %f = %f",num1,num2,num3,divi);



}
