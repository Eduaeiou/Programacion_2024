#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <unistd.h>


/*void comprobante(int caja, int seccion){
    if(caja==1)
        if(seccion==1)
            printf("CAJA %d\n SECTOR: Almacen",caja);
        else if(seccion==2)
            printf("CAJA %d\n SECTOR: Verduleria y fruteria",caja);
            else if(seccion==3)
                printf("CAJA %d\n SECTOR: Panaderia",caja);
    else if(caja==2)
        if(seccion==1)
            printf("CAJA %d\n SECTOR: Almacen",caja);
        else if(seccion==2)
            printf("CAJA %d\n SECTOR: Verduleria y fruteria",caja);
            else if(seccion==3)
                printf("CAJA %d\n SECTOR: Panaderia",caja);

}*/
char cont_ope(bool salida){
    char ope='N';
    printf("Deseas seguir operando segun S/N ?\n");
    scanf(" %c",&ope); //Reads a single character from the user input. The space before %c is added to skip any whitespace characters (like newlines) left in the input buffer.
    if(ope=='N' || ope=='n')
        salida = false;
    else if (ope=='S' || ope=='s')
        salida = true;

    return salida;
}
void msj_err(){
    system("cls");
        printf("ERROR. Vuelva a intentar\n");
        sleep(3); system("cls");
}
int sector(){
    int seccion; bool salida = true;
        do{
        printf("Ingresar numero de seccion:\n");
        printf("1 <--- Almacen\n");
        printf("2 <--- Veduleria y fruteria\n");
        printf("3 <--- Panaderia\n");
        printf("Seccion: ");scanf("%d",&seccion);
        switch(seccion){
            case 1: printf("Ingresar precio del producto: $");
                salida = cont_ope(salida);//Almacen
                break;
            case 2: salida = cont_ope(salida);// Verduleri y fruteria
                break;
            case 3: salida = cont_ope(salida);//Panaderia
                break;
            default: msj_err();
            }
        }while(salida==true);
        return seccion;
}
int main(){
    int caja; int seccion;
    bool salida = true;

    do{printf("CAJAS DISPONIBLES 1, 2, 3, 4\n");
    printf("Ingresar numero de caja: "); scanf("%d",&caja);
    switch(caja){
    case 1: seccion = sector(); //salida = cont_ope(salida);
        break;
    case 2: seccion = sector(); //salida = cont_ope(salida);
        break;
    case 3: seccion = sector(); //salida = cont_ope(salida);
        break;
    case 4: seccion = sector(); //salida = cont_ope(salida);
        break;
    default: msj_err();
    }}while(salida==true);

    return 0;
}
