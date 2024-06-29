
#include <stdio.h>

int main() {
    char ch;
    int contador = 0;

    printf("Presiona Enter para incrementar el contador. Presiona 'q' y luego Enter para salir.\n");

    while (1) {
        ch = getchar();  // Leer un caracter desde la entrada estándar

        if (ch == '\n') {  // Si el caracter es Enter ('\n')
            contador++;    // Incrementar el contador
            printf("Contador: %d\n", contador);
        } else if (ch == 'q') {  // Si el caracter es 'q'
            printf("Saliendo...\n");
            break;  // Salir del bucle
        }
    }

    return 0;
}
