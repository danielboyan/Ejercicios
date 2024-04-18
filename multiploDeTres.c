#include <stdio.h>
#define p printf
#define s scanf
int main(void){
    int num1;

    p("Ingrese un valor: ");
    s("%d",&num1);

    if(num1 % 3 == 0)
        p("%d es m%cltiplo de 3",num1,163);
    else
        p("%d No es m%cltiplo de 3", num1,163);
    
    return 0;

}