#include <stdio.h>
#define p printf
#define s scanf

//Con uno de sus lados, calcula el área y perímetro de un cuadrado
int main(void)
{
    int lado,area,perimetro;

    p("Ingrese lado:");
    s("%d",&lado);

    area = lado*lado;
    perimetro = lado*4;

    p("El area de un cuadrado de lado: %d es %d y el perimetro es: %d ",lado,area,perimetro);
    return 0;
    }