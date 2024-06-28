#include <stdio.h>
#include <math.h>
#define Escribir printf
#define Leer scanf

int calendario();
int edad();

int main(){

    int fecha=31129999, fechanac, fechaact;
    Escribir("Ingresar fecha de nacimiento en un entero de 8 cifras para la fecha: ");
    Leer("%d",&fecha);

    fechanac= calendario(fecha);

    Escribir("Es igual a %d dias\n\n",fechanac);

    Escribir("Ingresar fecha actual: ");
    Leer("%d",&fecha);

    fechaact= calendario(fecha);

    Escribir("Es igual a %d dias\n\n",fechaact);

    //edad=fechaact-fechanac; //sacar barras para saber que hace

    Escribir("");

    //Escribir("Ingresar fecha actual en un entero");

return 0;
}
int calendario(int fecha)
{
    int anios, mes,dia, edadaux;
    anios=fecha%10000;
    mes=(fecha/10000)%100;
    dia=fecha/pow(10,6);

    Escribir("Anios %d\t",anios);
    Escribir("Mes %d\t\t",mes);
    Escribir("Dia %d\t\t",dia);

    edadaux= edad(dia, mes, anios);

    return edadaux;
}
int edad(int dias, int mes, int anios)
{
    int diasaprox;

    diasaprox=dias+mes*30+anios*365;

    return diasaprox;
}
