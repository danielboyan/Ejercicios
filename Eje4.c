//Convierte grados Celsius a Fahrenheit.
#include <stdio.h>
#define p printf
#define s scanf


int main(void){

    float c,f;

    p("Ingrese Grados Celcius: ");
    s("%f",&c);

    f = (c * 9/5) + 32;

    p("De %f Grados Celcius a Fahrenheit es : %f",c,f);

    return 0;

}