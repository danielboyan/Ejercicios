#include <stdio.h>
#define p printf
#define s scanf

//Con cantidad de segundos, mostrar por pantalla a cuántas horas, minutos y segundos corresponden.

int main(void){
    int seg,min=0,hs=0;

    p("Ingrese Segundos: ");
    s("%d",&seg);

    if(seg>0 && seg>=60){
        min = seg/60;
        seg -= min*60;
        if(min>60){
            hs = min /60;
            min -= hs*60;
        }
    }
    p("%d Horas %d Minutos %d Segundos",hs,min,seg);
    return 0;
}