//ingresando material tipo 0 se corta
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>

void BorrarYEsperarTecla();
int TipoDeMaterial();
int TiempoDeImpresion();
int FechaDeImpresion();
int DeslozarFecha(int);

void Resultados(int,int,int,int);

int main(){
    int Material,Impresion,mes;
    int ImpresionMasLarga, MesQueOcurrio, MaterialUsado;
    int MaterialUsadoAntes,MaterialUsadoDespues;
    int ImpresionesEnElMes=0;
    int logico=0,flag=0,ValorLogico=0;

    do{
        Material=TipoDeMaterial();

        if(flag==0 && Material != 0){
            MaterialUsadoAntes=Material;
        }
        if(flag==1){
            MaterialUsadoDespues=Material;
            flag=0;
        }

        if(Material==0){
            system("cls");
            printf("Usted salio del sistema\n");
        }else{
            Impresion=TiempoDeImpresion();
            mes=FechaDeImpresion();

            if(ValorLogico==1 && mes==MesQueOcurrio && Material==MaterialUsado){
                ImpresionesEnElMes++;
                ValorLogico=0;
            }

            if(logico){
                ImpresionMasLarga=Impresion;
                MesQueOcurrio=mes;
                logico=1;
            }else{
                if(Impresion>ImpresionMasLarga){
                    ImpresionMasLarga=Impresion;
                    MesQueOcurrio=mes;
                    MaterialUsado=Material;
                    flag++;
                    ValorLogico++;
                }
            }
            BorrarYEsperarTecla();

        }
    }while(Material!=0);

    Resultados(ImpresionMasLarga,MesQueOcurrio,MaterialUsadoAntes,MaterialUsadoDespues);

    printf("La cantidad de impresiones que se realizaron en el mes de mas larga impresion y del mismo material son: %d\n",ImpresionesEnElMes);

    getch();
    return 0;
}

void BorrarYEsperarTecla(){
    system("cls");
    printf("Datos guardados correctamente\n");
    printf("Presione enter para continuar...\n");
    getch();
    system("cls");
}

int TipoDeMaterial(){
    int Material;
    printf("Ingrese el tipo de material utilizado\n");
    printf("1.ABS (acrilonitrilo butadieno estireno)\n");
    printf("2.PLA (acido polilactico)\n");
    printf("3.PETG (terefllalato de polietileno glicolizado)\n");
    printf("4.Nylon\n");
    printf("0.Salir\n");
    scanf("%d",&Material);
    while(Material<0 || Material>4){
        system("cls");
        printf("ERROR, opcion incorrecta, volver a intentar\n");
        printf("1.ABS (acrilonitrilo butadieno estireno)\n");
        printf("2.PLA (acido polilactico)\n");
        printf("3.PETG (terefllalato de polietileno glicolizado)\n");
        printf("4.Nylon\n");
        printf("0.Salir\n");
        scanf("%d",&Material);
    }
    system("cls");
    return Material;
}

int TiempoDeImpresion(){
    int Impresion;
    printf("Ingrese el tiempo de impresion en horas\n");
    scanf("%d",&Impresion);
    while(Impresion<1){
        system("cls");
        printf("ERROR, el tiempo en horas debe ser mayor a 0\n");
        scanf("%d",&Impresion);
    }
    system("cls");
    return Impresion;
}

int FechaDeImpresion(){
    int Fecha;
    int mes;
    printf("Ingrese la fecha de impresion en formato de 8 digitos\n");
    scanf("%d",&Fecha);
    while(Fecha<01010000 || Fecha>31122024){
        system("cls");
        printf("ERROR, Ingresar la fecha correctamente\n");
        scanf("%d",&Fecha);
    }
    mes=DeslozarFecha(Fecha);
    system("cls");
    return mes;
}

int DeslozarFecha(int Fecha){
    int mes;
    mes=Fecha%1000000;
    mes=mes/10000;
    return mes;
}

void Resultados(int ImpresionMasLarga,int MesQueOcurrio,int MaterialUsadoAntes,int MaterialUsadoDespues){
    printf("\nPresione enter para mostrar resultados\n");
    getch();
    system("cls");
    printf("Resultados:\n");
    printf("1.\n");
    printf("Impresion mas larga: %d horas\n",ImpresionMasLarga);
    printf("Mes que ocurrio: %d\n",MesQueOcurrio);
    printf("2.\n");
    printf("Material usado antes de la impresion mas larga: %d\n",MaterialUsadoAntes);
    printf("Material usado despues del impreso mas larga: %d\n",MaterialUsadoDespues);
    printf("3.\n");
}
