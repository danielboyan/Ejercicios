#include <stdio.h>
#define p printf
#define s scanf

//Con el diámetro de un círculo, calcula su área.

const float pi=3.14;

int main(void)
{
    float diametro,area,perimetro,radio;

    p("Ingrese el diametro: ");
    s("%f",diametro);

    radio = diametro/2;
    area = pi*radio*radio; 
    perimetro = 2*pi*radio;

    p("El area del circulo es: %f y el perimetro es: %f", area,perimetro);

    return 0;
}