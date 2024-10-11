//Prog. 1 - Parcial Tema 3
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

void fechadeimpresion(){
int fechadeimp,dia,mes,anio;
    printf("\nIngresar fecha con el siguiente formato ddmmaaaa: ");
    scanf("%d",&fechadeimp);
    dia=fechadeimp/1000000;
    mes=(fechadeimp%1000000)/10000;
    anio=fechadeimp%10000;
    printf("\tFecha: %d/%d/%d\n",dia,mes,anio);
}    

int tiempodeimpresion(){
    int horas;
    printf("Ingresar tiempo de impresion en horas: ");scanf("%d",&horas);
    printf("\tTmpdImp: %dh",horas);
    return horas;
}

int menu()
{
    int opc;
    printf("**** SIMILADOR DE IMPRESION ****");
    printf("\n1. Registro de Datos.");
    printf("\n2. Impresion mas larga segun el mes");
    printf("\n3. Material mas utilizado.");
    printf("\n4. Impresiones adicionales");
    printf("\nOpcion: ");
    scanf("%d", &opc); system("cls"); //stdlib.h
    return opc;
}

int menuMateriales()
{
    int tipodematerial;
        printf("SIMULADOR DE IMPRESIONES\nSeleccionar tipo de material\n");
        printf("\tSegun:\n\t1. ABS (acrilonitrillo butadieno estirano).\n\t2. PLA (acido polilactico).\n\t3. PETG (tereftalato de polierileno glicolizado).\n\t4. Nylon.\n");
        printf("Opc: ");scanf("%d",&tipodematerial); system("cls");
        printf("Tipo de Material:\n");                                
    return tipodematerial;
}

int main(){
    bool salir=true; int opc, opcsalida=0;
        do{
            opc=menu();
            switch (opc)
            {
            case 1:
                opc=menuMateriales();
                switch (opc)
                {
                case 1: printf("\tABS (acrillonitrilo butadieno estireno).\n");
                    tiempodeimpresion(); fechadeimpresion();
                    break;
                case 2: printf("\tPLA (acido polilactico).\n");
                    tiempodeimpresion(); fechadeimpresion();
                    break;
                case 3: printf("\tPETG (tereftalato de polietileno glicolizado).\n");
                    tiempodeimpresion(); fechadeimpresion();
                    break;
                case 4: printf("\tNylon\n"); 
                    tiempodeimpresion(); fechadeimpresion();
                    break;    
                default:
                    break;
                }
                break;
            
            default:
                break;
            }
 
            printf("\n1. Repetir proceso\n0. Salir\n");scanf("%i",&opcsalida);
            if(opcsalida==0)salir=false;
        }while(salir!=false); //La condicion debe ser verdadera para que el ciclo se repita
    return 0;
}
