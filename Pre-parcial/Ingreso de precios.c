#include <stdio.h>
#include <stdbool.h>
#include <string.h>

void main(){
    int i=0; float f_precio=0, a_precio=0;
    bool fin;
    char ch;char c_precio[100];

    do{printf("Ingresar precio del producto: $");
    fgets(c_precio,100,stdin);//fgets(nombre_cadena, numero_caracteres, FILE);  la palabra “stdin” cuyo significado es “standard input”.
    c_precio[strcspn(c_precio, "\n")] = 0; // Elimina el salto de línea al final de la entrada

    //Si la longitud de la entrada (strlen()) es 0, significa que el usuario presionó Enter sin escribir nada
    if(strlen(c_precio) == 0){
        i++;printf("i %d",i);
        break;
    } else {
        //sscanf para intentar convertir la entrada a un número entero.
        if (sscanf(c_precio, "%f", &f_precio) == 1){
            a_precio=a_precio+f_precio;
        } else {
            if(i == 3){
                printf("Deseas seguir operando? S/N");scanf("%c",&ch);
                if (ch == 'S' || ch == 's'){
                    i=0;
                } //else {i=3;}
                }
            }
        }

    }while(i!=3);
    printf("Total $%.2f",f_precio);



}
