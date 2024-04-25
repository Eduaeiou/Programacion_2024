#include <stdio.h>
#include <math.h>
#define Escribir printf
#define Leer scanf

void calendario();

int main(){

    int fecha=31129999;
    Escribir("Ingresar fecha de nacimiento en un entero de 8 cifras para la fecha: ");
    Leer("%d",&fecha);

    calendario(fecha);

    Escribir("Ingresar fecha actual");
    Leer("%d",&fecha);

    //Escribir("Ingresar fecha actual en un entero");

return 0;
}
void calendario(int fecha)
{
    int anios, mes,dia;
    anios=fecha%10000;
    mes=(fecha/10000)%100;
    dia=fecha/pow(10,6);

    Escribir("Anios %d\t",anios);
    Escribir("Mes %d\t\t",mes);
    Escribir("Dia %d\n",dia);
}
