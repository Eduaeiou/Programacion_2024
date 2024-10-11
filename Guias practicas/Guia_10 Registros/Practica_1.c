#include <stdio.h>
#include "string.h"
//#include <windows.h>
#define n 2
#define _long 50

int cat_emp(char tip_cat[], char letra_m[], char letra_M[])
{
    int acumulador;

    if (strcmp(tip_cat,letra_m) == 0 || strcmp(tip_cat,letra_M) == 0)
    {
        acumulador +=1;
    }
    
    return acumulador;
}

void ctd_cat(int tipo_cat, int letra)
{
    if (tipo_cat > 0)
    {
        printf("\nCATEGORIA %c: %d",letra,tipo_cat);
    }
    
}

typedef struct 
{
    char nom_ape[_long];
    int edad;
    char categoria;
    float sueldo;
}planilla;

int main()
{
    planilla empleado[n];
    float promedio;
    int cat_a, cat_b, cat_c;

    printf("*******   EMPLEADO   *******");
    for (int i = 0; i < n; i++)
    {
        printf("\nREGISTRO Nro.: %d",i+1);
        printf("\nNOMBRE Y APELLIDO: ");
        fgets(empleado[i].nom_ape,_long,stdin);
        printf("EDAD: ");
        scanf("%d",&empleado[i].edad);
        getchar();
        printf("CATEGORIA (A-B-C): ");
        scanf("%c",&empleado[i].categoria);
        cat_a = (empleado[i].categoria,'a','A');
        cat_b = (empleado[i].categoria,'b','B');
        cat_c = (empleado[i].categoria,'c','C');
        printf("SUELDO: ");
        scanf("%f",&empleado[i].sueldo);
        promedio += empleado[i].sueldo;
        //system("cls"); //Windows
        system("clear"); //Linux
        getchar();
    }

    printf("LISTA DE EMPLEADOS: ");
    for (int i = 0; i < n; i++)
    {
        printf("\nNom. y ape.: %s",empleado[i].nom_ape);
        printf("Edad: %d",empleado[i].edad);
        printf("\nCtg.: %c",empleado[i].categoria);
        printf("\nSld.: %c%.2f\n",36,empleado[i].sueldo);
    }
    
    printf("\nPROMEDIO DE SUELDOS PAGADOS");
    printf("\nClc: %c%.2f",36,promedio);

    printf("\nCANTIDAD DE EMPLEADOS SEGUN CATEGORIA: ");
    ctd_cat(65,cat_a);
    ctd_cat(66,cat_b);
    ctd_cat(67,cat_c);

    return 0;
}