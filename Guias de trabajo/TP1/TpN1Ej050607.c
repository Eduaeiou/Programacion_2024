#include <stdio.h>
#include <stdlib.h>
#define m 1000
void Punto5(); void Punto6(); void Punto7();

int main(){
    
    int opc;

    printf("Enter the exercise number. According to: \n");
    printf("\t5. Given two numbers a and b, exchange them. \n");
    printf("\t6. Change from km to m \n");
    printf("0. Exit");
    printf("Exercise: ");
    scanf("%d",&opc); system("clear");

    switch (opc)
    {
        case 5: Punto5();
            break;
        case 6: Punto6();
            break;
        case 0:
            break;
        default:
            break;
    }

    return 0;
}
//5. Crea un programa que, dados dos valores para a y b, los intercambie.
void Punto5(){

    int a,b,aux;

    printf("Enter a numer for a: "); scanf("%d",&a);
    printf("Enter a numer for b: "); scanf("%d",&b);
    aux=a; a=b; b=aux;
    printf("Now the numbers are: \n");
    printf("\ta=%d \t b=%d\n",a,b);
}
//6. Ingresar por teclado un valor en Km y mostrarlo expresado en metros.
void Punto6(){

    float metros,km;

    printf("Enter a number in km: "); scanf("%f",&km);
    metros=km*m;
    printf("Is iqual to %.2fm",metros);
}
//7. Ingresar dos números desde el teclado y mostrar: la suma, la resta, la multiplicación y la
//división (para esta última suponer divisor distinto de cero).
void Punto7(){



}
