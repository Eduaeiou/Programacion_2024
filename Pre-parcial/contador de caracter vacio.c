#include <stdio.h>
#include <string.h>

int main() {
    char input[100];
    int empty_count = 0, aux = 0, number;

    while (1) {
        printf("Ingrese un numero (o presione Enter sin escribir nada para salir): ");
        fgets(input, 100, stdin);

        // Elimina el salto de línea al final de la entrada
        input[strcspn(input, "\n")] = 0;

        // Si la entrada está vacía (el usuario presionó Enter sin escribir nada)
        if (strlen(input) == 0) {
            empty_count++;
            printf("Entrada vacía detectada. Contador de entradas vacías: %d\n", empty_count);
            // Aquí puedes decidir si deseas continuar o terminar el programa.
            // Para este ejemplo, vamos a terminar el programa después de contar una entrada vacía.
            break;
        } else {
            // Convertir la entrada a un número (opcional, dependiendo de lo que quieras hacer con los números)

            if (sscanf(input, "%d", &number) == 1) {
                printf("Número ingresado: %d\n", number);
                aux=number+aux;
            } else {
                printf("Entrada no válida. Por favor, ingrese un número.\n");
            }
        }
    }

    printf("Total de entradas vacías: %d\n", empty_count);
    printf("Numero total: %d\n", aux);
    return 0;
}
