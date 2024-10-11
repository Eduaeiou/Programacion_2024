// Ingresando material tipo 0 se corta
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>

// Declaración de funciones
void BorrarYEsperarTecla();
int TipoDeMaterial();
int TiempoDeImpresion();
int FechaDeImpresion();
int DesglosarFecha(int);

void Resultados(int, int, int, int);

int main(){
    int Material, Impresion, mes;
    int ImpresionMasLarga = 0, MesQueOcurrio = 0, MaterialUsado = 0;
    int MaterialUsadoAntes = 0, MaterialUsadoDespues = 0;
    int ImpresionesEnElMes = 0;
    int logico = 0, flag = 0, ValorLogico = 0;

    do {
        Material = TipoDeMaterial();

        if (Material == 0) {
            system("cls");
            printf("Usted salió del sistema\n");
            break;
        }

        if (flag == 0) {
            MaterialUsadoAntes = Material;
        }
        if (flag == 1) {
            MaterialUsadoDespues = Material;
            flag = 0;
        }

        Impresion = TiempoDeImpresion();
        mes = FechaDeImpresion();

        if (logico == 0 || (Impresion > ImpresionMasLarga)) {
            ImpresionMasLarga = Impresion;
            MesQueOcurrio = mes;
            MaterialUsado = Material;
            flag = 1;
            ValorLogico = 1;
        }

        if (ValorLogico == 1 && mes == MesQueOcurrio && Material == MaterialUsado) {
            ImpresionesEnElMes++;
            ValorLogico = 0;
        }

        BorrarYEsperarTecla();

    } while (Material != 0);

    Resultados(ImpresionMasLarga, MesQueOcurrio, MaterialUsadoAntes, MaterialUsadoDespues);

    printf("La cantidad de impresiones que se realizaron en el mes de la impresión más larga y con el mismo material son: %d\n", ImpresionesEnElMes);

    getch();
    return 0;
}

void BorrarYEsperarTecla(){
    system("cls");
    printf("Datos guardados correctamente\n");
    printf("Presione una tecla para continuar...\n");
    getch();
    system("cls");
}

int TipoDeMaterial(){
    int Material;
    printf("Ingrese el tipo de material utilizado\n");
    printf("1. ABS (acrilonitrilo butadieno estireno)\n");
    printf("2. PLA (ácido poliláctico)\n");
    printf("3. PETG (tereftalato de polietileno glicolizado)\n");
    printf("4. Nylon\n");
    printf("0. Salir\n");
    scanf("%d", &Material);
    while(Material < 0 || Material > 4){
        system("cls");
        printf("ERROR, opción incorrecta, intente nuevamente\n");
        printf("1. ABS (acrilonitrilo butadieno estireno)\n");
        printf("2. PLA (ácido poliláctico)\n");
        printf("3. PETG (tereftalato de polietileno glicolizado)\n");
        printf("4. Nylon\n");
        printf("0. Salir\n");
        scanf("%d", &Material);
    }
    system("cls");
    return Material;
}

int TiempoDeImpresion(){
    int Impresion;
    printf("Ingrese el tiempo de impresión en horas\n");
    scanf("%d", &Impresion);
    while(Impresion < 1){
        system("cls");
        printf("ERROR, el tiempo en horas debe ser mayor a 0\n");
        scanf("%d", &Impresion);
    }
    system("cls");
    return Impresion;
}

int FechaDeImpresion(){
    int Fecha;
    int mes;
    printf("Ingrese la fecha de impresión en formato de 8 dígitos (DDMMAAAA)\n");
    scanf("%d", &Fecha);
    while(Fecha < 1010000 || Fecha > 31122024){
        system("cls");
        printf("ERROR, Ingrese la fecha correctamente\n");
        scanf("%d", &Fecha);
    }
    mes = DesglosarFecha(Fecha);
    system("cls");
    return mes;
}

int DesglosarFecha(int Fecha){
    int mes;
    mes = (Fecha / 10000) % 100;
    return mes;
}

void Resultados(int ImpresionMasLarga, int MesQueOcurrio, int MaterialUsadoAntes, int MaterialUsadoDespues){
    printf("\nPresione una tecla para mostrar resultados\n");
    getch();
    system("cls");
    printf("Resultados:\n");
    printf("1. Impresión más larga: %d horas\n", ImpresionMasLarga);
    printf("   Mes en que ocurrió: %d\n", MesQueOcurrio);
    printf("2. Material usado antes de la impresión más larga: %d\n", MaterialUsadoAntes);
    printf("   Material usado después de la impresión más larga: %d\n", MaterialUsadoDespues);
}