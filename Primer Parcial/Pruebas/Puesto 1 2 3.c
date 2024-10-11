#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char nom1[15],nom2[15],nom3[15],nomA[15];
    int jug1=0,jug2=0,jug3=0,jugAux=0;
    srand(time(NULL));
    for (int i = 1; i < 3; i++)
    {   
        if (i==1)
        {
            printf("Jugador 1: \t");scanf("%s",nom1);
            jug1 = (rand()% 100);
            printf("Puntos: %d",jug1);

            printf("\nJugador 2: \t");scanf("%s",nomA);
                jugAux = (rand()% 100);
                printf("Puntos %d",jugAux);

                if (jugAux<jug1)
                {
                    jug2=jug1;
                    strcpy(nom2, nom1); // Usando strcpy para copiar la cadena
                    jug1=jugAux;
                    strcpy(nom1, nomA); // Usando strcpy para copiar la cadena
                }else
                {
                    jug2=jugAux;
                    strcpy(nom2, nomA); // Usando strcpy para copiar la cadena
                }

        }else if (i==2)
            {
                {
                    printf("\nJugador 3: \t");scanf("%s",nomA);
                    jugAux = (rand()% 100);
                    printf("Puntos: %d",jugAux);
                }  
                if (jugAux<jug1)
                {
                    jug3=jug2;
                    strcpy(nom3, nom2); // Usando strcpy para copiar la cadena
                    jug2=jug1;
                    strcpy(nom2, nom1); // Usando strcpy para copiar la cadena
                    jug1=jugAux;
                    strcpy(nom1, nomA); // Usando strcpy para copiar la cadena
                }else if (jugAux<jug2)
                {
                    jug3=jug2;
                    strcpy(nom3, nom2); // Usando strcpy para copiar la cadena
                    jug2=jugAux;
                    strcpy(nom2, nomA); // Usando strcpy para copiar la cadena
                }else
                {
                    jug3=jugAux;
                    strcpy(nom3, nomA); // Usando strcpy para copiar la cadena
                }
            }        
    }
    if (jug1!=jug2){
        printf("\n1er puesto: %s con %i puntos",nom1,jug1);
        if(jug2!=jug3){
            printf("\n2do puesto: %s con %i puntos",nom2,jug2);
           if(jug3!=jug2){
                printf("\n3er puesto: %s con %i puntos",nom3,jug3);
           }
        }
    }
    return 0;
}

/*Uso de strcpy: Usé la función strcpy para copiar las cadenas 
nom1, nom2, y nom3 en lugar de usar el operador =. En C, el 
operador = no puede ser utilizado para copiar el contenido de 
una cadena a otra, ya que sólo copia la referencia.*/