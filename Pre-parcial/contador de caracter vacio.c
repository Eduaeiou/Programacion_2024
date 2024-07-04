#include <stdio.h>
#include <string.h>

int main() {
    char input[100];
    int empty_count = 0, aux = 0, number;

    while (1) {
        printf("Ingrese un numero (o presione Enter sin escribir nada para salir): ");
        fgets(input, 100, stdin);

        // Elimina el salto de l�nea al final de la entrada
        input[strcspn(input, "\n")] = 0;

        // Si la entrada est� vac�a (el usuario presion� Enter sin escribir nada)
        if (strlen(input) == 0) {
            empty_count++;
            printf("Entrada vac�a detectada. Contador de entradas vac�as: %d\n", empty_count);
            // Aqu� puedes decidir si deseas continuar o terminar el programa.
            // Para este ejemplo, vamos a terminar el programa despu�s de contar una entrada vac�a.
            //>>>>>>>>>>>>>>>         break;
            //La instrucción break finaliza la ejecución de la instrucción 
        } else {
            // Convertir la entrada a un n�mero (opcional, dependiendo de lo que quieras hacer con los n�meros)

            if (sscanf(input, "%d", &number) == 1) {
                printf("N�mero ingresado: %d\n", number);
                aux=number+aux;
            } else {
                printf("Entrada no v�lida. Por favor, ingrese un n�mero.\n");
            }
        }
    }

    printf("Total de entradas vac�as: %d\n", empty_count);
    printf("Numero total: %d\n\n", aux);
    return 0;
}
