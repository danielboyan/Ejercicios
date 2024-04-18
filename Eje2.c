#include <stdio.h>
#define p printf
#define s scanf

// Con la base y la altura de un rectángulo, calcular su área y su perímetro.

int main(void)
{
    int base,altura,area,perimetro;
    
    p("Ingrese base: ");
    s("%d",&base);

    p("Ingrese altura: ");
    s("%d",&altura);

    area = base*altura;
    perimetro = 2*(base+altura);
    
    p("El area de un rectamgulo de base %d y altura %d es %d y el perimetro es: %d ",base,altura,area,perimetro);
    return 0;
}