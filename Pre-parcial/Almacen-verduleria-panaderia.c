#include <stdio.h>

int sector();
int main(){

    switch(sector()){
    case 1: //Almacen
        break;
    case 2: // Verduleri y fruteria
        break;
    case 3: //Panaderia
        break;
    default:

    return 0;
}
int sector(){

int seccion;

    printf("Selecionar seccion segun su numero:\n");
    printf("1 <--- Almacen\n");
    printf("2 <--- Veduleria y fruteria\n");
    printf("3 <--- Panaderia\n");
    scanf("%d",seccion);
return seccion;
}
