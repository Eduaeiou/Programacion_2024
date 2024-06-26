#include <stdio.h>
#include <stdlib.h>
#define m 1000
void Punto5(); void Punto6(); void Punto7();

int main(){
    
    int opc;

    printf("Escribir numero del ejercicio. Según: \n");
    printf("\t5. Dados dos valores para a y b, los intercambia \n");
    printf("\t6. Un valor en Km y expresado en metros.\n");
    printf("Punto: ");
    scanf("%d",&opc); system("clear");

    switch (opc)
    {
        case 5: Punto5();
            break;
        case 6: Punto6();
        default:
            break;
    }

    return 0;
}
//5. Crea un programa que, dados dos valores para a y b, los intercambie.
void Punto5(){

    int a,b,aux;

    printf("Ingresar un valor para a: "); scanf("%d",&a);
    printf("Ingresar un valor para b: "); scanf("%d",&b);
    aux=a; a=b; b=aux;
    printf("Ahora los valores son: \n");
    printf("\ta=%d \t b=%d\n",a,b);
}
//6. Ingresar por teclado un valor en Km y mostrarlo expresado en metros.
void Punto6(){

    float metros,km;

    printf("Ingresar el valor en km: "); scanf("%f",&km);
    metros=km*m;
    printf("Es igual a %.2fm",metros);
}
//7. Ingresar dos números desde el teclado y mostrar: la suma, la resta, la multiplicación y la
//división (para esta última suponer divisor distinto de cero).
void Punto7(){



}
