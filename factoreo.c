#include <stdio.h>

int SumaDeNaturales(int CantidadDeNumNaturales){

    if(CantidadDeNumNaturales==0) return 1;
    else return CantidadDeNumNaturales*SumaDeNaturales(CantidadDeNumNaturales-1);
}
int main(){
    int CantidadDeNumNaturales,resultado;

    printf("Cantidad de numeros naturales: ");
    scanf("%d",&CantidadDeNumNaturales);
    resultado=SumaDeNaturales(CantidadDeNumNaturales);
    printf("Resultado: %d",resultado);

return 0;
}
