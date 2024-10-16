#include <stdio.h>
#include <string.h>
#include "stdlib.h" // Para system()
//#include <windows.h>
#define n 2
#define _long 50

int cat_emp(char tip_cat, char letra_m, char letra_M)
{
    int acumulador = 0;

    if (tip_cat == letra_m || tip_cat == letra_M)
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
    float promedio = 0.0;
    int cat_a = 0, cat_b = 0, cat_c = 0;

    printf("*******   EMPLEADO   *******");
    for (int i = 0; i < n; i++)
    {
        printf("\nREGISTRO Nro.: %d",i+1);
        printf("\nNOMBRE Y APELLIDO: ");
        fgets(empleado[i].nom_ape,_long,stdin);
        empleado[i].nom_ape[strcspn(empleado[i].nom_ape, "\n")] = 0; // Elimina el salto de línea

        printf("EDAD: ");
        scanf("%d",&empleado[i].edad);
        getchar(); //Limpiar el buffer de entrada

        printf("CATEGORIA (A-B-C): ");
        scanf("%c",&empleado[i].categoria);
        getchar(); //Limpiar el buffer de entrada

        cat_a += cat_emp(empleado[i].categoria,'a','A');
        cat_b += cat_emp(empleado[i].categoria,'b','B');
        cat_c += cat_emp(empleado[i].categoria,'c','C');

        printf("SUELDO: ");
        scanf("%f",&empleado[i].sueldo);
        getchar(); //Limpiar el buffer de entrada
        
        promedio += empleado[i].sueldo;
        //system("cls"); //Windows
        system("clear"); //Linux
    }

    printf("LISTA DE EMPLEADOS: ");
    for (int i = 0; i < n; i++)
    {
        printf("\nNom. y ape.: %s",empleado[i].nom_ape);
        printf("Edad: %d",empleado[i].edad);
        printf("\nCtg.: %c",empleado[i].categoria);
        printf("\nSld.: $%.2f\n",empleado[i].sueldo);
    }
    
    printf("\nPROMEDIO DE SUELDOS PAGADOS");
    printf("\nClc: $%.2f",promedio/n);

    printf("\nCANTIDAD DE EMPLEADOS SEGUN CATEGORIA: ");
    ctd_cat(cat_a,'A');
    ctd_cat(cat_b,'B');
    ctd_cat(cat_c,'C');

    return 0;
}