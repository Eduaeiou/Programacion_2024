#include <stdio.h>
#include <string.h>
#include <stdlib.h>  // Para system()
#define n 2
#define _long 50

// Función que cuenta cuántos empleados pertenecen a una categoría
int cat_emp(char tip_cat, char letra_m, char letra_M)
{
    int acumulador = 0; // Inicializamos la variable correctamente

    if (tip_cat == letra_m || tip_cat == letra_M)
    {
        acumulador += 1;
    }

    return acumulador;
}

// Función que imprime la cantidad de empleados en una categoría
void ctd_cat(int tipo_cat, char letra)
{
    if (tipo_cat > 0)
    {
        printf("\nCATEGORIA %c: %d", letra, tipo_cat);
    }
}

typedef struct
{
    char nom_ape[_long];
    int edad;
    char categoria;
    float sueldo;
} planilla;

int main()
{
    planilla empleado[n];
    float promedio = 0.0;
    int cat_a = 0, cat_b = 0, cat_c = 0;

    printf("*******   EMPLEADO   *******\n");

    for (int i = 0; i < n; i++)
    {
        printf("\nREGISTRO Nro.: %d\n", i + 1);
        printf("NOMBRE Y APELLIDO: ");
        fgets(empleado[i].nom_ape, _long, stdin);
        empleado[i].nom_ape[strcspn(empleado[i].nom_ape, "\n")] = 0; // Elimina el salto de línea

        printf("EDAD: ");
        scanf("%d", &empleado[i].edad);
        getchar(); // Limpia el búfer de entrada

        printf("CATEGORIA (A-B-C): ");
        scanf("%c", &empleado[i].categoria);
        getchar(); // Limpia el búfer de entrada después de leer el char

        // Clasificación por categorías
        cat_a += cat_emp(empleado[i].categoria, 'a', 'A');
        cat_b += cat_emp(empleado[i].categoria, 'b', 'B');
        cat_c += cat_emp(empleado[i].categoria, 'c', 'C');

        printf("SUELDO: ");
        scanf("%f", &empleado[i].sueldo);
        getchar(); // Limpia el búfer de entrada después de leer el sueldo

        promedio += empleado[i].sueldo;

        // Si quieres limpiar la pantalla entre cada registro, descomenta la siguiente línea:
        // system("cls");  // Para Windows
        // system("clear");  // Para Linux/Mac
    }

    printf("\nLISTA DE EMPLEADOS:\n");
    for (int i = 0; i < n; i++)
    {
        printf("\nNom. y ape.: %s", empleado[i].nom_ape);
        printf("\nEdad: %d", empleado[i].edad);
        printf("\nCtg.: %c", empleado[i].categoria);
        printf("\nSueldo: $%.2f\n", empleado[i].sueldo);
    }

    promedio /= n;
    printf("\nPROMEDIO DE SUELDOS PAGADOS: $%.2f", promedio);

    printf("\nCANTIDAD DE EMPLEADOS SEGUN CATEGORIA:\n");
    ctd_cat(cat_a, 'A');
    ctd_cat(cat_b, 'B');
    ctd_cat(cat_c, 'C');

    return 0;
}

