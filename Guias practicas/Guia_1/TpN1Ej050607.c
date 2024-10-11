#include <stdio.h>
#include <stdlib.h>
#define m 1000
#include <stdbool.h>
#include <unistd.h>

void Punto5(); void Punto6(); void Punto7();

int main(){
    
    int opc;
    bool exit = true;

    do{
    printf("Enter the exercise number. According to: \n");
    printf("\t5. Given two numbers a and b, exchange them. \n");
    printf("\t6. Change from km to m \n");
    printf("\t0. Exit\n");
    printf("Exercise: ");
    scanf("%d",&opc); system("clear");

        switch (opc)
    {
        case 5: Punto5(); 
            printf("Press any key to continue... "); //sleep(3); 
            getchar(); exit = false; 
            break;
        case 6: Punto6();
            break;
        case 0: exit = true;
            break;
        default:
            printf("Invalid option. Try again");
            break;
    }
    } while(exit!=true);
    
    return 0;
}
//5. Crea un programa que, dados dos valores para a y b, los intercambie.
void Punto5(){

    int a,b,aux;

    printf("Enter a numer for a: "); scanf("%d",&a);
    printf("Enter a numer for b: "); scanf("%d",&b);
    aux=a; a=b; b=aux;
    printf("Now the numbers are: \ta=%d \t b=%d\n",a,b);

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
