#include <stdio.h>
#include <stdbool.h>

void main(){
    float precio=0,aux; int i=0;
    bool fin;
    char ch;

    do{printf("Ingresar precio del producto: $");
    aux=aux+precio;
    ch = getchar();
    i++;printf("i %d",i);
    if(ch=='\n'&&i==3){
        printf("Deseas seguir operando? S/N");}
    else{
            scanf("%f",&precio);
            ch = getchar();
            break;}

    }while(i!=3);
    printf("Total $%.2f",aux);



}
