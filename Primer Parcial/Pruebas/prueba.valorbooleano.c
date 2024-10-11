#include <stdio.h>
#include <stdbool.h>
int main(){
    bool salir=true; //true=1
    int salida=0;
    
    do
    {
        printf("Salida N: %d\n",salir);
        printf("1 o 0\n"); scanf("%i",&salida);
        if (salida==0)
        {
        salir=false;
        }
    } while (salir!=0);
    
    printf("Salida N: %d\n",salir);

    return 0;
}