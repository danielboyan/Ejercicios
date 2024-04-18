#include <stdio.h>
#define p printf
#define s scanf

//Verifica si un año ingresado por teclado es bisiesto o no.

int main(void){

    int anio;

    p("Ingrese a%co: ",164);
    s("%d",&anio);

    if(anio>0 && anio<=2024){
        if(anio%4 == 0 && anio%100!=0 || anio%400 == 0)
            p("es Bisiesto");
        else
            p("No es Bisiesto");
        
    }
    return 0;
}
