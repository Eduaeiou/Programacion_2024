#include <stdio.h>
#include <windows.h>
#define n 2
#define _long 50

int cat_emp(char tip_cat)
{
    if (tip_cat == )
    {
        /* code */
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
        printf("SUELDO: ");
        scanf("%f",&empleado[i].sueldo);
        promedio += empleado[i].sueldo;
        system("cls");
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

    return 0;
}